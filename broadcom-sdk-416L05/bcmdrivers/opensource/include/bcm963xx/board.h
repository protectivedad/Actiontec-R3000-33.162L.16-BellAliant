/*
<:copyright-BRCM:2002:GPL/GPL:standard

   Copyright (c) 2002 Broadcom 
   All Rights Reserved

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation (the "GPL").

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.


A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

:>
*/
/***********************************************************************/
/*                                                                     */
/*   MODULE:  board.h                                                  */
/*   PURPOSE: Board specific information.  This module should include  */
/*            all base device addresses and board specific macros.     */
/*                                                                     */
/***********************************************************************/
#ifndef _BOARD_H
#define _BOARD_H

#include "../../../../shared/opensource/include/bcm963xx/bcm_hwdefs.h"
#include "../../../../shared/opensource/include/bcm963xx/boardparms.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BOARD_H_API_VER increases when other modules (such as PHY) depend on */
/* a new function in the board driver or in boardparms.h                */

#define BOARD_H_API_VER 10

/*****************************************************************************/
/*          board ioctl calls for flash, led and some other utilities        */
/*****************************************************************************/
/* Defines. for board driver */
#define BOARD_IOCTL_MAGIC       'B'
#define BOARD_DRV_MAJOR          206

/** Device filename of ioctl device. */
#define BOARD_DEVICE_NAME  "/dev/brcmboard"

#define BOARD_IOCTL_FLASH_WRITE                 _IOWR(BOARD_IOCTL_MAGIC, 0, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_FLASH_READ                  _IOWR(BOARD_IOCTL_MAGIC, 1, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_DUMP_ADDR                   _IOWR(BOARD_IOCTL_MAGIC, 2, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_MEMORY                  _IOWR(BOARD_IOCTL_MAGIC, 3, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_MIPS_SOFT_RESET             _IOWR(BOARD_IOCTL_MAGIC, 4, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_LED_CTRL                    _IOWR(BOARD_IOCTL_MAGIC, 5, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_PSI_SIZE                _IOWR(BOARD_IOCTL_MAGIC, 6, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_SDRAM_SIZE              _IOWR(BOARD_IOCTL_MAGIC, 7, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_ID                      _IOWR(BOARD_IOCTL_MAGIC, 8, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_CHIP_ID                 _IOWR(BOARD_IOCTL_MAGIC, 9, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_CHIP_REV                _IOWR(BOARD_IOCTL_MAGIC, 10, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_CFE_VER                 _IOWR(BOARD_IOCTL_MAGIC, 11, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_BASE_MAC_ADDRESS        _IOWR(BOARD_IOCTL_MAGIC, 12, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_MAC_ADDRESS             _IOWR(BOARD_IOCTL_MAGIC, 13, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_RELEASE_MAC_ADDRESS         _IOWR(BOARD_IOCTL_MAGIC, 14, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_NUM_ENET_MACS           _IOWR(BOARD_IOCTL_MAGIC, 15, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_NUM_ENET_PORTS          _IOWR(BOARD_IOCTL_MAGIC, 16, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_MONITOR_FD              _IOWR(BOARD_IOCTL_MAGIC, 17, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_WAKEUP_MONITOR_TASK         _IOWR(BOARD_IOCTL_MAGIC, 18, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_TRIGGER_EVENT           _IOWR(BOARD_IOCTL_MAGIC, 19, BOARD_IOCTL_PARMS)        
#define BOARD_IOCTL_GET_TRIGGER_EVENT           _IOWR(BOARD_IOCTL_MAGIC, 20, BOARD_IOCTL_PARMS)        
#define BOARD_IOCTL_UNSET_TRIGGER_EVENT         _IOWR(BOARD_IOCTL_MAGIC, 21, BOARD_IOCTL_PARMS) 
#define BOARD_IOCTL_GET_WLAN_ANT_INUSE          _IOWR(BOARD_IOCTL_MAGIC, 22, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_SES_LED                 _IOWR(BOARD_IOCTL_MAGIC, 23, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_CS_PAR                  _IOWR(BOARD_IOCTL_MAGIC, 25, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_GPIO                    _IOWR(BOARD_IOCTL_MAGIC, 26, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_FLASH_LIST                  _IOWR(BOARD_IOCTL_MAGIC, 27, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_BACKUP_PSI_SIZE         _IOWR(BOARD_IOCTL_MAGIC, 28, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_SYSLOG_SIZE             _IOWR(BOARD_IOCTL_MAGIC, 29, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_SHUTDOWN_MODE           _IOWR(BOARD_IOCTL_MAGIC, 30, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_STANDBY_TIMER           _IOWR(BOARD_IOCTL_MAGIC, 31, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_BOOT_IMAGE_OPERATION        _IOWR(BOARD_IOCTL_MAGIC, 32, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_TIMEMS                  _IOWR(BOARD_IOCTL_MAGIC, 33, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_GPON_OPTICS_TYPE        _IOWR(BOARD_IOCTL_MAGIC, 34, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_DEFAULT_OPTICAL_PARAMS  _IOWR(BOARD_IOCTL_MAGIC, 35, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_ALLOC_MAC_ADDRESSES         _IOWR(BOARD_IOCTL_MAGIC, 36, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_RELEASE_MAC_ADDRESSES       _IOWR(BOARD_IOCTL_MAGIC, 37, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SPI_SLAVE_INIT              _IOWR(BOARD_IOCTL_MAGIC, 38, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SPI_SLAVE_READ              _IOWR(BOARD_IOCTL_MAGIC, 39, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SPI_SLAVE_WRITE             _IOWR(BOARD_IOCTL_MAGIC, 40, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_NUM_FE_PORTS            _IOWR(BOARD_IOCTL_MAGIC, 41, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_NUM_GE_PORTS            _IOWR(BOARD_IOCTL_MAGIC, 42, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_NUM_VOIP_PORTS          _IOWR(BOARD_IOCTL_MAGIC, 43, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_SWITCH_PORT_MAP         _IOWR(BOARD_IOCTL_MAGIC, 44, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_PORT_MAC_TYPE           _IOWR(BOARD_IOCTL_MAGIC, 45, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_EPON_GPIOS              _IOWR(BOARD_IOCTL_MAGIC, 46, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SPI_SLAVE_SET_BITS          _IOWR(BOARD_IOCTL_MAGIC, 47, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SPI_SLAVE_CLEAR_BITS        _IOWR(BOARD_IOCTL_MAGIC, 48, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SPI_SLAVE_WRITE_BUF         _IOWR(BOARD_IOCTL_MAGIC, 49, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_GPIOVERLAYS             _IOWR(BOARD_IOCTL_MAGIC, 50, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_BATTERY_ENABLE          _IOWR(BOARD_IOCTL_MAGIC, 51, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_FTTDP_DSP_BOOTER            _IOWR(BOARD_IOCTL_MAGIC, 52, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_MEM_ACCESS                  _IOWR(BOARD_IOCTL_MAGIC, 53, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SET_DYING_GASP_INTERRUPT    _IOWR(BOARD_IOCTL_MAGIC, 54, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_BTRM_BOOT               _IOWR(BOARD_IOCTL_MAGIC, 55, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_BOOT_SECURE             _IOWR(BOARD_IOCTL_MAGIC, 56, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_SATA_TEST                   _IOWR(BOARD_IOCTL_MAGIC, 57, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_BT_GPIO                     _IOWR(BOARD_IOCTL_MAGIC, 58, BOARD_IOCTL_PARMS)
#define BOARD_IOCTL_GET_SEQUENCE_NUMBER         _IOWR(BOARD_IOCTL_MAGIC, 59, BOARD_IOCTL_PARMS)
#if defined(ZYXEL) && (ZYXEL==1)
#define BOARD_IOCTL_GET_GPIO              		_IOWR(BOARD_IOCTL_MAGIC, 60, BOARD_IOCTL_PARMS)
#if defined(ZYXEL_EXTERNAL_DECT) && (ZYXEL_EXTERNAL_DECT == 1)
#define BOARD_IOCTL_SET_DECT_RESET				_IOWR(BOARD_IOCTL_MAGIC, 61, BOARD_IOCTL_PARMS)
#endif
#if defined(ZYXEL_WIFI_LED_PATTERN) && (ZYXEL_WIFI_LED_PATTERN ==1)
#define BOARD_IOCTL_SET_WIRELESS_SELECT			_IOWR(BOARD_IOCTL_MAGIC, 62, BOARD_IOCTL_PARMS)
#endif
#define BOARD_IOCTL_ERASE_PARTITION				_IOWR(BOARD_IOCTL_MAGIC, 63, BOARD_IOCTL_PARMS)
#endif
#define BOARD_IOCTL_GET_ZYFWINFO				_IOWR(BOARD_IOCTL_MAGIC, 64, BOARD_IOCTL_PARMS)
# define BOARD_IOCTL_BT_GPIO_RESET 1
# define BOARD_IOCTL_BT_GPIO_WAKE 2

// for the action in BOARD_IOCTL_PARMS for flash operation
typedef enum 
{
    PERSISTENT,
    NVRAM,
    BCM_IMAGE_CFE,
    BCM_IMAGE_FS,
    BCM_IMAGE_KERNEL,
    BCM_IMAGE_WHOLE,
    SCRATCH_PAD,
    FLASH_SIZE,
    SET_CS_PARAM,
    BACKUP_PSI,
    SYSLOG
} BOARD_IOCTL_ACTION;
    
typedef enum
{
    ERASE_PAR_DATA,
    ERASE_PAR_ROMD
} BOARD_IOCTL_ACTION_ERASE_PARTITION;

typedef struct boardIoctParms
{
    char *string;
    char *buf;
    int strLen;
    int offset;
    BOARD_IOCTL_ACTION  action;        /* flash read/write: nvram, persistent, bcm image */
    int result;
} BOARD_IOCTL_PARMS;

#define BOARD_MEMACCESS_IOCTL_OP_READ  0
#define BOARD_MEMACCESS_IOCTL_OP_WRITE  1
#define BOARD_MEMACCESS_IOCTL_OP_FILL  2
#define BOARD_MEMACCESS_IOCTL_SPACE_REG  0
#define BOARD_MEMACCESS_IOCTL_SPACE_KERN  1
#define BOARD_MEMACCESS_IOCTL_SPACE_MEM  2

typedef struct boardMemaccessIoctlParms
{
    int op;
    int space;
    void *address;
    int size; // 1, 2, or 4
    int count; // number of items
    char *buf;
} BOARD_MEMACCESS_IOCTL_PARMS;

//DGASP defines
typedef enum
{   
    DG_ENABLE = 0,
    DG_ENABLE_FORCE,            //Enable DG, overriding any checks which are preventing the enable
    DG_DISABLE,                             
    DG_DISABLE_PREVENT_ENABLE,  //Disable DG, DG can then only be enabled via DG_ENABLE_FORCE
} DGASP_ENABLE_OPTS;

// LED defines 
typedef enum
{   
    kLedAdsl,
    kLedSecAdsl,
    kLedWanData,
    kLedSes,
    kLedVoip,
    kLedVoip1,
    kLedVoip2,
    kLedPots,
    kLedDect,
    kLedGpon,
    kLedMoCA,
    kLedEth0Duplex,
    kLedEth0Spd100,
    kLedEth0Spd1000,
    kLedEth1Duplex,
    kLedEth1Spd100,
    kLedEth1Spd1000,
#if defined(CONFIG_BCM96838) || defined(CONFIG_BCM96848)
    kLedOpticalLink,
    kLedUSB,
    kLedSim,
    kLedSimITMS,
    kLedEpon,
#endif
//20130822, TimLiu add ZyXEL customized LED.
#if defined(ZYXEL) && (ZYXEL==1)
    kLedSes2,
    kLedPhone1MWI,
    kLedPhone2MWI,
    kLedVoip1Msg,
    kLedVoip2Msg,
    //Michael.20151207.002.B: Add to support the Red Fail VoIP Phone LED.
    kLedVoip1Fail,
    kLedVoip2Fail,
    //Michael.20151207.002.E: Add.
    kLedUSB0,
    kLedUSB1,
    kLedInternetData,
    kLedVdsl,
    kLedSecVdsl,
    kLedWLanWps,
    kLedPowerOn,
    kLedPostFail,
#if defined(ZYXEL_FW_UPGRADE_POWER_LED_BLINK)
    kLedFwUpgrade,
#endif
#if defined(ZYPRJ_VMG8948)
	kLedGuestG,
	kLedGuestO,
#endif
#if defined(ZYXEL_SUPPORT_3G_LED_GREEN_AND_RED)
	kLedInternetFail,
#endif
#if defined(ZYXEL_WPS_SPOTLIGHT)
	kLedWpsSpotlight,
#endif
#if 1 //power management
	kLedAll,
#endif
#endif
    kLedEnd                             // NOTE: Insert the new led name before this one.
} BOARD_LED_NAME;

typedef enum
{
    kLedStateOff,                        /* turn led off */
    kLedStateOn,                         /* turn led on */
    ALLLedStateOn,
    ALLLedStateOff,
    kLedStateFail,                       /* turn led on red */
    kLedStateSlowBlinkContinues,         /* slow blink continues at 2HZ interval */
    kLedStateFastBlinkContinues,         /* fast blink continues at 4HZ interval */
    kLedStateUserWpsInProgress,          /* 200ms on, 100ms off */
    kLedStateUserWpsError,               /* 100ms on, 100ms off */
    kLedStateUserWpsSessionOverLap       /* 100ms on, 100ms off, 5 times, off for 500ms */                     
} BOARD_LED_STATE;

typedef void (*HANDLE_LED_FUNC)(BOARD_LED_STATE ledState);

typedef enum
{
    kGpioInactive,
    kGpioActive
} GPIO_STATE_t;

// FLASH_ADDR_INFO is now defined in flash_common.h
#include "../../../../shared/opensource/include/bcm963xx/flash_common.h"

typedef struct cs_config_pars_tag
{
  int   mode;
  int   base;
  int   size;
  int   wait_state;
  int   setup_time;
  int   hold_time;
} cs_config_pars_t;

typedef enum
{
    MAC_ADDRESS_OP_GET=0,
    MAC_ADDRESS_OP_RELEASE,
    MAC_ADDRESS_OP_MAX
} MAC_ADDRESS_OPERATION;

typedef enum
{
	USB_HOST_FUNC,
	USB_DEVICE_FUNC,
	USB_ALL_FUNC
} USB_FUNCTION;


typedef void (* kerSysMacAddressNotifyHook_t)(unsigned char *pucaMacAddr, MAC_ADDRESS_OPERATION op);

#define UBUS_BASE_FREQUENCY_IN_MHZ  160

#define IF_NAME_ETH    "eth"
#define IF_NAME_USB    "usb"
#define IF_NAME_WLAN   "wl"
#define IF_NAME_MOCA   "moca"
#define IF_NAME_ATM    "atm"
#define IF_NAME_PTM    "ptm"
#define IF_NAME_GPON   "gpon"
#define IF_NAME_EPON   "epon"
#define IF_NAME_VEIP    "veip"

#define MAC_ADDRESS_ANY         (unsigned long) -1

/* A unique mac id is required for a WAN interface to request for a MAC address.
 * The 32bit mac id is formated as follows:
 *     bit 28-31: MAC Address IF type (MAC_ADDRESS_*)
 *     bit 20-27: the unit number. 0 for atm0, 1 for atm1, ...
 *     bit 12-19: the connection id which starts from 1.
 *     bit 0-11:  not used. should be zero.
 */
#define MAC_ADDRESS_PLC         0x10000000
#define MAC_ADDRESS_EPONONU     0x20000000
#define MAC_ADDRESS_EPON        0x40000000
#define MAC_ADDRESS_GPON        0x80000000
#define MAC_ADDRESS_1905        0x90000000
#define MAC_ADDRESS_ETH         0xA0000000
#define MAC_ADDRESS_USB         0xB0000000
#define MAC_ADDRESS_WLAN        0xC0000000
#define MAC_ADDRESS_MOCA        0xD0000000
#define MAC_ADDRESS_ATM         0xE0000000
#define MAC_ADDRESS_PTM         0xF0000000

#define UNUSED_PARAM(a)        (a = a)

/*****************************************************************************/
/*          Function Prototypes                                              */
/*****************************************************************************/
#if !defined(__ASM_ASM_H)
void dumpaddr( unsigned char *pAddr, int nLen );

extern void kerSysEarlyFlashInit( void );
extern int kerSysGetChipId( void );
char * kerSysGetChipName( char *buf, int len);
extern int kerSysGetDslPhyEnable( void );
extern void kerSysFlashInit( void );
extern void kerSysFlashAddrInfoGet(PFLASH_ADDR_INFO pflash_addr_info);
extern int kerSysCfeVersionGet(char *string, int stringLength);

extern int kerSysNvRamSet(const char *string, int strLen, int offset);
extern void kerSysNvRamGet(char *string, int strLen, int offset);
extern void kerSysNvRamLoad(void * mtd_ptr);
extern void kerSysNvRamGetBootline(char *bootline);
extern void kerSysNvRamGetBootlineLocked(char *bootline);
extern void kerSysNvRamGetBoardId(char *boardId);
extern void kerSysNvRamGetBoardIdLocked(char *boardId);
extern void kerSysNvRamGetBaseMacAddr(unsigned char *baseMacAddr);
extern unsigned long kerSysNvRamGetVersion(void);

extern void kerSysDisableDyingGaspInterrupt( void );
extern void kerSysEnableDyingGaspInterrupt( void );

extern int kerSysFsFileSet(const char *filename, char *buf, int len);
extern int kerSysPersistentGet(char *string, int strLen, int offset);
extern int kerSysPersistentSet(char *string, int strLen, int offset);
extern int kerSysBackupPsiGet(char *string, int strLen, int offset);
extern int kerSysBackupPsiSet(char *string, int strLen, int offset);
extern int kerSysSyslogGet(char *string, int strLen, int offset);
extern int kerSysSyslogSet(char *string, int strLen, int offset);
extern int kerSysScratchPadList(char *tokBuf, int tokLen);
extern int kerSysScratchPadGet(char *tokName, char *tokBuf, int tokLen);
extern int kerSysScratchPadSet(char *tokName, char *tokBuf, int tokLen);
extern int kerSysScratchPadClearAll(void);
extern int kerSysBcmImageSet( int flash_start_addr, char *string, int size,
    int should_yield);
extern int kerSysBcmNandImageSet( char *rootfs_part, char *string, int img_size,
    int should_yield );
extern int kerSysGetSequenceNumber(int imageNumber);
extern int kerSysSetBootImageStateSeq( int state, int seq1, int seq2 );
extern int kerSysSetBootImageState( int state );
extern int kerSysGetBootImageState( void );
extern int kerSysSetOpticalPowerValues(unsigned short rxReading, unsigned short rxOffset, 
    unsigned short txReading);
extern int kerSysGetOpticalPowerValues(unsigned short *prxReading, unsigned short *prxOffset, 
    unsigned short *ptxReading);
extern int kerSysBlParmsGetInt( char *name, int *pvalue );
extern int kerSysBlParmsGetStr( char *name, char *pvalue, int size );
extern unsigned long kerSysGetMacAddressType( unsigned char *ifName );
#if defined(ZCFG_USED) && defined(FIX_WAN_MAC)
extern int kerSysGetMacAddressByIndex( unsigned char *pucaMacAddr, unsigned int index );
#endif
extern int kerSysMacAddressNotifyBind(kerSysMacAddressNotifyHook_t hook);
extern int kerSysGetMacAddress( unsigned char *pucaAddr, unsigned long ulId );
extern int kerSysReleaseMacAddress( unsigned char *pucaAddr );
extern void kerSysGetGponSerialNumber( unsigned char *pGponSerialNumber);
extern void kerSysGetGponPassword( unsigned char *pGponPassword);
extern int kerSysGetSdramSize( void );
extern void kerSysGetBootline(char *string, int strLen);
extern void kerSysSetBootline(char *string, int strLen);
extern void kerSysMipsSoftReset(void);
extern void kerSysLedCtrl(BOARD_LED_NAME, BOARD_LED_STATE);
extern int kerSysFlashSizeGet(void);
extern int kerSysMemoryMappedFlashSizeGet(void);
extern unsigned long kerSysReadFromFlash( void *toaddr, unsigned long fromaddr, unsigned long len );
extern int kerSysEraseFlash(unsigned long eraseaddr, unsigned long len);
extern int kerSysWriteToFlash( unsigned long toaddr, void * fromaddr, unsigned long len);
extern void kerSysRegisterDyingGaspHandler(char *devname, void *cbfn, void *context);
extern void kerSysDeregisterDyingGaspHandler(char *devname);
extern int kerSysIsDyingGaspTriggered(void);
extern int kerConfigCs(BOARD_IOCTL_PARMS *parms);

extern int kerSysGetPciePortEnable(int port);
extern int kerSysGetUsbHostPortEnable(int port);
extern int kerSysGetUsbDeviceEnable(void);
extern int kerSysGetUsb30HostEnable(void);
extern int kerSysSetUsbPower(int on, USB_FUNCTION func);
extern void kerSysSetBootParm(char *name, char *value);

extern void kerSysInitPinmuxInterface(unsigned long interface);

#if defined(ZYXEL) && (ZYXEL == 1)
extern void kerSysZyFwInfoGet(char *string, int strLen, int offset);
extern void kerSysZyFwInfoLoad(void);
#endif

#if defined(WIRELESS)
void kerSysSesEventTrigger( int forced );
#endif

#define  WL_SROM_DEFAULT_FILE           "/mnt/mfg_data/.wlsromcustomerfile.nvm"
#define  WL_SROM_CUSTOMER_FILE          "/data/.wlsromcustomerfile.nvm"

extern unsigned char kerSysGetWlanFeature(void);

/* private functions used within board driver only */
void stopOtherCpu(void);
void resetPwrmgmtDdrMips(void);

PBP_MOCA_INFO boardGetMocaInfo(int dev);

/*
 * Access to shared GPIO registers should be done by calling these
 * functions below, which will grab a spinlock while accessing the
 * GPIO register.  However, if your code needs to access a shared
 * GPIO register but cannot call these functions, you should still
 * acquire the spinlock.
 * (Technically speaking, I should include spinlock.h and declare extern here
 * but that breaks the C++ compile of xtm.)
 */
//#include <linux/spinlock.h>
//extern spinlock_t bcm_gpio_spinlock;
extern void kerSysSetGpioState(unsigned short bpGpio, GPIO_STATE_t state);
extern void kerSysSetGpioStateLocked(unsigned short bpGpio, GPIO_STATE_t state);
extern void kerSysSetGpioDir(unsigned short bpGpio);
extern void kerSysSetGpioDirLocked(unsigned short bpGpio);
extern int kerSysSetGpioDirInput(unsigned short bpGpio);
extern int kerSysGetGpioValue(unsigned short bpGpio);


// for the voice code, which has too many kernSysSetGpio to change
#define kerSysSetGpio kerSysSetGpioState


extern unsigned long kerSysGetUbusFreq(unsigned long miscStrapBus);
extern int kerSysGetAfeId( unsigned long *afeId );
#define __kerSysGetAfeId  kerSysGetAfeId

typedef void (*MocaHostIntrCallback)(int irq, void * arg);
extern void kerSysMocaHostIntrReset(int dev);
extern void kerSysRegisterMocaHostIntrCallback(MocaHostIntrCallback callback, void * userArg, int dev);
extern void kerSysMocaHostIntrEnable(int dev);
extern void kerSysMocaHostIntrDisable(int dev);

extern unsigned int kerSysGetExtIntInfo(unsigned int irq);

void kerSysRegisterPlcUkeCallback( void (* callback)(unsigned long timeInMs, unsigned long param), unsigned long param );
void kerSysDeregisterPlcUkeCallback( void (* callback)(unsigned long timeInMs, unsigned long param) );
void kerSysRegisterPlcRandomizeCallback( void (* callback)(unsigned long timeInMs, unsigned long param), unsigned long param );
void kerSysDeregisterPlcRandomizeCallback( void (* callback)(unsigned long timeInMs, unsigned long param) );

/* implement in arch dependent setup.c */
extern void* kerSysGetDslPhyMemory(void);

#if defined(CONFIG_BCM_CPLD1)
int BcmCpld1Initialize(void);
void BcmCpld1CheckShutdownMode(void);
void BcmCpld1SetShutdownMode(void);
void BcmCpld1SetStandbyTimer(unsigned int duration);
#endif

#if defined(CONFIG_BCM_AVS_PWRSAVE) || defined (CONFIG_BCM_MoCA_AVS)
extern void kerSysBcmEnableAvs(int enable);
extern int kerSysBcmAvsEnabled(void);
#endif

#if defined(CONFIG_BCM_WATCHDOG_TIMER)
void kerSysRegisterWatchdogCB(char *devname, void *cbfn, void *context);
void kerSysDeregisterWatchdogCB(char *devname);
int bcm_suspend_watchdog(void);
void bcm_resume_watchdog(void);
#endif

#if defined(CONFIG_BCM_DDR_SELF_REFRESH_PWRSAVE)
#define CONFIG_BCM_PWRMNGT_DDR_SR_API
// The structure below is to be declared in ADSL PHY MIPS LMEM, if ADSL is compiled in
typedef struct _PWRMNGT_DDR_SR_CTRL_ {
  union {
   struct {
      unsigned char   phyBusy;
      unsigned char   tp0Busy;
      unsigned char   tp1Busy;
      unsigned char   reserved;
    };
    unsigned int      word;
  };
} PWRMNGT_DDR_SR_CTRL;

void BcmPwrMngtRegisterLmemAddr(PWRMNGT_DDR_SR_CTRL *pDdrSr);
#endif

extern int kerSysNandEraseBlk( void *mtd_ptr );

#if defined(CONFIG_BCM96838) || defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM96848)
#define TM_BASE_ADDR_STR				"tm"
#define TM_MC_BASE_ADDR_STR				"mc"
#define DHD_BASE_ADDR_STR				"dhd0"
#define DHD_BASE_ADDR_STR_1				"dhd1"
#define DHD_BASE_ADDR_STR_2				"dhd2"
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148)
#define TM_DEF_DDR_SIZE 				0x1400000
#else
#define TM_DEF_DDR_SIZE 				0xF00000
#endif
#define TM_ERASED_NVRAM_DEF_DDR_SIZE    0x14
#define TM_MC_DEF_DDR_SIZE				0x0400000
#define DHD_DEF_DDR_SIZE 				0x1400000
#define RDPA_WAN_TYPE_PSP_KEY           "RdpaWanType"
#define RDPA_WAN_OEMAC_PSP_KEY          "WanOEMac"
#define RDPA_EPON_SPEED_PSP_KEY         "EponSpeed"
#define PSP_BUFLEN_16                    16
int BcmMemReserveGetByName(char *name, void **addr, unsigned int *size);
extern int rdp_post_init(void);
extern int rdp_post_init_fiber(void);
#endif

#if defined(ZYXEL) && (ZYXEL==1)
#define BP_ZYXEL_ENABLE  1
#define BP_ZYXEL_DISABLE 0
#endif

#endif

#ifdef __cplusplus
}
#endif

#endif /* _BOARD_H */

