extern "C"
{
    #include "cms_msg.h"
    #include "cms_util.h"
}

#include <cassert>
#include <cstring>
#include <iostream>
#include <cstdlib>   
#include <errno.h>

#ifdef WIN32
#include <winsock2.h>
#include <stdlib.h>
#include <io.h>
#include <time.h>
#else

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h> 
#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/nameser.h>
#include <resolv.h>
#include <net/if.h>

#endif


#if defined(__sparc__) || defined(WIN32)
#define NOSSL
#endif
#define NOSSL

#include "udp.h"
#include "stun.h"

using namespace std;

#include <pthread.h>

extern void *msgHandle;
#define STUND_LOCK_TIMEOUT        (6*MSECS_IN_SEC)
#define READ_MSG_TIMEOUT      500
#define MAX_STRING 256
#include "act_tr69.h"
//UDPConnReq:1 Profile
bool gNATDetected;
char gUDPConnectionRequestAddress[MAX_STRING]; 
char gConnectionRequestUsername[MAX_STRING];
char gConnectionRequestPassword[MAX_STRING];
char gStunUsername[MAX_STRING];
char gStunPassword[MAX_STRING];
char gSTUNServerAddress[MAX_STRING];
int gSTUNServerPort;
static char gUrl[MAX_STRING];
static bool gSTUNEnabled;

static bool bindchange=false;
StunAddress4 gMappingAddress;
Socket gPrimarySocket;
Socket gSecondSocket;
pthread_t tid_event;

static int StunMinimumKeepAlivePeriod=45;
static int StunMaximumKeepAlivePeriod=300;

#define long_sleep  10
#define short_sleep  1


#define aei_nat_test_19     19    //first packet , MyFd1
#define aei_nat_test_18     18    //BINDING CHANGE request
#define aei_nat_test_16     16    //no-nat , send id=21 keepalive, detect if nat happened
#define aei_nat_test_22     22    // 19 --> 12, MyFd2, discover NAT BINDING TIMEOUT - long term
#define aei_nat_test_13     13   // 12 --> 13, MyFd1,  id=12 tiimeout, need to detect use short term
#define aei_nat_test_25     25    //13 ---> 15, MyFd2, discover NAT BINDING TIMEOUT - short term
#define aei_nat_test_14     14  //15 ---> 14, MyFd1,  finish BINDING  TIMETOUT detect , send keepalive msg
#define aei_nat_test_17     17    // 14 ---> 17, MyFd1, send keepalive msg

static void
computeHmac(char* hmac, const char* input, int length, const char* key, int keySize);

static bool 
stunParseAtrAddress( char* body, unsigned int hdrLen,  StunAtrAddress4& result )
{
   if ( hdrLen != 8 )
   {
      clog << "hdrLen wrong for Address" <<endl;
      return false;
   }
   result.pad = *body++;
   result.family = *body++;
   if (result.family == IPv4Family)
   {
      UInt16 nport;
      memcpy(&nport, body, 2); body+=2;
      result.ipv4.port = ntohs(nport);
		
      UInt32 naddr;
      memcpy(&naddr, body, 4); body+=4;
      result.ipv4.addr = ntohl(naddr);
      return true;
   }
   else if (result.family == IPv6Family)
   {
      clog << "ipv6 not supported" << endl;
   }
   else
   {
      clog << "bad address family: " << result.family << endl;
   }
	
   return false;
}

static bool 
stunParseAtrChangeRequest( char* body, unsigned int hdrLen,  StunAtrChangeRequest& result )
{
   if ( hdrLen != 4 )
   {
      clog << "hdr length = " << hdrLen << " expecting " << sizeof(result) << endl;
		
      clog << "Incorrect size for ChangeRequest" << endl;
      return false;
   }
   else
   {
      memcpy(&result.value, body, 4);
      result.value = ntohl(result.value);
      return true;
   }
}

static bool 
stunParseAtrError( char* body, unsigned int hdrLen,  StunAtrError& result )
{
   if ( hdrLen >= sizeof(result) )
   {
      clog << "head on Error too large" << endl;
      return false;
   }
   else
   {
      memcpy(&result.pad, body, 2); body+=2;
      result.pad = ntohs(result.pad);
      result.errorClass = *body++;
      result.number = *body++;
		
      result.sizeReason = hdrLen - 4;
      memcpy(&result.reason, body, result.sizeReason);
      result.reason[result.sizeReason] = 0;
      return true;
   }
}

static bool 
stunParseAtrUnknown( char* body, unsigned int hdrLen,  StunAtrUnknown& result )
{
   if ( hdrLen >= sizeof(result) )
   {
      return false;
   }
   else
   {
      if (hdrLen % 4 != 0) return false;
      result.numAttributes = hdrLen / 4;
      for (int i=0; i<result.numAttributes; i++)
      {
         memcpy(&result.attrType[i], body, 2); body+=2;
         result.attrType[i] = ntohs(result.attrType[i]);
      }
      return true;
   }
}


static bool 
stunParseAtrString( char* body, unsigned int hdrLen,  StunAtrString& result )
{
   if ( hdrLen >= STUN_MAX_STRING )
   {
      clog << "String is too large" << endl;
      return false;
   }
   else
   {
      if (hdrLen % 4 != 0)
      {
         clog << "Bad length string " << hdrLen << endl;
         return false;
      }
		
      result.sizeValue = hdrLen;
      memcpy(&result.value, body, hdrLen);
      result.value[hdrLen] = 0;
      return true;
   }
}


static bool 
stunParseAtrIntegrity( char* body, unsigned int hdrLen,  StunAtrIntegrity& result )
{
   if ( hdrLen != 20)
   {
      clog << "MessageIntegrity must be 20 bytes" << endl;
      return false;
   }
   else
   {
      memcpy(&result.hash, body, hdrLen);
      return true;
   }
}


bool
stunParseMessage( char* buf, unsigned int bufLen, StunMessage& msg, bool verbose)
{
   if (verbose) clog << "Received stun message: " << bufLen << " bytes" << endl;
   memset(&msg, 0, sizeof(msg));
	
   if (sizeof(StunMsgHdr) > bufLen)
   {
      clog << "Bad message" << endl;
      return false;
   }
	
   memcpy(&msg.msgHdr, buf, sizeof(StunMsgHdr));
   msg.msgHdr.msgType = ntohs(msg.msgHdr.msgType);
   msg.msgHdr.msgLength = ntohs(msg.msgHdr.msgLength);
	
   if (msg.msgHdr.msgLength + sizeof(StunMsgHdr) != bufLen)
   {
      clog << "Message header length doesn't match message size: "
           << msg.msgHdr.msgLength << " - " << bufLen << endl;
      return false;
   }
	
   char* body = buf + sizeof(StunMsgHdr);
   unsigned int size = msg.msgHdr.msgLength;
	
   //clog << "bytes after header = " << size << endl;
	
   while ( size > 0 )
   {
      // !jf! should check that there are enough bytes left in the buffer
		
      StunAtrHdr* attr = reinterpret_cast<StunAtrHdr*>(body);
		
      unsigned int attrLen = ntohs(attr->length);
      int atrType = ntohs(attr->type);
		
      //if (verbose) clog << "Found attribute type=" << AttrNames[atrType] << " length=" << attrLen << endl;
      if ( attrLen+4 > size ) 
      {
         clog << "claims attribute is larger than size of message " 
              <<"(attribute type="<<atrType<<")"<< endl;
         return false;
      }
		
      body += 4; // skip the length and type in attribute header
      size -= 4;
		
      switch ( atrType )
      {
         case MappedAddress:
            msg.hasMappedAddress = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.mappedAddress )== false )
            {
               clog << "problem parsing MappedAddress" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "MappedAddress = " << msg.mappedAddress.ipv4 << endl;
            }
					
            break;  

         case ResponseAddress:
            msg.hasResponseAddress = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.responseAddress )== false )
            {
               clog << "problem parsing ResponseAddress" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "ResponseAddress = " << msg.responseAddress.ipv4 << endl;
            }
            break;  
				
         case ChangeRequest:
            msg.hasChangeRequest = true;
            if (stunParseAtrChangeRequest( body, attrLen, msg.changeRequest) == false)
            {
               clog << "problem parsing ChangeRequest" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "ChangeRequest = " << msg.changeRequest.value << endl;
            }
            break;
				
         case SourceAddress:
            msg.hasSourceAddress = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.sourceAddress )== false )
            {
               clog << "problem parsing SourceAddress" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "SourceAddress = " << msg.sourceAddress.ipv4 << endl;
            }
            break;  
				
         case ChangedAddress:
            msg.hasChangedAddress = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.changedAddress )== false )
            {
               clog << "problem parsing ChangedAddress" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "ChangedAddress = " << msg.changedAddress.ipv4 << endl;
            }
            break;  
				
         case Username: 
            msg.hasUsername = true;
            if (stunParseAtrString( body, attrLen, msg.username) == false)
            {
               clog << "problem parsing Username" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "Username = " << msg.username.value << endl;
            }
					
            break;
				
         case Password: 
            msg.hasPassword = true;
            if (stunParseAtrString( body, attrLen, msg.password) == false)
            {
               clog << "problem parsing Password" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "Password = " << msg.password.value << endl;
            }
            break;
				
         case MessageIntegrity:
            msg.hasMessageIntegrity = true;
            if (stunParseAtrIntegrity( body, attrLen, msg.messageIntegrity) == false)
            {
               clog << "problem parsing MessageIntegrity" << endl;
               return false;
            }
            else
            {
               //if (verbose) clog << "MessageIntegrity = " << msg.messageIntegrity.hash << endl;
            }
					
            // read the current HMAC
            // look up the password given the user of given the transaction id 
            // compute the HMAC on the buffer
            // decide if they match or not
            break;
				
         case ErrorCode:
            msg.hasErrorCode = true;
            if (stunParseAtrError(body, attrLen, msg.errorCode) == false)
            {
               clog << "problem parsing ErrorCode" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "ErrorCode = " << int(msg.errorCode.errorClass) 
                                 << " " << int(msg.errorCode.number) 
                                 << " " << msg.errorCode.reason << endl;
            }
					
            break;
				
         case UnknownAttribute:
            msg.hasUnknownAttributes = true;
            if (stunParseAtrUnknown(body, attrLen, msg.unknownAttributes) == false)
            {
               clog << "problem parsing UnknownAttribute" << endl;
               return false;
            }
            break;
				
         case ReflectedFrom:
            msg.hasReflectedFrom = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.reflectedFrom ) == false )
            {
               clog << "problem parsing ReflectedFrom" << endl;
               return false;
            }
            break;  
				
         case XorMappedAddress:
            msg.hasXorMappedAddress = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.xorMappedAddress ) == false )
            {
               clog << "problem parsing XorMappedAddress" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "XorMappedAddress = " << msg.mappedAddress.ipv4 << endl;
            }
            break;  

         case XorOnly:
            msg.xorOnly = true;
            if (verbose) 
            {
               clog << "xorOnly = true" << endl;
            }
            break;  
				
         case ServerName: 
            msg.hasServerName = true;
            if (stunParseAtrString( body, attrLen, msg.serverName) == false)
            {
               clog << "problem parsing ServerName" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "ServerName = " << msg.serverName.value << endl;
            }
            break;
				
         case SecondaryAddress:
            msg.hasSecondaryAddress = true;
            if ( stunParseAtrAddress(  body,  attrLen,  msg.secondaryAddress ) == false )
            {
               clog << "problem parsing secondaryAddress" << endl;
               return false;
            }
            else
            {
               if (verbose) clog << "SecondaryAddress = " << msg.secondaryAddress.ipv4 << endl;
            }
            break;  
					
         default:
            if (verbose) clog << "Unknown attribute: " << atrType << endl;
            if ( atrType <= 0x7FFF ) 
            {
               return false;
            }
      }
		
      body += attrLen;
      size -= attrLen;
   }
    
   return true;
}


static char* 
encode16(char* buf, UInt16 data)
{
   UInt16 ndata = htons(data);
   memcpy(buf, reinterpret_cast<void*>(&ndata), sizeof(UInt16));
   return buf + sizeof(UInt16);
}

static char* 
encode32(char* buf, UInt32 data)
{
   UInt32 ndata = htonl(data);
   memcpy(buf, reinterpret_cast<void*>(&ndata), sizeof(UInt32));
   return buf + sizeof(UInt32);
}


static char* 
encode(char* buf, const char* data, unsigned int length)
{
   memcpy(buf, data, length);
   return buf + length;
}


static char* 
encodeAtrAddress4(char* ptr, UInt16 type, const StunAtrAddress4& atr)
{
   ptr = encode16(ptr, type);
   ptr = encode16(ptr, 8);
   *ptr++ = atr.pad;
   *ptr++ = IPv4Family;
   ptr = encode16(ptr, atr.ipv4.port);
   ptr = encode32(ptr, atr.ipv4.addr);
	
   return ptr;
}

static char* 
encodeAtrChangeRequest(char* ptr, const StunAtrChangeRequest& atr)
{
   ptr = encode16(ptr, ChangeRequest);
   ptr = encode16(ptr, 4);
   ptr = encode32(ptr, atr.value);
   return ptr;
}

static char* 
encodeAtrError(char* ptr, const StunAtrError& atr)
{
   ptr = encode16(ptr, ErrorCode);
   ptr = encode16(ptr, 6 + atr.sizeReason);
   ptr = encode16(ptr, atr.pad);
   *ptr++ = atr.errorClass;
   *ptr++ = atr.number;
   ptr = encode(ptr, atr.reason, atr.sizeReason);
   return ptr;
}


static char* 
encodeAtrUnknown(char* ptr, const StunAtrUnknown& atr)
{
   ptr = encode16(ptr, UnknownAttribute);
   ptr = encode16(ptr, 2+2*atr.numAttributes);
   for (int i=0; i<atr.numAttributes; i++)
   {
      ptr = encode16(ptr, atr.attrType[i]);
   }
   return ptr;
}


static char* 
encodeXorOnly(char* ptr)
{
   ptr = encode16(ptr, XorOnly );
   return ptr;
}


static char* 
encodeAtrString(char* ptr, UInt16 type, const StunAtrString& atr)
{
   assert(atr.sizeValue % 4 == 0);
	
   ptr = encode16(ptr, type);
   ptr = encode16(ptr, atr.sizeValue);
   ptr = encode(ptr, atr.value, atr.sizeValue);
   return ptr;
}

#ifdef AEI_VDSL_STUND
static char* encodeAtrBindchange(char* ptr)
{	
   ptr = encode16(ptr, BindingChange);
   ptr = encode16(ptr, 0);
   return ptr;
}
#endif

static char* 
encodeAtrIntegrity(char* ptr, const StunAtrIntegrity& atr)
{
   ptr = encode16(ptr, MessageIntegrity);
   ptr = encode16(ptr, 20);
   ptr = encode(ptr, atr.hash, sizeof(atr.hash));
   return ptr;
}


unsigned int
stunEncodeMessage( const StunMessage& msg, 
                   char* buf, 
                   unsigned int bufLen, 
                   const StunAtrString& password, 
                   bool verbose)
{
   assert(bufLen >= sizeof(StunMsgHdr));
   char* ptr = buf;
	
   ptr = encode16(ptr, msg.msgHdr.msgType);
   char* lengthp = ptr;
   ptr = encode16(ptr, 0);
   ptr = encode(ptr, reinterpret_cast<const char*>(msg.msgHdr.id.octet), sizeof(msg.msgHdr.id));
	
   if (verbose) clog << "Encoding stun message: " << endl;
   if (msg.hasMappedAddress)
   {
      if (verbose) clog << "Encoding MappedAddress: " << msg.mappedAddress.ipv4 << endl;
      ptr = encodeAtrAddress4 (ptr, MappedAddress, msg.mappedAddress);
   }
   if (msg.hasResponseAddress)
   {
      if (verbose) clog << "Encoding ResponseAddress: " << msg.responseAddress.ipv4 << endl;
      ptr = encodeAtrAddress4(ptr, ResponseAddress, msg.responseAddress);
   }
   if (msg.hasChangeRequest)
   {
      if (verbose) clog << "Encoding ChangeRequest: " << msg.changeRequest.value << endl;
      ptr = encodeAtrChangeRequest(ptr, msg.changeRequest);
   }
   if (msg.hasSourceAddress)
   {
      if (verbose) clog << "Encoding SourceAddress: " << msg.sourceAddress.ipv4 << endl;
      ptr = encodeAtrAddress4(ptr, SourceAddress, msg.sourceAddress);
   }
   if (msg.hasChangedAddress)
   {
      if (verbose) clog << "Encoding ChangedAddress: " << msg.changedAddress.ipv4 << endl;
      ptr = encodeAtrAddress4(ptr, ChangedAddress, msg.changedAddress);
   }
   if (msg.hasUsername)
   {
      if (verbose) clog << "Encoding Username: " << msg.username.value << endl;
      ptr = encodeAtrString(ptr, Username, msg.username);
   }
   if (msg.hasPassword)
   {
      if (verbose) clog << "Encoding Password: " << msg.password.value << endl;
      ptr = encodeAtrString(ptr, Password, msg.password);
   }
   if (msg.hasErrorCode)
   {
      if (verbose) clog << "Encoding ErrorCode: class=" 
			<< int(msg.errorCode.errorClass)  
			<< " number=" << int(msg.errorCode.number) 
			<< " reason=" 
			<< msg.errorCode.reason 
			<< endl;
		
      ptr = encodeAtrError(ptr, msg.errorCode);
   }
   if (msg.hasUnknownAttributes)
   {
      if (verbose) clog << "Encoding UnknownAttribute: ???" << endl;
      ptr = encodeAtrUnknown(ptr, msg.unknownAttributes);
   }
   if (msg.hasReflectedFrom)
   {
      if (verbose) clog << "Encoding ReflectedFrom: " << msg.reflectedFrom.ipv4 << endl;
      ptr = encodeAtrAddress4(ptr, ReflectedFrom, msg.reflectedFrom);
   }
   if (msg.hasXorMappedAddress)
   {
      if (verbose) clog << "Encoding XorMappedAddress: " << msg.xorMappedAddress.ipv4 << endl;
      ptr = encodeAtrAddress4 (ptr, XorMappedAddress, msg.xorMappedAddress);
   }
   if (msg.xorOnly)
   {
      if (verbose) clog << "Encoding xorOnly: " << endl;
      ptr = encodeXorOnly( ptr );
   }
   if (msg.hasServerName)
   {
      if (verbose) clog << "Encoding ServerName: " << msg.serverName.value << endl;
      ptr = encodeAtrString(ptr, ServerName, msg.serverName);
   }
   if (msg.hasSecondaryAddress)
   {
      if (verbose) clog << "Encoding SecondaryAddress: " << msg.secondaryAddress.ipv4 << endl;
      ptr = encodeAtrAddress4 (ptr, SecondaryAddress, msg.secondaryAddress);
   }

#ifdef AEI_VDSL_STUND
	  if(msg.hasConnectionRequestBinding) {
		 if (verbose)
            clog << "Encoding ConnectionRequestBinding: " << msg.ConnectionRequestBinding.value << endl;
		 ptr = encodeAtrString(ptr, ConnectionRequestBinding, msg.ConnectionRequestBinding);
	  }
   
	  if(msg.hasBindingChange){
		 if (verbose) clog << "Encoding BindingChange, value is empty."  << endl;
		 ptr = encodeAtrBindchange(ptr);
	  }
#endif

   if (password.sizeValue > 0)
   {
#ifdef AEI_VDSL_STUND
      /*
          The MESSAGE-INTEGRITY attribute contains an HMAC-SHA1 [13] of the
          STUN message. It can be present in Binding Requests or Binding
          Responses. Since it uses the SHA1 hash, the HMAC will be 20 bytes.
          The text used as input to HMAC is the STUN message, including the
          header, up to and including the attribute preceding the MESSAGEINTEGRITY
          attribute. That text is then padded with zeroes so as to be
          a multiple of 64 bytes. As a result, the MESSAGE-INTEGRITY attribute
          MUST be the last attribute in any STUN message. The key used as
          input to HMAC depends on the context.
          */
      UInt16 len= UInt16(ptr - buf + 24 - sizeof(StunMsgHdr));
      if(verbose)
         clog << "[STUN]Message Length = " << len << endl;
      encode16(lengthp, len);
#endif
      if (verbose) clog << "HMAC with password: " << password.value << endl;
		
      StunAtrIntegrity integrity;
      computeHmac(integrity.hash, buf, int(ptr-buf) , password.value, password.sizeValue);
      ptr = encodeAtrIntegrity(ptr, integrity);
   }
   if (verbose) clog << endl;
	
   encode16(lengthp, UInt16(ptr - buf - sizeof(StunMsgHdr)));
   return int(ptr - buf);
}

#ifdef AEI_VDSL_STUND
int stunRand()
{
   UInt64 time=0;
   struct timeval now;
   gettimeofday( &now , NULL );
   time = now.tv_sec;
   time = time*1000000;
   time += now.tv_usec;
   
   srandom((UInt32)time);
   return random();   
}

#else

int 
stunRand()
{
   // return 32 bits of random stuff
   assert( sizeof(int) == 4 );
   static bool init=false;
   if ( !init )
   { 
      init = true;
		
      UInt64 tick;
		
#if defined(WIN32) 
      volatile unsigned int lowtick=0,hightick=0;
      __asm
         {
            rdtsc 
               mov lowtick, eax
               mov hightick, edx
               }
      tick = hightick;
      tick <<= 32;
      tick |= lowtick;
#elif defined(__GNUC__) && ( defined(__i686__) || defined(__i386__) )
      asm("rdtsc" : "=A" (tick));
#elif defined (__SUNPRO_CC) || defined( __sparc__ )	
      tick = gethrtime();
#elif defined(__MACH__)  || defined(__linux)
      int fd=open("/dev/random",O_RDONLY);
      read(fd,&tick,sizeof(tick));
      closesocket(fd);
#else
#     error Need some way to seed the random number generator 
#endif 
      int seed = int(tick);
#ifdef WIN32
      srand(seed);
#else
      srandom(seed);
#endif
   }
	
#ifdef WIN32
   assert( RAND_MAX == 0x7fff );
   int r1 = rand();
   int r2 = rand();
	
   int ret = (r1<<16) + r2;
	
   return ret;
#else
   return random(); 
#endif
}
#endif //define AEI_VDSL_STUND

/// return a random number to use as a port 
int
stunRandomPort()
{
   int min=0x4000;
   int max=0x7FFF;
	
   int ret = stunRand();
   ret = ret|min;
   ret = ret&max;
	
   return ret;
}


#ifdef NOSSL
static void
computeHmac(char* hmac, const char* input, int length, const char* key, int sizeKey)
{
   strncpy(hmac,"hmac-not-implemented",20);
}
#else
#include <openssl/hmac.h>

static void
computeHmac(char* hmac, const char* input, int length, const char* key, int sizeKey)
{
   unsigned int resultSize=0;
   HMAC(EVP_sha1(), 
        key, sizeKey, 
        reinterpret_cast<const unsigned char*>(input), length, 
        reinterpret_cast<unsigned char*>(hmac), &resultSize);
   assert(resultSize == 20);
}
#endif


static void
toHex(const char* buffer, int bufferSize, char* output) 
{
   static char hexmap[] = "0123456789abcdef";
	
   const char* p = buffer;
   char* r = output;
   for (int i=0; i < bufferSize; i++)
   {
      unsigned char temp = *p++;
		
      int hi = (temp & 0xf0)>>4;
      int low = (temp & 0xf);
		
      *r++ = hexmap[hi];
      *r++ = hexmap[low];
   }
   *r = 0;
}

void
stunCreateUserName(const StunAddress4& source, StunAtrString* username)
{
   UInt64 time = stunGetSystemTimeSecs();
   time -= (time % 20*60);
   //UInt64 hitime = time >> 32;
   UInt64 lotime = time & 0xFFFFFFFF;
	
   char buffer[1024];
   sprintf(buffer,
           "%08x:%08x:%08x:", 
           UInt32(source.addr),
           UInt32(stunRand()),
           UInt32(lotime));
   assert( strlen(buffer) < 1024 );
	
   assert(strlen(buffer) + 41 < STUN_MAX_STRING);
	
   char hmac[20];
   char key[] = "Jason";
   computeHmac(hmac, buffer, strlen(buffer), key, strlen(key) );
   char hmacHex[41];
   toHex(hmac, 20, hmacHex );
   hmacHex[40] =0;
	
   strcat(buffer,hmacHex);
	
   int l = strlen(buffer);
   assert( l+1 < STUN_MAX_STRING );
   assert( l%4 == 0 );
   
   username->sizeValue = l;
   memcpy(username->value,buffer,l);
   username->value[l]=0;
	
   //if (verbose) clog << "computed username=" << username.value << endl;
}

void
stunCreatePassword(const StunAtrString& username, StunAtrString* password)
{
   char hmac[20];
   char key[] = "Fluffy";
   //char buffer[STUN_MAX_STRING];
   computeHmac(hmac, username.value, strlen(username.value), key, strlen(key));
   toHex(hmac, 20, password->value);
   password->sizeValue = 40;
   password->value[40]=0;
	
   //clog << "password=" << password->value << endl;
}


UInt64
stunGetSystemTimeSecs()
{
   UInt64 time=0;
#if defined(WIN32)  
   SYSTEMTIME t;
   // CJ TODO - this probably has bug on wrap around every 24 hours
   GetSystemTime( &t );
   time = (t.wHour*60+t.wMinute)*60+t.wSecond; 
#else
   struct timeval now;
   gettimeofday( &now , NULL );
   //assert( now );
   time = now.tv_sec;
#endif
   return time;
}


ostream& operator<< ( ostream& strm, const UInt128& r )
{
   strm << int(r.octet[0]);
   for ( int i=1; i<16; i++ )
   {
      strm << ':' << int(r.octet[i]);
   }
    
   return strm;
}

ostream& 
operator<<( ostream& strm, const StunAddress4& addr)
{
   UInt32 ip = addr.addr;
   strm << ((int)(ip>>24)&0xFF) << ".";
   strm << ((int)(ip>>16)&0xFF) << ".";
   strm << ((int)(ip>> 8)&0xFF) << ".";
   strm << ((int)(ip>> 0)&0xFF) ;
	
   strm << ":" << addr.port;
	
   return strm;
}


// returns true if it scucceeded
bool 
stunParseHostName( char* peerName,
               UInt32& ip,
               UInt16& portVal,
               UInt16 defaultPort )
{
   in_addr sin_addr;
    
   char host[512];
   strncpy(host,peerName,512);
   host[512-1]='\0';
   char* port = NULL;
	
   int portNum = defaultPort;
	
   // pull out the port part if present.
   char* sep = strchr(host,':');
	
   if ( sep == NULL )
   {
      portNum = defaultPort;
   }
   else
   {
      *sep = '\0';
      port = sep + 1;
      // set port part
		
      char* endPtr=NULL;
		
      portNum = strtol(port,&endPtr,10);
		
      if ( endPtr != NULL )
      {
         if ( *endPtr != '\0' )
         {
            portNum = defaultPort;
         }
      }
   }
    
   if ( portNum < 1024 ) return false;
   if ( portNum >= 0xFFFF ) return false;
	
   // figure out the host part 
   struct hostent* h;
	
#ifdef WIN32
   assert( strlen(host) >= 1 );
   if ( isdigit( host[0] ) )
   {
      // assume it is a ip address 
      unsigned long a = inet_addr(host);
      //cerr << "a=0x" << hex << a << dec << endl;
		
      ip = ntohl( a );
   }
   else
   {
      // assume it is a host name 
      h = gethostbyname( host );
		
      if ( h == NULL )
      {
         int err = getErrno();
         std::cerr << "error was " << err << std::endl;
         assert( err != WSANOTINITIALISED );
			
         ip = ntohl( 0x7F000001L );
			
         return false;
      }
      else
      {
         sin_addr = *(struct in_addr*)h->h_addr;
         ip = ntohl( sin_addr.s_addr );
      }
   }
	
#else
   h = gethostbyname( host );
   if ( h == NULL )
   {
      int err = getErrno();
      std::cerr << "error was " << err << std::endl;
      ip = ntohl( 0x7F000001L );
      return false;
   }
   else
   {
      sin_addr = *(struct in_addr*)h->h_addr;
      ip = ntohl( sin_addr.s_addr );
   }
#endif
	
   portVal = portNum;
	
   return true;
}


bool
stunParseServerName( char* name, StunAddress4& addr)
{
   assert(name);
	
   // TODO - put in DNS SRV stuff.
	
   bool ret = stunParseHostName( name, addr.addr, addr.port, 3478); 
   if ( ret != true ) 
   {
       addr.port=0xFFFF;
   }	
   return ret;
}


static void
stunCreateErrorResponse(StunMessage& response, int cl, int number, const char* msg)
{
   response.msgHdr.msgType = BindErrorResponseMsg;
   response.hasErrorCode = true;
   response.errorCode.errorClass = cl;
   response.errorCode.number = number;
   strcpy(response.errorCode.reason, msg);
}

#if 0
static void
stunCreateSharedSecretErrorResponse(StunMessage& response, int cl, int number, const char* msg)
{
   response.msgHdr.msgType = SharedSecretErrorResponseMsg;
   response.hasErrorCode = true;
   response.errorCode.errorClass = cl;
   response.errorCode.number = number;
   strcpy(response.errorCode.reason, msg);
}
#endif

static void
stunCreateSharedSecretResponse(const StunMessage& request, const StunAddress4& source, StunMessage& response)
{
   response.msgHdr.msgType = SharedSecretResponseMsg;
   response.msgHdr.id = request.msgHdr.id;
	
   response.hasUsername = true;
   stunCreateUserName( source, &response.username);
	
   response.hasPassword = true;
   stunCreatePassword( response.username, &response.password);
}


// This funtion takes a single message sent to a stun server, parses
// and constructs an apropriate repsonse - returns true if message is
// valid
bool
stunServerProcessMsg( char* buf,
                      unsigned int bufLen,
                      StunAddress4& from, 
                      StunAddress4& secondary,
                      StunAddress4& myAddr,
                      StunAddress4& altAddr, 
                      StunMessage* resp,
                      StunAddress4* destination,
                      StunAtrString* hmacPassword,
                      bool* changePort,
                      bool* changeIp,
                      bool verbose)
{
    
   // set up information for default response 
	
   memset( resp, 0 , sizeof(*resp) );
	
   *changeIp = false;
   *changePort = false;
	
   StunMessage req;
   bool ok = stunParseMessage( buf,bufLen, req, verbose);
	
   if (!ok)      // Complete garbage, drop it on the floor
   {
      if (verbose) clog << "Request did not parse" << endl;
      return false;
   }
   if (verbose) clog << "Request parsed ok" << endl;
	
   StunAddress4 mapped = req.mappedAddress.ipv4;
   StunAddress4 respondTo = req.responseAddress.ipv4;
   UInt32 flags = req.changeRequest.value;
	
   switch (req.msgHdr.msgType)
   {
      case SharedSecretRequestMsg:
         if(verbose) clog << "Received SharedSecretRequestMsg on udp. send error 433." << endl;
         // !cj! - should fix so you know if this came over TLS or UDP
         stunCreateSharedSecretResponse(req, from, *resp);
         //stunCreateSharedSecretErrorResponse(*resp, 4, 33, "this request must be over TLS");
         return true;
			
      case BindRequestMsg:
         if (!req.hasMessageIntegrity)
         {
            if (verbose) clog << "BindRequest does not contain MessageIntegrity" << endl;
				
            if (0) // !jf! mustAuthenticate
            {
               if(verbose) clog << "Received BindRequest with no MessageIntegrity. Sending 401." << endl;
               stunCreateErrorResponse(*resp, 4, 1, "Missing MessageIntegrity");
               return true;
            }
         }
         else
         {
            if (!req.hasUsername)
            {
               if (verbose) clog << "No UserName. Send 432." << endl;
               stunCreateErrorResponse(*resp, 4, 32, "No UserName and contains MessageIntegrity");
               return true;
            }
            else
            {
               if (verbose) clog << "Validating username: " << req.username.value << endl;
               // !jf! could retrieve associated password from provisioning here
               if (strcmp(req.username.value, "test") == 0)
               {
                  if (0)
                  {
                     // !jf! if the credentials are stale 
                     stunCreateErrorResponse(*resp, 4, 30, "Stale credentials on BindRequest");
                     return true;
                  }
                  else
                  {
                     if (verbose) clog << "Validating MessageIntegrity" << endl;
                     // need access to shared secret
							
                     unsigned char hmac[20];
#ifndef NOSSL
                     unsigned int hmacSize=20;

                     HMAC(EVP_sha1(), 
                          "1234", 4, 
                          reinterpret_cast<const unsigned char*>(buf), bufLen-20-4, 
                          hmac, &hmacSize);
                     assert(hmacSize == 20);
#endif
							
                     if (memcmp(buf, hmac, 20) != 0)
                     {
                        if (verbose) clog << "MessageIntegrity is bad. Sending " << endl;
                        stunCreateErrorResponse(*resp, 4, 3, "Unknown username. Try test with password 1234");
                        return true;
                     }
							
                     // need to compute this later after message is filled in
                     resp->hasMessageIntegrity = true;
                     assert(req.hasUsername);
                     resp->hasUsername = true;
                     resp->username = req.username; // copy username in
                  }
               }
               else
               {
                  if (verbose) clog << "Invalid username: " << req.username.value << "Send 430." << endl; 
               }
            }
         }
			
         // TODO !jf! should check for unknown attributes here and send 420 listing the
         // unknown attributes. 
			
         if ( respondTo.port == 0 ) respondTo = from;
         if ( mapped.port == 0 ) mapped = from;
				
         *changeIp   = ( flags & ChangeIpFlag )?true:false;
         *changePort = ( flags & ChangePortFlag )?true:false;
			
         if (verbose)
         {
            clog << "Request is valid:" << endl;
            clog << "\t flags=" << flags << endl;
            clog << "\t changeIp=" << *changeIp << endl;
            clog << "\t changePort=" << *changePort << endl;
            clog << "\t from = " << from << endl;
            clog << "\t respond to = " << respondTo << endl;
            clog << "\t mapped = " << mapped << endl;
         }
				
         // form the outgoing message
         resp->msgHdr.msgType = BindResponseMsg;
         for ( int i=0; i<16; i++ )
         {
            resp->msgHdr.id.octet[i] = req.msgHdr.id.octet[i];
         }
		
         if ( req.xorOnly == false )
         {
            resp->hasMappedAddress = true;
            resp->mappedAddress.ipv4.port = mapped.port;
            resp->mappedAddress.ipv4.addr = mapped.addr;
         }

         if (1) // do xorMapped address or not 
         {
            resp->hasXorMappedAddress = true;
            UInt16 id16 = req.msgHdr.id.octet[0]<<8 
               | req.msgHdr.id.octet[1];
            UInt32 id32 = req.msgHdr.id.octet[0]<<24 
               | req.msgHdr.id.octet[1]<<16 
               | req.msgHdr.id.octet[2]<<8 
               | req.msgHdr.id.octet[3];
            resp->xorMappedAddress.ipv4.port = mapped.port^id16;
            resp->xorMappedAddress.ipv4.addr = mapped.addr^id32;
         }
         
         resp->hasSourceAddress = true;
         resp->sourceAddress.ipv4.port = (*changePort) ? altAddr.port : myAddr.port;
         resp->sourceAddress.ipv4.addr = (*changeIp)   ? altAddr.addr : myAddr.addr;
			
         resp->hasChangedAddress = true;
         resp->changedAddress.ipv4.port = altAddr.port;
         resp->changedAddress.ipv4.addr = altAddr.addr;
	
         if ( secondary.port != 0 )
         {
            resp->hasSecondaryAddress = true;
            resp->secondaryAddress.ipv4.port = secondary.port;
            resp->secondaryAddress.ipv4.addr = secondary.addr;
         }
         
         if ( req.hasUsername && req.username.sizeValue > 0 ) 
         {
            // copy username in
            resp->hasUsername = true;
            assert( req.username.sizeValue % 4 == 0 );
            assert( req.username.sizeValue < STUN_MAX_STRING );
            memcpy( resp->username.value, req.username.value, req.username.sizeValue );
            resp->username.sizeValue = req.username.sizeValue;
         }
		
         if (1) // add ServerName 
         {
            resp->hasServerName = true;
            const char serverName[] = "Vovida.org " STUN_VERSION; // must pad to mult of 4
            
            assert( sizeof(serverName) < STUN_MAX_STRING );
            //cerr << "sizeof serverName is "  << sizeof(serverName) << endl;
            assert( sizeof(serverName)%4 == 0 );
            memcpy( resp->serverName.value, serverName, sizeof(serverName));
            resp->serverName.sizeValue = sizeof(serverName);
         }
         
         if ( req.hasMessageIntegrity & req.hasUsername )  
         {
            // this creates the password that will be used in the HMAC when then
            // messages is sent
            stunCreatePassword( req.username, hmacPassword );
         }
				
         if (req.hasUsername && (req.username.sizeValue > 64 ) )
         {
            UInt32 source;
            assert( sizeof(int) == sizeof(UInt32) );
					
            sscanf(req.username.value, "%x", &source);
            resp->hasReflectedFrom = true;
            resp->reflectedFrom.ipv4.port = 0;
            resp->reflectedFrom.ipv4.addr = source;
         }
				
         destination->port = respondTo.port;
         destination->addr = respondTo.addr;
			
         return true;
			
      default:
         if (verbose) clog << "Unknown or unsupported request " << endl;
         return false;
   }
	
   assert(0);
   return false;
}

bool
stunInitServer(StunServerInfo& info, const StunAddress4& myAddr,
               const StunAddress4& altAddr, int startMediaPort, bool verbose )
{
   assert( myAddr.port != 0 );
   assert( altAddr.port!= 0 );
   assert( myAddr.addr  != 0 );
   //assert( altAddr.addr != 0 );
	
   info.myAddr = myAddr;
   info.altAddr = altAddr;
	
   info.myFd = INVALID_SOCKET;
   info.altPortFd = INVALID_SOCKET;
   info.altIpFd = INVALID_SOCKET;
   info.altIpPortFd = INVALID_SOCKET;

   memset(info.relays, 0, sizeof(info.relays));
   if (startMediaPort > 0)
   {
      info.relay = true;

      for (int i=0; i<MAX_MEDIA_RELAYS; ++i)
      {
         StunMediaRelay* relay = &info.relays[i];
         relay->relayPort = startMediaPort+i;
         relay->fd = 0;
         relay->expireTime = 0;
      }
   }
   else
   {
      info.relay = false;
   }
   
   if ((info.myFd = openPort(myAddr.port, myAddr.addr,verbose)) == INVALID_SOCKET)
   {
      clog << "Can't open " << myAddr << endl;
      stunStopServer(info);

      return false;
   }
   //if (verbose) clog << "Opened " << myAddr.addr << ":" << myAddr.port << " --> " << info.myFd << endl;

   if ((info.altPortFd = openPort(altAddr.port,myAddr.addr,verbose)) == INVALID_SOCKET)
   {
      clog << "Can't open " << myAddr << endl;
      stunStopServer(info);
      return false;
   }
   //if (verbose) clog << "Opened " << myAddr.addr << ":" << altAddr.port << " --> " << info.altPortFd << endl;
   
   
   info.altIpFd = INVALID_SOCKET;
   if (  altAddr.addr != 0 )
   {
      if ((info.altIpFd = openPort( myAddr.port, altAddr.addr,verbose)) == INVALID_SOCKET)
      {
         clog << "Can't open " << altAddr << endl;
         stunStopServer(info);
         return false;
      }
      //if (verbose) clog << "Opened " << altAddr.addr << ":" << myAddr.port << " --> " << info.altIpFd << endl;;
   }
   
   info.altIpPortFd = INVALID_SOCKET;
   if (  altAddr.addr != 0 )
   {  if ((info.altIpPortFd = openPort(altAddr.port, altAddr.addr,verbose)) == INVALID_SOCKET)
      {
         clog << "Can't open " << altAddr << endl;
         stunStopServer(info);
         return false;
      }
      //if (verbose) clog << "Opened " << altAddr.addr << ":" << altAddr.port << " --> " << info.altIpPortFd << endl;;
   }
   
   return true;
}

void
stunStopServer(StunServerInfo& info)
{
   if (info.myFd > 0) closesocket(info.myFd);
   if (info.altPortFd > 0) closesocket(info.altPortFd);
   if (info.altIpFd > 0) closesocket(info.altIpFd);
   if (info.altIpPortFd > 0) closesocket(info.altIpPortFd);
   
   if (info.relay)
   {
      for (int i=0; i<MAX_MEDIA_RELAYS; ++i)
      {
         StunMediaRelay* relay = &info.relays[i];
         if (relay->fd)
         {
            closesocket(relay->fd);
            relay->fd = 0;
         }
      }
   }
}


bool
stunServerProcess(StunServerInfo& info, bool verbose)
{
   char msg[STUN_MAX_MESSAGE_SIZE];
   int msgLen = sizeof(msg);
   	
   bool ok = false;
   bool recvAltIp =false;
   bool recvAltPort = false;
	
   fd_set fdSet; 
   Socket maxFd=0;

   FD_ZERO(&fdSet); 
   FD_SET(info.myFd,&fdSet); 
   if ( info.myFd >= maxFd ) maxFd=info.myFd+1;
   FD_SET(info.altPortFd,&fdSet); 
   if ( info.altPortFd >= maxFd ) maxFd=info.altPortFd+1;

   if ( info.altIpFd != INVALID_SOCKET )
   {
      FD_SET(info.altIpFd,&fdSet);
      if (info.altIpFd>=maxFd) maxFd=info.altIpFd+1;
   }
   if ( info.altIpPortFd != INVALID_SOCKET )
   {
      FD_SET(info.altIpPortFd,&fdSet);
      if (info.altIpPortFd>=maxFd) maxFd=info.altIpPortFd+1;
   }

   if (info.relay)
   {
      for (int i=0; i<MAX_MEDIA_RELAYS; ++i)
      {
         StunMediaRelay* relay = &info.relays[i];
         if (relay->fd)
         {
            FD_SET(relay->fd, &fdSet);
            if (relay->fd >= maxFd) 
			{
				maxFd=relay->fd+1;
			}
         }
      }
   }
   
   if ( info.altIpFd != INVALID_SOCKET )
   {
      FD_SET(info.altIpFd,&fdSet);
      if (info.altIpFd>=maxFd) maxFd=info.altIpFd+1;
   }
   if ( info.altIpPortFd != INVALID_SOCKET )
   {
      FD_SET(info.altIpPortFd,&fdSet);
      if (info.altIpPortFd>=maxFd) maxFd=info.altIpPortFd+1;
   }
   
   struct timeval tv;
   tv.tv_sec = 0;
   tv.tv_usec = 1000;
	
   int e = select( maxFd, &fdSet, NULL,NULL, &tv );
   if (e < 0)
   {
      int err = getErrno();
      clog << "Error on select: " << strerror(err) << endl;
   }
   else if (e >= 0)
   {
      StunAddress4 from;

      // do the media relaying
      if (info.relay)
      {
         time_t now = time(0);
         for (int i=0; i<MAX_MEDIA_RELAYS; ++i)
         {
            StunMediaRelay* relay = &info.relays[i];
            if (relay->fd)
            {
               if (FD_ISSET(relay->fd, &fdSet))
               {
                  char msg[MAX_RTP_MSG_SIZE];
                  int msgLen = sizeof(msg);
                  
                  StunAddress4 rtpFrom;
                  ok = getMessage( relay->fd, msg, &msgLen, &rtpFrom.addr, &rtpFrom.port ,verbose);
                  if (ok)
                  {
                     sendMessage(info.myFd, msg, msgLen, relay->destination.addr, relay->destination.port, verbose);
                     relay->expireTime = now + MEDIA_RELAY_TIMEOUT;
                     if ( verbose ) clog << "Relay packet on " 
                                         << relay->fd 
                                         << " from " << rtpFrom 
                                         << " -> " << relay->destination 
                                         << endl;
                  }
               }
               else if (now > relay->expireTime)
               {
                  closesocket(relay->fd);
                  relay->fd = 0;
               }
            }
         }
      }
      
     
      if (FD_ISSET(info.myFd,&fdSet))
      {
         if (verbose) clog << "received on A1:P1" << endl;
         recvAltIp = false;
         recvAltPort = false;
         ok = getMessage( info.myFd, msg, &msgLen, &from.addr, &from.port,verbose );
      }
      else if (FD_ISSET(info.altPortFd, &fdSet))
      {
         if (verbose) clog << "received on A1:P2" << endl;
         recvAltIp = false;
         recvAltPort = true;
         ok = getMessage( info.altPortFd, msg, &msgLen, &from.addr, &from.port,verbose );
      }
      else if ( (info.altIpFd!=INVALID_SOCKET) && FD_ISSET(info.altIpFd,&fdSet))
      {
         if (verbose) clog << "received on A2:P1" << endl;
         recvAltIp = true;
         recvAltPort = false;
         ok = getMessage( info.altIpFd, msg, &msgLen, &from.addr, &from.port ,verbose);
      }
      else if ( (info.altIpPortFd!=INVALID_SOCKET) && FD_ISSET(info.altIpPortFd, &fdSet))
      {
         if (verbose) clog << "received on A2:P2" << endl;
         recvAltIp = true;
         recvAltPort = true;
         ok = getMessage( info.altIpPortFd, msg, &msgLen, &from.addr, &from.port,verbose );
      }
      else
      {
         return true;
      }

      int relayPort = 0;
      if (info.relay)
      {
         for (int i=0; i<MAX_MEDIA_RELAYS; ++i)
         {
            StunMediaRelay* relay = &info.relays[i];
            if (relay->destination.addr == from.addr && 
                relay->destination.port == from.port)
            {
               relayPort = relay->relayPort;
               relay->expireTime = time(0) + MEDIA_RELAY_TIMEOUT;
               break;
            }
         }

         if (relayPort == 0)
         {
            for (int i=0; i<MAX_MEDIA_RELAYS; ++i)
            {
               StunMediaRelay* relay = &info.relays[i];
               if (relay->fd == 0)
               {
                  if ( verbose ) clog << "Open relay port " << relay->relayPort << endl;
                  
                  relay->fd = openPort(relay->relayPort, info.myAddr.addr, verbose);
                  relay->destination.addr = from.addr;
                  relay->destination.port = from.port;
                  relay->expireTime = time(0) + MEDIA_RELAY_TIMEOUT;
                  relayPort = relay->relayPort;
                  break;
               }
            }
         }
      }
         
      if ( !ok ) 
      {
         if ( verbose ) clog << "Get message did not return a valid message" <<endl;
         return true;
      }
		
      if ( verbose ) clog << "Got a request (len=" << msgLen << ") from " << from << endl;
		
      if ( msgLen <= 0 )
      {
         return true;
      }
		
      bool changePort = false;
      bool changeIp = false;
		
      StunMessage resp;
      StunAddress4 dest;
      StunAtrString hmacPassword;  
      hmacPassword.sizeValue = 0;

      StunAddress4 secondary;
      secondary.port = 0;
      secondary.addr = 0;
               
      if (info.relay && relayPort)
      {
         secondary = from;
         
         from.addr = info.myAddr.addr;
         from.port = relayPort;
      }
      
      ok = stunServerProcessMsg( msg, msgLen, from, secondary,
                                 recvAltIp ? info.altAddr : info.myAddr,
                                 recvAltIp ? info.myAddr : info.altAddr, 
                                 &resp,
                                 &dest,
                                 &hmacPassword,
                                 &changePort,
                                 &changeIp,
                                 verbose );
		
      if ( !ok )
      {
         if ( verbose ) clog << "Failed to parse message" << endl;
         return true;
      }
		
      char buf[STUN_MAX_MESSAGE_SIZE];
      int len = sizeof(buf);
      		
      len = stunEncodeMessage( resp, buf, len, hmacPassword,verbose );
		
      if ( dest.addr == 0 )  ok=false;
      if ( dest.port == 0 ) ok=false;
		
      if ( ok )
      {
         assert( dest.addr != 0 );
         assert( dest.port != 0 );
			
         Socket sendFd;
			
         bool sendAltIp   = recvAltIp;   // send on the received IP address 
         bool sendAltPort = recvAltPort; // send on the received port
			
         if ( changeIp )   sendAltIp   = !sendAltIp;   // if need to change IP, then flip logic 
         if ( changePort ) sendAltPort = !sendAltPort; // if need to change port, then flip logic 
			
         if ( !sendAltPort )
         {
            if ( !sendAltIp )
            {
               sendFd = info.myFd;
            }
            else
            {
               sendFd = info.altIpFd;
            }
         }
         else
         {
            if ( !sendAltIp )
            {
               sendFd = info.altPortFd;
            }
            else
            {
               sendFd = info.altIpPortFd;
            }
         }
	
         if ( sendFd != INVALID_SOCKET )
         {
            sendMessage( sendFd, buf, len, dest.addr, dest.port, verbose );
         }
      }
   }
	
   return true;
}

int 
stunFindLocalInterfaces(UInt32* addresses,int maxRet)
{
#if defined(WIN32) || defined(__sparc__)
   return 0;
#else
   struct ifconf ifc;
	
   int s = socket( AF_INET, SOCK_DGRAM, 0 );
   int len = 100 * sizeof(struct ifreq);
	
   char buf[ len ];
	
   ifc.ifc_len = len;
   ifc.ifc_buf = buf;
	
   int e = ioctl(s,SIOCGIFCONF,&ifc);
   char *ptr = buf;
   int tl = ifc.ifc_len;
   int count=0;
	
   while ( (tl > 0) && ( count < maxRet) )
   {
      struct ifreq* ifr = (struct ifreq *)ptr;
		
      int si = sizeof(ifr->ifr_name) + sizeof(struct sockaddr);
      tl -= si;
      ptr += si;
      //char* name = ifr->ifr_ifrn.ifrn_name;
      //cerr << "name = " << name << endl;
		
      struct ifreq ifr2;
      ifr2 = *ifr;
		
      e = ioctl(s,SIOCGIFADDR,&ifr2);
      if ( e == -1 )
      {
         break;
      }
		
      //cerr << "ioctl addr e = " << e << endl;
		
      struct sockaddr a = ifr2.ifr_addr;
      struct sockaddr_in* addr = (struct sockaddr_in*) &a;
		
      UInt32 ai = ntohl( addr->sin_addr.s_addr );
      if (int((ai>>24)&0xFF) != 127)
      {
         addresses[count++] = ai;
      }
		
#if 0
      cerr << "Detected interface "
           << int((ai>>24)&0xFF) << "." 
           << int((ai>>16)&0xFF) << "." 
           << int((ai>> 8)&0xFF) << "." 
           << int((ai    )&0xFF) << endl;
#endif
   }
	
   closesocket(s);
	
   return count;
#endif
}


void
stunBuildReqSimple( StunMessage* msg,
                    const StunAtrString& username,
                    bool changePort, bool changeIp, unsigned int id )
{
   assert( msg );
   memset( msg , 0 , sizeof(*msg) );
	
   msg->msgHdr.msgType = BindRequestMsg;
	
   for ( int i=0; i<16; i=i+4 )
   {
      assert(i+3<16);
      int r = stunRand();
      msg->msgHdr.id.octet[i+0]= r>>0;
      msg->msgHdr.id.octet[i+1]= r>>8;
      msg->msgHdr.id.octet[i+2]= r>>16;
      msg->msgHdr.id.octet[i+3]= r>>24;
   }
	
   if ( id != 0 )
   {
      msg->msgHdr.id.octet[0] = id; 
   }
	
#ifdef AEI_VDSL_STUND
   //send from the primary src port, myFd1
   if(id==aei_nat_test_13 || id==aei_nat_test_14 || id==aei_nat_test_18
   || id==aei_nat_test_19 || id==aei_nat_test_17 || id==aei_nat_test_16)
   {
     msg->hasConnectionRequestBinding = true;
     snprintf(msg->ConnectionRequestBinding.value,sizeof(msg->ConnectionRequestBinding.value),"%s","dslforum.org/TR-111 ");
     msg->ConnectionRequestBinding.sizeValue = 20;
   }
   
   if(id==aei_nat_test_22 || id==aei_nat_test_25){
     msg->hasResponseAddress = true;
     msg->responseAddress.family=IPv4Family;
     msg->responseAddress.ipv4.addr=gMappingAddress.addr;
     msg->responseAddress.ipv4.port=gMappingAddress.port;
     msg->responseAddress.pad=0;
   }
   
   if(id==aei_nat_test_18){
     msg->hasBindingChange = true;
   }
#else
   msg->hasChangeRequest = true;
   msg->changeRequest.value =(changeIp?ChangeIpFlag:0) | 
      (changePort?ChangePortFlag:0);
#endif
	
   if ( username.sizeValue > 0 )
   {
      msg->hasUsername = true;
      msg->username = username;
   }
}


static void 
stunSendTest( Socket myFd, StunAddress4& dest, 
              const StunAtrString& username, const StunAtrString& password, 
              int testNum, bool verbose )
{ 
   assert( dest.addr != 0 );
   assert( dest.port != 0 );
	
   bool changePort=false;
   bool changeIP=false;
   bool discard=false;
	
   switch (testNum)
   {
      case 1:
      case 10:
      case 11:
#ifdef AEI_VDSL_STUND
      case aei_nat_test_19:
      case aei_nat_test_18:
      case aei_nat_test_22:
      case aei_nat_test_13:
      case aei_nat_test_25:
      case aei_nat_test_14:
      case aei_nat_test_17:
      case aei_nat_test_16:
#endif
         break;
      case 2:
         //changePort=true;
         changeIP=true;
         break;
      case 3:
         changePort=true;
         break;
      case 4:
         changeIP=true;
         break;
      case 5:
         discard=true;
         break;
      default:
         cerr << "Test " << testNum <<" is unkown\n";
         assert(0);
   }
	
   StunMessage req;
   memset(&req, 0, sizeof(StunMessage));
	
   stunBuildReqSimple( &req, username, 
                       changePort , changeIP , 
                       testNum );
	
   char buf[STUN_MAX_MESSAGE_SIZE];
   int len = STUN_MAX_MESSAGE_SIZE;
	
   len = stunEncodeMessage( req, buf, len, password,verbose );
	
   if ( verbose )
   {
      clog << "About to send msg of len " << len << " to " << dest << endl;
   }
	
   sendMessage( myFd, buf, len, dest.addr, dest.port, verbose );
	
   // add some delay so the packets don't get sent too quickly 
#ifdef WIN32 // !cj! TODO - should fix this up in windows
		 clock_t now = clock();
		 assert( CLOCKS_PER_SEC == 1000 );
		 while ( clock() <= now+10 ) { };
#else
		 usleep(10*1000);
#endif

}


void 
stunGetUserNameAndPassword(  const StunAddress4& dest, 
                             StunAtrString* username,
                             StunAtrString* password)
{ 
   // !cj! This is totally bogus - need to make TLS connection to dest and get a
   // username and password to use 
   stunCreateUserName(dest, username);
   stunCreatePassword(*username, password);
}


void 
stunTest( StunAddress4& dest, int testNum, bool verbose, StunAddress4* sAddr )
{ 
   assert( dest.addr != 0 );
   assert( dest.port != 0 );
	
   int port = stunRandomPort();
   UInt32 interfaceIp=0;
   if (sAddr)
   {
      interfaceIp = sAddr->addr;
      if ( sAddr->port != 0 )
      {
        port = sAddr->port;
      }
   }
   Socket myFd = openPort(port,interfaceIp,verbose);
	
   StunAtrString username;
   StunAtrString password;
	
   username.sizeValue = 0;
   password.sizeValue = 0;
	
#ifdef USE_TLS
   stunGetUserNameAndPassword( dest, username, password );
#endif
	
   stunSendTest( myFd, dest, username, password, testNum, verbose );
    
   char msg[STUN_MAX_MESSAGE_SIZE];
   int msgLen = STUN_MAX_MESSAGE_SIZE;
	
   StunAddress4 from;
   getMessage( myFd,
               msg,
               &msgLen,
               &from.addr,
               &from.port,verbose );
	
   StunMessage resp;
   memset(&resp, 0, sizeof(StunMessage));
	
   if ( verbose ) clog << "Got a response" << endl;
   bool ok = stunParseMessage( msg,msgLen, resp,verbose );
	
   if ( verbose )
   {
      clog << "\t ok=" << ok << endl;
      clog << "\t id=" << resp.msgHdr.id << endl;
      clog << "\t mappedAddr=" << resp.mappedAddress.ipv4 << endl;
      clog << "\t changedAddr=" << resp.changedAddress.ipv4 << endl;
      clog << endl;
   }
	
   if (sAddr)
   {
      sAddr->port = resp.mappedAddress.ipv4.port;
      sAddr->addr = resp.mappedAddress.ipv4.addr;
   }
}


NatType
stunNatType( StunAddress4& dest, 
             bool verbose,
             bool* preservePort, // if set, is return for if NAT preservers ports or not
             bool* hairpin,  // if set, is the return for if NAT will hairpin packets
             int port, // port to use for the test, 0 to choose random port
             StunAddress4* sAddr // NIC to use 
   )
{ 
   assert( dest.addr != 0 );
   assert( dest.port != 0 );
	
   if ( hairpin ) 
   {
      *hairpin = false;
   }
	
   if ( port == 0 )
   {
      port = stunRandomPort();
   }
   UInt32 interfaceIp=0;
   if (sAddr)
   {
      interfaceIp = sAddr->addr;
   }
   Socket myFd1 = openPort(port,interfaceIp,verbose);
   Socket myFd2 = openPort(port+1,interfaceIp,verbose);

   if ( ( myFd1 == INVALID_SOCKET) || ( myFd2 == INVALID_SOCKET) )
   {
        cerr << "Some problem opening port/interface to send on" << endl;
       return StunTypeFailure; 
   }

   assert( myFd1 != INVALID_SOCKET );
   assert( myFd2 != INVALID_SOCKET );
    
   bool respTestI=false;
   bool isNat=true;
   StunAddress4 testIchangedAddr;
   StunAddress4 testImappedAddr;
   bool respTestI2=false; 
   bool mappedIpSame = true;
   StunAddress4 testI2mappedAddr;
   StunAddress4 testI2dest=dest;
   bool respTestII=false;
   bool respTestIII=false;

   bool respTestHairpin=false;
   bool respTestPreservePort=false;
	
   memset(&testImappedAddr,0,sizeof(testImappedAddr));
	
   StunAtrString username;
   StunAtrString password;
	
   username.sizeValue = 0;
   password.sizeValue = 0;
	
#ifdef USE_TLS 
   stunGetUserNameAndPassword( dest, username, password );
#endif
	
   int count=0;
   while ( count < 7 )
   {
      struct timeval tv;
      fd_set fdSet; 
#ifdef WIN32
      unsigned int fdSetSize;
#else
      int fdSetSize;
#endif
      FD_ZERO(&fdSet); fdSetSize=0;
      FD_SET(myFd1,&fdSet); fdSetSize = (myFd1+1>fdSetSize) ? myFd1+1 : fdSetSize;
      FD_SET(myFd2,&fdSet); fdSetSize = (myFd2+1>fdSetSize) ? myFd2+1 : fdSetSize;
      tv.tv_sec=0;
      tv.tv_usec=150*1000; // 150 ms 
      if ( count == 0 ) tv.tv_usec=0;
		
      int  err = select(fdSetSize, &fdSet, NULL, NULL, &tv);
      int e = getErrno();
      if ( err == SOCKET_ERROR )
      {
         // error occured
         cerr << "Error " << e << " " << strerror(e) << " in select" << endl;
        return StunTypeFailure; 
     }
      else if ( err == 0 )
      {
         // timeout occured 
         count++;
			
         if ( !respTestI ) 
         {
            stunSendTest( myFd1, dest, username, password, 1 ,verbose );
         }         
			
         if ( (!respTestI2) && respTestI ) 
         {
            // check the address to send to if valid 
            if (  ( testI2dest.addr != 0 ) &&
                  ( testI2dest.port != 0 ) )
            {
               stunSendTest( myFd1, testI2dest, username, password, 10  ,verbose);
            }
         }
			
         if ( !respTestII )
         {
            stunSendTest( myFd2, dest, username, password, 2 ,verbose );
         }
			
         if ( !respTestIII )
         {
            stunSendTest( myFd2, dest, username, password, 3 ,verbose );
         }
			
         if ( respTestI && (!respTestHairpin) )
         {
            if (  ( testImappedAddr.addr != 0 ) &&
                  ( testImappedAddr.port != 0 ) )
            {
               stunSendTest( myFd1, testImappedAddr, username, password, 11 ,verbose );
            }
         }
      }
      else
      {
         //if (verbose) clog << "-----------------------------------------" << endl;
         assert( err>0 );
         // data is avialbe on some fd 
			
         for ( int i=0; i<2; i++)
         {
            Socket myFd;
            if ( i==0 ) 
            {
               myFd=myFd1;
            }
            else
            {
               myFd=myFd2;
            }
				
            if ( myFd!=INVALID_SOCKET ) 
            {					
               if ( FD_ISSET(myFd,&fdSet) )
               {
                  char msg[STUN_MAX_MESSAGE_SIZE];
                  int msgLen = sizeof(msg);
                  						
                  StunAddress4 from;
						
                  getMessage( myFd,
                              msg,
                              &msgLen,
                              &from.addr,
                              &from.port,verbose );
						
                  StunMessage resp;
                  memset(&resp, 0, sizeof(StunMessage));
						
                  stunParseMessage( msg,msgLen, resp,verbose );
						
                  if ( verbose )
                  {
                     clog << "Received message of type " << resp.msgHdr.msgType 
                          << "  id=" << (int)(resp.msgHdr.id.octet[0]) << endl;
                  }
						
                  switch( resp.msgHdr.id.octet[0] )
                  {
                     case 1:
                     {
                        if ( !respTestI )
                        {
									
                           testIchangedAddr.addr = resp.changedAddress.ipv4.addr;
                           testIchangedAddr.port = resp.changedAddress.ipv4.port;
                           testImappedAddr.addr = resp.mappedAddress.ipv4.addr;
                           testImappedAddr.port = resp.mappedAddress.ipv4.port;
			
                           respTestPreservePort = ( testImappedAddr.port == port ); 
                           if ( preservePort )
                           {
                              *preservePort = respTestPreservePort;
                           }								
									
                           testI2dest.addr = resp.changedAddress.ipv4.addr;
									
                           if (sAddr)
                           {
                              sAddr->port = testImappedAddr.port;
                              sAddr->addr = testImappedAddr.addr;
                           }
									
                           count = 0;
                        }		
                        respTestI=true;
                     }
                     break;
                     case 2:
                     {  
                        respTestII=true;
                     }
                     break;
                     case 3:
                     {
                        respTestIII=true;
                     }
                     break;
                     case 10:
                     {
                        if ( !respTestI2 )
                        {
                           testI2mappedAddr.addr = resp.mappedAddress.ipv4.addr;
                           testI2mappedAddr.port = resp.mappedAddress.ipv4.port;
								
                           mappedIpSame = false;
                           if ( (testI2mappedAddr.addr  == testImappedAddr.addr ) &&
                                (testI2mappedAddr.port == testImappedAddr.port ))
                           { 
                              mappedIpSame = true;
                           }
								
							
                        }
                        respTestI2=true;
                     }
                     break;
                     case 11:
                     {
							
                        if ( hairpin ) 
                        {
                           *hairpin = true;
                        }
                        respTestHairpin = true;
                     }
                     break;
                  }
               }
            }
         }
      }
   }
	
   // see if we can bind to this address 
   //cerr << "try binding to " << testImappedAddr << endl;
   Socket s = openPort( 0/*use ephemeral*/, testImappedAddr.addr, false );
   if ( s != INVALID_SOCKET )
   {
      closesocket(s);
      isNat = false;
      //cerr << "binding worked" << endl;
   }
   else
   {
      isNat = true;
      //cerr << "binding failed" << endl;
   }
	
   if (verbose)
   {
      clog << "test I = " << respTestI << endl;
      clog << "test II = " << respTestII << endl;
      clog << "test III = " << respTestIII << endl;
      clog << "test I(2) = " << respTestI2 << endl;
      clog << "is nat  = " << isNat <<endl;
      clog << "mapped IP same = " << mappedIpSame << endl;
      clog << "hairpin = " << respTestHairpin << endl;
      clog << "preserver port = " << respTestPreservePort << endl;
   }
	
#if 0
   // implement logic flow chart from draft RFC
   if ( respTestI )
   {
      if ( isNat )
      {
         if (respTestII)
         {
            return StunTypeConeNat;
         }
         else
         {
            if ( mappedIpSame )
            {
               if ( respTestIII )
               {
                  return StunTypeRestrictedNat;
               }
               else
               {
                  return StunTypePortRestrictedNat;
               }
            }
            else
            {
               return StunTypeSymNat;
            }
         }
      }
      else
      {
         if (respTestII)
         {
            return StunTypeOpen;
         }
         else
         {
            return StunTypeSymFirewall;
         }
      }
   }
   else
   {
      return StunTypeBlocked;
   }
#else
   if ( respTestI ) // not blocked 
   {
      if ( isNat )
      {
         if ( mappedIpSame )
         {
            if (respTestII)
            {
               return StunTypeIndependentFilter;
            }
            else
            {
               if ( respTestIII )
               {
                  return StunTypeDependentFilter;
               }
               else
               {
                  return StunTypePortDependedFilter;
               }
            }
         }
         else // mappedIp is not same 
         {
            return StunTypeDependentMapping;
         }
      }
      else  // isNat is false
      {
         if (respTestII)
         {
            return StunTypeOpen;
         }
         else
         {
            return StunTypeFirewall;
         }
      }
   }
   else
   {
      return StunTypeBlocked;
   }
#endif
	
   return StunTypeUnknown;
}

#ifdef AEI_VDSL_STUND
static unsigned int gtimer = 0;
static unsigned int gsendTest=0;
static void *aei_timer_thread(void *arg)
{
   int res;
   struct timeval tv = {0,0};
   
   for (;;) {
      tv.tv_sec = 0;
      tv.tv_usec = 1000*100; //100ms

      res = select(0, NULL, NULL, NULL, &tv);
    
      if (res == -1) 
      {
         continue;
      }
      else if (res == 0)
      {
         //timeout
         if(gtimer == 0){
            continue;
         }

         sleep(gtimer);
         gtimer=0;
      }
   } 
   return NULL;
}


bool aei_isNat(unsigned int ipaddr)
{
   bool isNat=false;
   Socket s = openPort( 0/*use ephemeral*/, ipaddr, false );
   if ( s != INVALID_SOCKET )
   {
      closesocket(s);
      isNat = false;
      //cerr << "binding worked" << endl;
   }
   else
   {
      isNat = true;
      //cerr << "binding failed" << endl;
   }
  
   return isNat;
}

void aei_exit()
{
   if(gPrimarySocket != INVALID_SOCKET) closesocket(gPrimarySocket);

   if(gSecondSocket != INVALID_SOCKET) closesocket(gSecondSocket);

   if(tid_event){
      pthread_cancel(tid_event);
   }

   clog << "[STUN] stunc exit normal." << endl;
}

void aei_stunaddr2str(StunAddress4 src, char* dst)
{
    //char dstip[20];
    UInt32 ip;
    ip = ntohl(src.addr);
    inet_ntop(AF_INET,(void*)&ip, dst, 16);
    clog << "[STUN] stunAddress translate to string, ip: " << dst << endl;
}

#ifdef SUPPORT_CTL
MsgType aei_recvmsg_type(char* msg, int len, bool verbose)
{
   int firstByte;
   if(!msg && len<=0)
   {
      cerr << "[STUN]Some problem happened when receive msg from Server." << endl;
      return MsgTypeUnknown;
   }
   
   //As the first byte ofall STUN messages defined in [21] is either 0 or 1, and the first byte of the UDP
   //Connection Request is always an ASCII encoded alphabetic letter
   firstByte = msg[0];
   if((firstByte == 0 || firstByte == 1)){
      if(verbose) clog << "Msg Type is STUN" << endl;
      return MsgTypeStun;
   }else{
      return MsgTypeUdpConn;
   }
   
   return MsgTypeUnknown;
}


bool aei_auth_udp_connection(char* msg, int len)
{
   char *ts=NULL, *id=NULL,  *un=NULL,  *cn=NULL, *sig=NULL;
   char *split=NULL;
   static char msg_id[128]={""};
   static char timestamp[24]={""};
   char input[512]={""};
   unsigned char hmac[20];
   unsigned int hmaclen;
   char hmacHex[128]={""};
   
   
   //http://10.1.1.1:8080?ts=1120673700&id=1234&un=CPE57689&cn=XTGRWIPC6D3IPXS3
   //&sig=3545F7B5820D76A3DF45A3A509DA8D8C38F13512
   clog << "UDP Connection Request URL:" << msg << endl;

   //parse ts
   ts = strstr(msg,"ts=");
   split = strchr(ts, '&');
   *split = '\0';
   split++;
   ts+=3;
   if(ts){
      clog << "ts = " << ts+3 << endl;
   }
   //parse id
   id = strstr(split,"id=");
   split = strchr(id,'&');
   *split = '\0';
   split++;
   id+=3;
   if(id) clog << "id = " << id << endl;

   //parse un
   un = strstr(split, "un=");
   split = strchr(un,'&');
   *split = '\0';
   split++;
   un+=3;
   if(un) clog << "un = " << un << endl;

   //parse sig
   sig = strstr(split, "sig=");
   sig+=4;
   if(sig) clog << "sig=" << sig << endl;
   
   //distinct from that of the UCR that had been most recently received
   if(strcmp(msg_id, id) ==0){
      clog << "[STUN] UDP CONNECTION MSG ID is old." << endl;
      return false;
   }else{
      memset(msg_id, 0, sizeof(msg_id));
      snprintf(msg_id,sizeof(msg_id), "%s", id);
   }
   
   //greater than the ts value for the UCR that had been most recently received
   if(strcmp(timestamp, ts) >= 0){
      clog << "[STUN] UDP CONNECTION TIMESTAMP is old." << endl;   
      return false;
   }else{
      snprintf(timestamp,sizeof(timestamp),"%s", ts);
   }

#ifdef SUPPORT_CTL
   if(strcmp(gConnectionRequestUsername,un)!=0){
      clog << "[STUN] ConnectionRequestUsername is illegal." << endl;
      return false;
   }
#endif

   snprintf(input,sizeof(input),"%s%s%s%s", ts,id,un,cn);
#ifdef NOSSL 
   //nothing to do 
#else

#ifdef SUPPORT_CTL
   //gConnectionRequestPassword
   if(cmsUtl_strlen(gConnectionRequestPassword) == 0){
      clog << "[STUN]#INFO# ConnectionRequestPassword is NULL, no authentication." << endl;
      return true;
   }else{
      int keylen = strlen(gConnectionRequestPassword);
      HMAC(::EVP_sha1(), (unsigned char*)gConnectionRequestPassword, keylen, 
        (unsigned char*)input, strlen(input), hmac, &hmaclen);
      toHex((const char*)hmac, hmaclen,hmacHex);      
   }
#else
   char * privateK = "1234";
   int  privateKlen = 4;

   HMAC(::EVP_sha1(), (unsigned char*)privateK, privateKlen, (unsigned char*)input, strlen(input), hmac, &hmaclen);
   toHex((const char*)hmac, hmaclen,hmacHex);
#endif

#endif   
   clog << "hmacHex=" << hmacHex << endl;
   clog << "sig    =" << sig  << endl;
   if (strcmp(hmacHex, sig)!= 0)
   {
      clog << "Udp Connection Request authentication failed." << endl;
      return false;
   }

   clog << "Udp Connection Request authentication Succ." << endl;
   return true;
}

static int aei_send2ssk( void )
{
    CmsMsgHeader msg;
    CmsRet ret = CMSRET_SUCCESS;

    memset(&msg, 0, sizeof(CmsMsgHeader));
    clog << "=====>ENTER" << endl;
    msg.src = EID_STUND;
    msg.dst = EID_SSK;
    msg.type = CMS_MSG_STUND_GET_VALUE;
    msg.flags_event = 1;
    msg.wordData = 0;
    msg.dataLength = 0;

    if ((ret = cmsMsg_send(msgHandle, &msg)) != CMSRET_SUCCESS) {
        cerr << "msg send failed, ret=" << ret << endl;
        return 0;
    }

    return 1;
}

static int aei_RecvMsg( void )
{
    CmsMsgHeader *msg;
    CmsRet ret;
    int count = 0, flag = 0;
    StunInfoMsgBody *body = NULL;

    while((ret = cmsMsg_receiveWithTimeout(msgHandle, &msg, READ_MSG_TIMEOUT)) == CMSRET_SUCCESS) {

        switch((UINT32) msg->type) {
            case CMS_MSG_STUND_GET_OVER:
                body = (StunInfoMsgBody *)(msg + 1);
                snprintf(gSTUNServerAddress, MAX_STRING, "%s", body->STUNServerAddr);
                snprintf(gStunUsername, MAX_STRING, "%s", body->StunUsername);
                snprintf(gStunPassword, MAX_STRING, "%s", body->StunPassword);
                snprintf(gConnectionRequestUsername, MAX_STRING, "%s", body->ConnReqUsername);
                snprintf(gConnectionRequestPassword, MAX_STRING, "%s", body->ConnReqPwd);
                snprintf(gUrl, MAX_STRING, "%s", body->url);
                gSTUNServerPort = body->STUNServerPort;
                gSTUNEnabled = body->STUNEnabled;
                flag = 1;
                break;
            default:
                clog << "Default...." << endl;
                break;
        }
        count++;

        if (count == 3) {
           break;
        }
    }

RETURN:
    return flag;
}

void aei_getStunServerParam()
{
   char mms_obj[128] = {0};
   UrlProto urlProto;
   char *urlAddr, *urlPath;
   UINT16 urlPort;

   if (!aei_send2ssk()) {
      cerr << "[STUND] Will exit, because can not send msg to TR69C...." << endl;
      exit(-1);
   } else {
      if (!aei_RecvMsg()) {
         cerr << "[STUND] Will exit, recv msg error...." << endl;
         exit(-1);
      }
   }

   if ( FALSE == gSTUNEnabled) {
      cerr << "[STUND] Will exit, STUN is not enabled...." << endl;
      exit(-1);
   }

   if (!cmsUtl_strlen(gSTUNServerAddress)) {
      if (cmsUtl_parseUrl(gUrl, &urlProto, &urlAddr, &urlPort, &urlPath) != CMSRET_SUCCESS) {
         cerr << "[STUND] Will exit, because can not parse the ACS url ...." << endl;
         exit(-1);
      } else {
         snprintf(gSTUNServerAddress, sizeof(gSTUNServerAddress), "%s", urlAddr);
      }
   }
   sprintf(mms_obj, "%s", "InternetGatewayDevice.ManagementServer");	

   clog << "[STUN] ### " << mms_obj << ".STUNServerAddress: " << gSTUNServerAddress << endl;
   clog << "[STUN] ### " << mms_obj << ".STUNServerPort: " << gSTUNServerPort << endl;
   clog << "[STUN] ### " << mms_obj << ".STUNUsername: " << gStunUsername << endl;
   clog << "[STUN] ### " << mms_obj << ".STUNPassword: " << gStunPassword << endl;
   clog << "[STUN] ### " << mms_obj << ".ConnectionRequestUsername: " << gConnectionRequestUsername << endl;
   clog << "[STUN] ### " << mms_obj << ".ConnectionRequestPassword: " << gConnectionRequestPassword << endl;

}

int aei_tr69SetValue(char *param, char *value)
{
    CmsRet ret;
    int msgsize;
    char *msgBuf;
    CmsMsgHeader *msg;
    StunInfoMsgBody *body;

    msgsize = sizeof(CmsMsgHeader) + sizeof(StunInfoMsgBody);
    msgBuf = (char *)calloc(msgsize, sizeof(char));

    if (msgBuf == NULL)
       return 0;

    msg = (CmsMsgHeader *) msgBuf;
    body = (StunInfoMsgBody *) (msg + 1);

    memset(body, 0, sizeof(StunInfoMsgBody));
    cmsUtl_strcpy(body->Param, param);
    if (!cmsUtl_strcmp(param, "UDPConnectionRequestAddress"))
        cmsUtl_strcpy(body->UDPConnectionRequestAddr, value);
    else if (!cmsUtl_strcmp(param, "STUNServerAddress"))
        cmsUtl_strcpy(body->STUNServerAddr, value);
    else if (!cmsUtl_strcmp(param, "STUNServerPort"))
        body->STUNServerPort = atoi(value);
    else if (!cmsUtl_strcmp(param, "STUNUsername"))
        cmsUtl_strcpy(body->StunUsername, value);
    else if (!cmsUtl_strcmp(param, "STUNPassword"))
        cmsUtl_strcpy(body->StunPassword, value);
    else if (!cmsUtl_strcmp(param, "STUNMaximumKeepAlivePeriod"))
        body->STUNMaximumKeepAlivePeriod = atoi(value);
    else if (!cmsUtl_strcmp(param, "STUNMinimumKeepAlivePeriod"))
        body->STUNMinimumKeepAlivePeriod = atoi(value);
    else if (!cmsUtl_strcmp(param, "NATDetected"))
        body->NATDetected = atoi(value);

    msg->type = CMS_MSG_STUND_SET_VALUE;
    msg->src = EID_STUND;
    msg->dst = EID_SSK;
    msg->flags_event = 1;
    msg->dataLength = sizeof(StunInfoMsgBody);

    if ((ret = cmsMsg_send(msgHandle, msg)) != CMSRET_SUCCESS)
        clog << "Failed to send message CMS_MSG_DHCP_LEASES_UPDATED to ssk, ret = " << ret << endl;
    else
        clog << "Message CMS_MSG_DHCP_LEASES_UPDATED sent to ssk successfully" << endl;

    free(msgBuf);
    return 1;
}

void aei_InformBestNatBindTimeoutValue()
{
    char value[256]={0};
    char err_buf[256]={""};
    
   //StunMinimumKeepAlivePeriod
   sprintf(value, "%d", StunMinimumKeepAlivePeriod);
   if (!aei_tr69SetValue("STUNMinimumKeepAlivePeriod", value)) {
      strcpy(err_buf, ("Set IGD.ManagementServer.StunMinimumKeepAlivePeriod error"));
      goto setErr_stun;
   }

   //StunMinimumKeepAlivePeriod
   sprintf(value, "%d", StunMaximumKeepAlivePeriod);
   if (!aei_tr69SetValue("STUNMaximumKeepAlivePeriod", value)) {
      strcpy(err_buf, ("Set IGD.ManagementServer.STUNMaximumKeepAlivePeriod error"));
      goto setErr_stun;
   }

   return ;
   
setErr_stun:
    clog << "buf error: " << err_buf << endl;    

}

void aei_InformNatDetectedInfo(bool natDetect, StunAddress4 bindAddr)
{
   char t_baddr[20]={""};
   char buf[256]={""};
   char mms_obj[256]={""};
   char err_buf[256]={""};

   sprintf(mms_obj, "%s", "InternetGatewayDevice.ManagementServer");

   //UDPConnectionRequestAddress
   aei_stunaddr2str(bindAddr, t_baddr);
   snprintf(buf, sizeof(buf), "%s:%d", t_baddr, bindAddr.port);
   clog << "[STUN] ### " << mms_obj << ".UDPConnectionRequestAddress: " << buf << endl;

   if (!aei_tr69SetValue("UDPConnectionRequestAddress", buf))
   {
      strcpy(err_buf, ("Set IGD.ManagementServer.UDPConnectionRequestAddress error"));
      goto setErr_stun;
   }

   //NATDetected
   clog << "[STUN] ### " << mms_obj << ".NATDetected: " << buf << endl;
   snprintf(buf,sizeof(buf), "%d", natDetect);
   if (!aei_tr69SetValue("NATDetected", buf))
   {
      strcpy(err_buf, ("Set IGD.ManagementServer.NATDetected error"));
      goto setErr_stun;
   }

   return ;

setErr_stun:
    clog << "buf error: " << err_buf << endl;
}

//inform get an UDP Connection Request
void aei_informUdpConnReq()
{
   char err_buf[256]={0};

   if (!aei_tr69SetValue("NATDetected", "2"))
   {
      strcpy(err_buf, ("Set IGD.ManagementServer.NATDetected error"));
      goto setErr_stun;
   }

   return ;
    
setErr_stun:
   clog << "buf error: " << err_buf << endl;

}

bool aei_stunClientProcessMsg(char* buf, unsigned int bufLen, StunMessage& resp, bool verbose)
{
    if(cmsUtl_strlen(gStunUsername) == 0){
       clog << "[STUN]#INFO# StunUsername is NULL, pass the response." << endl;
       return true;
    }

    if(!resp.hasMessageIntegrity){
       clog << "[STUN]#INFO# response don't have MessageIntegrity." << endl;
       return false;
    }

    if (!resp.hasUsername)
    {
        if (verbose) clog << "[STUN - RESPONSE]No UserName." << endl;
        return false;
    }
    else
    {
        if (verbose) clog << "Validating username: " << resp.username.value << endl;
        // !jf! could retrieve associated password from provisioning here
        if (strcmp(resp.username.value, gStunUsername) == 0)
        {

            if (verbose) clog << "[STUN]#### Client Validating MessageIntegrity" << endl;
            // need access to shared secret

            unsigned char hmac[20];
#ifndef NOSSL
            unsigned int hmacSize=20;

            HMAC(EVP_sha1(), 
            gStunPassword, strlen(gStunPassword), 
            reinterpret_cast<const unsigned char*>(buf), bufLen, 
            hmac, &hmacSize);
            assert(hmacSize == 20);

            char pHmac[50]={""};
            char interHash[50]={""};
            toHex((char*)hmac,hmacSize,pHmac);
            toHex(resp.messageIntegrity.hash, sizeof(resp.messageIntegrity.hash), interHash);
            clog << "hmac:" << pHmac << endl;
            clog << "hash:" << interHash << endl;
#endif


            if(memcmp(hmac,resp.messageIntegrity.hash,20)!=0)
            {
                if (verbose) clog << "MessageIntegrity is bad. Recv. " << endl;
                return false;
            }
       
       }
       else
       {
          if (verbose) clog << "Invalid username: " << resp.username.value << "in response." << endl; 
       }
    }

    return true;
}
#endif

NatType aei_stun4Tr69( bool verbose,
             int port, // port to use for the test, 0 to choose random port
             StunAddress4* sAddr // NIC to use 
   )
{
   StunAddress4 dest;
#ifdef SUPPORT_CTL   
   aei_getStunServerParam();

   if(!cmsUtl_strlen(gSTUNServerAddress) || cmsUtl_strlen(gSTUNServerAddress) == 0){
      cerr << "[STUN]#ERROR# STUNServerAddress is NULL" << endl;
      exit(-1);
   }else{
      stunParseServerName(gSTUNServerAddress, dest);
   }

   if(gSTUNServerPort !=0) {
      dest.port = gSTUNServerPort;
   }else{
      dest.port = STUN_PORT;
   }   
#else
   stunParseServerName("172.16.10.187", dest);
#endif

   if ( port == 0 )
   {
      port = 10000 ; //stunRandomPort();
   }
   UInt32 interfaceIp=0;
   if (sAddr)
   {
      interfaceIp = sAddr->addr;
   }

   Socket myFd1 = openPort(port,interfaceIp,verbose);
   Socket myFd2 = openPort(port+1,interfaceIp,verbose);

   if ( ( myFd1 == INVALID_SOCKET) || ( myFd2 == INVALID_SOCKET) )
   {
      cerr << "[STUN]Some problem opening port/interface to send on" << endl;
      return StunTypeFailure; 
   }

   assert( myFd1 != INVALID_SOCKET );
   assert( myFd2 != INVALID_SOCKET );

   gPrimarySocket = myFd1;
   gSecondSocket = myFd2;

   bool firstime=true;
   StunAddress4 testImappedAddr;
   
   memset(&testImappedAddr,0,sizeof(testImappedAddr));
    
   StunAtrString username;
   StunAtrString password;
    
   username.sizeValue = 0;
   password.sizeValue = 0;

#ifdef SUPPORT_CTL
   //gStunUsername
   if(cmsUtl_strlen(gStunUsername) == 0){
      clog << "[STUN]#INFO# StunUsername is NULL" << endl;
   }else{
      snprintf(username.value,sizeof(username.value), "%s", gStunUsername);
      username.sizeValue= strlen(username.value);

      int i = username.sizeValue % 4;
      if(i != 0){
         username.sizeValue+=i;
         for(;i>0; i--){
            strcat(username.value," ");
         }        
      }

      clog << "[STUN] StunUsername : " << username.value << "####"<< endl;
   }
   
   //gStunPassword
   if(cmsUtl_strlen(gStunPassword) == 0){
      clog << "[STUN]#INFO# StunPassword is NULL" << endl;
   }else{
      snprintf(password.value,sizeof(password.value), "%s", gStunPassword);
      password.sizeValue= strlen(password.value);
   }

   pthread_create(&tid_event, NULL, aei_timer_thread, NULL);
#endif

#ifdef S_DEBUG
   strcpy(username.value,"test");
   username.sizeValue= strlen(username.value);
   strcpy(password.value,"1234");
   password.sizeValue= strlen(password.value);
#endif
    
   int count=0;
   int timeout=0; /*discovery of binding timeout period*/
   int testType = 0;
   
   while (1)
   {
      struct timeval tv;
      fd_set fdSet; 
      int fdSetSize;
      FD_ZERO(&fdSet); fdSetSize=0;
      FD_SET(myFd1,&fdSet); fdSetSize = (myFd1+1>fdSetSize) ? myFd1+1 : fdSetSize;
      FD_SET(myFd2,&fdSet); fdSetSize = (myFd2+1>fdSetSize) ? myFd2+1 : fdSetSize;  

      tv.tv_sec=0;
      tv.tv_usec=150*1000; // 150 ms 
      //if ( count == 0 ) tv.tv_usec=0;
      int  err = select(fdSetSize, &fdSet, NULL, NULL, &tv);
      int e = getErrno();
      if ( err == SOCKET_ERROR )
      {
        // error occured
        cerr << "[STUN] Socket Error " << e << " " << strerror(e) << " in select" << endl;
        
        //maybe local ip have changed.
        sleep(30);
        firstime=true;
        continue;
      }
      else if ( err == 0 )
      {
         if (firstime) 
         {
            if(count !=0){
               sleep(5);
            }
            count++;
            if(count > 5)
            {
               cerr << "[STUN]###### Network unreachable, waiting 30s try again. " << endl;
               sleep(30);
               count=0;
               continue;
            }
            
            testType = aei_nat_test_19;
            stunSendTest( myFd1, dest, username, password, aei_nat_test_19, verbose );
            continue;
         }

         if(gtimer != 0 && gsendTest != 0){
            continue; 
         }

         if(gtimer == 0 && gsendTest != 0){
            if(gsendTest != aei_nat_test_22 && gsendTest != aei_nat_test_25){
               stunSendTest( myFd1, dest, username, password, gsendTest, verbose );
            }else{
               stunSendTest( myFd2, dest, username, password, gsendTest, verbose );
            }
            gsendTest = 0;
            continue;
         }

         //Process BINDCHANGE timeout
         if(testType == aei_nat_test_18 || testType == aei_nat_test_16){
            count++;
            sleep(1);
            if(count > 9){
               firstime=true;
               sleep(30);
               count=0;
               continue;
            }
            
            if(testType == aei_nat_test_18){
               clog << "[STUN]##### Send BindChange Failed, try again. " << endl;
            }else{
               clog << "[STUN]##### No Nat keepalive Failed, try again. " << endl;
            }
            
            stunSendTest( myFd1, dest, username, password, testType ,verbose );
         }

         if( testType == aei_nat_test_22){
            // timeout, from MyFd2, long term detect timeout, change to 12 ---> 13
            //12 --> 13, MyFd1,  id=12 tiimeout, need to detect use short term
            testType = aei_nat_test_13;
            stunSendTest( myFd1, dest, username, password, aei_nat_test_13, verbose );
            timeout= StunMinimumKeepAlivePeriod;
            clog << "[STUN]NAT BINDING TIMEOUT, 22-->13, short term detect from -- MyFd1 ." << endl;
            clog << "[STUN]NAT Set StunMinimumKeepAlivePeriod:" << StunMinimumKeepAlivePeriod << endl;
            continue;
         } 

         if(testType == aei_nat_test_13){
             //check timeout, when send test 13
             cerr << "[STUN]### 13-->13, Network unreachable, waiting 30s try again." << endl;
             sleep(30);
             timeout=0;
             count=0;
             firstime=true;
             continue;
         }
         
         if( testType == aei_nat_test_25){
             
                StunMaximumKeepAlivePeriod = StunMinimumKeepAlivePeriod;
                StunMinimumKeepAlivePeriod = StunMaximumKeepAlivePeriod*3/4;
                timeout = StunMinimumKeepAlivePeriod;
                clog << "[STUN]Stun Maximum Binding TIMEOUT value:" << StunMaximumKeepAlivePeriod << endl;
                clog << "[STUN]Stun Minimum Binding TIMEOUT value:" << StunMinimumKeepAlivePeriod << endl;

#ifdef SUPPORT_CTL                
                //NOFITY ACS
                //update the two parameters with "best"
                //known values as it discovers the correct binding timeout period.
                aei_InformBestNatBindTimeoutValue();
#endif                
                //send keepalive for best know values
                testType = aei_nat_test_14;
                stunSendTest( myFd1, dest, username, password, aei_nat_test_14 ,verbose );
                continue;
         }

         if(testType == aei_nat_test_14 || testType == aei_nat_test_17){
            clog << "[STUN] ### Send 14 or i7 timeout, need to re-detect."  << endl;
            firstime = true;
            timeout = 0;
            count=0;
            continue;
         }

      }
      else
      {
         assert( err>0 );           

         Socket myFd=myFd1;

         if ( myFd!=INVALID_SOCKET ) 
         {                   
           if ( FD_ISSET(myFd,&fdSet) )
           {
              char msg[STUN_MAX_MESSAGE_SIZE];
              int msgLen = sizeof(msg);
                                    
              StunAddress4 from;
              bool recvMsg;      
              recvMsg=getMessage( myFd,
                          msg,
                          &msgLen,
                          &from.addr,
                          &from.port,verbose );
              if(!recvMsg){
                 clog << "[STUN] ####### receive msg failed."  << endl;
                 return StunTypeFailure;
              }

#ifdef SUPPORT_CTL
              int msgType = aei_recvmsg_type(msg, msgLen, verbose);
              if(msgType == MsgTypeUdpConn)
              {
                 bool auth_ok;
                 //authenticate and validate the message
                 auth_ok = aei_auth_udp_connection(msg, msgLen);
                 
                 //trigger the TR69 TCP Connection
                 if(auth_ok) 
                 {
                    aei_informUdpConnReq();
                    clog << "[STUN] ####### Inform UDP Connection Request to ACS."  << endl;
                 } 
                 continue;
              }
#endif
              StunMessage resp;
              memset(&resp, 0, sizeof(StunMessage));

              stunParseMessage( msg,msgLen, resp,verbose );
                    
              if ( verbose )
              {
                 clog << "Received message of type " << resp.msgHdr.msgType 
                      << "  id=" << (int)(resp.msgHdr.id.octet[0]) << endl;
              }

              int type = resp.msgHdr.id.octet[0] ;
              switch( type )
              {
                 //Test I
                 case aei_nat_test_19:
                 case aei_nat_test_13:
                 case aei_nat_test_14:
                 case aei_nat_test_17:
                 case aei_nat_test_18:
                 case aei_nat_test_16:
                 {
                    if (firstime)
                    {
                       testImappedAddr.addr = resp.mappedAddress.ipv4.addr;
                       testImappedAddr.port = resp.mappedAddress.ipv4.port;
                                            
                       gMappingAddress.addr = testImappedAddr.addr;
                       gMappingAddress.port = testImappedAddr.port;
                    }
                    if(type == aei_nat_test_18 || type == aei_nat_test_16){
                       //Get response for  BindingChange
                       bindchange=false; 
                    }
                    
                    //determine if the NAT binding (public IP address and port) has changed
                    if(type!=aei_nat_test_19){
                          if((testImappedAddr.addr == resp.mappedAddress.ipv4.addr) && 
                              (testImappedAddr.port == resp.mappedAddress.ipv4.port)){
                              //do nothing
                              //bindchange=false;
                          }else{
                             testImappedAddr.addr = resp.mappedAddress.ipv4.addr;
                             testImappedAddr.port = resp.mappedAddress.ipv4.port;
                             gMappingAddress.addr = testImappedAddr.addr;
                             gMappingAddress.port = testImappedAddr.port;

                             bindchange=true;
                          }

                          if(verbose) clog << "[STUN]## id " << type << ", bindchange=" << bindchange << "##"<< endl;
                    }
                    
                    bool isNat=aei_isNat(testImappedAddr.addr);
#ifdef SUPPORT_CTL                        
                    /*
                                    *Set the NATDetected parameter in the ManagementServer object to false.
                                    *Set the UDPConnectionRequestAddress such that the Host and Port are the local IP address 
                                    *and port on which the CPE is listening for UDP Connection Request messages.
                                    */ 
                    if(bindchange || firstime)
                    {
                       aei_InformNatDetectedInfo(isNat, testImappedAddr);
                    }
#endif                        
                    if(isNat == false) 
                    { 
                       if(firstime){
                          firstime=false;
                       }

                       if(verbose) clog << "[STUN]################## No NAT ##############" << endl;

                       if(bindchange){
                          //change from nat to no-nat
                          clog << "[STUN]######### Change from Nat ---> No-NAT ######"<< endl;
                          stunSendTest( myFd1, dest, username, password, aei_nat_test_16 ,verbose );
                          count=0;
                          continue;
                       }

                       testType=aei_nat_test_16;
                       gtimer=StunMaximumKeepAlivePeriod;
                       gsendTest= testType;                           
                       if(verbose) clog << "[STUN]## NoNAT Sleep:" << StunMaximumKeepAlivePeriod << ",keepalive."<< endl;
                    }
                    else
                    {
                       /*
                                         *Set the NATDetected parameter in the ManagementServer object to true
                                         *update the UDPConnectionRequestAddress parameter
                                         *"Inform" to the ACS
                                         *Discover the NAT binding timeout
                                         ********************************** 
                                         *Binding Requests from secondary source port (myFd2)
                                         *with RESPONSE-ADDRESS of primary source port
                                       */
                       if(firstime){

                          //it MUST immediately send a Binding Request message from the 
                          //primary source port that includes the BINDING-CHANGE attribute
                          clog << "[STUN]###### Send BindChange Request....." << endl;
                          bindchange = true;
                          stunSendTest( myFd1, dest, username, password, aei_nat_test_18, verbose );
                          firstime = false;
                          count=0;
                          continue;
                       }
                       
                       if(bindchange){
                          //discovery of NAT binding timeout period  again
                          firstime=true;
                          timeout=0;
                          count=0;
                          stunSendTest( myFd1, dest, username, password, aei_nat_test_19, verbose );
                          continue;
                       }
                       
                       if(type == aei_nat_test_18 || type == aei_nat_test_16){
                          testType=aei_nat_test_22;
                          gtimer=long_sleep;
                          gsendTest= testType;  
                          timeout+=long_sleep;
                       }
                       else if(type==aei_nat_test_13){
                          timeout+=1;
                          //sleep(timeout);
                         
                          testType = aei_nat_test_25;
                          gtimer=timeout;
                          gsendTest= testType;
                          if(verbose) clog << "[STUN]from 13 ---> 25 ,Stun sleep value:" << timeout << endl;
                       }else if(type==aei_nat_test_14 || type==aei_nat_test_17){
                          testType=aei_nat_test_17;
                          gtimer=timeout;
                          gsendTest= testType;
                          if(verbose) clog << "[STUN] Sleep:" << timeout << ", send keepalive msg again."<< endl; 
                       }
                    }
                 }
                 break;
                 case aei_nat_test_22:
                 case aei_nat_test_25:
                 {
                    testType = type;
                                            
                    /*the CPE receives Binding Response on the primary source port*/
                    StunMinimumKeepAlivePeriod =timeout;
                    if(type== aei_nat_test_22){
                       timeout+=long_sleep;
                    }else if(type == aei_nat_test_25){
                       timeout+=short_sleep;
                    }

                    gtimer=timeout;
                    gsendTest= testType;
                    if(verbose) clog << "[STUN]from 22(25)-->22(25) Sleep:" << timeout << ", send again."<< endl;
                 }
                 break;
              }
           }
        }
      }
   }
   
   return StunTypeUnknown;
}

#endif

int
stunOpenSocket( StunAddress4& dest, StunAddress4* mapAddr, 
                int port, StunAddress4* srcAddr, 
                bool verbose )
{
   assert( dest.addr != 0 );
   assert( dest.port != 0 );
   assert( mapAddr );
   
   if ( port == 0 )
   {
      port = stunRandomPort();
   }
   unsigned int interfaceIp = 0;
   if ( srcAddr )
   {
      interfaceIp = srcAddr->addr;
   }
   
   Socket myFd = openPort(port,interfaceIp,verbose);
   if (myFd == INVALID_SOCKET)
   {
      return myFd;
   }
   
   char msg[STUN_MAX_MESSAGE_SIZE];
   int msgLen = sizeof(msg);
	
   StunAtrString username;
   StunAtrString password;
	
   username.sizeValue = 0;
   password.sizeValue = 0;
	
#ifdef USE_TLS
   stunGetUserNameAndPassword( dest, username, password );
#endif
	
   stunSendTest(myFd, dest, username, password, 1, 0/*false*/ );
	
   StunAddress4 from;
	
   getMessage( myFd, msg, &msgLen, &from.addr, &from.port,verbose );
	
   StunMessage resp;
   memset(&resp, 0, sizeof(StunMessage));
	
   bool ok = stunParseMessage( msg, msgLen, resp,verbose );
   if (!ok)
   {
      return -1;
   }
	
   StunAddress4 mappedAddr = resp.mappedAddress.ipv4;
   StunAddress4 changedAddr = resp.changedAddress.ipv4;
	
   //clog << "--- stunOpenSocket --- " << endl;
   //clog << "\treq  id=" << req.id << endl;
   //clog << "\tresp id=" << id << endl;
   //clog << "\tmappedAddr=" << mappedAddr << endl;
	
   *mapAddr = mappedAddr;
	
   return myFd;
}


bool
stunOpenSocketPair( StunAddress4& dest, StunAddress4* mapAddr, 
                    int* fd1, int* fd2, 
                    int port, StunAddress4* srcAddr, 
                    bool verbose )
{
   assert( dest.addr!= 0 );
   assert( dest.port != 0 );
   assert( mapAddr );
   
   const int NUM=3;
	
   if ( port == 0 )
   {
      port = stunRandomPort();
   }
	
   *fd1=-1;
   *fd2=-1;
	
   char msg[STUN_MAX_MESSAGE_SIZE];
   int msgLen =sizeof(msg);
	
   StunAddress4 from;
   int fd[NUM];
   int i;
	
   unsigned int interfaceIp = 0;
   if ( srcAddr )
   {
      interfaceIp = srcAddr->addr;
   }

   for( i=0; i<NUM; i++)
   {
      fd[i] = openPort( (port == 0) ? 0 : (port + i), 
                        interfaceIp, verbose);
      if (fd[i] < 0) 
      {
         while (i > 0)
         {
            closesocket(fd[--i]);
         }
         return false;
      }
   }
	
   StunAtrString username;
   StunAtrString password;
	
   username.sizeValue = 0;
   password.sizeValue = 0;
	
#ifdef USE_TLS
   stunGetUserNameAndPassword( dest, username, password );
#endif
	
   for( i=0; i<NUM; i++)
   {
      stunSendTest(fd[i], dest, username, password, 1/*testNum*/, verbose );
   }
	
   StunAddress4 mappedAddr[NUM];
   for( i=0; i<NUM; i++)
   {
      msgLen = sizeof(msg)/sizeof(*msg);
      getMessage( fd[i],
                  msg,
                  &msgLen,
                  &from.addr,
                  &from.port ,verbose);
		
      StunMessage resp;
      memset(&resp, 0, sizeof(StunMessage));
		
      bool ok = stunParseMessage( msg, msgLen, resp, verbose );
      if (!ok) 
      {
         return false;
      }
		
      mappedAddr[i] = resp.mappedAddress.ipv4;
      StunAddress4 changedAddr = resp.changedAddress.ipv4;
   }
	
   if (verbose)
   {               
      clog << "--- stunOpenSocketPair --- " << endl;
      for( i=0; i<NUM; i++)
      {
         clog << "\t mappedAddr=" << mappedAddr[i] << endl;
      }
   }
	
   if ( mappedAddr[0].port %2 == 0 )
   {
      if (  mappedAddr[0].port+1 ==  mappedAddr[1].port )
      {
         *mapAddr = mappedAddr[0];
         *fd1 = fd[0];
         *fd2 = fd[1];
         closesocket( fd[2] );
         return true;
      }
   }
   else
   {
      if (( mappedAddr[1].port %2 == 0 )
          && (  mappedAddr[1].port+1 ==  mappedAddr[2].port ))
      {
         *mapAddr = mappedAddr[1];
         *fd1 = fd[1];
         *fd2 = fd[2];
         closesocket( fd[0] );
         return true;
      }
   }

   // something failed, close all and return error
   for( i=0; i<NUM; i++)
   {
      closesocket( fd[i] );
   }
	
   return false;
}
