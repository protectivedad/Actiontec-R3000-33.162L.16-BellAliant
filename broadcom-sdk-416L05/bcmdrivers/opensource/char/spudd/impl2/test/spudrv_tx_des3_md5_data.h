/*
<:copyright-BRCM:2007:DUAL/GPL:standard

   Copyright (c) 2007 Broadcom 
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
/***************************************************************************
 * File Name  : 
 *
 * Description: 
 *              
 ***************************************************************************/
#ifndef __SPUDRV_TX_DES3_MD5_DATA_H__
#define __SPUDRV_TX_DES3_MD5_DATA_H__

#if defined(CONFIG_BCM_SPU_TEST)
//

// Automatically generated vector file.

//

// Vector format is: {EOP, SOP, PKT_DATA}.

//

// Example vectors:

//     101234567 // EOP = 0, SOP = 1, PKT_DATA = 01234567

//     089abcdef // EOP = 0, SOP = 0, PKT_DATA = 89abcdef

//     213572468 // EOP = 1, SOP = 0, PKT_DATA = 13572468

//

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt0_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80602830,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xad22b6d0,// 6 SCX   4 

    0x7bd8e197,// 7 SCX   5 

    0x98c622c6,// 8 SCX   6 

    0x28dd361a,// 9 SCX   7 

    0xf0ce73c9,// 10 SCX   8 

    0xcbe306fc,// 11 SCX   9 

    0x4522f72b,// 12 SCX  10 

    0xf44c7cb9,// 13 SCX  11 

    0x801a6f2c,// 14 SCX  12 

    0xd34f5261,// 15 SCX  13 

    0x51ba3ace,// 16 SCX  14 

    0x90f9886c,// 17 SCX  15 

    0x76c4b48b,// 18 SCX  16 

    0xbd55b020,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1128 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 356 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 356 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 212 

/// BFD (ofst+len)cry  : 252 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 800 

    0x00000164,// 20 BFD   1 

    0x00d40028,// 21 BFD   2 

    0x03200008,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : d 

    0x0d00f929,// 23 MFM   1 

    0xf6e44eee,// 24 MFM   2 

    0x30000000,// 25 MFM   3 

/// BDA is 283 words. 

/// BDA size     is 1128 (0x468) 

/// BDA id       is 0xd8ea 

    0x0468d8ea,// 26 BDA   1 

/// PAY Generic Data size   : 1128 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xa17f1bd3,// 27 PAY   1 

    0x4399c7f4,// 28 PAY   2 

    0x68f9e1d9,// 29 PAY   3 

    0xd0e3cd46,// 30 PAY   4 

    0xa2670f40,// 31 PAY   5 

    0x4a36bb60,// 32 PAY   6 

    0xdff6bf3d,// 33 PAY   7 

    0xcf6d6aca,// 34 PAY   8 

    0x27892a36,// 35 PAY   9 

    0xb3a64259,// 36 PAY  10 

    0x0b53f96d,// 37 PAY  11 

    0x381f4d3b,// 38 PAY  12 

    0x6fa9032e,// 39 PAY  13 

    0x69c3e0af,// 40 PAY  14 

    0xfc2af810,// 41 PAY  15 

    0xcf77de57,// 42 PAY  16 

    0x5894007c,// 43 PAY  17 

    0x207eadff,// 44 PAY  18 

    0x0e978c80,// 45 PAY  19 

    0x71a365f1,// 46 PAY  20 

    0x5b16cb2d,// 47 PAY  21 

    0x9b11bea8,// 48 PAY  22 

    0xea54c92c,// 49 PAY  23 

    0xb272d3c2,// 50 PAY  24 

    0xc5914f4d,// 51 PAY  25 

    0xdb753ad5,// 52 PAY  26 

    0x49cce16e,// 53 PAY  27 

    0xa0f45151,// 54 PAY  28 

    0x1e695404,// 55 PAY  29 

    0x18b87c09,// 56 PAY  30 

    0xd9f4cb93,// 57 PAY  31 

    0x22ae2f7e,// 58 PAY  32 

    0x880f4509,// 59 PAY  33 

    0xc98cdaf8,// 60 PAY  34 

    0x278f1144,// 61 PAY  35 

    0x83ea1d13,// 62 PAY  36 

    0x0ef7d560,// 63 PAY  37 

    0x849b2a23,// 64 PAY  38 

    0xa7c4604d,// 65 PAY  39 

    0xb3df193f,// 66 PAY  40 

    0xb97873d5,// 67 PAY  41 

    0x73362c47,// 68 PAY  42 

    0xf3bb48be,// 69 PAY  43 

    0xd600bf75,// 70 PAY  44 

    0x43bfa6bf,// 71 PAY  45 

    0xddaf8b1f,// 72 PAY  46 

    0xee76ab64,// 73 PAY  47 

    0xbac8e108,// 74 PAY  48 

    0xee60b96a,// 75 PAY  49 

    0x069ce083,// 76 PAY  50 

    0xd68e55ca,// 77 PAY  51 

    0x5e323945,// 78 PAY  52 

    0xfe08e249,// 79 PAY  53 

    0x30130af5,// 80 PAY  54 

    0x1401c75d,// 81 PAY  55 

    0x5f33009a,// 82 PAY  56 

    0x7f45cc15,// 83 PAY  57 

    0x3b8de6da,// 84 PAY  58 

    0x4d45dc9b,// 85 PAY  59 

    0xfef5a3ff,// 86 PAY  60 

    0xe3b1ea94,// 87 PAY  61 

    0xb68607d5,// 88 PAY  62 

    0xc563d6cb,// 89 PAY  63 

    0x482c7dfd,// 90 PAY  64 

    0xc86e4a85,// 91 PAY  65 

    0x847e2857,// 92 PAY  66 

    0xe8febf8a,// 93 PAY  67 

    0xba2b27b4,// 94 PAY  68 

    0x44b13297,// 95 PAY  69 

    0x1315f597,// 96 PAY  70 

    0xa194e3fd,// 97 PAY  71 

    0x3323ea74,// 98 PAY  72 

    0x05a53cd1,// 99 PAY  73 

    0xd177e43e,// 100 PAY  74 

    0x1dec6656,// 101 PAY  75 

    0x79231f39,// 102 PAY  76 

    0x1459af3a,// 103 PAY  77 

    0xca9ed55b,// 104 PAY  78 

    0x0c01f5d3,// 105 PAY  79 

    0x54f879ea,// 106 PAY  80 

    0x071807cc,// 107 PAY  81 

    0x77156d5b,// 108 PAY  82 

    0xb49e7ef9,// 109 PAY  83 

    0x1c865391,// 110 PAY  84 

    0xbcee3839,// 111 PAY  85 

    0xe347e15a,// 112 PAY  86 

    0xa8e32dfd,// 113 PAY  87 

    0x03c6eced,// 114 PAY  88 

    0x8a6e91cd,// 115 PAY  89 

    0x229eeb56,// 116 PAY  90 

    0xe2cebc4b,// 117 PAY  91 

    0x06577737,// 118 PAY  92 

    0x6f0e0ad5,// 119 PAY  93 

    0xea60e597,// 120 PAY  94 

    0x5db0cef4,// 121 PAY  95 

    0x25669c80,// 122 PAY  96 

    0xed9fc222,// 123 PAY  97 

    0x4889146d,// 124 PAY  98 

    0xe6eb5cea,// 125 PAY  99 

    0xf8873af4,// 126 PAY 100 

    0x88a06277,// 127 PAY 101 

    0x99179638,// 128 PAY 102 

    0xd3c53b0a,// 129 PAY 103 

    0xac70495e,// 130 PAY 104 

    0xf84a330f,// 131 PAY 105 

    0x3d92c0f6,// 132 PAY 106 

    0x8c1725c7,// 133 PAY 107 

    0x698de8a1,// 134 PAY 108 

    0xbc761121,// 135 PAY 109 

    0x0f6f3967,// 136 PAY 110 

    0x3477e130,// 137 PAY 111 

    0xf1bc44f4,// 138 PAY 112 

    0xc9148a59,// 139 PAY 113 

    0xf2617826,// 140 PAY 114 

    0xdfa38cb6,// 141 PAY 115 

    0x8a3c8b1e,// 142 PAY 116 

    0x580540f8,// 143 PAY 117 

    0xa296659e,// 144 PAY 118 

    0x264b1ff4,// 145 PAY 119 

    0x830720cb,// 146 PAY 120 

    0x2988b1a5,// 147 PAY 121 

    0xcd6391fc,// 148 PAY 122 

    0xec900fa8,// 149 PAY 123 

    0x99678e0e,// 150 PAY 124 

    0x823b91e2,// 151 PAY 125 

    0x0a2528e1,// 152 PAY 126 

    0xb8651657,// 153 PAY 127 

    0x7c997a30,// 154 PAY 128 

    0x459c4d41,// 155 PAY 129 

    0xa39e5831,// 156 PAY 130 

    0x450b9209,// 157 PAY 131 

    0xb601ebdd,// 158 PAY 132 

    0x799b2cdc,// 159 PAY 133 

    0xe2f4212d,// 160 PAY 134 

    0xa149fc47,// 161 PAY 135 

    0x14724c13,// 162 PAY 136 

    0x5ec61ea2,// 163 PAY 137 

    0xb7cd6f59,// 164 PAY 138 

    0xed362934,// 165 PAY 139 

    0x53ef5147,// 166 PAY 140 

    0xed91c8bb,// 167 PAY 141 

    0x4a89eccf,// 168 PAY 142 

    0x8fa46e46,// 169 PAY 143 

    0x92cc1422,// 170 PAY 144 

    0x2b5f879a,// 171 PAY 145 

    0xdf985b86,// 172 PAY 146 

    0x4acb677e,// 173 PAY 147 

    0xb837d302,// 174 PAY 148 

    0x25127680,// 175 PAY 149 

    0x8bac75a7,// 176 PAY 150 

    0x1ea216ec,// 177 PAY 151 

    0x67e49cba,// 178 PAY 152 

    0xeb6e2c29,// 179 PAY 153 

    0xcde50a6a,// 180 PAY 154 

    0x2d861745,// 181 PAY 155 

    0x7a58ae35,// 182 PAY 156 

    0xc179e27c,// 183 PAY 157 

    0xfdb204a8,// 184 PAY 158 

    0x02e2eeb7,// 185 PAY 159 

    0xf31597aa,// 186 PAY 160 

    0x9da858f2,// 187 PAY 161 

    0x71ed2752,// 188 PAY 162 

    0x9debb5af,// 189 PAY 163 

    0x5fea2ace,// 190 PAY 164 

    0xc009df95,// 191 PAY 165 

    0xf0eefec5,// 192 PAY 166 

    0x364d5218,// 193 PAY 167 

    0xef5760b9,// 194 PAY 168 

    0xf744f4ff,// 195 PAY 169 

    0x0229764d,// 196 PAY 170 

    0x44497ef3,// 197 PAY 171 

    0xbce84b43,// 198 PAY 172 

    0x4b0e6c80,// 199 PAY 173 

    0xe725f99c,// 200 PAY 174 

    0x06277ee9,// 201 PAY 175 

    0x5ef0c8d1,// 202 PAY 176 

    0xf6a28914,// 203 PAY 177 

    0x92df3cc9,// 204 PAY 178 

    0xd2dd86aa,// 205 PAY 179 

    0xd98f3c9b,// 206 PAY 180 

    0x623d8115,// 207 PAY 181 

    0xd771105e,// 208 PAY 182 

    0x316b7c0d,// 209 PAY 183 

    0x5a723c9a,// 210 PAY 184 

    0xf809aaee,// 211 PAY 185 

    0xee37de7c,// 212 PAY 186 

    0xd7860e4d,// 213 PAY 187 

    0xf599c19b,// 214 PAY 188 

    0xfddd8193,// 215 PAY 189 

    0x63213a75,// 216 PAY 190 

    0x19a85740,// 217 PAY 191 

    0x912303da,// 218 PAY 192 

    0x37d10e60,// 219 PAY 193 

    0xbe95e8ba,// 220 PAY 194 

    0x99fac630,// 221 PAY 195 

    0xf062b1d0,// 222 PAY 196 

    0x962c99c7,// 223 PAY 197 

    0xe0046e49,// 224 PAY 198 

    0x5e6c3d17,// 225 PAY 199 

    0xb67cd48a,// 226 PAY 200 

    0x852ba1fa,// 227 PAY 201 

    0x5498f280,// 228 PAY 202 

    0x3b4aa112,// 229 PAY 203 

    0xd662f212,// 230 PAY 204 

    0x21295705,// 231 PAY 205 

    0x5f808ed1,// 232 PAY 206 

    0xb0b4866c,// 233 PAY 207 

    0x33502c78,// 234 PAY 208 

    0x5890b735,// 235 PAY 209 

    0x43c15269,// 236 PAY 210 

    0xcfe91f83,// 237 PAY 211 

    0xb2a72985,// 238 PAY 212 

    0x587695ba,// 239 PAY 213 

    0xc1613ab8,// 240 PAY 214 

    0xe012ffc7,// 241 PAY 215 

    0xc48ae52e,// 242 PAY 216 

    0x92c9dfd7,// 243 PAY 217 

    0x9d1c2b5f,// 244 PAY 218 

    0x3034ba0d,// 245 PAY 219 

    0x38ff5dc6,// 246 PAY 220 

    0xec918a5d,// 247 PAY 221 

    0x3d7e5e79,// 248 PAY 222 

    0x0f66aaad,// 249 PAY 223 

    0xb239cf4d,// 250 PAY 224 

    0x65222c33,// 251 PAY 225 

    0xf9179ffa,// 252 PAY 226 

    0x079727b0,// 253 PAY 227 

    0xd393b27a,// 254 PAY 228 

    0xc7a6da5b,// 255 PAY 229 

    0x8699b138,// 256 PAY 230 

    0xcfed8ed7,// 257 PAY 231 

    0xfe8ca173,// 258 PAY 232 

    0x552d3041,// 259 PAY 233 

    0x64470654,// 260 PAY 234 

    0x3a0304e6,// 261 PAY 235 

    0xdb3f9cb3,// 262 PAY 236 

    0x31c3f22f,// 263 PAY 237 

    0x7982e92e,// 264 PAY 238 

    0xdae2da84,// 265 PAY 239 

    0x2fdd2eb0,// 266 PAY 240 

    0x749ba6fb,// 267 PAY 241 

    0xdc7214e6,// 268 PAY 242 

    0xa9432337,// 269 PAY 243 

    0x7791f600,// 270 PAY 244 

    0x1646db5d,// 271 PAY 245 

    0x4ca7e085,// 272 PAY 246 

    0x0674aa7d,// 273 PAY 247 

    0x29924ee0,// 274 PAY 248 

    0xb50a76f7,// 275 PAY 249 

    0x12f32c04,// 276 PAY 250 

    0x2901780e,// 277 PAY 251 

    0x21f0a9d7,// 278 PAY 252 

    0x8b36b44d,// 279 PAY 253 

    0xab84147f,// 280 PAY 254 

    0xc8db7f30,// 281 PAY 255 

    0xe5ea70db,// 282 PAY 256 

    0xb1eb8d03,// 283 PAY 257 

    0x7b5ac303,// 284 PAY 258 

    0x62855011,// 285 PAY 259 

    0xac7097b4,// 286 PAY 260 

    0x9f8aacbd,// 287 PAY 261 

    0x1b250a5e,// 288 PAY 262 

    0x39dee7d4,// 289 PAY 263 

    0xe714325c,// 290 PAY 264 

    0xdffe2dfe,// 291 PAY 265 

    0x549c8da7,// 292 PAY 266 

    0xf049e54b,// 293 PAY 267 

    0xb19e1124,// 294 PAY 268 

    0x43408369,// 295 PAY 269 

    0x90478f20,// 296 PAY 270 

    0x80c9d880,// 297 PAY 271 

    0xeaea2d44,// 298 PAY 272 

    0xc2d0950d,// 299 PAY 273 

    0x2852e5db,// 300 PAY 274 

    0x731d6b7a,// 301 PAY 275 

    0xba32b5d0,// 302 PAY 276 

    0x704802b8,// 303 PAY 277 

    0x3dec0e38,// 304 PAY 278 

    0x3250893d,// 305 PAY 279 

    0x8aef595f,// 306 PAY 280 

    0xf34c4a86,// 307 PAY 281 

    0x352a350f,// 308 PAY 282 

/// STA is 1 words. 

/// STA num_pkts       : 99 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x93 

    0x02609363 // 309 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt1_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80602853,// 4 SCX   2 

    0x00001200,// 5 SCX   3 

    0xe967787a,// 6 SCX   4 

    0xbd27f8ed,// 7 SCX   5 

    0x2b6aafb4,// 8 SCX   6 

    0x2d829803,// 9 SCX   7 

    0x51a08fd2,// 10 SCX   8 

    0xd33276ae,// 11 SCX   9 

    0x6eb407cd,// 12 SCX  10 

    0xd45102f5,// 13 SCX  11 

    0x53751920,// 14 SCX  12 

    0x9140c785,// 15 SCX  13 

    0xe1f745b7,// 16 SCX  14 

    0xa3d9e961,// 17 SCX  15 

    0x5a0175bc,// 18 SCX  16 

    0x00af747f,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 2048 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1262 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1262 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 1064 

/// BFD (ofst+len)cry  : 1216 

/// BFD ofstiv         : 724 

/// BFD ofsticv        : 2004 

    0x000004ee,// 20 BFD   1 

    0x04280098,// 21 BFD   2 

    0x07d402d4,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x13001da3,// 23 MFM   1 

    0x15776a99,// 24 MFM   2 

    0x1ce458b0,// 25 MFM   3 

/// BDA is 513 words. 

/// BDA size     is 2048 (0x800) 

/// BDA id       is 0x3d82 

    0x08003d82,// 26 BDA   1 

/// PAY Generic Data size   : 2048 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x2dc061cf,// 27 PAY   1 

    0x161cc825,// 28 PAY   2 

    0x202fd253,// 29 PAY   3 

    0x13a06bf3,// 30 PAY   4 

    0xe08a9e7c,// 31 PAY   5 

    0xee61bf5d,// 32 PAY   6 

    0x48b5d489,// 33 PAY   7 

    0xafb39e1e,// 34 PAY   8 

    0x3ee1e750,// 35 PAY   9 

    0xefcdd2f3,// 36 PAY  10 

    0x4c2b2559,// 37 PAY  11 

    0xbd12689c,// 38 PAY  12 

    0xb133907a,// 39 PAY  13 

    0x2ed8fa4a,// 40 PAY  14 

    0x4c32d31a,// 41 PAY  15 

    0x5eacf37c,// 42 PAY  16 

    0x3ac8c7fe,// 43 PAY  17 

    0xd5e5fe1f,// 44 PAY  18 

    0x02de59f3,// 45 PAY  19 

    0xc2be1446,// 46 PAY  20 

    0x62a03e3e,// 47 PAY  21 

    0x5752b5d7,// 48 PAY  22 

    0xe776d48e,// 49 PAY  23 

    0x66101e00,// 50 PAY  24 

    0x6bf03436,// 51 PAY  25 

    0xe6153322,// 52 PAY  26 

    0xbc3fec5c,// 53 PAY  27 

    0x27acd3ca,// 54 PAY  28 

    0xdc5c10fd,// 55 PAY  29 

    0xd6f2f64b,// 56 PAY  30 

    0xaf7b945c,// 57 PAY  31 

    0xcb75a728,// 58 PAY  32 

    0x498b09cf,// 59 PAY  33 

    0xeb6091d3,// 60 PAY  34 

    0x01590053,// 61 PAY  35 

    0x2f243054,// 62 PAY  36 

    0x5e58f7a7,// 63 PAY  37 

    0x80d56156,// 64 PAY  38 

    0x0cda6e64,// 65 PAY  39 

    0xa08e6b08,// 66 PAY  40 

    0xeeb9b3d4,// 67 PAY  41 

    0x12aee6b9,// 68 PAY  42 

    0x8d6995c5,// 69 PAY  43 

    0x427b4a0b,// 70 PAY  44 

    0x8e7c6181,// 71 PAY  45 

    0xa19e15cd,// 72 PAY  46 

    0x8737ca7d,// 73 PAY  47 

    0xd3b29dd0,// 74 PAY  48 

    0x1a8d764d,// 75 PAY  49 

    0xe7d99b5d,// 76 PAY  50 

    0x25bcd779,// 77 PAY  51 

    0x2ef0987e,// 78 PAY  52 

    0xa2f522c0,// 79 PAY  53 

    0x58ed06c6,// 80 PAY  54 

    0x7f5b7823,// 81 PAY  55 

    0xc7d5e20f,// 82 PAY  56 

    0x73bc6a1f,// 83 PAY  57 

    0xc1624ca1,// 84 PAY  58 

    0xbd14b566,// 85 PAY  59 

    0xdd08f45b,// 86 PAY  60 

    0x09563f3a,// 87 PAY  61 

    0xdb126204,// 88 PAY  62 

    0xf2ce71a5,// 89 PAY  63 

    0x3acb73d3,// 90 PAY  64 

    0x27139c03,// 91 PAY  65 

    0x9020481c,// 92 PAY  66 

    0xb7be6853,// 93 PAY  67 

    0x3b8f9051,// 94 PAY  68 

    0x7f89957f,// 95 PAY  69 

    0xb36c5cc6,// 96 PAY  70 

    0x17abdf59,// 97 PAY  71 

    0x9380073a,// 98 PAY  72 

    0xf43e7c7c,// 99 PAY  73 

    0xebc9bca2,// 100 PAY  74 

    0xaec58776,// 101 PAY  75 

    0xe41f7da5,// 102 PAY  76 

    0xa9d092df,// 103 PAY  77 

    0x91dd007a,// 104 PAY  78 

    0x13b63592,// 105 PAY  79 

    0xddb00260,// 106 PAY  80 

    0x5f21fb04,// 107 PAY  81 

    0xb77c9bd6,// 108 PAY  82 

    0x89cd264e,// 109 PAY  83 

    0xe41a2708,// 110 PAY  84 

    0x3e58c5f9,// 111 PAY  85 

    0x6b0632d8,// 112 PAY  86 

    0x9ac72d54,// 113 PAY  87 

    0x5d3eedbe,// 114 PAY  88 

    0x1e23ef90,// 115 PAY  89 

    0x38685cee,// 116 PAY  90 

    0xb6e7a3f1,// 117 PAY  91 

    0x420dc260,// 118 PAY  92 

    0x146676f0,// 119 PAY  93 

    0x4677f295,// 120 PAY  94 

    0x635a0cbf,// 121 PAY  95 

    0x1df5cd00,// 122 PAY  96 

    0x7cc72a5e,// 123 PAY  97 

    0x6afc9c85,// 124 PAY  98 

    0xd5269420,// 125 PAY  99 

    0x87fb3b52,// 126 PAY 100 

    0x8656fa3d,// 127 PAY 101 

    0xf1b4f0fe,// 128 PAY 102 

    0xf845c876,// 129 PAY 103 

    0xbbe6bb88,// 130 PAY 104 

    0x079455c8,// 131 PAY 105 

    0xa94e2379,// 132 PAY 106 

    0x778e84ed,// 133 PAY 107 

    0x67d5e6e7,// 134 PAY 108 

    0xa1b6c4dc,// 135 PAY 109 

    0x8b4f790b,// 136 PAY 110 

    0xd60318e9,// 137 PAY 111 

    0x1ed4988d,// 138 PAY 112 

    0x2658be98,// 139 PAY 113 

    0x90fb3424,// 140 PAY 114 

    0x80f6139b,// 141 PAY 115 

    0xd570c21c,// 142 PAY 116 

    0x11075456,// 143 PAY 117 

    0x1ccf85b9,// 144 PAY 118 

    0xd6b2dbd0,// 145 PAY 119 

    0x636e3f2e,// 146 PAY 120 

    0x109999e5,// 147 PAY 121 

    0xa7c5cd77,// 148 PAY 122 

    0x367fa4c5,// 149 PAY 123 

    0x18610de9,// 150 PAY 124 

    0xa5156386,// 151 PAY 125 

    0x9bc9cb03,// 152 PAY 126 

    0xa74c0eb7,// 153 PAY 127 

    0x5dbf7b61,// 154 PAY 128 

    0x14eeb6e5,// 155 PAY 129 

    0x5220e71b,// 156 PAY 130 

    0xc046928f,// 157 PAY 131 

    0x0b8eec14,// 158 PAY 132 

    0x4d43656b,// 159 PAY 133 

    0x822bf32e,// 160 PAY 134 

    0xab9ffee4,// 161 PAY 135 

    0x22884cd9,// 162 PAY 136 

    0xf1175dc2,// 163 PAY 137 

    0xaa033508,// 164 PAY 138 

    0xa2e3adc0,// 165 PAY 139 

    0xf4eae98e,// 166 PAY 140 

    0xcedf0b6d,// 167 PAY 141 

    0x84f4ab70,// 168 PAY 142 

    0x759e319e,// 169 PAY 143 

    0x048a85d6,// 170 PAY 144 

    0x9d740559,// 171 PAY 145 

    0xb8bb10a2,// 172 PAY 146 

    0x345d2c8b,// 173 PAY 147 

    0xf45dbcf3,// 174 PAY 148 

    0xfe1b39ea,// 175 PAY 149 

    0x0aa150f1,// 176 PAY 150 

    0xef3a8237,// 177 PAY 151 

    0x139e94dd,// 178 PAY 152 

    0xf4adb0c4,// 179 PAY 153 

    0x43e5bf3d,// 180 PAY 154 

    0x16ad342d,// 181 PAY 155 

    0xc4020262,// 182 PAY 156 

    0x0a38dfc5,// 183 PAY 157 

    0x3331fdc1,// 184 PAY 158 

    0xc53fbeea,// 185 PAY 159 

    0x00449d3b,// 186 PAY 160 

    0x5cad81ee,// 187 PAY 161 

    0xa95967e2,// 188 PAY 162 

    0xca7af5cc,// 189 PAY 163 

    0xafe4425c,// 190 PAY 164 

    0x789be653,// 191 PAY 165 

    0xb7f967c4,// 192 PAY 166 

    0x87f5a618,// 193 PAY 167 

    0xccd19fa0,// 194 PAY 168 

    0xde4faa12,// 195 PAY 169 

    0xf69e0fbe,// 196 PAY 170 

    0x3ad6acaf,// 197 PAY 171 

    0x72d0895e,// 198 PAY 172 

    0x0680000d,// 199 PAY 173 

    0x3885f71e,// 200 PAY 174 

    0x8de0a0cb,// 201 PAY 175 

    0x7252ae8c,// 202 PAY 176 

    0x41cc4b24,// 203 PAY 177 

    0x7c014ce2,// 204 PAY 178 

    0x8e7ee4b0,// 205 PAY 179 

    0xc9a8c451,// 206 PAY 180 

    0x08963846,// 207 PAY 181 

    0xeb14dd13,// 208 PAY 182 

    0x913e0584,// 209 PAY 183 

    0x96e4949e,// 210 PAY 184 

    0x46e71c46,// 211 PAY 185 

    0x10978564,// 212 PAY 186 

    0xb071c4d0,// 213 PAY 187 

    0x72598d74,// 214 PAY 188 

    0x512c4d7b,// 215 PAY 189 

    0xeba8788c,// 216 PAY 190 

    0xaf29a03f,// 217 PAY 191 

    0x108a9be6,// 218 PAY 192 

    0xc79b8e15,// 219 PAY 193 

    0x85d4bb5a,// 220 PAY 194 

    0x96ee3bc5,// 221 PAY 195 

    0x8e77f3c5,// 222 PAY 196 

    0xa556738a,// 223 PAY 197 

    0xb0979aee,// 224 PAY 198 

    0x5ab97c60,// 225 PAY 199 

    0x891b853d,// 226 PAY 200 

    0x14bd8441,// 227 PAY 201 

    0x09264a05,// 228 PAY 202 

    0xf6130093,// 229 PAY 203 

    0x857c55dd,// 230 PAY 204 

    0x44bd731a,// 231 PAY 205 

    0xf6f43e93,// 232 PAY 206 

    0xf9503303,// 233 PAY 207 

    0xdf1874ce,// 234 PAY 208 

    0x3f383f4a,// 235 PAY 209 

    0xc8cc76c4,// 236 PAY 210 

    0x8822e936,// 237 PAY 211 

    0x8c75f220,// 238 PAY 212 

    0x755d9ba2,// 239 PAY 213 

    0x84e31e8f,// 240 PAY 214 

    0xebb0259a,// 241 PAY 215 

    0x6c1d8ecd,// 242 PAY 216 

    0xa5b5373d,// 243 PAY 217 

    0xea5332e9,// 244 PAY 218 

    0xae1c56ac,// 245 PAY 219 

    0x52a8cf31,// 246 PAY 220 

    0x1966b0aa,// 247 PAY 221 

    0xd3bae545,// 248 PAY 222 

    0x2a0bb58c,// 249 PAY 223 

    0x2d56cc30,// 250 PAY 224 

    0x3e2ce6a6,// 251 PAY 225 

    0xc2b162a1,// 252 PAY 226 

    0x35efa0ed,// 253 PAY 227 

    0x66c3522e,// 254 PAY 228 

    0x3e05e25c,// 255 PAY 229 

    0xe3cb2f74,// 256 PAY 230 

    0x8bd237ae,// 257 PAY 231 

    0x06909d12,// 258 PAY 232 

    0x55ef8bef,// 259 PAY 233 

    0xf62e6ad8,// 260 PAY 234 

    0x92cd1e45,// 261 PAY 235 

    0x9cdf74e9,// 262 PAY 236 

    0x0545d6c4,// 263 PAY 237 

    0xebd94ee7,// 264 PAY 238 

    0xcf9c67cc,// 265 PAY 239 

    0x94a7ad40,// 266 PAY 240 

    0x14b31e41,// 267 PAY 241 

    0x9fea8d01,// 268 PAY 242 

    0xeebf4661,// 269 PAY 243 

    0x5a4d4d43,// 270 PAY 244 

    0xd71755e1,// 271 PAY 245 

    0xa86bbd72,// 272 PAY 246 

    0x7c052899,// 273 PAY 247 

    0x7dd36638,// 274 PAY 248 

    0x65eb029f,// 275 PAY 249 

    0xeb984551,// 276 PAY 250 

    0xaa6e194c,// 277 PAY 251 

    0x2063d5ec,// 278 PAY 252 

    0x8ba1050f,// 279 PAY 253 

    0xaccdfad5,// 280 PAY 254 

    0xfde89d19,// 281 PAY 255 

    0x5c09333d,// 282 PAY 256 

    0x1bd5434c,// 283 PAY 257 

    0x67837735,// 284 PAY 258 

    0x9b7b3a77,// 285 PAY 259 

    0x43c8eab1,// 286 PAY 260 

    0xa016faee,// 287 PAY 261 

    0x1e839ed7,// 288 PAY 262 

    0xf0de6cec,// 289 PAY 263 

    0xb0790eda,// 290 PAY 264 

    0x7bab6864,// 291 PAY 265 

    0xbf6a1b96,// 292 PAY 266 

    0x0adb490e,// 293 PAY 267 

    0x690b099c,// 294 PAY 268 

    0x943ae0cd,// 295 PAY 269 

    0x841f9bdc,// 296 PAY 270 

    0xeb8b736d,// 297 PAY 271 

    0xdb4bfbf4,// 298 PAY 272 

    0xaf8ea7fb,// 299 PAY 273 

    0xb7d904b7,// 300 PAY 274 

    0x818dcf89,// 301 PAY 275 

    0xe883ad97,// 302 PAY 276 

    0xb7461adb,// 303 PAY 277 

    0x8ee78977,// 304 PAY 278 

    0x420d4163,// 305 PAY 279 

    0x60e96508,// 306 PAY 280 

    0xeaa101c2,// 307 PAY 281 

    0x524b899c,// 308 PAY 282 

    0xe334ae42,// 309 PAY 283 

    0x23405975,// 310 PAY 284 

    0xd2723d3f,// 311 PAY 285 

    0x72b5b5bd,// 312 PAY 286 

    0x898e0303,// 313 PAY 287 

    0xaf18b8e1,// 314 PAY 288 

    0xf8f99ff0,// 315 PAY 289 

    0x677912f3,// 316 PAY 290 

    0x49b3ff1a,// 317 PAY 291 

    0x26512795,// 318 PAY 292 

    0x224b8091,// 319 PAY 293 

    0x1c5ebd8d,// 320 PAY 294 

    0x18676765,// 321 PAY 295 

    0x7a2640db,// 322 PAY 296 

    0x5ec7b0f7,// 323 PAY 297 

    0x0a095a65,// 324 PAY 298 

    0x39128e49,// 325 PAY 299 

    0x2fbd4098,// 326 PAY 300 

    0x610133c1,// 327 PAY 301 

    0xdcc8dd6a,// 328 PAY 302 

    0x1fc6a37b,// 329 PAY 303 

    0xfbe605ef,// 330 PAY 304 

    0xd654a989,// 331 PAY 305 

    0x4a52d766,// 332 PAY 306 

    0xa30bb6f2,// 333 PAY 307 

    0x8bf251b9,// 334 PAY 308 

    0x676090e7,// 335 PAY 309 

    0xc55cad42,// 336 PAY 310 

    0x31192cd9,// 337 PAY 311 

    0xe26bb685,// 338 PAY 312 

    0x0d7661d6,// 339 PAY 313 

    0x20c16e7b,// 340 PAY 314 

    0x4edc5734,// 341 PAY 315 

    0x41724d04,// 342 PAY 316 

    0x78286bc0,// 343 PAY 317 

    0x98e7ecd5,// 344 PAY 318 

    0x2ab66444,// 345 PAY 319 

    0x2b51eb55,// 346 PAY 320 

    0x45c07699,// 347 PAY 321 

    0xa726dc81,// 348 PAY 322 

    0xede5aaa7,// 349 PAY 323 

    0xcb0bfee2,// 350 PAY 324 

    0xcf9b26bc,// 351 PAY 325 

    0x2837471d,// 352 PAY 326 

    0xfa1d36d2,// 353 PAY 327 

    0x2c0bdea5,// 354 PAY 328 

    0x0b30b016,// 355 PAY 329 

    0x6f2df8fb,// 356 PAY 330 

    0x0a8cbb41,// 357 PAY 331 

    0xfc45db02,// 358 PAY 332 

    0xf9666396,// 359 PAY 333 

    0xb7a7f77a,// 360 PAY 334 

    0x0c6538b7,// 361 PAY 335 

    0x7e0cac7d,// 362 PAY 336 

    0x2929e96f,// 363 PAY 337 

    0x7f0949eb,// 364 PAY 338 

    0xf04eade2,// 365 PAY 339 

    0x022086e8,// 366 PAY 340 

    0x90d85f1c,// 367 PAY 341 

    0x24374a50,// 368 PAY 342 

    0x356f5981,// 369 PAY 343 

    0xf554b8a7,// 370 PAY 344 

    0x46c96cfe,// 371 PAY 345 

    0x935007aa,// 372 PAY 346 

    0xd8ec7cc0,// 373 PAY 347 

    0x2c5fe93c,// 374 PAY 348 

    0x08674e12,// 375 PAY 349 

    0x2d56c13b,// 376 PAY 350 

    0x2c70e819,// 377 PAY 351 

    0xa59109d6,// 378 PAY 352 

    0x4f3881e2,// 379 PAY 353 

    0x58556003,// 380 PAY 354 

    0x8e256a1c,// 381 PAY 355 

    0x7ef2d537,// 382 PAY 356 

    0x189a2115,// 383 PAY 357 

    0xdda8eb55,// 384 PAY 358 

    0x2fcf3c6b,// 385 PAY 359 

    0xec36d027,// 386 PAY 360 

    0xb782f954,// 387 PAY 361 

    0x2110bef9,// 388 PAY 362 

    0x407a319c,// 389 PAY 363 

    0x892bd11b,// 390 PAY 364 

    0x148111b7,// 391 PAY 365 

    0x6615fed8,// 392 PAY 366 

    0x240a4d5c,// 393 PAY 367 

    0x6bd6f070,// 394 PAY 368 

    0xc82c9681,// 395 PAY 369 

    0xf0c02d24,// 396 PAY 370 

    0xcf2b043c,// 397 PAY 371 

    0x7c291bca,// 398 PAY 372 

    0x70902aa3,// 399 PAY 373 

    0x4bdfba8b,// 400 PAY 374 

    0xba4f3466,// 401 PAY 375 

    0x25e14198,// 402 PAY 376 

    0x08ac83b4,// 403 PAY 377 

    0x501919eb,// 404 PAY 378 

    0x43d316c1,// 405 PAY 379 

    0x46bc561b,// 406 PAY 380 

    0x342b0083,// 407 PAY 381 

    0x2e96fb8a,// 408 PAY 382 

    0x5175717e,// 409 PAY 383 

    0xf3dc18d1,// 410 PAY 384 

    0x1be50951,// 411 PAY 385 

    0x1229dade,// 412 PAY 386 

    0x1e7ca45d,// 413 PAY 387 

    0x3d545c1a,// 414 PAY 388 

    0x59b1a168,// 415 PAY 389 

    0x9cb4233b,// 416 PAY 390 

    0xf2d663ed,// 417 PAY 391 

    0xbf5bfba8,// 418 PAY 392 

    0x6602fea5,// 419 PAY 393 

    0x3956d462,// 420 PAY 394 

    0x3b8c8b08,// 421 PAY 395 

    0xb5a97740,// 422 PAY 396 

    0x6f93e51d,// 423 PAY 397 

    0x7edf1050,// 424 PAY 398 

    0xdb227230,// 425 PAY 399 

    0x4c8be2f1,// 426 PAY 400 

    0x10bbcb0b,// 427 PAY 401 

    0xe01493da,// 428 PAY 402 

    0xf9eab87b,// 429 PAY 403 

    0xfc5f723e,// 430 PAY 404 

    0x859b6b72,// 431 PAY 405 

    0x8bbc280a,// 432 PAY 406 

    0xde517c9a,// 433 PAY 407 

    0x52ec49a2,// 434 PAY 408 

    0x5a9e850f,// 435 PAY 409 

    0x33f12ded,// 436 PAY 410 

    0x73b5f9ab,// 437 PAY 411 

    0xedd58bf4,// 438 PAY 412 

    0x46cea42c,// 439 PAY 413 

    0x1fc125a8,// 440 PAY 414 

    0x49815bbb,// 441 PAY 415 

    0x94b743f2,// 442 PAY 416 

    0x8df38617,// 443 PAY 417 

    0xcae2779c,// 444 PAY 418 

    0x042c027c,// 445 PAY 419 

    0xe365429b,// 446 PAY 420 

    0xe1289c9e,// 447 PAY 421 

    0x49756fdc,// 448 PAY 422 

    0x8891575a,// 449 PAY 423 

    0x9b39e267,// 450 PAY 424 

    0xe582d449,// 451 PAY 425 

    0x2ee9a30a,// 452 PAY 426 

    0x1df41f1e,// 453 PAY 427 

    0xf35ebfa5,// 454 PAY 428 

    0x559e28e1,// 455 PAY 429 

    0x6bb624ce,// 456 PAY 430 

    0x19eeffd2,// 457 PAY 431 

    0x199007cb,// 458 PAY 432 

    0xd5ec429a,// 459 PAY 433 

    0x3cd48f6a,// 460 PAY 434 

    0x2decdf5b,// 461 PAY 435 

    0x685b87de,// 462 PAY 436 

    0x9fe182fe,// 463 PAY 437 

    0x3002001f,// 464 PAY 438 

    0xf3a5c718,// 465 PAY 439 

    0xb5df740d,// 466 PAY 440 

    0x2bc88c10,// 467 PAY 441 

    0xca4f8a4c,// 468 PAY 442 

    0xda41e16f,// 469 PAY 443 

    0xb23aab28,// 470 PAY 444 

    0x81d8df26,// 471 PAY 445 

    0xd1ceba6b,// 472 PAY 446 

    0x99f067d8,// 473 PAY 447 

    0x01764ffd,// 474 PAY 448 

    0x6f480884,// 475 PAY 449 

    0x4072e477,// 476 PAY 450 

    0xd365d1ce,// 477 PAY 451 

    0x729be759,// 478 PAY 452 

    0x4d13e588,// 479 PAY 453 

    0xb38bdb1d,// 480 PAY 454 

    0x51936a14,// 481 PAY 455 

    0x1d8ec9f0,// 482 PAY 456 

    0x7adaf360,// 483 PAY 457 

    0xff9b42b7,// 484 PAY 458 

    0xa8733dbe,// 485 PAY 459 

    0x91158038,// 486 PAY 460 

    0x8e3141ba,// 487 PAY 461 

    0x948ccdee,// 488 PAY 462 

    0xebcdf133,// 489 PAY 463 

    0xeab765d3,// 490 PAY 464 

    0xafec0890,// 491 PAY 465 

    0x4ca2e265,// 492 PAY 466 

    0x1d1f3c0b,// 493 PAY 467 

    0x330d7a5b,// 494 PAY 468 

    0xcc02efa7,// 495 PAY 469 

    0xa2eb13a5,// 496 PAY 470 

    0x184a4246,// 497 PAY 471 

    0x77f3d7ff,// 498 PAY 472 

    0x66be2e12,// 499 PAY 473 

    0x14d12842,// 500 PAY 474 

    0x4067c40a,// 501 PAY 475 

    0xd6864edb,// 502 PAY 476 

    0xc7feea40,// 503 PAY 477 

    0x444c3a30,// 504 PAY 478 

    0x6a50223c,// 505 PAY 479 

    0x5b650f53,// 506 PAY 480 

    0xca48b31c,// 507 PAY 481 

    0x3a0cf956,// 508 PAY 482 

    0xe4f7fc91,// 509 PAY 483 

    0x5dbe26b1,// 510 PAY 484 

    0x806d387c,// 511 PAY 485 

    0xe920be2c,// 512 PAY 486 

    0xbc0895d4,// 513 PAY 487 

    0xdf4151e3,// 514 PAY 488 

    0xe93f047e,// 515 PAY 489 

    0x7a32f3a7,// 516 PAY 490 

    0x02db7639,// 517 PAY 491 

    0x29079420,// 518 PAY 492 

    0x7bf7068e,// 519 PAY 493 

    0x5ab89bb3,// 520 PAY 494 

    0xaadde0ec,// 521 PAY 495 

    0xfd99d983,// 522 PAY 496 

    0xb8f2eefa,// 523 PAY 497 

    0x870769c4,// 524 PAY 498 

    0x67f1309e,// 525 PAY 499 

    0x9c3747e2,// 526 PAY 500 

    0x01e479b3,// 527 PAY 501 

    0x51926bb5,// 528 PAY 502 

    0x06a37492,// 529 PAY 503 

    0x0d33f14b,// 530 PAY 504 

    0x56789730,// 531 PAY 505 

    0xc04726ea,// 532 PAY 506 

    0x37fd10e4,// 533 PAY 507 

    0x82483aec,// 534 PAY 508 

    0x8ea946f3,// 535 PAY 509 

    0xcbc0bb9d,// 536 PAY 510 

    0x486944f1,// 537 PAY 511 

    0x3eca9793,// 538 PAY 512 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 98 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x018880b2 // 539 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt2_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80602860,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xf6c4159e,// 6 SCX   4 

    0xe15e1eff,// 7 SCX   5 

    0x1433f120,// 8 SCX   6 

    0xd82a7e6d,// 9 SCX   7 

    0x5a7f7043,// 10 SCX   8 

    0x0751cfbf,// 11 SCX   9 

    0x1bac8e05,// 12 SCX  10 

    0xcaa7d499,// 13 SCX  11 

    0x004ff2a0,// 14 SCX  12 

    0xc6d91c58,// 15 SCX  13 

    0x93dd9f19,// 16 SCX  14 

    0x3d62e573,// 17 SCX  15 

    0x16f137da,// 18 SCX  16 

    0xbd5c4b1a,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 571 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 348 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 348 

/// BFD lencrypto      : 280 

/// BFD ofstcrypto     : 64 

/// BFD (ofst+len)cry  : 344 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 484 

    0x0000015c,// 20 BFD   1 

    0x00400118,// 21 BFD   2 

    0x01e40020,// 22 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 4f 

    0x4f000d78,// 23 MFM   1 

    0x62d8655e,// 24 MFM   2 

    0x19e24878,// 25 MFM   3 

    0x576a3e15,// 26 MFM   4 

    0xc2145f63,// 27 MFM   5 

    0xac8eb146,// 28 MFM   6 

    0x452cff79,// 29 MFM   7 

    0xa9dfc4a3,// 30 MFM   8 

    0xa281fafe,// 31 MFM   9 

    0xec11e8c5,// 32 MFM  10 

    0x28a00000,// 33 MFM  11 

/// BDA is 144 words. 

/// BDA size     is 571 (0x23b) 

/// BDA id       is 0xb49d 

    0x023bb49d,// 34 BDA   1 

/// PAY Generic Data size   : 571 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf39d08a2,// 35 PAY   1 

    0x6953ace5,// 36 PAY   2 

    0x4dcae1f0,// 37 PAY   3 

    0xb54a73ea,// 38 PAY   4 

    0xd946cbef,// 39 PAY   5 

    0x54df7262,// 40 PAY   6 

    0xe206e12f,// 41 PAY   7 

    0xb20c91d8,// 42 PAY   8 

    0xacf8677b,// 43 PAY   9 

    0xb0bc6f7b,// 44 PAY  10 

    0x9382900f,// 45 PAY  11 

    0x33c799b6,// 46 PAY  12 

    0x236287d2,// 47 PAY  13 

    0x3ce3bd8d,// 48 PAY  14 

    0xb423d69f,// 49 PAY  15 

    0x1267336d,// 50 PAY  16 

    0xdf9ce49d,// 51 PAY  17 

    0x2de3386f,// 52 PAY  18 

    0x45fb8fda,// 53 PAY  19 

    0xd9ebf60e,// 54 PAY  20 

    0xc6d0197e,// 55 PAY  21 

    0xcdb5573b,// 56 PAY  22 

    0x4aeb4430,// 57 PAY  23 

    0xb0044a82,// 58 PAY  24 

    0x9b4c5520,// 59 PAY  25 

    0x63c27e03,// 60 PAY  26 

    0x6c5cfddc,// 61 PAY  27 

    0xd0dabb56,// 62 PAY  28 

    0x6133e577,// 63 PAY  29 

    0xb1998b8d,// 64 PAY  30 

    0x41b5b4ef,// 65 PAY  31 

    0xe80e52a1,// 66 PAY  32 

    0xace8dff5,// 67 PAY  33 

    0x1450364c,// 68 PAY  34 

    0xaf16abcd,// 69 PAY  35 

    0x56885ff7,// 70 PAY  36 

    0x5f332900,// 71 PAY  37 

    0x189e1eff,// 72 PAY  38 

    0x8450905f,// 73 PAY  39 

    0x7ed74c01,// 74 PAY  40 

    0x914f13be,// 75 PAY  41 

    0xdd314ff1,// 76 PAY  42 

    0x05f4d61f,// 77 PAY  43 

    0x955b1797,// 78 PAY  44 

    0x49bd482f,// 79 PAY  45 

    0x9c0aadec,// 80 PAY  46 

    0x3664cdb4,// 81 PAY  47 

    0x150bb4bb,// 82 PAY  48 

    0xcdba5e0b,// 83 PAY  49 

    0x66436e83,// 84 PAY  50 

    0x8ebd2c4c,// 85 PAY  51 

    0xf9ba4264,// 86 PAY  52 

    0xf0ee657a,// 87 PAY  53 

    0x2e7cc7fe,// 88 PAY  54 

    0x009ca525,// 89 PAY  55 

    0x8f9f4c72,// 90 PAY  56 

    0x634784f4,// 91 PAY  57 

    0xd83e4254,// 92 PAY  58 

    0xb7f69780,// 93 PAY  59 

    0x9930f655,// 94 PAY  60 

    0x6f785033,// 95 PAY  61 

    0x861b6759,// 96 PAY  62 

    0x2d290814,// 97 PAY  63 

    0x717dd4fc,// 98 PAY  64 

    0x01d8dd56,// 99 PAY  65 

    0xe38c4a78,// 100 PAY  66 

    0xdf1f8517,// 101 PAY  67 

    0x9bb1ba44,// 102 PAY  68 

    0x4bdbad4a,// 103 PAY  69 

    0x73d0048f,// 104 PAY  70 

    0x6dd68306,// 105 PAY  71 

    0x1e13165f,// 106 PAY  72 

    0x6a206126,// 107 PAY  73 

    0x1ab53bd6,// 108 PAY  74 

    0xa581d4bc,// 109 PAY  75 

    0xd7ed9a8f,// 110 PAY  76 

    0x915366f7,// 111 PAY  77 

    0x26d9c154,// 112 PAY  78 

    0x7dfef4a4,// 113 PAY  79 

    0xab217c82,// 114 PAY  80 

    0x6125fe3e,// 115 PAY  81 

    0x1ae86900,// 116 PAY  82 

    0x76aa873b,// 117 PAY  83 

    0xc398d8c0,// 118 PAY  84 

    0xc58b479e,// 119 PAY  85 

    0x80e2913a,// 120 PAY  86 

    0x7d40e723,// 121 PAY  87 

    0x84501466,// 122 PAY  88 

    0x15145f99,// 123 PAY  89 

    0xd96005b0,// 124 PAY  90 

    0xff6fe2ac,// 125 PAY  91 

    0x95d90456,// 126 PAY  92 

    0x783005c6,// 127 PAY  93 

    0xc7533985,// 128 PAY  94 

    0x191d543a,// 129 PAY  95 

    0x1b409860,// 130 PAY  96 

    0x5601a72e,// 131 PAY  97 

    0x4ebd7b2e,// 132 PAY  98 

    0x82f0044a,// 133 PAY  99 

    0x84176321,// 134 PAY 100 

    0x2aa7298f,// 135 PAY 101 

    0xcc6913d8,// 136 PAY 102 

    0xefc72c54,// 137 PAY 103 

    0x79af1a98,// 138 PAY 104 

    0x18bb4b1f,// 139 PAY 105 

    0x612bb8bb,// 140 PAY 106 

    0xfc31b5dc,// 141 PAY 107 

    0x39312b0f,// 142 PAY 108 

    0xfc06f893,// 143 PAY 109 

    0x63f93f69,// 144 PAY 110 

    0x62931922,// 145 PAY 111 

    0xeb057a7f,// 146 PAY 112 

    0x9bf40680,// 147 PAY 113 

    0xc4d98aad,// 148 PAY 114 

    0xc6b920ea,// 149 PAY 115 

    0x2c1f6cf6,// 150 PAY 116 

    0x7166525e,// 151 PAY 117 

    0xd1067da3,// 152 PAY 118 

    0xa3ca216d,// 153 PAY 119 

    0x4212dfd1,// 154 PAY 120 

    0x539ffe62,// 155 PAY 121 

    0xbde82535,// 156 PAY 122 

    0x9f8144e4,// 157 PAY 123 

    0x834ac4b0,// 158 PAY 124 

    0x65b9d5ce,// 159 PAY 125 

    0xf8c4c718,// 160 PAY 126 

    0xd044d0fe,// 161 PAY 127 

    0x62e48565,// 162 PAY 128 

    0x80e5d09e,// 163 PAY 129 

    0x4ba985c9,// 164 PAY 130 

    0x96ad0613,// 165 PAY 131 

    0x291c6b26,// 166 PAY 132 

    0x7866055b,// 167 PAY 133 

    0x7fb216ca,// 168 PAY 134 

    0xe9d07e3b,// 169 PAY 135 

    0x6fdc40b1,// 170 PAY 136 

    0xa55d67f3,// 171 PAY 137 

    0x0b9cc94e,// 172 PAY 138 

    0x424deecf,// 173 PAY 139 

    0xafd36b37,// 174 PAY 140 

    0xf2a582be,// 175 PAY 141 

    0xa0604b7c,// 176 PAY 142 

    0x567a4d00,// 177 PAY 143 

/// STA is 1 words. 

/// STA num_pkts       : 74 

/// STA pkt_idx        : 189 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe9 

    0x02f5e94a // 178 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt3_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806628c1,// 4 SCX   2 

    0x00004282,// 5 SCX   3 

    0xb3b33cf9,// 6 SCX   4 

    0xe241f18d,// 7 SCX   5 

    0xecd16d96,// 8 SCX   6 

    0xf87d4776,// 9 SCX   7 

    0x44a376b7,// 10 SCX   8 

    0x43db68e8,// 11 SCX   9 

    0x6ccc55ff,// 12 SCX  10 

    0x18914a33,// 13 SCX  11 

    0x02122ee9,// 14 SCX  12 

    0xaac3ba86,// 15 SCX  13 

    0x42474a42,// 16 SCX  14 

    0xf220f167,// 17 SCX  15 

    0xf213b9c6,// 18 SCX  16 

    0x969c9722,// 19 SCX  17 

    0x05926dd5,// 20 SCX  18 

    0x53213ce6,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1465 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 589 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 589 

/// BFD lencrypto      : 240 

/// BFD ofstcrypto     : 284 

/// BFD (ofst+len)cry  : 524 

/// BFD ofstiv         : 176 

/// BFD ofsticv        : 1200 

    0x0000024d,// 22 BFD   1 

    0x011c00f0,// 23 BFD   2 

    0x04b000b0,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x0300b530,// 25 MFM   1 

/// BDA is 368 words. 

/// BDA size     is 1465 (0x5b9) 

/// BDA id       is 0x61e 

    0x05b9061e,// 26 BDA   1 

/// PAY Generic Data size   : 1465 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x3dcf6fa7,// 27 PAY   1 

    0x62ab18fe,// 28 PAY   2 

    0x80220751,// 29 PAY   3 

    0x5e07eee5,// 30 PAY   4 

    0x500508e9,// 31 PAY   5 

    0x91241e0c,// 32 PAY   6 

    0xb1dd6761,// 33 PAY   7 

    0xa71ba8ed,// 34 PAY   8 

    0xd2853a87,// 35 PAY   9 

    0xf225b47f,// 36 PAY  10 

    0x2911bbde,// 37 PAY  11 

    0xc53a2e43,// 38 PAY  12 

    0x5e329820,// 39 PAY  13 

    0x388b4f7c,// 40 PAY  14 

    0x3eb16c0f,// 41 PAY  15 

    0x0a2dd7ce,// 42 PAY  16 

    0xd58bc84e,// 43 PAY  17 

    0x94abdb09,// 44 PAY  18 

    0x240d9aca,// 45 PAY  19 

    0x9ef06fc3,// 46 PAY  20 

    0xdba1cbeb,// 47 PAY  21 

    0xdba3d296,// 48 PAY  22 

    0x78d375c1,// 49 PAY  23 

    0x188c7d0d,// 50 PAY  24 

    0xd42bad77,// 51 PAY  25 

    0x24474aac,// 52 PAY  26 

    0x1436c8e1,// 53 PAY  27 

    0x2980a233,// 54 PAY  28 

    0x05c683ce,// 55 PAY  29 

    0x86b6a3dc,// 56 PAY  30 

    0x5a14c054,// 57 PAY  31 

    0x54c9897f,// 58 PAY  32 

    0x13a55edd,// 59 PAY  33 

    0x874f90d4,// 60 PAY  34 

    0xddd7db5c,// 61 PAY  35 

    0xf9e9e0f9,// 62 PAY  36 

    0x13455c2c,// 63 PAY  37 

    0x43656b57,// 64 PAY  38 

    0x9c33a077,// 65 PAY  39 

    0xe3497662,// 66 PAY  40 

    0x3eb2dc68,// 67 PAY  41 

    0x7598208a,// 68 PAY  42 

    0xa6f6abfc,// 69 PAY  43 

    0xca151563,// 70 PAY  44 

    0x18387bc3,// 71 PAY  45 

    0x25e464e5,// 72 PAY  46 

    0x511942c3,// 73 PAY  47 

    0x1a734805,// 74 PAY  48 

    0x5e21ef4a,// 75 PAY  49 

    0x0a13095a,// 76 PAY  50 

    0x7c2df976,// 77 PAY  51 

    0xe5258e51,// 78 PAY  52 

    0x4423f165,// 79 PAY  53 

    0x9a7dd970,// 80 PAY  54 

    0xd346c855,// 81 PAY  55 

    0xb0d7a56f,// 82 PAY  56 

    0xf827f69c,// 83 PAY  57 

    0xc3ea28ac,// 84 PAY  58 

    0x2d1bc12d,// 85 PAY  59 

    0xb725a87e,// 86 PAY  60 

    0x20c55069,// 87 PAY  61 

    0xd1ab3607,// 88 PAY  62 

    0xe6345e47,// 89 PAY  63 

    0x130e20bf,// 90 PAY  64 

    0x76a80e35,// 91 PAY  65 

    0xcff34685,// 92 PAY  66 

    0x871029af,// 93 PAY  67 

    0xc3608935,// 94 PAY  68 

    0x82746d95,// 95 PAY  69 

    0xc261a3a0,// 96 PAY  70 

    0x85123bf2,// 97 PAY  71 

    0x06195129,// 98 PAY  72 

    0x92522f8a,// 99 PAY  73 

    0x6256ad38,// 100 PAY  74 

    0xad6623b1,// 101 PAY  75 

    0xaa62d476,// 102 PAY  76 

    0xde5ff71f,// 103 PAY  77 

    0x7f69166f,// 104 PAY  78 

    0x88b813c6,// 105 PAY  79 

    0xab633d7b,// 106 PAY  80 

    0xce1a694e,// 107 PAY  81 

    0xbbbe1616,// 108 PAY  82 

    0x9abc7d4d,// 109 PAY  83 

    0xcced2269,// 110 PAY  84 

    0xd566aa96,// 111 PAY  85 

    0x2863ef1b,// 112 PAY  86 

    0xe6c119cc,// 113 PAY  87 

    0x7d299b86,// 114 PAY  88 

    0x0b49f91d,// 115 PAY  89 

    0x24d7f6bb,// 116 PAY  90 

    0xbd0d8a90,// 117 PAY  91 

    0xaf247c55,// 118 PAY  92 

    0xfa006a67,// 119 PAY  93 

    0x5a860ea6,// 120 PAY  94 

    0xdce8e3c7,// 121 PAY  95 

    0x453af2d2,// 122 PAY  96 

    0x1771ab7e,// 123 PAY  97 

    0xe6aa8d96,// 124 PAY  98 

    0xf127747d,// 125 PAY  99 

    0x81a98330,// 126 PAY 100 

    0x540cc061,// 127 PAY 101 

    0xbbcf0e76,// 128 PAY 102 

    0xfb195aba,// 129 PAY 103 

    0x139bd2eb,// 130 PAY 104 

    0xac499554,// 131 PAY 105 

    0xa74b6a61,// 132 PAY 106 

    0xd202104b,// 133 PAY 107 

    0x4ec02fc6,// 134 PAY 108 

    0xc2e3a6ca,// 135 PAY 109 

    0xb9b4036e,// 136 PAY 110 

    0xc51204c9,// 137 PAY 111 

    0xf09360ac,// 138 PAY 112 

    0x6ca40103,// 139 PAY 113 

    0xea9cdd16,// 140 PAY 114 

    0xcaaea821,// 141 PAY 115 

    0xeaf705d3,// 142 PAY 116 

    0x79961fa0,// 143 PAY 117 

    0x8954b2a5,// 144 PAY 118 

    0x17eb77ee,// 145 PAY 119 

    0x98eda838,// 146 PAY 120 

    0x4246ea6d,// 147 PAY 121 

    0x4b0f8216,// 148 PAY 122 

    0xf06dfa82,// 149 PAY 123 

    0x58dd663e,// 150 PAY 124 

    0xe3d563b4,// 151 PAY 125 

    0x485c9430,// 152 PAY 126 

    0x595808b4,// 153 PAY 127 

    0x5e0de989,// 154 PAY 128 

    0x65cddca1,// 155 PAY 129 

    0xd508eeb4,// 156 PAY 130 

    0x512e5cd6,// 157 PAY 131 

    0xa4055a37,// 158 PAY 132 

    0x3610843d,// 159 PAY 133 

    0x6dd9972b,// 160 PAY 134 

    0x88ce1b36,// 161 PAY 135 

    0x4dcc177c,// 162 PAY 136 

    0x5d8b2593,// 163 PAY 137 

    0x97869cd8,// 164 PAY 138 

    0x1af02d55,// 165 PAY 139 

    0x1a1fde42,// 166 PAY 140 

    0xe66dddbf,// 167 PAY 141 

    0x059a7124,// 168 PAY 142 

    0xd2e8f7ff,// 169 PAY 143 

    0x51bdab53,// 170 PAY 144 

    0x9b3e841c,// 171 PAY 145 

    0x2c8a1683,// 172 PAY 146 

    0xe412ad30,// 173 PAY 147 

    0x170b18db,// 174 PAY 148 

    0x182514f7,// 175 PAY 149 

    0xea775719,// 176 PAY 150 

    0x5e732298,// 177 PAY 151 

    0xdf5c2193,// 178 PAY 152 

    0x61baf9be,// 179 PAY 153 

    0x5518c6c3,// 180 PAY 154 

    0x4b77ffe9,// 181 PAY 155 

    0xe5a073bf,// 182 PAY 156 

    0x79aabf6f,// 183 PAY 157 

    0xd578986c,// 184 PAY 158 

    0xa3ab7be7,// 185 PAY 159 

    0x6ed1c469,// 186 PAY 160 

    0xf4cdc9d2,// 187 PAY 161 

    0x0701ed05,// 188 PAY 162 

    0x56716e73,// 189 PAY 163 

    0xbbb3eb0f,// 190 PAY 164 

    0x0a809d8a,// 191 PAY 165 

    0x48cf0ee1,// 192 PAY 166 

    0x9f76a68a,// 193 PAY 167 

    0x61d4cc62,// 194 PAY 168 

    0xc3b35c40,// 195 PAY 169 

    0x1e8f7098,// 196 PAY 170 

    0xea712371,// 197 PAY 171 

    0xdec9aaf3,// 198 PAY 172 

    0x4c0e0b48,// 199 PAY 173 

    0x72529453,// 200 PAY 174 

    0x9861866c,// 201 PAY 175 

    0xb5f62c4a,// 202 PAY 176 

    0x0d171464,// 203 PAY 177 

    0x8c34a1ac,// 204 PAY 178 

    0x74e21190,// 205 PAY 179 

    0x766a9f1b,// 206 PAY 180 

    0x8b35a38a,// 207 PAY 181 

    0x0609d668,// 208 PAY 182 

    0x36647635,// 209 PAY 183 

    0x349390b4,// 210 PAY 184 

    0x922eba96,// 211 PAY 185 

    0xaa416ee5,// 212 PAY 186 

    0x826cbff9,// 213 PAY 187 

    0xc2dc4e36,// 214 PAY 188 

    0x59298811,// 215 PAY 189 

    0xcc38f797,// 216 PAY 190 

    0x8a8e1516,// 217 PAY 191 

    0x08cce90d,// 218 PAY 192 

    0xbbd88e8a,// 219 PAY 193 

    0x532de01d,// 220 PAY 194 

    0x3dfa1a82,// 221 PAY 195 

    0xad0f6d47,// 222 PAY 196 

    0x3e76235d,// 223 PAY 197 

    0xf047eeaa,// 224 PAY 198 

    0x5c37a513,// 225 PAY 199 

    0xa7d3aa7e,// 226 PAY 200 

    0xb9f38fd3,// 227 PAY 201 

    0x46f66432,// 228 PAY 202 

    0x2297f6a0,// 229 PAY 203 

    0x7d6e3256,// 230 PAY 204 

    0xa22c7b1e,// 231 PAY 205 

    0xdafc38cd,// 232 PAY 206 

    0xcd0bb840,// 233 PAY 207 

    0x69ad876e,// 234 PAY 208 

    0xeb1746ec,// 235 PAY 209 

    0x8bb65def,// 236 PAY 210 

    0x48e42211,// 237 PAY 211 

    0xaff69937,// 238 PAY 212 

    0x890d7904,// 239 PAY 213 

    0x2645c30b,// 240 PAY 214 

    0x4d15039d,// 241 PAY 215 

    0x2da9edf5,// 242 PAY 216 

    0x239ed126,// 243 PAY 217 

    0x26b2bee3,// 244 PAY 218 

    0x44693ffb,// 245 PAY 219 

    0xd845bbf4,// 246 PAY 220 

    0x073a2193,// 247 PAY 221 

    0x64a32fd1,// 248 PAY 222 

    0xe67e3e9b,// 249 PAY 223 

    0xddb148b3,// 250 PAY 224 

    0x8c9cca9b,// 251 PAY 225 

    0x21e933da,// 252 PAY 226 

    0x08d07b6f,// 253 PAY 227 

    0x9f2814ac,// 254 PAY 228 

    0x28e3a119,// 255 PAY 229 

    0x38a4c30f,// 256 PAY 230 

    0xad7f328c,// 257 PAY 231 

    0xf65bc813,// 258 PAY 232 

    0xb37275d2,// 259 PAY 233 

    0x0407c360,// 260 PAY 234 

    0x42838d66,// 261 PAY 235 

    0x60fdd401,// 262 PAY 236 

    0xcf57abc0,// 263 PAY 237 

    0x8a1e658a,// 264 PAY 238 

    0x2609394c,// 265 PAY 239 

    0xa2c663d5,// 266 PAY 240 

    0x71cddf17,// 267 PAY 241 

    0xbe8fb0e7,// 268 PAY 242 

    0xc59c35f5,// 269 PAY 243 

    0xacc4fb12,// 270 PAY 244 

    0xf96b41fc,// 271 PAY 245 

    0x65da2988,// 272 PAY 246 

    0xa9dfe988,// 273 PAY 247 

    0x711fb787,// 274 PAY 248 

    0xcee88a88,// 275 PAY 249 

    0xf42ab9f1,// 276 PAY 250 

    0xb12370e7,// 277 PAY 251 

    0x2b59f368,// 278 PAY 252 

    0x95717141,// 279 PAY 253 

    0x43f4e93c,// 280 PAY 254 

    0xd9fe3631,// 281 PAY 255 

    0x417479f6,// 282 PAY 256 

    0xa0f884e0,// 283 PAY 257 

    0x1b1257b3,// 284 PAY 258 

    0x4b856b06,// 285 PAY 259 

    0xb43c3fa1,// 286 PAY 260 

    0xde3286db,// 287 PAY 261 

    0xbf09bc60,// 288 PAY 262 

    0x4d0ea9d9,// 289 PAY 263 

    0x595b6ba4,// 290 PAY 264 

    0xc9523860,// 291 PAY 265 

    0xfa19cda8,// 292 PAY 266 

    0x50065e84,// 293 PAY 267 

    0xfd25ac4a,// 294 PAY 268 

    0x676e0256,// 295 PAY 269 

    0xcc6287be,// 296 PAY 270 

    0x5963b0ae,// 297 PAY 271 

    0xee4bf4f5,// 298 PAY 272 

    0x57946741,// 299 PAY 273 

    0xda59ec12,// 300 PAY 274 

    0x2e52beb8,// 301 PAY 275 

    0xda859d3c,// 302 PAY 276 

    0xc1c61900,// 303 PAY 277 

    0xf5ddc70b,// 304 PAY 278 

    0x54faca7f,// 305 PAY 279 

    0xb1a00dca,// 306 PAY 280 

    0x36c0fe98,// 307 PAY 281 

    0x7f9e50c7,// 308 PAY 282 

    0x60e710e1,// 309 PAY 283 

    0x6f02385b,// 310 PAY 284 

    0x328b8937,// 311 PAY 285 

    0x42cc3475,// 312 PAY 286 

    0xfc7a220b,// 313 PAY 287 

    0x39545885,// 314 PAY 288 

    0x44dc382f,// 315 PAY 289 

    0x7bf17122,// 316 PAY 290 

    0xbb2b6eb0,// 317 PAY 291 

    0xebcbf550,// 318 PAY 292 

    0xb68810aa,// 319 PAY 293 

    0xa7333513,// 320 PAY 294 

    0x43b49ea7,// 321 PAY 295 

    0x47990243,// 322 PAY 296 

    0x4cedf958,// 323 PAY 297 

    0xf953d373,// 324 PAY 298 

    0xf4180637,// 325 PAY 299 

    0x9f2fccae,// 326 PAY 300 

    0xaa87aa8e,// 327 PAY 301 

    0x37e50075,// 328 PAY 302 

    0x4fc99ebe,// 329 PAY 303 

    0xbe6017be,// 330 PAY 304 

    0x17a86db6,// 331 PAY 305 

    0x861baa0e,// 332 PAY 306 

    0x4d5f68c8,// 333 PAY 307 

    0xd1449091,// 334 PAY 308 

    0x769e8b0b,// 335 PAY 309 

    0xe3ad286d,// 336 PAY 310 

    0x7fc0bd05,// 337 PAY 311 

    0xb755a713,// 338 PAY 312 

    0x5671e0ee,// 339 PAY 313 

    0xaa2d6f95,// 340 PAY 314 

    0x2c1735fc,// 341 PAY 315 

    0x54cbf907,// 342 PAY 316 

    0x2391f994,// 343 PAY 317 

    0xe6081dc4,// 344 PAY 318 

    0x20c988b1,// 345 PAY 319 

    0x66544887,// 346 PAY 320 

    0x7b61de34,// 347 PAY 321 

    0x31561d13,// 348 PAY 322 

    0x930043ef,// 349 PAY 323 

    0x0ad1ebe9,// 350 PAY 324 

    0xf8cac3a6,// 351 PAY 325 

    0xecfabfb2,// 352 PAY 326 

    0x72f0e74d,// 353 PAY 327 

    0xfbeb434a,// 354 PAY 328 

    0x430343e5,// 355 PAY 329 

    0x46afeb4a,// 356 PAY 330 

    0xca0e97de,// 357 PAY 331 

    0x3d73eb96,// 358 PAY 332 

    0x5ea15a03,// 359 PAY 333 

    0xed58a651,// 360 PAY 334 

    0xddffb565,// 361 PAY 335 

    0xd5664c4f,// 362 PAY 336 

    0x3c3448ca,// 363 PAY 337 

    0x1ac0ff70,// 364 PAY 338 

    0x09fe17b4,// 365 PAY 339 

    0x507d31c7,// 366 PAY 340 

    0x49334560,// 367 PAY 341 

    0x7303b13a,// 368 PAY 342 

    0x5cddf1fd,// 369 PAY 343 

    0x592b8a0f,// 370 PAY 344 

    0x144e7fe3,// 371 PAY 345 

    0x365cd26f,// 372 PAY 346 

    0x2f1d68ee,// 373 PAY 347 

    0xfd7a4061,// 374 PAY 348 

    0xad4a7438,// 375 PAY 349 

    0x504f8d54,// 376 PAY 350 

    0x81dadc6f,// 377 PAY 351 

    0x5b049b7e,// 378 PAY 352 

    0xa1d21a76,// 379 PAY 353 

    0x476bfe7e,// 380 PAY 354 

    0xa799e80d,// 381 PAY 355 

    0x2371051b,// 382 PAY 356 

    0x3c13b123,// 383 PAY 357 

    0xb89a46a0,// 384 PAY 358 

    0xe4f5bf21,// 385 PAY 359 

    0xe3f1ed2b,// 386 PAY 360 

    0x01599d7a,// 387 PAY 361 

    0x05f786d9,// 388 PAY 362 

    0xfc0b495b,// 389 PAY 363 

    0x9b7a6db0,// 390 PAY 364 

    0x473b73e1,// 391 PAY 365 

    0xd352d10a,// 392 PAY 366 

    0x06000000,// 393 PAY 367 

/// STA is 1 words. 

/// STA num_pkts       : 112 

/// STA pkt_idx        : 18 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb1 

    0x0049b170 // 394 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt4_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x8066280d,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0x4184ce82,// 6 SCX   4 

    0xbfc876e6,// 7 SCX   5 

    0xaa0b2483,// 8 SCX   6 

    0xbe153dab,// 9 SCX   7 

    0x049046dd,// 10 SCX   8 

    0x4850632c,// 11 SCX   9 

    0x65f3341f,// 12 SCX  10 

    0x1062a2fb,// 13 SCX  11 

    0x2d377281,// 14 SCX  12 

    0xc970498f,// 15 SCX  13 

    0xe1679499,// 16 SCX  14 

    0x35ccd899,// 17 SCX  15 

    0xa3fee89d,// 18 SCX  16 

    0x153eec2f,// 19 SCX  17 

    0x8760b866,// 20 SCX  18 

    0xa719c9d5,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1646 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 482 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 482 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 184 

/// BFD (ofst+len)cry  : 240 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 736 

    0x000001e2,// 22 BFD   1 

    0x00b80038,// 23 BFD   2 

    0x02e000ac,// 24 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 17 

    0x170076f2,// 25 MFM   1 

    0xd4795b24,// 26 MFM   2 

    0x13ce3b43,// 27 MFM   3 

    0x34600000,// 28 MFM   4 

/// BDA is 413 words. 

/// BDA size     is 1646 (0x66e) 

/// BDA id       is 0xff9 

    0x066e0ff9,// 29 BDA   1 

/// PAY Generic Data size   : 1646 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xec57cc42,// 30 PAY   1 

    0x0b0e4f0b,// 31 PAY   2 

    0xcdea33e3,// 32 PAY   3 

    0x953d5d55,// 33 PAY   4 

    0x0d43395d,// 34 PAY   5 

    0xb758428c,// 35 PAY   6 

    0xbcaa4e60,// 36 PAY   7 

    0x68a02f4c,// 37 PAY   8 

    0x05e03f5f,// 38 PAY   9 

    0xa874aec0,// 39 PAY  10 

    0x807d4f49,// 40 PAY  11 

    0x66c263ab,// 41 PAY  12 

    0x750b4f5a,// 42 PAY  13 

    0xd2591025,// 43 PAY  14 

    0xea482b57,// 44 PAY  15 

    0x8b01d684,// 45 PAY  16 

    0xed220ab8,// 46 PAY  17 

    0xdf8430ba,// 47 PAY  18 

    0x45a8f56e,// 48 PAY  19 

    0x83e7fc1c,// 49 PAY  20 

    0x20abc50c,// 50 PAY  21 

    0x0a9cd7db,// 51 PAY  22 

    0x82ae2f8c,// 52 PAY  23 

    0xfc5fc230,// 53 PAY  24 

    0xc12081d3,// 54 PAY  25 

    0x0183c386,// 55 PAY  26 

    0xd8f9b79e,// 56 PAY  27 

    0x7a021382,// 57 PAY  28 

    0x4bfb8e34,// 58 PAY  29 

    0xd0a270b7,// 59 PAY  30 

    0xa004b407,// 60 PAY  31 

    0x80b65480,// 61 PAY  32 

    0xd04c17e5,// 62 PAY  33 

    0x7af956f3,// 63 PAY  34 

    0xce50f284,// 64 PAY  35 

    0xe7bed5f3,// 65 PAY  36 

    0x323ef08e,// 66 PAY  37 

    0x62d0e779,// 67 PAY  38 

    0x81f8f0ba,// 68 PAY  39 

    0x1cd9f79e,// 69 PAY  40 

    0xd43057e8,// 70 PAY  41 

    0x7ce9d632,// 71 PAY  42 

    0x594b464d,// 72 PAY  43 

    0x65141b2b,// 73 PAY  44 

    0xbeae74f3,// 74 PAY  45 

    0xf034c156,// 75 PAY  46 

    0xa1b21e62,// 76 PAY  47 

    0xebf8a519,// 77 PAY  48 

    0x65ac5cf6,// 78 PAY  49 

    0x02e921aa,// 79 PAY  50 

    0xfe1e09b7,// 80 PAY  51 

    0xcb4793d6,// 81 PAY  52 

    0x8606acad,// 82 PAY  53 

    0xf458b643,// 83 PAY  54 

    0x26d895d9,// 84 PAY  55 

    0x94d13a50,// 85 PAY  56 

    0x53b7a33a,// 86 PAY  57 

    0x462cbd80,// 87 PAY  58 

    0x7bc67756,// 88 PAY  59 

    0x749011b3,// 89 PAY  60 

    0xe9144cf4,// 90 PAY  61 

    0xbec2531a,// 91 PAY  62 

    0xfef7ae99,// 92 PAY  63 

    0xcecd9f33,// 93 PAY  64 

    0x8e8467d3,// 94 PAY  65 

    0x691d51d0,// 95 PAY  66 

    0x053d5f45,// 96 PAY  67 

    0x69e48bf5,// 97 PAY  68 

    0xe428776b,// 98 PAY  69 

    0x323f382c,// 99 PAY  70 

    0x3ca1cec9,// 100 PAY  71 

    0x1e77bd66,// 101 PAY  72 

    0x6388ee59,// 102 PAY  73 

    0xc915c172,// 103 PAY  74 

    0x8c789ebc,// 104 PAY  75 

    0xc8ad18db,// 105 PAY  76 

    0xc2883ebc,// 106 PAY  77 

    0x4adc7a7d,// 107 PAY  78 

    0x8954472e,// 108 PAY  79 

    0xb82a20f0,// 109 PAY  80 

    0xe400a2c8,// 110 PAY  81 

    0xa150c4f1,// 111 PAY  82 

    0x1073df46,// 112 PAY  83 

    0x72549864,// 113 PAY  84 

    0x9afca132,// 114 PAY  85 

    0xffa41b44,// 115 PAY  86 

    0x105ca52e,// 116 PAY  87 

    0x2ba33c3e,// 117 PAY  88 

    0x41b01629,// 118 PAY  89 

    0xa33847ed,// 119 PAY  90 

    0x477181d2,// 120 PAY  91 

    0x8bcb059f,// 121 PAY  92 

    0x47ab2bd5,// 122 PAY  93 

    0x16c9c1c6,// 123 PAY  94 

    0x921b7340,// 124 PAY  95 

    0x6c6c16fd,// 125 PAY  96 

    0x19d8486a,// 126 PAY  97 

    0x1b573b25,// 127 PAY  98 

    0x7078289c,// 128 PAY  99 

    0x347ad75c,// 129 PAY 100 

    0xdeb884e7,// 130 PAY 101 

    0x0eb68a7e,// 131 PAY 102 

    0x8a69cae6,// 132 PAY 103 

    0x14ef66a6,// 133 PAY 104 

    0xba3cc7c0,// 134 PAY 105 

    0xe8647a51,// 135 PAY 106 

    0x20412613,// 136 PAY 107 

    0xda85949f,// 137 PAY 108 

    0xd244d135,// 138 PAY 109 

    0xa9545a07,// 139 PAY 110 

    0x1a48b401,// 140 PAY 111 

    0xfe3c6059,// 141 PAY 112 

    0x46c3ef67,// 142 PAY 113 

    0x4b5d4b15,// 143 PAY 114 

    0x783f7153,// 144 PAY 115 

    0x3a974454,// 145 PAY 116 

    0xff623323,// 146 PAY 117 

    0x56c5dd4c,// 147 PAY 118 

    0x62ea4ac5,// 148 PAY 119 

    0x8fcf859b,// 149 PAY 120 

    0xdb701b44,// 150 PAY 121 

    0xda2fcca7,// 151 PAY 122 

    0xe3a2781c,// 152 PAY 123 

    0x4a0fd1c5,// 153 PAY 124 

    0xb0f95e42,// 154 PAY 125 

    0x1ec90ffc,// 155 PAY 126 

    0x720184d5,// 156 PAY 127 

    0x1b292776,// 157 PAY 128 

    0x564e9d14,// 158 PAY 129 

    0x2aae6dfe,// 159 PAY 130 

    0x94860e0b,// 160 PAY 131 

    0xcb54ff3c,// 161 PAY 132 

    0x70e6514e,// 162 PAY 133 

    0xbae5598a,// 163 PAY 134 

    0x5d4dc8d6,// 164 PAY 135 

    0xfedf7321,// 165 PAY 136 

    0x49293cff,// 166 PAY 137 

    0xf3040369,// 167 PAY 138 

    0xc8bafd8f,// 168 PAY 139 

    0xc0bbd333,// 169 PAY 140 

    0xac1e3992,// 170 PAY 141 

    0xe9413114,// 171 PAY 142 

    0x39cd5886,// 172 PAY 143 

    0xa9f9aaa5,// 173 PAY 144 

    0xec2ff718,// 174 PAY 145 

    0x06d86028,// 175 PAY 146 

    0x1b3b93b7,// 176 PAY 147 

    0xc3ed43c3,// 177 PAY 148 

    0x921ce0d2,// 178 PAY 149 

    0x6ee2da95,// 179 PAY 150 

    0x95db2eeb,// 180 PAY 151 

    0xb757293a,// 181 PAY 152 

    0xd3dd244f,// 182 PAY 153 

    0x28eaf696,// 183 PAY 154 

    0x3a398fdf,// 184 PAY 155 

    0xccad862a,// 185 PAY 156 

    0x84cc2aca,// 186 PAY 157 

    0x9172410a,// 187 PAY 158 

    0x4cad7e69,// 188 PAY 159 

    0xafc44977,// 189 PAY 160 

    0x9508aa75,// 190 PAY 161 

    0x3d809c0a,// 191 PAY 162 

    0x2ee894d7,// 192 PAY 163 

    0x8ddfccb1,// 193 PAY 164 

    0xccbf6805,// 194 PAY 165 

    0x8d40b13f,// 195 PAY 166 

    0xaa40fd23,// 196 PAY 167 

    0x5483b58e,// 197 PAY 168 

    0x7c986ebd,// 198 PAY 169 

    0xe46dc773,// 199 PAY 170 

    0xe68c5697,// 200 PAY 171 

    0xd2df36e2,// 201 PAY 172 

    0xe9c186d3,// 202 PAY 173 

    0xbd3af3a6,// 203 PAY 174 

    0x1b8996dc,// 204 PAY 175 

    0x04907115,// 205 PAY 176 

    0x148b6a12,// 206 PAY 177 

    0xb14666c5,// 207 PAY 178 

    0x3c6e92db,// 208 PAY 179 

    0x6a64e33b,// 209 PAY 180 

    0x08861609,// 210 PAY 181 

    0x9a3b9c36,// 211 PAY 182 

    0xdd73023e,// 212 PAY 183 

    0x5bf1cdf6,// 213 PAY 184 

    0xe0adfea6,// 214 PAY 185 

    0x88a5b3aa,// 215 PAY 186 

    0xc77fe16f,// 216 PAY 187 

    0xc857ccbe,// 217 PAY 188 

    0xbb854fe9,// 218 PAY 189 

    0x61704a96,// 219 PAY 190 

    0x2de19050,// 220 PAY 191 

    0x6cef3f79,// 221 PAY 192 

    0x8d217784,// 222 PAY 193 

    0xbbde8cf6,// 223 PAY 194 

    0xbb8df29e,// 224 PAY 195 

    0x45458a13,// 225 PAY 196 

    0xe251ffda,// 226 PAY 197 

    0x1fc5b97c,// 227 PAY 198 

    0x4f842917,// 228 PAY 199 

    0x9a3f944e,// 229 PAY 200 

    0x6bc05cbb,// 230 PAY 201 

    0xe72e1447,// 231 PAY 202 

    0x3f462a38,// 232 PAY 203 

    0x092889a5,// 233 PAY 204 

    0x07598579,// 234 PAY 205 

    0xab0f0791,// 235 PAY 206 

    0x19531121,// 236 PAY 207 

    0xd11e23d7,// 237 PAY 208 

    0x062bc80c,// 238 PAY 209 

    0xce02506f,// 239 PAY 210 

    0x616f463e,// 240 PAY 211 

    0x3ac3f73b,// 241 PAY 212 

    0x31896526,// 242 PAY 213 

    0x3aa9ea22,// 243 PAY 214 

    0xd3ec24ba,// 244 PAY 215 

    0x946cb132,// 245 PAY 216 

    0xdf8244f1,// 246 PAY 217 

    0xf1fcc299,// 247 PAY 218 

    0x7c014a04,// 248 PAY 219 

    0x564610b2,// 249 PAY 220 

    0x1ac19a52,// 250 PAY 221 

    0x550953da,// 251 PAY 222 

    0xd7ca0016,// 252 PAY 223 

    0x0dd23a12,// 253 PAY 224 

    0xc010d7c6,// 254 PAY 225 

    0xacf93d95,// 255 PAY 226 

    0xc33b71c6,// 256 PAY 227 

    0x87bdc006,// 257 PAY 228 

    0x12a2546c,// 258 PAY 229 

    0x3b5ec29d,// 259 PAY 230 

    0x14481049,// 260 PAY 231 

    0x063f989a,// 261 PAY 232 

    0xc79b8dcf,// 262 PAY 233 

    0x7d38acae,// 263 PAY 234 

    0xcc3d19af,// 264 PAY 235 

    0x538b5843,// 265 PAY 236 

    0x55602636,// 266 PAY 237 

    0xed2d46bf,// 267 PAY 238 

    0x5c071b69,// 268 PAY 239 

    0x91715ce7,// 269 PAY 240 

    0x7a634502,// 270 PAY 241 

    0xa6cf9901,// 271 PAY 242 

    0x5c986634,// 272 PAY 243 

    0x7fdf6220,// 273 PAY 244 

    0x71769269,// 274 PAY 245 

    0x42a860b4,// 275 PAY 246 

    0xff39845b,// 276 PAY 247 

    0x112299f8,// 277 PAY 248 

    0x7b91f0ea,// 278 PAY 249 

    0x5e938aac,// 279 PAY 250 

    0x17d5cc18,// 280 PAY 251 

    0xc2e52025,// 281 PAY 252 

    0x4fac1fb6,// 282 PAY 253 

    0x9c763460,// 283 PAY 254 

    0xea614b56,// 284 PAY 255 

    0xdda8d7d3,// 285 PAY 256 

    0x52ab3fc4,// 286 PAY 257 

    0xb935bfaf,// 287 PAY 258 

    0x24195a12,// 288 PAY 259 

    0xede5f7d0,// 289 PAY 260 

    0x496d2430,// 290 PAY 261 

    0x1a6b4bd6,// 291 PAY 262 

    0x3197afe2,// 292 PAY 263 

    0x9e9e3b8d,// 293 PAY 264 

    0x161896f3,// 294 PAY 265 

    0xa574d79a,// 295 PAY 266 

    0x89574d46,// 296 PAY 267 

    0x63908fa4,// 297 PAY 268 

    0xb6187b02,// 298 PAY 269 

    0x8dd603d1,// 299 PAY 270 

    0x9e17b3cf,// 300 PAY 271 

    0x22c21190,// 301 PAY 272 

    0xdf1b0444,// 302 PAY 273 

    0xc1483cbd,// 303 PAY 274 

    0x0066d0bc,// 304 PAY 275 

    0x365987cf,// 305 PAY 276 

    0xd9cae268,// 306 PAY 277 

    0x1a706a8b,// 307 PAY 278 

    0x9dfd8079,// 308 PAY 279 

    0xca0e74cb,// 309 PAY 280 

    0x2f3ac9ec,// 310 PAY 281 

    0x53198637,// 311 PAY 282 

    0x74215705,// 312 PAY 283 

    0x8b19721f,// 313 PAY 284 

    0x75136567,// 314 PAY 285 

    0x0a79f9bb,// 315 PAY 286 

    0x96aab64c,// 316 PAY 287 

    0xe6d1535d,// 317 PAY 288 

    0x414d9c39,// 318 PAY 289 

    0x49da01da,// 319 PAY 290 

    0xc8729d9c,// 320 PAY 291 

    0x8d1ab53f,// 321 PAY 292 

    0x35c32306,// 322 PAY 293 

    0x8041832a,// 323 PAY 294 

    0xff31377c,// 324 PAY 295 

    0xec9fffa8,// 325 PAY 296 

    0xea989e54,// 326 PAY 297 

    0x8eea52ee,// 327 PAY 298 

    0x8a4131eb,// 328 PAY 299 

    0xa8a1f5bc,// 329 PAY 300 

    0xebd1656c,// 330 PAY 301 

    0x1c62b056,// 331 PAY 302 

    0x251138c1,// 332 PAY 303 

    0xec940eb4,// 333 PAY 304 

    0x7a0b0f93,// 334 PAY 305 

    0x8c95142c,// 335 PAY 306 

    0x8c913966,// 336 PAY 307 

    0x7f161322,// 337 PAY 308 

    0x63d87181,// 338 PAY 309 

    0x12dce921,// 339 PAY 310 

    0x60fc63be,// 340 PAY 311 

    0xca2c0ce9,// 341 PAY 312 

    0x0189f2f5,// 342 PAY 313 

    0x23be0521,// 343 PAY 314 

    0xf5af28c5,// 344 PAY 315 

    0xb33541a4,// 345 PAY 316 

    0x54b3f0a4,// 346 PAY 317 

    0xa0a892c3,// 347 PAY 318 

    0x2f7add54,// 348 PAY 319 

    0xffd48f48,// 349 PAY 320 

    0x332e5e30,// 350 PAY 321 

    0x9e3bab1d,// 351 PAY 322 

    0xdd2c213f,// 352 PAY 323 

    0x80199b26,// 353 PAY 324 

    0x5515f5a9,// 354 PAY 325 

    0x12c0c768,// 355 PAY 326 

    0x9eba46df,// 356 PAY 327 

    0xa4a2e735,// 357 PAY 328 

    0xb70b2cdb,// 358 PAY 329 

    0xb2969f02,// 359 PAY 330 

    0x0ff14b60,// 360 PAY 331 

    0xae5949dc,// 361 PAY 332 

    0xc81ff3ae,// 362 PAY 333 

    0x6dbd3f29,// 363 PAY 334 

    0x58012212,// 364 PAY 335 

    0x38952af9,// 365 PAY 336 

    0x1b114a7e,// 366 PAY 337 

    0xb9859cb1,// 367 PAY 338 

    0xc44185dc,// 368 PAY 339 

    0x14395fd1,// 369 PAY 340 

    0x67cb1b40,// 370 PAY 341 

    0x2a27ca7c,// 371 PAY 342 

    0x73f1c740,// 372 PAY 343 

    0xe0fdce20,// 373 PAY 344 

    0x42df1743,// 374 PAY 345 

    0x94a0ec48,// 375 PAY 346 

    0x6231b5fc,// 376 PAY 347 

    0xb45bd432,// 377 PAY 348 

    0x78a66043,// 378 PAY 349 

    0x01a66b40,// 379 PAY 350 

    0x149b28d5,// 380 PAY 351 

    0x5eb509c6,// 381 PAY 352 

    0x5999fec8,// 382 PAY 353 

    0x05f3d303,// 383 PAY 354 

    0x3dd0a538,// 384 PAY 355 

    0xf918eb79,// 385 PAY 356 

    0x66f53a89,// 386 PAY 357 

    0x1b6b702e,// 387 PAY 358 

    0xfb098168,// 388 PAY 359 

    0xc7244f94,// 389 PAY 360 

    0x15957908,// 390 PAY 361 

    0xf5f0f351,// 391 PAY 362 

    0x3a28b326,// 392 PAY 363 

    0xc0b06a6c,// 393 PAY 364 

    0x4d1170b7,// 394 PAY 365 

    0xb3d6bc2e,// 395 PAY 366 

    0x9f1d2506,// 396 PAY 367 

    0x2c6d887c,// 397 PAY 368 

    0xfa084936,// 398 PAY 369 

    0xae61a1a9,// 399 PAY 370 

    0xc71d5ecc,// 400 PAY 371 

    0x4fbc93db,// 401 PAY 372 

    0x76d2646b,// 402 PAY 373 

    0x08726d42,// 403 PAY 374 

    0xe156bd29,// 404 PAY 375 

    0xaed28808,// 405 PAY 376 

    0xb23e39ab,// 406 PAY 377 

    0xd1394bd2,// 407 PAY 378 

    0x6a78b792,// 408 PAY 379 

    0xf5e12253,// 409 PAY 380 

    0xd1a26b74,// 410 PAY 381 

    0xd9834e71,// 411 PAY 382 

    0x411ce544,// 412 PAY 383 

    0x03403e62,// 413 PAY 384 

    0x2e1309bf,// 414 PAY 385 

    0x1658b21a,// 415 PAY 386 

    0x08158030,// 416 PAY 387 

    0x0d6188b9,// 417 PAY 388 

    0xe24d2852,// 418 PAY 389 

    0x1ce1cd18,// 419 PAY 390 

    0x319f9c76,// 420 PAY 391 

    0xa0ce4a30,// 421 PAY 392 

    0x06cca2f2,// 422 PAY 393 

    0x6ebde4f8,// 423 PAY 394 

    0xe9d5650e,// 424 PAY 395 

    0x3fd5ddfe,// 425 PAY 396 

    0x95d7c6f5,// 426 PAY 397 

    0x57ac95ee,// 427 PAY 398 

    0xabef10aa,// 428 PAY 399 

    0x9f1a6a4d,// 429 PAY 400 

    0x0ebf9a21,// 430 PAY 401 

    0x2275be2b,// 431 PAY 402 

    0xc602a1e3,// 432 PAY 403 

    0xc1edb958,// 433 PAY 404 

    0x32e3d11c,// 434 PAY 405 

    0x419dc441,// 435 PAY 406 

    0x7b36e09e,// 436 PAY 407 

    0x91188066,// 437 PAY 408 

    0x08479f0b,// 438 PAY 409 

    0xb8dd2a57,// 439 PAY 410 

    0xc097c2ff,// 440 PAY 411 

    0x13670000,// 441 PAY 412 

/// STA is 1 words. 

/// STA num_pkts       : 162 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0051cea2 // 442 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt5_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806628aa,// 4 SCX   2 

    0x00001382,// 5 SCX   3 

    0xe4662f53,// 6 SCX   4 

    0x4b8f6f66,// 7 SCX   5 

    0xce369a32,// 8 SCX   6 

    0xffc51cc0,// 9 SCX   7 

    0x645da58f,// 10 SCX   8 

    0xffafdafc,// 11 SCX   9 

    0x0309a2b8,// 12 SCX  10 

    0x2a091b0c,// 13 SCX  11 

    0x257643de,// 14 SCX  12 

    0x03f6dc04,// 15 SCX  13 

    0x09ddd7e8,// 16 SCX  14 

    0x4ab5bec2,// 17 SCX  15 

    0x581aa9b2,// 18 SCX  16 

    0x99e4bc20,// 19 SCX  17 

    0xa36ccb75,// 20 SCX  18 

    0xf600bcb9,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1978 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 211 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 211 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 160 

/// BFD (ofst+len)cry  : 192 

/// BFD ofstiv         : 120 

/// BFD ofsticv        : 888 

    0x000000d3,// 22 BFD   1 

    0x00a00020,// 23 BFD   2 

    0x03780078,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x13004228,// 25 MFM   1 

    0x4ca1c7b2,// 26 MFM   2 

    0x9b7f3f40,// 27 MFM   3 

/// BDA is 496 words. 

/// BDA size     is 1978 (0x7ba) 

/// BDA id       is 0x93b0 

    0x07ba93b0,// 28 BDA   1 

/// PAY Generic Data size   : 1978 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x7681f907,// 29 PAY   1 

    0xce342827,// 30 PAY   2 

    0x087e23c4,// 31 PAY   3 

    0xc63a969b,// 32 PAY   4 

    0x7f6fbaad,// 33 PAY   5 

    0x6bab7bc1,// 34 PAY   6 

    0x95fdcc0d,// 35 PAY   7 

    0x8839d8a7,// 36 PAY   8 

    0x926fe04c,// 37 PAY   9 

    0xd56601ab,// 38 PAY  10 

    0x0e114077,// 39 PAY  11 

    0xe961d67a,// 40 PAY  12 

    0xeaffce4e,// 41 PAY  13 

    0x534b1d80,// 42 PAY  14 

    0xd9c1826c,// 43 PAY  15 

    0x27c05e97,// 44 PAY  16 

    0x6a6f33d5,// 45 PAY  17 

    0x9c33d5f7,// 46 PAY  18 

    0xa0e752a6,// 47 PAY  19 

    0x2da4dd64,// 48 PAY  20 

    0xe0197f70,// 49 PAY  21 

    0x50956054,// 50 PAY  22 

    0x4f0ce1bd,// 51 PAY  23 

    0xa549fcc4,// 52 PAY  24 

    0xa050aad7,// 53 PAY  25 

    0xc57a275c,// 54 PAY  26 

    0x100d58c4,// 55 PAY  27 

    0xd9f17d53,// 56 PAY  28 

    0xd8ebaf03,// 57 PAY  29 

    0x5cc7b719,// 58 PAY  30 

    0xb94e9277,// 59 PAY  31 

    0x4db318fd,// 60 PAY  32 

    0xc0a61f20,// 61 PAY  33 

    0xe49b958d,// 62 PAY  34 

    0x8c38b785,// 63 PAY  35 

    0x76719f40,// 64 PAY  36 

    0x3402f104,// 65 PAY  37 

    0xb5e7cf4f,// 66 PAY  38 

    0x944bfeb1,// 67 PAY  39 

    0xe4261750,// 68 PAY  40 

    0x1b380cc9,// 69 PAY  41 

    0x3d1466c5,// 70 PAY  42 

    0x237e0a1d,// 71 PAY  43 

    0xa43caf2d,// 72 PAY  44 

    0x779998cd,// 73 PAY  45 

    0x8f601b09,// 74 PAY  46 

    0x1b8986ca,// 75 PAY  47 

    0xe993d06c,// 76 PAY  48 

    0x5b0c581b,// 77 PAY  49 

    0x81169a51,// 78 PAY  50 

    0x1ff0822e,// 79 PAY  51 

    0x00a3d4f2,// 80 PAY  52 

    0x44abb8c7,// 81 PAY  53 

    0xdcebc9af,// 82 PAY  54 

    0x26ab6b3a,// 83 PAY  55 

    0x0910fff0,// 84 PAY  56 

    0x74286b88,// 85 PAY  57 

    0x8bea0963,// 86 PAY  58 

    0x970b7625,// 87 PAY  59 

    0xc51e22a1,// 88 PAY  60 

    0xfaba6d9f,// 89 PAY  61 

    0x93d5103f,// 90 PAY  62 

    0xd05b43f7,// 91 PAY  63 

    0x073999a3,// 92 PAY  64 

    0xe1b965b5,// 93 PAY  65 

    0x72a0be3d,// 94 PAY  66 

    0xdb86886f,// 95 PAY  67 

    0xcb767f67,// 96 PAY  68 

    0x145efabe,// 97 PAY  69 

    0xfd806240,// 98 PAY  70 

    0xd382aec0,// 99 PAY  71 

    0x60e9242b,// 100 PAY  72 

    0x16a2ca99,// 101 PAY  73 

    0x45e9d042,// 102 PAY  74 

    0xb5f3dfd3,// 103 PAY  75 

    0xb3e58e88,// 104 PAY  76 

    0x94b7d2eb,// 105 PAY  77 

    0x2937f30d,// 106 PAY  78 

    0xb6ae60fe,// 107 PAY  79 

    0xf4f9ca6f,// 108 PAY  80 

    0x34ec4687,// 109 PAY  81 

    0x4fa1411e,// 110 PAY  82 

    0x50a11221,// 111 PAY  83 

    0x87f56cff,// 112 PAY  84 

    0xb3519d95,// 113 PAY  85 

    0x350b20f6,// 114 PAY  86 

    0x634c9e71,// 115 PAY  87 

    0xf3e92070,// 116 PAY  88 

    0x6c5a8ae9,// 117 PAY  89 

    0x25f8469d,// 118 PAY  90 

    0x1d498039,// 119 PAY  91 

    0x921b1dd7,// 120 PAY  92 

    0x37259e65,// 121 PAY  93 

    0x64c0c588,// 122 PAY  94 

    0xcc3aca69,// 123 PAY  95 

    0x4a44a8ae,// 124 PAY  96 

    0x8df30cfd,// 125 PAY  97 

    0x390fb84b,// 126 PAY  98 

    0x9d3b38a4,// 127 PAY  99 

    0x40e0f1c8,// 128 PAY 100 

    0xe1d5cd68,// 129 PAY 101 

    0x8a799752,// 130 PAY 102 

    0x956f974a,// 131 PAY 103 

    0xc115bd5a,// 132 PAY 104 

    0xc2f51a70,// 133 PAY 105 

    0x66884643,// 134 PAY 106 

    0xe5d4c883,// 135 PAY 107 

    0xb4d2074c,// 136 PAY 108 

    0xc21236f9,// 137 PAY 109 

    0x82e2d664,// 138 PAY 110 

    0x7f5e1f9c,// 139 PAY 111 

    0x6cca6e77,// 140 PAY 112 

    0x99fb1dce,// 141 PAY 113 

    0xf89f5dd7,// 142 PAY 114 

    0x889140dc,// 143 PAY 115 

    0xefa07f38,// 144 PAY 116 

    0x8d76228c,// 145 PAY 117 

    0x11b72355,// 146 PAY 118 

    0x8f5839d6,// 147 PAY 119 

    0x0e96e6f0,// 148 PAY 120 

    0x13c9ad41,// 149 PAY 121 

    0x302c10ed,// 150 PAY 122 

    0xc5c1125f,// 151 PAY 123 

    0x0a810bdd,// 152 PAY 124 

    0x9474547d,// 153 PAY 125 

    0x5b771adb,// 154 PAY 126 

    0xc88449a0,// 155 PAY 127 

    0xf9ee1d00,// 156 PAY 128 

    0x1d26ea03,// 157 PAY 129 

    0xb931d1f2,// 158 PAY 130 

    0x9e94eeff,// 159 PAY 131 

    0x8e4cce2b,// 160 PAY 132 

    0xa9cca7b8,// 161 PAY 133 

    0xd139ac02,// 162 PAY 134 

    0xb254164a,// 163 PAY 135 

    0xa5ca2171,// 164 PAY 136 

    0xa86fc941,// 165 PAY 137 

    0x25ea8c83,// 166 PAY 138 

    0x6eca2ec0,// 167 PAY 139 

    0x21df7d8e,// 168 PAY 140 

    0x2f39cb04,// 169 PAY 141 

    0xf2176c2e,// 170 PAY 142 

    0xee91288d,// 171 PAY 143 

    0x2a805af8,// 172 PAY 144 

    0xd3e0ab30,// 173 PAY 145 

    0x459abab7,// 174 PAY 146 

    0xab154117,// 175 PAY 147 

    0x2519d51e,// 176 PAY 148 

    0x81c3eea0,// 177 PAY 149 

    0xa4a5eeb0,// 178 PAY 150 

    0xfad91757,// 179 PAY 151 

    0x22ef5d79,// 180 PAY 152 

    0x79c0a49e,// 181 PAY 153 

    0x3bc31dd9,// 182 PAY 154 

    0x0a8f75b4,// 183 PAY 155 

    0x3a911387,// 184 PAY 156 

    0xc6dd1961,// 185 PAY 157 

    0x6580891f,// 186 PAY 158 

    0x91c27be1,// 187 PAY 159 

    0x484be6cd,// 188 PAY 160 

    0x7f1afb86,// 189 PAY 161 

    0x7d2f5f19,// 190 PAY 162 

    0x06f6a856,// 191 PAY 163 

    0x82ae7fec,// 192 PAY 164 

    0xd0b98dfd,// 193 PAY 165 

    0x0db859a1,// 194 PAY 166 

    0xd15e61dc,// 195 PAY 167 

    0x5ad313b4,// 196 PAY 168 

    0x5b44e27b,// 197 PAY 169 

    0xe6698e99,// 198 PAY 170 

    0xe2eb9c28,// 199 PAY 171 

    0xa6c67960,// 200 PAY 172 

    0x00ceb51b,// 201 PAY 173 

    0x2a436959,// 202 PAY 174 

    0x0df09180,// 203 PAY 175 

    0xc76e2c74,// 204 PAY 176 

    0xaa2f4c8f,// 205 PAY 177 

    0x2fe16663,// 206 PAY 178 

    0x0f591eea,// 207 PAY 179 

    0x35289d4a,// 208 PAY 180 

    0x016e6d27,// 209 PAY 181 

    0xf68a5841,// 210 PAY 182 

    0x78196903,// 211 PAY 183 

    0x23f2c675,// 212 PAY 184 

    0x9fe61437,// 213 PAY 185 

    0x533c0c0a,// 214 PAY 186 

    0x2f38dd2a,// 215 PAY 187 

    0x46c13b4b,// 216 PAY 188 

    0x76081e60,// 217 PAY 189 

    0x94712d99,// 218 PAY 190 

    0x189e3c4e,// 219 PAY 191 

    0x332a397e,// 220 PAY 192 

    0x8abe0574,// 221 PAY 193 

    0x1ce4ca2a,// 222 PAY 194 

    0x3c7452a6,// 223 PAY 195 

    0xa0783dd5,// 224 PAY 196 

    0xd5758451,// 225 PAY 197 

    0x7d2c7f7a,// 226 PAY 198 

    0x9ff87980,// 227 PAY 199 

    0x6142d783,// 228 PAY 200 

    0xdb817157,// 229 PAY 201 

    0x6e2423ca,// 230 PAY 202 

    0x39910e9f,// 231 PAY 203 

    0x79960acf,// 232 PAY 204 

    0xd499ba46,// 233 PAY 205 

    0x81eef62e,// 234 PAY 206 

    0xa6ccc6f0,// 235 PAY 207 

    0x40e078e3,// 236 PAY 208 

    0x2dcb285c,// 237 PAY 209 

    0x3a4f3608,// 238 PAY 210 

    0x765e658a,// 239 PAY 211 

    0x7c48a3db,// 240 PAY 212 

    0xefacfb19,// 241 PAY 213 

    0x14d2b986,// 242 PAY 214 

    0x1d40c4e0,// 243 PAY 215 

    0xbd66d086,// 244 PAY 216 

    0xf094d2db,// 245 PAY 217 

    0x5d05711a,// 246 PAY 218 

    0xa58cc855,// 247 PAY 219 

    0x40e6500b,// 248 PAY 220 

    0x6a056baf,// 249 PAY 221 

    0xdf5f9cc5,// 250 PAY 222 

    0x53553fe5,// 251 PAY 223 

    0x4870ed6c,// 252 PAY 224 

    0x9f468bbd,// 253 PAY 225 

    0xa767233c,// 254 PAY 226 

    0x7b7d59d1,// 255 PAY 227 

    0xb36257c9,// 256 PAY 228 

    0x8d377a3e,// 257 PAY 229 

    0xfdd95d90,// 258 PAY 230 

    0x33732497,// 259 PAY 231 

    0x7305e5f3,// 260 PAY 232 

    0x3d44e229,// 261 PAY 233 

    0xde0821aa,// 262 PAY 234 

    0xc376b2fa,// 263 PAY 235 

    0xc023dd47,// 264 PAY 236 

    0xf1092d09,// 265 PAY 237 

    0x540c6fef,// 266 PAY 238 

    0x7a76c0f1,// 267 PAY 239 

    0xdbca7e3a,// 268 PAY 240 

    0x891d8354,// 269 PAY 241 

    0x1e8b70e3,// 270 PAY 242 

    0xe4099b5f,// 271 PAY 243 

    0xf111ff68,// 272 PAY 244 

    0x919bfc92,// 273 PAY 245 

    0x14db5fe1,// 274 PAY 246 

    0xb731034e,// 275 PAY 247 

    0x5b41de56,// 276 PAY 248 

    0x2dc48a73,// 277 PAY 249 

    0xe7db8c47,// 278 PAY 250 

    0x169efc1a,// 279 PAY 251 

    0xa1a92c8a,// 280 PAY 252 

    0x1fdc7704,// 281 PAY 253 

    0xbef344bf,// 282 PAY 254 

    0xf8ebaa92,// 283 PAY 255 

    0x1814ab84,// 284 PAY 256 

    0x7e90971c,// 285 PAY 257 

    0xed09d208,// 286 PAY 258 

    0xe989f44d,// 287 PAY 259 

    0x39dbf19e,// 288 PAY 260 

    0x8d82a3bc,// 289 PAY 261 

    0xce120aed,// 290 PAY 262 

    0x7bd1da77,// 291 PAY 263 

    0x313ae237,// 292 PAY 264 

    0x6b4427f4,// 293 PAY 265 

    0x2c9289cd,// 294 PAY 266 

    0xe1cad597,// 295 PAY 267 

    0x6ae1bc01,// 296 PAY 268 

    0xe94a1699,// 297 PAY 269 

    0x4d5c50e4,// 298 PAY 270 

    0xf41962ef,// 299 PAY 271 

    0xe5e1629f,// 300 PAY 272 

    0x2b700d2f,// 301 PAY 273 

    0x706cd74a,// 302 PAY 274 

    0x9f0abfc1,// 303 PAY 275 

    0x545e4f8e,// 304 PAY 276 

    0x809c2787,// 305 PAY 277 

    0xa00a3a1e,// 306 PAY 278 

    0xfd318b33,// 307 PAY 279 

    0xd09b44f1,// 308 PAY 280 

    0xa928b4c6,// 309 PAY 281 

    0xd43c4b2c,// 310 PAY 282 

    0x70863114,// 311 PAY 283 

    0xcb4fb3b6,// 312 PAY 284 

    0xed9865c1,// 313 PAY 285 

    0x6a6abfd2,// 314 PAY 286 

    0x3329faba,// 315 PAY 287 

    0x829015a9,// 316 PAY 288 

    0x16581954,// 317 PAY 289 

    0x5ebc682d,// 318 PAY 290 

    0xe205d2ba,// 319 PAY 291 

    0x7d850073,// 320 PAY 292 

    0x15365694,// 321 PAY 293 

    0x961c07ba,// 322 PAY 294 

    0x647aacc1,// 323 PAY 295 

    0x74924e19,// 324 PAY 296 

    0x5ec9b543,// 325 PAY 297 

    0xa5a3db26,// 326 PAY 298 

    0x30120dfc,// 327 PAY 299 

    0xba168120,// 328 PAY 300 

    0x6f237746,// 329 PAY 301 

    0x552ca354,// 330 PAY 302 

    0xd7aaa735,// 331 PAY 303 

    0xa3f566c6,// 332 PAY 304 

    0xd0f404c4,// 333 PAY 305 

    0xfe3dbc3f,// 334 PAY 306 

    0x84d57ac8,// 335 PAY 307 

    0x1727618d,// 336 PAY 308 

    0x7df06c4c,// 337 PAY 309 

    0x6496b658,// 338 PAY 310 

    0x31b3c80b,// 339 PAY 311 

    0x2d97e322,// 340 PAY 312 

    0x6c770c68,// 341 PAY 313 

    0x69756623,// 342 PAY 314 

    0x8639ebae,// 343 PAY 315 

    0xd7105f92,// 344 PAY 316 

    0x9bdb4b18,// 345 PAY 317 

    0x110d2d86,// 346 PAY 318 

    0x67ad4d3a,// 347 PAY 319 

    0xcf270391,// 348 PAY 320 

    0x732b424e,// 349 PAY 321 

    0xeed2405c,// 350 PAY 322 

    0xb24df920,// 351 PAY 323 

    0x4515a6b7,// 352 PAY 324 

    0x74282536,// 353 PAY 325 

    0x1eef2183,// 354 PAY 326 

    0x7dea220b,// 355 PAY 327 

    0xa498a567,// 356 PAY 328 

    0x57ca2d8f,// 357 PAY 329 

    0x45aca0d8,// 358 PAY 330 

    0xb69fe4dd,// 359 PAY 331 

    0x469fd455,// 360 PAY 332 

    0xdbfe1a08,// 361 PAY 333 

    0xce268376,// 362 PAY 334 

    0x9481d97e,// 363 PAY 335 

    0x19918f54,// 364 PAY 336 

    0x8ad5481e,// 365 PAY 337 

    0x0dbc6726,// 366 PAY 338 

    0xdf13a634,// 367 PAY 339 

    0x1b60fec6,// 368 PAY 340 

    0xb5a064fc,// 369 PAY 341 

    0x355ec299,// 370 PAY 342 

    0x57b733b8,// 371 PAY 343 

    0x8d9a7e82,// 372 PAY 344 

    0x806e1a5d,// 373 PAY 345 

    0xde5bac48,// 374 PAY 346 

    0x70867048,// 375 PAY 347 

    0xba437dfd,// 376 PAY 348 

    0xd403c90d,// 377 PAY 349 

    0x273e89f5,// 378 PAY 350 

    0x9d36b1f2,// 379 PAY 351 

    0x1401ea32,// 380 PAY 352 

    0x932325f9,// 381 PAY 353 

    0x3c23aba9,// 382 PAY 354 

    0x0f168df4,// 383 PAY 355 

    0x8c9b3a27,// 384 PAY 356 

    0x9d15d8bc,// 385 PAY 357 

    0x76f0d5ea,// 386 PAY 358 

    0xce1e5604,// 387 PAY 359 

    0x0ddec7e2,// 388 PAY 360 

    0x67f6281c,// 389 PAY 361 

    0x073739a8,// 390 PAY 362 

    0x205c56e4,// 391 PAY 363 

    0xef63ec94,// 392 PAY 364 

    0x6fd392dc,// 393 PAY 365 

    0x91890090,// 394 PAY 366 

    0x7085ed17,// 395 PAY 367 

    0xb073ceab,// 396 PAY 368 

    0x558ee07c,// 397 PAY 369 

    0xffeb1a97,// 398 PAY 370 

    0x1b55ac65,// 399 PAY 371 

    0x4b74a900,// 400 PAY 372 

    0x72fd231e,// 401 PAY 373 

    0x42f4c8d2,// 402 PAY 374 

    0x80b32f98,// 403 PAY 375 

    0x7dea680c,// 404 PAY 376 

    0x5e264605,// 405 PAY 377 

    0x83176bb5,// 406 PAY 378 

    0x3c818bb7,// 407 PAY 379 

    0x7b360e31,// 408 PAY 380 

    0x38180958,// 409 PAY 381 

    0x84fd235b,// 410 PAY 382 

    0x3e2c9cde,// 411 PAY 383 

    0x9b2a2e2e,// 412 PAY 384 

    0xb3c72944,// 413 PAY 385 

    0x21130f79,// 414 PAY 386 

    0x478f6fc6,// 415 PAY 387 

    0x912c0ddd,// 416 PAY 388 

    0x8e017960,// 417 PAY 389 

    0xa675b23f,// 418 PAY 390 

    0x8763efbe,// 419 PAY 391 

    0xada4111f,// 420 PAY 392 

    0x6a63048c,// 421 PAY 393 

    0x58246a80,// 422 PAY 394 

    0x61332966,// 423 PAY 395 

    0x9e833939,// 424 PAY 396 

    0xa3364738,// 425 PAY 397 

    0xf1d305bf,// 426 PAY 398 

    0xb21be527,// 427 PAY 399 

    0x55eab155,// 428 PAY 400 

    0xd2d4090b,// 429 PAY 401 

    0x2692240d,// 430 PAY 402 

    0x7587aa63,// 431 PAY 403 

    0xf8e2bf9f,// 432 PAY 404 

    0xb463c29f,// 433 PAY 405 

    0x54654c96,// 434 PAY 406 

    0xf7449ac8,// 435 PAY 407 

    0x39634c21,// 436 PAY 408 

    0x950f1bb7,// 437 PAY 409 

    0x9612a48f,// 438 PAY 410 

    0xacd446f5,// 439 PAY 411 

    0x0d145cc4,// 440 PAY 412 

    0x28a65a66,// 441 PAY 413 

    0xfbe0842f,// 442 PAY 414 

    0x3294ab32,// 443 PAY 415 

    0x0feeaeac,// 444 PAY 416 

    0x5cf4b51f,// 445 PAY 417 

    0x693847bb,// 446 PAY 418 

    0x99d884d3,// 447 PAY 419 

    0x3b3f38db,// 448 PAY 420 

    0xe5f9f758,// 449 PAY 421 

    0xcad5e693,// 450 PAY 422 

    0x179b4089,// 451 PAY 423 

    0x39a13708,// 452 PAY 424 

    0x8aad6886,// 453 PAY 425 

    0xf4fcb7db,// 454 PAY 426 

    0xf3aa539c,// 455 PAY 427 

    0xe4b4e5c3,// 456 PAY 428 

    0x197f8b4b,// 457 PAY 429 

    0x158730ea,// 458 PAY 430 

    0x8b143e0c,// 459 PAY 431 

    0x3e944077,// 460 PAY 432 

    0xcd1c9ca3,// 461 PAY 433 

    0xdce7c50a,// 462 PAY 434 

    0x2ef6d692,// 463 PAY 435 

    0x219282a0,// 464 PAY 436 

    0x6c662521,// 465 PAY 437 

    0x6ef53daf,// 466 PAY 438 

    0x8bfc3966,// 467 PAY 439 

    0x8c99e796,// 468 PAY 440 

    0xb2d5d83e,// 469 PAY 441 

    0xd91fd2d4,// 470 PAY 442 

    0x2f837995,// 471 PAY 443 

    0x89fbd64c,// 472 PAY 444 

    0x09bbbfa2,// 473 PAY 445 

    0xebd3ab08,// 474 PAY 446 

    0x170dc590,// 475 PAY 447 

    0xfb79d16e,// 476 PAY 448 

    0x6897e365,// 477 PAY 449 

    0xd1d71a67,// 478 PAY 450 

    0xf7057399,// 479 PAY 451 

    0x77cc301d,// 480 PAY 452 

    0x899cd900,// 481 PAY 453 

    0xed29288a,// 482 PAY 454 

    0x5f64bda1,// 483 PAY 455 

    0x80e996ed,// 484 PAY 456 

    0x50dd9ed5,// 485 PAY 457 

    0x43f08c77,// 486 PAY 458 

    0x8dd8dd67,// 487 PAY 459 

    0xea7ea887,// 488 PAY 460 

    0xf6191f55,// 489 PAY 461 

    0xf9a9518e,// 490 PAY 462 

    0xf4c3cb97,// 491 PAY 463 

    0x8c95c476,// 492 PAY 464 

    0x80a30913,// 493 PAY 465 

    0x0ec7972f,// 494 PAY 466 

    0x83d5abfa,// 495 PAY 467 

    0xd66b1c83,// 496 PAY 468 

    0x7fe9e79b,// 497 PAY 469 

    0x17a9975c,// 498 PAY 470 

    0x98142221,// 499 PAY 471 

    0x8f2ac304,// 500 PAY 472 

    0xe40beee1,// 501 PAY 473 

    0x7a05e4ff,// 502 PAY 474 

    0x9d49c0d2,// 503 PAY 475 

    0x0ca8e2ca,// 504 PAY 476 

    0xc35fa1cc,// 505 PAY 477 

    0xa8a2cc7d,// 506 PAY 478 

    0x6769299e,// 507 PAY 479 

    0xb80778a5,// 508 PAY 480 

    0x597ca6ef,// 509 PAY 481 

    0x2b5ac06d,// 510 PAY 482 

    0xced989b2,// 511 PAY 483 

    0x1f43d4bf,// 512 PAY 484 

    0x5993adb4,// 513 PAY 485 

    0x7145d909,// 514 PAY 486 

    0x2b51c145,// 515 PAY 487 

    0x24a987f0,// 516 PAY 488 

    0x25f09a29,// 517 PAY 489 

    0x5bd5904c,// 518 PAY 490 

    0x8ccd8d68,// 519 PAY 491 

    0x54eed878,// 520 PAY 492 

    0x93177dd5,// 521 PAY 493 

    0x4cef02b7,// 522 PAY 494 

    0xba9f0000,// 523 PAY 495 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 146 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x20 

    0x02492053 // 524 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt6_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806428e9,// 4 SCX   2 

    0x00002342,// 5 SCX   3 

    0xb65d5a5e,// 6 SCX   4 

    0xa9a4ce8c,// 7 SCX   5 

    0xea98e03d,// 8 SCX   6 

    0x5480c503,// 9 SCX   7 

    0x262afaa6,// 10 SCX   8 

    0xd17aea40,// 11 SCX   9 

    0x7bf5fe52,// 12 SCX  10 

    0xc1f89506,// 13 SCX  11 

    0x4ad193e9,// 14 SCX  12 

    0x76d38c7b,// 15 SCX  13 

    0x82ea713d,// 16 SCX  14 

    0xb1e27426,// 17 SCX  15 

    0xa4983056,// 18 SCX  16 

    0xc0347b9d,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1154 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 162 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 162 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 116 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 216 

    0x000000a2,// 20 BFD   1 

    0x00440030,// 21 BFD   2 

    0x00d80014,// 22 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 16 

    0x1600ac19,// 23 MFM   1 

    0x5121e4cb,// 24 MFM   2 

    0x57182fa2,// 25 MFM   3 

    0xf9000000,// 26 MFM   4 

/// BDA is 290 words. 

/// BDA size     is 1154 (0x482) 

/// BDA id       is 0x4456 

    0x04824456,// 27 BDA   1 

/// PAY Generic Data size   : 1154 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x3f6e31d6,// 28 PAY   1 

    0x3649216b,// 29 PAY   2 

    0x7ef0263d,// 30 PAY   3 

    0x24e4ec05,// 31 PAY   4 

    0xdc83de93,// 32 PAY   5 

    0x2c642bcd,// 33 PAY   6 

    0xef9ea399,// 34 PAY   7 

    0xca566d2d,// 35 PAY   8 

    0x173e2ee2,// 36 PAY   9 

    0x3013f7c2,// 37 PAY  10 

    0x912c645c,// 38 PAY  11 

    0x1716510a,// 39 PAY  12 

    0xbbed7b74,// 40 PAY  13 

    0x0fc007cd,// 41 PAY  14 

    0x872d37eb,// 42 PAY  15 

    0xb7060b94,// 43 PAY  16 

    0x3e17246f,// 44 PAY  17 

    0x1e759888,// 45 PAY  18 

    0x25be9ee7,// 46 PAY  19 

    0x32ce2f88,// 47 PAY  20 

    0x09e63bea,// 48 PAY  21 

    0x4d1c9beb,// 49 PAY  22 

    0x46fc1366,// 50 PAY  23 

    0xb62dc7ff,// 51 PAY  24 

    0x6170f5a1,// 52 PAY  25 

    0x8d3789df,// 53 PAY  26 

    0x45026236,// 54 PAY  27 

    0x2ee07553,// 55 PAY  28 

    0x10e79d3c,// 56 PAY  29 

    0xc0c5fbd2,// 57 PAY  30 

    0x749b55af,// 58 PAY  31 

    0x85b82d4a,// 59 PAY  32 

    0xd433d1a0,// 60 PAY  33 

    0xadae45ce,// 61 PAY  34 

    0xb9c9b821,// 62 PAY  35 

    0xbeb450f1,// 63 PAY  36 

    0x054681fe,// 64 PAY  37 

    0xec6ee0f2,// 65 PAY  38 

    0xb3f9e3eb,// 66 PAY  39 

    0xf110e6a6,// 67 PAY  40 

    0x04a2a60d,// 68 PAY  41 

    0x81bb6ea3,// 69 PAY  42 

    0xd2240898,// 70 PAY  43 

    0x7351469c,// 71 PAY  44 

    0xac3a6b80,// 72 PAY  45 

    0xa72f43b8,// 73 PAY  46 

    0xd7f1ed8e,// 74 PAY  47 

    0x611b319d,// 75 PAY  48 

    0x892b7fe1,// 76 PAY  49 

    0x3f7273a9,// 77 PAY  50 

    0xa4a75d68,// 78 PAY  51 

    0x6f0b9c9b,// 79 PAY  52 

    0x427b8a43,// 80 PAY  53 

    0xb761d7c6,// 81 PAY  54 

    0x74bbd429,// 82 PAY  55 

    0xe85237c0,// 83 PAY  56 

    0xf9c233e8,// 84 PAY  57 

    0x9241d96d,// 85 PAY  58 

    0xe90ad5ed,// 86 PAY  59 

    0xa8470b67,// 87 PAY  60 

    0x223435e5,// 88 PAY  61 

    0x357e409c,// 89 PAY  62 

    0x05ef5f9f,// 90 PAY  63 

    0xb076551d,// 91 PAY  64 

    0xfdb57a5f,// 92 PAY  65 

    0x0588795f,// 93 PAY  66 

    0x37921da7,// 94 PAY  67 

    0xdcc3f4ef,// 95 PAY  68 

    0x661c7471,// 96 PAY  69 

    0x8e525acb,// 97 PAY  70 

    0xf42f6c3f,// 98 PAY  71 

    0xbe02651c,// 99 PAY  72 

    0x2a63298b,// 100 PAY  73 

    0x4e804464,// 101 PAY  74 

    0x2c96a087,// 102 PAY  75 

    0x395eb5f6,// 103 PAY  76 

    0x0fb5c376,// 104 PAY  77 

    0x92584128,// 105 PAY  78 

    0x73ede514,// 106 PAY  79 

    0x93eb0fa5,// 107 PAY  80 

    0x8aed0ce0,// 108 PAY  81 

    0x6bb36dd5,// 109 PAY  82 

    0x9e695d74,// 110 PAY  83 

    0xd1f9b7dc,// 111 PAY  84 

    0x17b52a31,// 112 PAY  85 

    0x03242c95,// 113 PAY  86 

    0xda977633,// 114 PAY  87 

    0xad711088,// 115 PAY  88 

    0xb62a1701,// 116 PAY  89 

    0x987dc8d6,// 117 PAY  90 

    0x75e4c107,// 118 PAY  91 

    0xd5e376aa,// 119 PAY  92 

    0xec28f537,// 120 PAY  93 

    0x52f0b369,// 121 PAY  94 

    0xbc8db67e,// 122 PAY  95 

    0xbdd5978c,// 123 PAY  96 

    0x814f7ef7,// 124 PAY  97 

    0xd659b9be,// 125 PAY  98 

    0xed46ed0b,// 126 PAY  99 

    0x704ec9a5,// 127 PAY 100 

    0xc8f69d24,// 128 PAY 101 

    0xc91bd808,// 129 PAY 102 

    0xfb309191,// 130 PAY 103 

    0xed390c59,// 131 PAY 104 

    0xc732cc27,// 132 PAY 105 

    0x042b4288,// 133 PAY 106 

    0xe6166e13,// 134 PAY 107 

    0xd5af35ba,// 135 PAY 108 

    0x4b496352,// 136 PAY 109 

    0x6a55188e,// 137 PAY 110 

    0x9dab2870,// 138 PAY 111 

    0x82dde083,// 139 PAY 112 

    0xc07b70ff,// 140 PAY 113 

    0xee1d2586,// 141 PAY 114 

    0xd6d12fd3,// 142 PAY 115 

    0x9fcb201b,// 143 PAY 116 

    0x05a45ae5,// 144 PAY 117 

    0x855ba40c,// 145 PAY 118 

    0x3fd84dac,// 146 PAY 119 

    0x5e9a9f37,// 147 PAY 120 

    0xcbe98fa8,// 148 PAY 121 

    0x6edb60c4,// 149 PAY 122 

    0x4509b44a,// 150 PAY 123 

    0x92ae32e1,// 151 PAY 124 

    0x270a08e8,// 152 PAY 125 

    0x0f58fd30,// 153 PAY 126 

    0xbf9db3f1,// 154 PAY 127 

    0xcef3d422,// 155 PAY 128 

    0xf4d1aea7,// 156 PAY 129 

    0x8ed5e0fc,// 157 PAY 130 

    0xb0143efc,// 158 PAY 131 

    0x9819d854,// 159 PAY 132 

    0x3b2d8d18,// 160 PAY 133 

    0x166120d9,// 161 PAY 134 

    0x74cb27b7,// 162 PAY 135 

    0x1c5a565c,// 163 PAY 136 

    0xc1d42ad5,// 164 PAY 137 

    0x3fba8dad,// 165 PAY 138 

    0xb7eae706,// 166 PAY 139 

    0x8d1d971f,// 167 PAY 140 

    0x3a5114e4,// 168 PAY 141 

    0x3006ba7b,// 169 PAY 142 

    0x3bec11f6,// 170 PAY 143 

    0x39d4f830,// 171 PAY 144 

    0xb1cdace3,// 172 PAY 145 

    0x614b00a6,// 173 PAY 146 

    0xd06b9940,// 174 PAY 147 

    0xd0193729,// 175 PAY 148 

    0x64d65777,// 176 PAY 149 

    0xe5caede0,// 177 PAY 150 

    0x71751923,// 178 PAY 151 

    0x92827cd8,// 179 PAY 152 

    0x16075e53,// 180 PAY 153 

    0xd6f83dfd,// 181 PAY 154 

    0x2a8ae527,// 182 PAY 155 

    0xed129f95,// 183 PAY 156 

    0x339c852e,// 184 PAY 157 

    0xa5a47ef0,// 185 PAY 158 

    0x1a3c0055,// 186 PAY 159 

    0x7f911842,// 187 PAY 160 

    0x95a6d589,// 188 PAY 161 

    0x5e79fcea,// 189 PAY 162 

    0x90ce7b17,// 190 PAY 163 

    0x1a393ace,// 191 PAY 164 

    0x4f1998ef,// 192 PAY 165 

    0xe5203c9d,// 193 PAY 166 

    0x1e0e6100,// 194 PAY 167 

    0xb7148755,// 195 PAY 168 

    0x331314e7,// 196 PAY 169 

    0x9af46a1f,// 197 PAY 170 

    0x3d90241a,// 198 PAY 171 

    0x003c4cce,// 199 PAY 172 

    0xe3d0bad9,// 200 PAY 173 

    0xe97424ad,// 201 PAY 174 

    0x06e774dc,// 202 PAY 175 

    0x1cb956f3,// 203 PAY 176 

    0x8c9868b8,// 204 PAY 177 

    0xd1bfcb2d,// 205 PAY 178 

    0x444f570b,// 206 PAY 179 

    0x13d7001d,// 207 PAY 180 

    0xb93204dc,// 208 PAY 181 

    0x1dcfa922,// 209 PAY 182 

    0xe3f60285,// 210 PAY 183 

    0xdd48f486,// 211 PAY 184 

    0x452ea71b,// 212 PAY 185 

    0x77eeebb7,// 213 PAY 186 

    0xbb5b867c,// 214 PAY 187 

    0xe6055b0f,// 215 PAY 188 

    0xe70c4b10,// 216 PAY 189 

    0x8a770b68,// 217 PAY 190 

    0xdef0bc12,// 218 PAY 191 

    0x78d898e1,// 219 PAY 192 

    0x58b05098,// 220 PAY 193 

    0x83d88cad,// 221 PAY 194 

    0xad07dd63,// 222 PAY 195 

    0x5db64b43,// 223 PAY 196 

    0x33b690ff,// 224 PAY 197 

    0x372dd3f3,// 225 PAY 198 

    0xce2e428f,// 226 PAY 199 

    0x9e36d12a,// 227 PAY 200 

    0x0b4ff12f,// 228 PAY 201 

    0xd24b584b,// 229 PAY 202 

    0x9236e117,// 230 PAY 203 

    0x1f03768b,// 231 PAY 204 

    0xba280e94,// 232 PAY 205 

    0x8bc3c8eb,// 233 PAY 206 

    0xd9281226,// 234 PAY 207 

    0xfe843495,// 235 PAY 208 

    0x5c8cc68d,// 236 PAY 209 

    0x59d5061d,// 237 PAY 210 

    0x85baef0d,// 238 PAY 211 

    0x44d39af0,// 239 PAY 212 

    0x38a8085a,// 240 PAY 213 

    0x45ea171d,// 241 PAY 214 

    0xc8c39169,// 242 PAY 215 

    0x99e2664c,// 243 PAY 216 

    0xd32da728,// 244 PAY 217 

    0x9383c272,// 245 PAY 218 

    0x50ca8970,// 246 PAY 219 

    0x6aea8f1b,// 247 PAY 220 

    0xac50e156,// 248 PAY 221 

    0x304ff069,// 249 PAY 222 

    0x56f12e15,// 250 PAY 223 

    0xd70d1dbb,// 251 PAY 224 

    0x8aea5566,// 252 PAY 225 

    0x037faeab,// 253 PAY 226 

    0xc3872241,// 254 PAY 227 

    0x4bd574d5,// 255 PAY 228 

    0x9170c07f,// 256 PAY 229 

    0x333b9da7,// 257 PAY 230 

    0x0497b524,// 258 PAY 231 

    0x8bca3df1,// 259 PAY 232 

    0x7f2aa056,// 260 PAY 233 

    0x291fb6ce,// 261 PAY 234 

    0xa9187093,// 262 PAY 235 

    0xd4956d4d,// 263 PAY 236 

    0x8409e367,// 264 PAY 237 

    0xca620d65,// 265 PAY 238 

    0x4b1bdec4,// 266 PAY 239 

    0xcef84d13,// 267 PAY 240 

    0xb2d1b703,// 268 PAY 241 

    0xfd1f049c,// 269 PAY 242 

    0xf71d8531,// 270 PAY 243 

    0x02b2baa2,// 271 PAY 244 

    0xeab23a5c,// 272 PAY 245 

    0xc5071fae,// 273 PAY 246 

    0x13f40167,// 274 PAY 247 

    0x2a64202c,// 275 PAY 248 

    0xa93146eb,// 276 PAY 249 

    0x59fcf599,// 277 PAY 250 

    0xc149112a,// 278 PAY 251 

    0x47293107,// 279 PAY 252 

    0xcce5a5c8,// 280 PAY 253 

    0x0f05e385,// 281 PAY 254 

    0xc4a973a2,// 282 PAY 255 

    0x3cdc22c1,// 283 PAY 256 

    0x40fbc2bf,// 284 PAY 257 

    0x62f4255b,// 285 PAY 258 

    0xd96823f2,// 286 PAY 259 

    0xe5ab45f0,// 287 PAY 260 

    0x9c2ac708,// 288 PAY 261 

    0x3fd08427,// 289 PAY 262 

    0x774f88a4,// 290 PAY 263 

    0x91c271e7,// 291 PAY 264 

    0x71110374,// 292 PAY 265 

    0x56aaa9ac,// 293 PAY 266 

    0x4d04ed41,// 294 PAY 267 

    0x98a83f20,// 295 PAY 268 

    0x4f2cc50f,// 296 PAY 269 

    0xf26befd7,// 297 PAY 270 

    0x5e4eee18,// 298 PAY 271 

    0xe63571b5,// 299 PAY 272 

    0xeba53e31,// 300 PAY 273 

    0x8567de45,// 301 PAY 274 

    0xd5eb2821,// 302 PAY 275 

    0x17e443eb,// 303 PAY 276 

    0x3474dbb2,// 304 PAY 277 

    0xcdb58b8f,// 305 PAY 278 

    0x96612f20,// 306 PAY 279 

    0xfbe3aabb,// 307 PAY 280 

    0x332ac90a,// 308 PAY 281 

    0xa49b37f9,// 309 PAY 282 

    0xdafab1e5,// 310 PAY 283 

    0x5db4cc9e,// 311 PAY 284 

    0x600a70dd,// 312 PAY 285 

    0x2a6bd1d2,// 313 PAY 286 

    0xd7f14ec6,// 314 PAY 287 

    0x7c34f5aa,// 315 PAY 288 

    0x166d0000,// 316 PAY 289 

/// STA is 1 words. 

/// STA num_pkts       : 34 

/// STA pkt_idx        : 231 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdf 

    0x039cdf22 // 317 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt7_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806528c1,// 4 SCX   2 

    0x00007382,// 5 SCX   3 

    0xfe8afac4,// 6 SCX   4 

    0xdccd60d0,// 7 SCX   5 

    0xa013a76b,// 8 SCX   6 

    0x19de45af,// 9 SCX   7 

    0x4e26a28f,// 10 SCX   8 

    0xaf97c581,// 11 SCX   9 

    0xd6c7b8a4,// 12 SCX  10 

    0xeb6e0ad1,// 13 SCX  11 

    0x33b65972,// 14 SCX  12 

    0xcf62274c,// 15 SCX  13 

    0xf14c5868,// 16 SCX  14 

    0x0721c026,// 17 SCX  15 

    0x7ff2de37,// 18 SCX  16 

    0xde17526d,// 19 SCX  17 

    0x2f80ba29,// 20 SCX  18 

    0x0c947f92,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1520 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1032 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1032 

/// BFD lencrypto      : 232 

/// BFD ofstcrypto     : 436 

/// BFD (ofst+len)cry  : 668 

/// BFD ofstiv         : 84 

/// BFD ofsticv        : 1420 

    0x00000408,// 22 BFD   1 

    0x01b400e8,// 23 BFD   2 

    0x058c0054,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00c29a,// 25 MFM   1 

    0x447090d6,// 26 MFM   2 

    0xd3d0758d,// 27 MFM   3 

    0x304215a1,// 28 MFM   4 

    0xb28ef5c0,// 29 MFM   5 

    0x671280f7,// 30 MFM   6 

    0x2edde0a9,// 31 MFM   7 

    0xb5bd98df,// 32 MFM   8 

    0xf0cf638a,// 33 MFM   9 

    0x99c4b896,// 34 MFM  10 

    0x0abcefab,// 35 MFM  11 

    0x1fd861f1,// 36 MFM  12 

    0xdf133857,// 37 MFM  13 

    0xc098ef50,// 38 MFM  14 

    0xa445958f,// 39 MFM  15 

    0x50fbdebd,// 40 MFM  16 

/// BDA is 381 words. 

/// BDA size     is 1520 (0x5f0) 

/// BDA id       is 0xd61 

    0x05f00d61,// 41 BDA   1 

/// PAY Generic Data size   : 1520 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x640524dd,// 42 PAY   1 

    0xa47b144c,// 43 PAY   2 

    0xab4b809b,// 44 PAY   3 

    0xa2da8e78,// 45 PAY   4 

    0xf560e23e,// 46 PAY   5 

    0xd0afa329,// 47 PAY   6 

    0x71ea0bcb,// 48 PAY   7 

    0x6fa17160,// 49 PAY   8 

    0x39f7fe3f,// 50 PAY   9 

    0xec32211a,// 51 PAY  10 

    0xc922d321,// 52 PAY  11 

    0x353bba67,// 53 PAY  12 

    0x8a26c74a,// 54 PAY  13 

    0x340afb63,// 55 PAY  14 

    0x1b670d8e,// 56 PAY  15 

    0x796b0f3f,// 57 PAY  16 

    0x1c358c30,// 58 PAY  17 

    0xba187d41,// 59 PAY  18 

    0x02163283,// 60 PAY  19 

    0xd0873f0b,// 61 PAY  20 

    0xd3325c42,// 62 PAY  21 

    0x87e3d1f4,// 63 PAY  22 

    0x905c78e9,// 64 PAY  23 

    0x92f13eda,// 65 PAY  24 

    0xbc2ed5f1,// 66 PAY  25 

    0x4f81a5e3,// 67 PAY  26 

    0x099380c9,// 68 PAY  27 

    0x80373502,// 69 PAY  28 

    0xffec6106,// 70 PAY  29 

    0x8449f286,// 71 PAY  30 

    0xb041ac21,// 72 PAY  31 

    0x181dc405,// 73 PAY  32 

    0xafc2050e,// 74 PAY  33 

    0x719a6f19,// 75 PAY  34 

    0xc8c500a0,// 76 PAY  35 

    0x5f832704,// 77 PAY  36 

    0xba1d399e,// 78 PAY  37 

    0xd1285f74,// 79 PAY  38 

    0xa05d227f,// 80 PAY  39 

    0xb08d84a3,// 81 PAY  40 

    0xfeef377d,// 82 PAY  41 

    0xf743651d,// 83 PAY  42 

    0xa6853224,// 84 PAY  43 

    0x9b2150c5,// 85 PAY  44 

    0x98672e55,// 86 PAY  45 

    0xc3bc58a2,// 87 PAY  46 

    0x18511dfe,// 88 PAY  47 

    0x2c3126ab,// 89 PAY  48 

    0x6eb4b08f,// 90 PAY  49 

    0x8209c915,// 91 PAY  50 

    0xe0e0a007,// 92 PAY  51 

    0x2546e69a,// 93 PAY  52 

    0xcccfe759,// 94 PAY  53 

    0x2f96e53b,// 95 PAY  54 

    0xca2a7307,// 96 PAY  55 

    0x368cccb8,// 97 PAY  56 

    0xbee69860,// 98 PAY  57 

    0xd730f563,// 99 PAY  58 

    0xffde4831,// 100 PAY  59 

    0xee20aefa,// 101 PAY  60 

    0x450a7e2c,// 102 PAY  61 

    0x4ae5357b,// 103 PAY  62 

    0x2f170e47,// 104 PAY  63 

    0x6945a266,// 105 PAY  64 

    0x861e731e,// 106 PAY  65 

    0x4cb1cff1,// 107 PAY  66 

    0x14c84cd9,// 108 PAY  67 

    0x5c9c129d,// 109 PAY  68 

    0x1446b137,// 110 PAY  69 

    0x0e3c3237,// 111 PAY  70 

    0x04f5f8de,// 112 PAY  71 

    0x3d31eae9,// 113 PAY  72 

    0xb3713c08,// 114 PAY  73 

    0x6e738978,// 115 PAY  74 

    0x1bbecb19,// 116 PAY  75 

    0xa7619a11,// 117 PAY  76 

    0x6659d4b0,// 118 PAY  77 

    0x8352a59c,// 119 PAY  78 

    0x21a1e8e6,// 120 PAY  79 

    0x4ea3de5c,// 121 PAY  80 

    0xf81f08e3,// 122 PAY  81 

    0xecd99a2b,// 123 PAY  82 

    0x892bf19a,// 124 PAY  83 

    0x21a7b859,// 125 PAY  84 

    0x55115a5d,// 126 PAY  85 

    0xc19dbdc4,// 127 PAY  86 

    0x4abe641b,// 128 PAY  87 

    0x4898112f,// 129 PAY  88 

    0x10b01015,// 130 PAY  89 

    0x77aba804,// 131 PAY  90 

    0x4c01b3a9,// 132 PAY  91 

    0xcca7197c,// 133 PAY  92 

    0x4ecc672b,// 134 PAY  93 

    0x16dd72f6,// 135 PAY  94 

    0xc366dba2,// 136 PAY  95 

    0xcea08746,// 137 PAY  96 

    0xc0d5097d,// 138 PAY  97 

    0x594ae5cc,// 139 PAY  98 

    0xf164baa5,// 140 PAY  99 

    0x85fc693f,// 141 PAY 100 

    0xfa98741b,// 142 PAY 101 

    0x8edadb4e,// 143 PAY 102 

    0xbe56a92c,// 144 PAY 103 

    0x2db9622a,// 145 PAY 104 

    0xb1617272,// 146 PAY 105 

    0x6479856e,// 147 PAY 106 

    0x6d23c252,// 148 PAY 107 

    0x9e650953,// 149 PAY 108 

    0x23e0dad8,// 150 PAY 109 

    0xa31114dc,// 151 PAY 110 

    0xa8c5be43,// 152 PAY 111 

    0x376c9c94,// 153 PAY 112 

    0xfc122940,// 154 PAY 113 

    0x4a25b0d2,// 155 PAY 114 

    0xc83076fa,// 156 PAY 115 

    0xeaeb49dd,// 157 PAY 116 

    0x3e23cc92,// 158 PAY 117 

    0xa65fbafa,// 159 PAY 118 

    0xe9a3311b,// 160 PAY 119 

    0xb5c55af9,// 161 PAY 120 

    0x9e6164a9,// 162 PAY 121 

    0xf6d55484,// 163 PAY 122 

    0x64d1f470,// 164 PAY 123 

    0x0af984d2,// 165 PAY 124 

    0x17ce3552,// 166 PAY 125 

    0x048b6794,// 167 PAY 126 

    0x59079cde,// 168 PAY 127 

    0xc8b6d7b6,// 169 PAY 128 

    0x50cc4523,// 170 PAY 129 

    0x825a6cf0,// 171 PAY 130 

    0xb42a7af7,// 172 PAY 131 

    0x10ccf15b,// 173 PAY 132 

    0x862899da,// 174 PAY 133 

    0x9ca7eefc,// 175 PAY 134 

    0x4383f3f9,// 176 PAY 135 

    0xe7358d37,// 177 PAY 136 

    0x9d2fc86f,// 178 PAY 137 

    0x5f0cfcf4,// 179 PAY 138 

    0x34662849,// 180 PAY 139 

    0x213a16cf,// 181 PAY 140 

    0xfda48b5f,// 182 PAY 141 

    0x2b317cdb,// 183 PAY 142 

    0x9478719e,// 184 PAY 143 

    0xca7221ae,// 185 PAY 144 

    0x1fbbaabb,// 186 PAY 145 

    0x6c87b1ae,// 187 PAY 146 

    0x877693e7,// 188 PAY 147 

    0x10026f7b,// 189 PAY 148 

    0x7f6f5327,// 190 PAY 149 

    0xe8394978,// 191 PAY 150 

    0xf278b866,// 192 PAY 151 

    0x46e028c4,// 193 PAY 152 

    0x45271332,// 194 PAY 153 

    0xc31e0999,// 195 PAY 154 

    0xef08088a,// 196 PAY 155 

    0x792b423c,// 197 PAY 156 

    0x4ea23a38,// 198 PAY 157 

    0x5ada1704,// 199 PAY 158 

    0xeed9dad1,// 200 PAY 159 

    0x05faecf3,// 201 PAY 160 

    0x13aaa1d8,// 202 PAY 161 

    0x82ff1f31,// 203 PAY 162 

    0xf57d90af,// 204 PAY 163 

    0x2e65ad82,// 205 PAY 164 

    0x52cffcdf,// 206 PAY 165 

    0x176d4f2b,// 207 PAY 166 

    0x9b3f223a,// 208 PAY 167 

    0xe496f449,// 209 PAY 168 

    0x908ace88,// 210 PAY 169 

    0x4495366f,// 211 PAY 170 

    0xace16d57,// 212 PAY 171 

    0x93596542,// 213 PAY 172 

    0xbf5d1a04,// 214 PAY 173 

    0x19a0207a,// 215 PAY 174 

    0x3c75b6c5,// 216 PAY 175 

    0x6c4f3570,// 217 PAY 176 

    0xddec9f2c,// 218 PAY 177 

    0x537a689a,// 219 PAY 178 

    0xa935a890,// 220 PAY 179 

    0x4cd976a5,// 221 PAY 180 

    0xa6652ee9,// 222 PAY 181 

    0x8b7c5bd7,// 223 PAY 182 

    0x4f0f712a,// 224 PAY 183 

    0x3905b79c,// 225 PAY 184 

    0xc5f7bbe2,// 226 PAY 185 

    0xc5d3b0b6,// 227 PAY 186 

    0x5a854b18,// 228 PAY 187 

    0xc71515cf,// 229 PAY 188 

    0xe6d54fab,// 230 PAY 189 

    0x58636978,// 231 PAY 190 

    0xf16b9c90,// 232 PAY 191 

    0x77d65ff4,// 233 PAY 192 

    0x14eea08b,// 234 PAY 193 

    0xf3f94f0b,// 235 PAY 194 

    0xeb389787,// 236 PAY 195 

    0x63dd3c35,// 237 PAY 196 

    0x24c4f6b2,// 238 PAY 197 

    0xfcadaf29,// 239 PAY 198 

    0xe387dec8,// 240 PAY 199 

    0x7324dabc,// 241 PAY 200 

    0x268d15bb,// 242 PAY 201 

    0x605f1b88,// 243 PAY 202 

    0x177817f0,// 244 PAY 203 

    0xd0cbbdc1,// 245 PAY 204 

    0xae8bb19c,// 246 PAY 205 

    0x7c327b71,// 247 PAY 206 

    0xf1d42984,// 248 PAY 207 

    0x2eed6581,// 249 PAY 208 

    0x1a474ee4,// 250 PAY 209 

    0xfabcadde,// 251 PAY 210 

    0x18322082,// 252 PAY 211 

    0x9980999c,// 253 PAY 212 

    0x63fcdc99,// 254 PAY 213 

    0xbc02fc57,// 255 PAY 214 

    0x57aa0b8b,// 256 PAY 215 

    0xdf6e15d8,// 257 PAY 216 

    0xd2f9e15a,// 258 PAY 217 

    0x1479e7aa,// 259 PAY 218 

    0x90ae08ee,// 260 PAY 219 

    0x94619887,// 261 PAY 220 

    0x3b2148a0,// 262 PAY 221 

    0x3d945983,// 263 PAY 222 

    0x10a94ef7,// 264 PAY 223 

    0xb0023d88,// 265 PAY 224 

    0xff20342f,// 266 PAY 225 

    0xf87f4a1a,// 267 PAY 226 

    0x247df0b0,// 268 PAY 227 

    0x9c8692ce,// 269 PAY 228 

    0x69bf0a40,// 270 PAY 229 

    0xa1083d0b,// 271 PAY 230 

    0x2343d59d,// 272 PAY 231 

    0x0621fb4f,// 273 PAY 232 

    0x6faf4e10,// 274 PAY 233 

    0xf5709111,// 275 PAY 234 

    0x0629f254,// 276 PAY 235 

    0x3b8c7f8b,// 277 PAY 236 

    0x820962b7,// 278 PAY 237 

    0x99ecd7e4,// 279 PAY 238 

    0x5172d006,// 280 PAY 239 

    0x19acfad4,// 281 PAY 240 

    0xc023a5c3,// 282 PAY 241 

    0x0c0a4f40,// 283 PAY 242 

    0xb384106c,// 284 PAY 243 

    0x3a5ec74e,// 285 PAY 244 

    0x84598d52,// 286 PAY 245 

    0xd17085b9,// 287 PAY 246 

    0x6ad9d9c3,// 288 PAY 247 

    0x602f30bb,// 289 PAY 248 

    0x0afda75a,// 290 PAY 249 

    0x10ca7048,// 291 PAY 250 

    0x882ea1e3,// 292 PAY 251 

    0xaf75f43d,// 293 PAY 252 

    0x5ec1855e,// 294 PAY 253 

    0x81f94cdf,// 295 PAY 254 

    0x224b9c51,// 296 PAY 255 

    0x7b3fd896,// 297 PAY 256 

    0xa0f859ea,// 298 PAY 257 

    0x09a5f6f0,// 299 PAY 258 

    0xd70a86c0,// 300 PAY 259 

    0x97881d36,// 301 PAY 260 

    0x2962bfe1,// 302 PAY 261 

    0x8611f5d9,// 303 PAY 262 

    0xe0296378,// 304 PAY 263 

    0x459f5c9a,// 305 PAY 264 

    0x913f6173,// 306 PAY 265 

    0x6d812b58,// 307 PAY 266 

    0x09062425,// 308 PAY 267 

    0xeed78987,// 309 PAY 268 

    0x2ab65813,// 310 PAY 269 

    0x7ffdb1d0,// 311 PAY 270 

    0x03a7b380,// 312 PAY 271 

    0xa91cb202,// 313 PAY 272 

    0x20bf39b0,// 314 PAY 273 

    0x3a64aa58,// 315 PAY 274 

    0x9a88c6a7,// 316 PAY 275 

    0xe2f44729,// 317 PAY 276 

    0x679db8bf,// 318 PAY 277 

    0x43286cc9,// 319 PAY 278 

    0x7e959271,// 320 PAY 279 

    0x119c95ea,// 321 PAY 280 

    0xa2035c2e,// 322 PAY 281 

    0x29a60a51,// 323 PAY 282 

    0xc19574eb,// 324 PAY 283 

    0x3c4e208a,// 325 PAY 284 

    0xdde1ba63,// 326 PAY 285 

    0xb0db2859,// 327 PAY 286 

    0xb924ba32,// 328 PAY 287 

    0x923135d3,// 329 PAY 288 

    0x48de564d,// 330 PAY 289 

    0xb057a259,// 331 PAY 290 

    0x0888c9e4,// 332 PAY 291 

    0xd201a88a,// 333 PAY 292 

    0x219cb509,// 334 PAY 293 

    0x45165732,// 335 PAY 294 

    0x11fac70d,// 336 PAY 295 

    0x6640c108,// 337 PAY 296 

    0x424c6667,// 338 PAY 297 

    0x6195b203,// 339 PAY 298 

    0x7bbbc86f,// 340 PAY 299 

    0x96dbbfca,// 341 PAY 300 

    0x5b71e02d,// 342 PAY 301 

    0x8cddfd58,// 343 PAY 302 

    0x8c8a9cb7,// 344 PAY 303 

    0x6b6be30c,// 345 PAY 304 

    0x32d72bb4,// 346 PAY 305 

    0x0f057e75,// 347 PAY 306 

    0xe3300a72,// 348 PAY 307 

    0x189351ba,// 349 PAY 308 

    0x6eaa3cd1,// 350 PAY 309 

    0xaf8dfa2f,// 351 PAY 310 

    0xa0d04a9a,// 352 PAY 311 

    0xbc7e37dc,// 353 PAY 312 

    0xe4669d59,// 354 PAY 313 

    0x6c67b314,// 355 PAY 314 

    0xd9036999,// 356 PAY 315 

    0x765fb775,// 357 PAY 316 

    0xfe36cd53,// 358 PAY 317 

    0x602067ff,// 359 PAY 318 

    0x5b9ca6bb,// 360 PAY 319 

    0xda34c1e1,// 361 PAY 320 

    0x488519f2,// 362 PAY 321 

    0x9324ce9d,// 363 PAY 322 

    0x55d70463,// 364 PAY 323 

    0x1560ac8c,// 365 PAY 324 

    0x6a246241,// 366 PAY 325 

    0xbc2a0be0,// 367 PAY 326 

    0x61d516c4,// 368 PAY 327 

    0xca721d56,// 369 PAY 328 

    0x38cc4ec9,// 370 PAY 329 

    0x462dbc41,// 371 PAY 330 

    0xe2523f45,// 372 PAY 331 

    0xb515377f,// 373 PAY 332 

    0x1222576a,// 374 PAY 333 

    0x6a2cfdfb,// 375 PAY 334 

    0x40de1567,// 376 PAY 335 

    0x790c7592,// 377 PAY 336 

    0x0b28dbde,// 378 PAY 337 

    0x331fdde7,// 379 PAY 338 

    0x8f6c9f39,// 380 PAY 339 

    0xaa699adc,// 381 PAY 340 

    0x73770c76,// 382 PAY 341 

    0x703357f2,// 383 PAY 342 

    0x206910de,// 384 PAY 343 

    0xb86151f8,// 385 PAY 344 

    0xfa8c377d,// 386 PAY 345 

    0xa9e08b15,// 387 PAY 346 

    0x948fc4a7,// 388 PAY 347 

    0x5584ce30,// 389 PAY 348 

    0x1c559e4e,// 390 PAY 349 

    0x434305e1,// 391 PAY 350 

    0xefdc0bb3,// 392 PAY 351 

    0xafded7cb,// 393 PAY 352 

    0x01f1116e,// 394 PAY 353 

    0x963cda0e,// 395 PAY 354 

    0xf758e163,// 396 PAY 355 

    0x44f4e224,// 397 PAY 356 

    0xb89266f7,// 398 PAY 357 

    0xd7ea9570,// 399 PAY 358 

    0x26d6061d,// 400 PAY 359 

    0xce89a675,// 401 PAY 360 

    0xebb72fd4,// 402 PAY 361 

    0xe882eaec,// 403 PAY 362 

    0xf66d936d,// 404 PAY 363 

    0xc6dc7c83,// 405 PAY 364 

    0xb48292dc,// 406 PAY 365 

    0xa69f9d19,// 407 PAY 366 

    0x902df374,// 408 PAY 367 

    0x0af53e2d,// 409 PAY 368 

    0x3c4bd0c0,// 410 PAY 369 

    0xedd707a2,// 411 PAY 370 

    0x90d5beba,// 412 PAY 371 

    0xae21b402,// 413 PAY 372 

    0x50c8f1c6,// 414 PAY 373 

    0x357440fa,// 415 PAY 374 

    0xf6e7e66d,// 416 PAY 375 

    0x6e985181,// 417 PAY 376 

    0x8ab5e98e,// 418 PAY 377 

    0xe1ea2e25,// 419 PAY 378 

    0x05be7cf2,// 420 PAY 379 

    0x42b30650,// 421 PAY 380 

/// STA is 1 words. 

/// STA num_pkts       : 140 

/// STA pkt_idx        : 203 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xee 

    0x032dee8c // 422 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt8_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x8060283a,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0xac66a979,// 6 SCX   4 

    0xed35f50f,// 7 SCX   5 

    0xb0ac20c5,// 8 SCX   6 

    0xa4583730,// 9 SCX   7 

    0x121499bf,// 10 SCX   8 

    0x3fc80561,// 11 SCX   9 

    0x500616f6,// 12 SCX  10 

    0x6a601b4a,// 13 SCX  11 

    0x679785df,// 14 SCX  12 

    0x816625f8,// 15 SCX  13 

    0x4af2456d,// 16 SCX  14 

    0x58203dca,// 17 SCX  15 

    0x1d667960,// 18 SCX  16 

    0x1bd385cb,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 495 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 191 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 191 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 104 

/// BFD ofstiv         : 36 

/// BFD ofsticv        : 212 

    0x000000bf,// 20 BFD   1 

    0x00580010,// 21 BFD   2 

    0x00d40024,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x1100fb6a,// 23 MFM   1 

    0xfe31e6de,// 24 MFM   2 

    0x65822000,// 25 MFM   3 

/// BDA is 125 words. 

/// BDA size     is 495 (0x1ef) 

/// BDA id       is 0x5dfa 

    0x01ef5dfa,// 26 BDA   1 

/// PAY Generic Data size   : 495 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xe064cfd2,// 27 PAY   1 

    0x3248517b,// 28 PAY   2 

    0xbb71f92e,// 29 PAY   3 

    0xa21afa33,// 30 PAY   4 

    0x3bae1b04,// 31 PAY   5 

    0x8fbb2e05,// 32 PAY   6 

    0xc42db805,// 33 PAY   7 

    0x74fae3f9,// 34 PAY   8 

    0x9a892364,// 35 PAY   9 

    0xdf8473bf,// 36 PAY  10 

    0x09069a54,// 37 PAY  11 

    0xaa474f20,// 38 PAY  12 

    0xef967f29,// 39 PAY  13 

    0xc2e38ab4,// 40 PAY  14 

    0x47292160,// 41 PAY  15 

    0x606780b1,// 42 PAY  16 

    0x4c2d2d36,// 43 PAY  17 

    0x6db53570,// 44 PAY  18 

    0xf9900f37,// 45 PAY  19 

    0xaa43da70,// 46 PAY  20 

    0xaa2df95b,// 47 PAY  21 

    0xdca2261e,// 48 PAY  22 

    0x07f9a940,// 49 PAY  23 

    0x01d75be4,// 50 PAY  24 

    0xf56c7747,// 51 PAY  25 

    0x145237de,// 52 PAY  26 

    0x3161ce1d,// 53 PAY  27 

    0x652c2773,// 54 PAY  28 

    0xa9738506,// 55 PAY  29 

    0x5efc323a,// 56 PAY  30 

    0x68a19b5e,// 57 PAY  31 

    0xf196c9de,// 58 PAY  32 

    0xa1a4791d,// 59 PAY  33 

    0x8cadd153,// 60 PAY  34 

    0x5bef0cf2,// 61 PAY  35 

    0xf81722b9,// 62 PAY  36 

    0x8eafbb5e,// 63 PAY  37 

    0x3384a9b5,// 64 PAY  38 

    0x999e613f,// 65 PAY  39 

    0xc6c9106f,// 66 PAY  40 

    0x1a4b2a21,// 67 PAY  41 

    0xdee880e0,// 68 PAY  42 

    0x4f318208,// 69 PAY  43 

    0x2bb1d561,// 70 PAY  44 

    0x24fbd1d3,// 71 PAY  45 

    0xdd71eff6,// 72 PAY  46 

    0x72830bca,// 73 PAY  47 

    0x626fc626,// 74 PAY  48 

    0xc3ffb8a0,// 75 PAY  49 

    0xe818712a,// 76 PAY  50 

    0x15493ef9,// 77 PAY  51 

    0x1c89df42,// 78 PAY  52 

    0xed27b144,// 79 PAY  53 

    0xb257e9d5,// 80 PAY  54 

    0x8b679b15,// 81 PAY  55 

    0xfe7e609a,// 82 PAY  56 

    0x5a4f1a68,// 83 PAY  57 

    0x0f15e8fa,// 84 PAY  58 

    0xa2b0d977,// 85 PAY  59 

    0x02e1dc9d,// 86 PAY  60 

    0x083c9ed1,// 87 PAY  61 

    0x06299604,// 88 PAY  62 

    0x2601733e,// 89 PAY  63 

    0x5e23e524,// 90 PAY  64 

    0x9b391ead,// 91 PAY  65 

    0xe7a289ec,// 92 PAY  66 

    0x203d52e0,// 93 PAY  67 

    0x60e60e65,// 94 PAY  68 

    0x45834db9,// 95 PAY  69 

    0x67dc8110,// 96 PAY  70 

    0x6875a141,// 97 PAY  71 

    0x1211303d,// 98 PAY  72 

    0x84876103,// 99 PAY  73 

    0x25030a8d,// 100 PAY  74 

    0x328852c3,// 101 PAY  75 

    0x9f8698e6,// 102 PAY  76 

    0xba262b4f,// 103 PAY  77 

    0x8acd9c22,// 104 PAY  78 

    0xe525e0be,// 105 PAY  79 

    0x139c13de,// 106 PAY  80 

    0xd9a2bc8f,// 107 PAY  81 

    0x30d70d86,// 108 PAY  82 

    0x251fa3e7,// 109 PAY  83 

    0x0b1a67f9,// 110 PAY  84 

    0x26310c97,// 111 PAY  85 

    0x9c09f9b2,// 112 PAY  86 

    0x99e4ce7f,// 113 PAY  87 

    0x6dd4e578,// 114 PAY  88 

    0x16a78c34,// 115 PAY  89 

    0xe448d91e,// 116 PAY  90 

    0x78ec0992,// 117 PAY  91 

    0xcdc170cb,// 118 PAY  92 

    0x31d710ab,// 119 PAY  93 

    0xcaae9450,// 120 PAY  94 

    0xe579c995,// 121 PAY  95 

    0xac45edf4,// 122 PAY  96 

    0xcfc8298f,// 123 PAY  97 

    0x0dd078f9,// 124 PAY  98 

    0x52f66b2f,// 125 PAY  99 

    0x97971657,// 126 PAY 100 

    0xede1bee9,// 127 PAY 101 

    0x8dddeb38,// 128 PAY 102 

    0x39e90942,// 129 PAY 103 

    0x4da69375,// 130 PAY 104 

    0x761a742c,// 131 PAY 105 

    0xe21b6358,// 132 PAY 106 

    0x4d07d6ec,// 133 PAY 107 

    0xc31ad0e8,// 134 PAY 108 

    0x28c046a8,// 135 PAY 109 

    0x39ad5c63,// 136 PAY 110 

    0xad6e0498,// 137 PAY 111 

    0xf4dc68db,// 138 PAY 112 

    0x064e6f81,// 139 PAY 113 

    0xf72289d3,// 140 PAY 114 

    0x9a62e59c,// 141 PAY 115 

    0x0321efdf,// 142 PAY 116 

    0x46666daa,// 143 PAY 117 

    0x9936c74d,// 144 PAY 118 

    0xb0d8be80,// 145 PAY 119 

    0xa8cb4c1c,// 146 PAY 120 

    0x9eb5d141,// 147 PAY 121 

    0xeb56dea8,// 148 PAY 122 

    0x461152c6,// 149 PAY 123 

    0x4ef84c00,// 150 PAY 124 

/// STA is 1 words. 

/// STA num_pkts       : 239 

/// STA pkt_idx        : 63 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x00fc1cef // 151 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt9_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806128c1,// 4 SCX   2 

    0x00005100,// 5 SCX   3 

    0x2d5cd40f,// 6 SCX   4 

    0x549f273c,// 7 SCX   5 

    0x2e706369,// 8 SCX   6 

    0xee7099cd,// 9 SCX   7 

    0xf4f62df7,// 10 SCX   8 

    0xa84dcf82,// 11 SCX   9 

    0xeaa37947,// 12 SCX  10 

    0xd0b131b4,// 13 SCX  11 

    0x1ae74129,// 14 SCX  12 

    0xd9a8992d,// 15 SCX  13 

    0xff0de7a0,// 16 SCX  14 

    0x39d5cc2c,// 17 SCX  15 

    0x6e303ef6,// 18 SCX  16 

    0x85c0a1d0,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1832 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1013 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1013 

/// BFD lencrypto      : 136 

/// BFD ofstcrypto     : 848 

/// BFD (ofst+len)cry  : 984 

/// BFD ofstiv         : 732 

/// BFD ofsticv        : 1812 

    0x000003f5,// 20 BFD   1 

    0x03500088,// 21 BFD   2 

    0x071402dc,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x130014cc,// 23 MFM   1 

    0x1efb2607,// 24 MFM   2 

    0x4025eaa0,// 25 MFM   3 

/// BDA is 459 words. 

/// BDA size     is 1832 (0x728) 

/// BDA id       is 0xc580 

    0x0728c580,// 26 BDA   1 

/// PAY Generic Data size   : 1832 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x8c5a7abf,// 27 PAY   1 

    0x22bd8831,// 28 PAY   2 

    0x308a6d4c,// 29 PAY   3 

    0xac5c75bc,// 30 PAY   4 

    0xe0b39da9,// 31 PAY   5 

    0x1453f950,// 32 PAY   6 

    0x2a72fc0c,// 33 PAY   7 

    0xecf0b7f4,// 34 PAY   8 

    0xe057bda4,// 35 PAY   9 

    0x0449caf2,// 36 PAY  10 

    0x48080c76,// 37 PAY  11 

    0xf6d70477,// 38 PAY  12 

    0x1d18e976,// 39 PAY  13 

    0x03bdbc14,// 40 PAY  14 

    0xe92e1d33,// 41 PAY  15 

    0xbdd99d5f,// 42 PAY  16 

    0x3a84466e,// 43 PAY  17 

    0xc7739a4c,// 44 PAY  18 

    0xf19acc5f,// 45 PAY  19 

    0xad76071d,// 46 PAY  20 

    0xdf0ed2c5,// 47 PAY  21 

    0xa7b58288,// 48 PAY  22 

    0x2fc93d8b,// 49 PAY  23 

    0xfd35e404,// 50 PAY  24 

    0x8b99f156,// 51 PAY  25 

    0xfe59ed70,// 52 PAY  26 

    0x1facd5d3,// 53 PAY  27 

    0x08c352d5,// 54 PAY  28 

    0xd0ec7b28,// 55 PAY  29 

    0xcbeb6993,// 56 PAY  30 

    0x8487f088,// 57 PAY  31 

    0x84b1453d,// 58 PAY  32 

    0xc125b496,// 59 PAY  33 

    0x13381b74,// 60 PAY  34 

    0xb6d836b8,// 61 PAY  35 

    0x210636eb,// 62 PAY  36 

    0xe518fd95,// 63 PAY  37 

    0xb7c3688a,// 64 PAY  38 

    0xc473077f,// 65 PAY  39 

    0x55c82246,// 66 PAY  40 

    0x72ace3ad,// 67 PAY  41 

    0xb7671764,// 68 PAY  42 

    0x20127803,// 69 PAY  43 

    0x02a96c27,// 70 PAY  44 

    0x197dcb06,// 71 PAY  45 

    0xcc71039b,// 72 PAY  46 

    0x8d0c2edb,// 73 PAY  47 

    0xb13955df,// 74 PAY  48 

    0x1b16f4e5,// 75 PAY  49 

    0x77afe6bd,// 76 PAY  50 

    0x4160f129,// 77 PAY  51 

    0x957c645f,// 78 PAY  52 

    0xd989e5e4,// 79 PAY  53 

    0x3b4d9dc0,// 80 PAY  54 

    0x672cb700,// 81 PAY  55 

    0x83d814fd,// 82 PAY  56 

    0x3e0ec623,// 83 PAY  57 

    0x43c0c8eb,// 84 PAY  58 

    0x019f367c,// 85 PAY  59 

    0x1406b4fa,// 86 PAY  60 

    0x27fb70d9,// 87 PAY  61 

    0x266c6d1e,// 88 PAY  62 

    0x4b20c7dc,// 89 PAY  63 

    0x03b76282,// 90 PAY  64 

    0xd2a6e386,// 91 PAY  65 

    0xde51fe00,// 92 PAY  66 

    0x8ab65831,// 93 PAY  67 

    0x3bf032c6,// 94 PAY  68 

    0xc451f98c,// 95 PAY  69 

    0x7b5b38b5,// 96 PAY  70 

    0x41b0e0e6,// 97 PAY  71 

    0xa416747b,// 98 PAY  72 

    0x4b581098,// 99 PAY  73 

    0xc3091a7d,// 100 PAY  74 

    0xbb212062,// 101 PAY  75 

    0x862bfcb1,// 102 PAY  76 

    0x3090f6b1,// 103 PAY  77 

    0x6b7d2532,// 104 PAY  78 

    0xad952fb8,// 105 PAY  79 

    0x01f05f27,// 106 PAY  80 

    0xa3e203a3,// 107 PAY  81 

    0xcc3af054,// 108 PAY  82 

    0x503d3497,// 109 PAY  83 

    0xd388cf91,// 110 PAY  84 

    0x437f59aa,// 111 PAY  85 

    0x97e3caf8,// 112 PAY  86 

    0xa7393f66,// 113 PAY  87 

    0xb2ddefea,// 114 PAY  88 

    0x428aae8f,// 115 PAY  89 

    0x926fca55,// 116 PAY  90 

    0x2f323f63,// 117 PAY  91 

    0x9550ad7c,// 118 PAY  92 

    0x67c046da,// 119 PAY  93 

    0xbddd4237,// 120 PAY  94 

    0x1c0a5fcc,// 121 PAY  95 

    0xedc26e9c,// 122 PAY  96 

    0xc2cfd801,// 123 PAY  97 

    0x74fafe31,// 124 PAY  98 

    0x8a211edc,// 125 PAY  99 

    0x03381754,// 126 PAY 100 

    0x708f3ae7,// 127 PAY 101 

    0xc9dc5b17,// 128 PAY 102 

    0x876f1654,// 129 PAY 103 

    0x8ae89f9c,// 130 PAY 104 

    0xd3499088,// 131 PAY 105 

    0x9103fb25,// 132 PAY 106 

    0x8420d5b3,// 133 PAY 107 

    0x49fbde5f,// 134 PAY 108 

    0xab55ddfd,// 135 PAY 109 

    0x208945cf,// 136 PAY 110 

    0xf6242b1d,// 137 PAY 111 

    0x85669971,// 138 PAY 112 

    0xa42a1eeb,// 139 PAY 113 

    0x1b1843cf,// 140 PAY 114 

    0x3d05e0ad,// 141 PAY 115 

    0xbb6e4418,// 142 PAY 116 

    0x54828579,// 143 PAY 117 

    0x2dfe922c,// 144 PAY 118 

    0x3186ebc9,// 145 PAY 119 

    0x6304cf46,// 146 PAY 120 

    0x5fce9f5a,// 147 PAY 121 

    0x02e7fd92,// 148 PAY 122 

    0x260ad9ee,// 149 PAY 123 

    0x699f598e,// 150 PAY 124 

    0x839c4e66,// 151 PAY 125 

    0xcbef26fe,// 152 PAY 126 

    0xedaf32ca,// 153 PAY 127 

    0xad024103,// 154 PAY 128 

    0x0f9e1d59,// 155 PAY 129 

    0xe8f20c7c,// 156 PAY 130 

    0x3ba806c4,// 157 PAY 131 

    0x651a3886,// 158 PAY 132 

    0x40495a3f,// 159 PAY 133 

    0x0ba1b294,// 160 PAY 134 

    0x6e6e84db,// 161 PAY 135 

    0x7baed7c9,// 162 PAY 136 

    0x2247cf11,// 163 PAY 137 

    0xe923493f,// 164 PAY 138 

    0x5f69f419,// 165 PAY 139 

    0xc82749a1,// 166 PAY 140 

    0x875a4347,// 167 PAY 141 

    0xb7ddd65d,// 168 PAY 142 

    0x6a9210d4,// 169 PAY 143 

    0x60db1108,// 170 PAY 144 

    0x8f831386,// 171 PAY 145 

    0xf0183f69,// 172 PAY 146 

    0xe6881ed6,// 173 PAY 147 

    0xe46b653f,// 174 PAY 148 

    0x561a6f81,// 175 PAY 149 

    0x11125dd0,// 176 PAY 150 

    0xdfe674ea,// 177 PAY 151 

    0x8a9d5ed9,// 178 PAY 152 

    0xd1f270bf,// 179 PAY 153 

    0x60f86c1f,// 180 PAY 154 

    0x88432d99,// 181 PAY 155 

    0x4dcd2456,// 182 PAY 156 

    0x32ae973f,// 183 PAY 157 

    0xfbae3976,// 184 PAY 158 

    0xabd98802,// 185 PAY 159 

    0xbabb966d,// 186 PAY 160 

    0xb4f92e7a,// 187 PAY 161 

    0x1a9f3570,// 188 PAY 162 

    0x1cc3b816,// 189 PAY 163 

    0x266de4c9,// 190 PAY 164 

    0x56bd73a8,// 191 PAY 165 

    0x6a76eeda,// 192 PAY 166 

    0x10409a76,// 193 PAY 167 

    0xe62370c4,// 194 PAY 168 

    0x062cf065,// 195 PAY 169 

    0x69d676e7,// 196 PAY 170 

    0x332d09d7,// 197 PAY 171 

    0xdb58c621,// 198 PAY 172 

    0x9ece4892,// 199 PAY 173 

    0x1e388c8e,// 200 PAY 174 

    0xd7693718,// 201 PAY 175 

    0x9fba92e1,// 202 PAY 176 

    0x08b70ebf,// 203 PAY 177 

    0x58e262d0,// 204 PAY 178 

    0x0a16ae06,// 205 PAY 179 

    0x512bb4ab,// 206 PAY 180 

    0x74a45d36,// 207 PAY 181 

    0x980afd1a,// 208 PAY 182 

    0xa736c9b4,// 209 PAY 183 

    0xa9c15fc2,// 210 PAY 184 

    0xa1ea161c,// 211 PAY 185 

    0x2e96d2ab,// 212 PAY 186 

    0x0b42d3e3,// 213 PAY 187 

    0xe0df1c89,// 214 PAY 188 

    0x1a50666f,// 215 PAY 189 

    0xcab69eb9,// 216 PAY 190 

    0x7ec427b2,// 217 PAY 191 

    0x02d55436,// 218 PAY 192 

    0xa5c044a2,// 219 PAY 193 

    0xe66bc0e2,// 220 PAY 194 

    0x4f05ae00,// 221 PAY 195 

    0xa3d069cd,// 222 PAY 196 

    0x2a9c65f4,// 223 PAY 197 

    0x76fd03cb,// 224 PAY 198 

    0x96898c8f,// 225 PAY 199 

    0xd6e5094f,// 226 PAY 200 

    0xe90c25ba,// 227 PAY 201 

    0x47cb2c94,// 228 PAY 202 

    0xb57de792,// 229 PAY 203 

    0x7ca9aa21,// 230 PAY 204 

    0xa26014db,// 231 PAY 205 

    0xac313512,// 232 PAY 206 

    0x46304b64,// 233 PAY 207 

    0x9a472e34,// 234 PAY 208 

    0xb52ba30f,// 235 PAY 209 

    0xc328452a,// 236 PAY 210 

    0x159e10b5,// 237 PAY 211 

    0x9c182e6a,// 238 PAY 212 

    0xb4857090,// 239 PAY 213 

    0x8b92179d,// 240 PAY 214 

    0xa66c8b2f,// 241 PAY 215 

    0x928daff7,// 242 PAY 216 

    0x10477d3e,// 243 PAY 217 

    0xed1c8df3,// 244 PAY 218 

    0x02f9b6a4,// 245 PAY 219 

    0x2f17d6a1,// 246 PAY 220 

    0x913767bb,// 247 PAY 221 

    0xab99ba6c,// 248 PAY 222 

    0xe182860f,// 249 PAY 223 

    0xeca5f184,// 250 PAY 224 

    0xedcf97da,// 251 PAY 225 

    0xc95b396a,// 252 PAY 226 

    0xc9b0e537,// 253 PAY 227 

    0x69e0afa2,// 254 PAY 228 

    0xb7d6210b,// 255 PAY 229 

    0xf5c492a0,// 256 PAY 230 

    0xac1d3bfc,// 257 PAY 231 

    0x44d91453,// 258 PAY 232 

    0xdf7ecc7d,// 259 PAY 233 

    0x331f8ad2,// 260 PAY 234 

    0xbf9301d0,// 261 PAY 235 

    0x02871ad1,// 262 PAY 236 

    0x92285b36,// 263 PAY 237 

    0x1a583978,// 264 PAY 238 

    0x7bde9181,// 265 PAY 239 

    0xc4a5dcf0,// 266 PAY 240 

    0x0fb7cf71,// 267 PAY 241 

    0x3af7f7c2,// 268 PAY 242 

    0x53455bd7,// 269 PAY 243 

    0xfcfe6802,// 270 PAY 244 

    0x9a672bd2,// 271 PAY 245 

    0x7217ae41,// 272 PAY 246 

    0x3aa7ae5e,// 273 PAY 247 

    0x070f8428,// 274 PAY 248 

    0xd68c4d23,// 275 PAY 249 

    0x04125529,// 276 PAY 250 

    0xa02c228b,// 277 PAY 251 

    0x74a640a0,// 278 PAY 252 

    0xf129ad4d,// 279 PAY 253 

    0x16dec9ad,// 280 PAY 254 

    0x19e6a43e,// 281 PAY 255 

    0x37b4a14e,// 282 PAY 256 

    0x1195ad37,// 283 PAY 257 

    0x41151898,// 284 PAY 258 

    0x414a043e,// 285 PAY 259 

    0x1540b472,// 286 PAY 260 

    0x619a2414,// 287 PAY 261 

    0x10915981,// 288 PAY 262 

    0x54c2f0fb,// 289 PAY 263 

    0x97dbc6b6,// 290 PAY 264 

    0xeef314e5,// 291 PAY 265 

    0xc67fdea9,// 292 PAY 266 

    0x01849bcc,// 293 PAY 267 

    0x52277cc3,// 294 PAY 268 

    0x72886395,// 295 PAY 269 

    0x61138f97,// 296 PAY 270 

    0x96650ba0,// 297 PAY 271 

    0x79efe11b,// 298 PAY 272 

    0xd4dc6148,// 299 PAY 273 

    0x75d6b56d,// 300 PAY 274 

    0x321d000e,// 301 PAY 275 

    0xb3af92b4,// 302 PAY 276 

    0xd66bc549,// 303 PAY 277 

    0x7ab71966,// 304 PAY 278 

    0x6d19ef96,// 305 PAY 279 

    0x18ec8aea,// 306 PAY 280 

    0x6870f3c7,// 307 PAY 281 

    0x3133984a,// 308 PAY 282 

    0xb414154d,// 309 PAY 283 

    0xc8a0b9f4,// 310 PAY 284 

    0xffca68d8,// 311 PAY 285 

    0x49aa31dd,// 312 PAY 286 

    0x0c4dfa42,// 313 PAY 287 

    0xd709761b,// 314 PAY 288 

    0x22236c82,// 315 PAY 289 

    0x8f1526a8,// 316 PAY 290 

    0x48a22d9e,// 317 PAY 291 

    0x1536ece5,// 318 PAY 292 

    0x9f19d8b8,// 319 PAY 293 

    0x6ec656bb,// 320 PAY 294 

    0xcc1e9aba,// 321 PAY 295 

    0x4320ea86,// 322 PAY 296 

    0x456402db,// 323 PAY 297 

    0xd0741ea3,// 324 PAY 298 

    0x5e79be86,// 325 PAY 299 

    0xda6aec87,// 326 PAY 300 

    0xa794c56a,// 327 PAY 301 

    0xd075e4b2,// 328 PAY 302 

    0xac27cc49,// 329 PAY 303 

    0xf87ab867,// 330 PAY 304 

    0x50c37d06,// 331 PAY 305 

    0x3d54f335,// 332 PAY 306 

    0x5a81f5c5,// 333 PAY 307 

    0x7df737a7,// 334 PAY 308 

    0x636f4298,// 335 PAY 309 

    0x549480c4,// 336 PAY 310 

    0xee2539bd,// 337 PAY 311 

    0x4c6b49d3,// 338 PAY 312 

    0x7c01b34a,// 339 PAY 313 

    0xd650e049,// 340 PAY 314 

    0x5d61bc1b,// 341 PAY 315 

    0xb1b14c0e,// 342 PAY 316 

    0x1c669b1d,// 343 PAY 317 

    0xbcc804c4,// 344 PAY 318 

    0xcbc3d10b,// 345 PAY 319 

    0x079f2f6a,// 346 PAY 320 

    0x0f65d245,// 347 PAY 321 

    0x7e5141d7,// 348 PAY 322 

    0x81f8b312,// 349 PAY 323 

    0x671f0cc5,// 350 PAY 324 

    0x126366b1,// 351 PAY 325 

    0x12acd4bf,// 352 PAY 326 

    0x6f639457,// 353 PAY 327 

    0x657d769c,// 354 PAY 328 

    0x645b6d9f,// 355 PAY 329 

    0x4750bdf6,// 356 PAY 330 

    0x54ecc2da,// 357 PAY 331 

    0x011410db,// 358 PAY 332 

    0x3b94845d,// 359 PAY 333 

    0xf4c7c82e,// 360 PAY 334 

    0x44c82d63,// 361 PAY 335 

    0x12bc3678,// 362 PAY 336 

    0x60f97e96,// 363 PAY 337 

    0x76bf0ba4,// 364 PAY 338 

    0x809959ae,// 365 PAY 339 

    0xc681d4db,// 366 PAY 340 

    0xc735e61e,// 367 PAY 341 

    0x31ccd584,// 368 PAY 342 

    0xa5c7b88e,// 369 PAY 343 

    0x5aa468ea,// 370 PAY 344 

    0xbc2241c3,// 371 PAY 345 

    0x711d42d9,// 372 PAY 346 

    0x3d88babd,// 373 PAY 347 

    0x01af02c0,// 374 PAY 348 

    0x4d5c96f2,// 375 PAY 349 

    0x7993801f,// 376 PAY 350 

    0xfb707741,// 377 PAY 351 

    0xc9174fca,// 378 PAY 352 

    0xca7e2fef,// 379 PAY 353 

    0x27cae18e,// 380 PAY 354 

    0x65d7310d,// 381 PAY 355 

    0x0c431b3c,// 382 PAY 356 

    0x1154fc05,// 383 PAY 357 

    0x4868df36,// 384 PAY 358 

    0xd875aaa6,// 385 PAY 359 

    0x2ad2aea2,// 386 PAY 360 

    0x386e5c11,// 387 PAY 361 

    0x1b1e7b72,// 388 PAY 362 

    0x8af1055e,// 389 PAY 363 

    0x4af454fa,// 390 PAY 364 

    0x0fde3c77,// 391 PAY 365 

    0x1c67663e,// 392 PAY 366 

    0x9d249404,// 393 PAY 367 

    0x6e6068a1,// 394 PAY 368 

    0xebbe1988,// 395 PAY 369 

    0xf5f10994,// 396 PAY 370 

    0x6a8684ee,// 397 PAY 371 

    0x85255bd2,// 398 PAY 372 

    0x9e5596b7,// 399 PAY 373 

    0x7f0c8aa1,// 400 PAY 374 

    0x847acec6,// 401 PAY 375 

    0xa32d6ece,// 402 PAY 376 

    0x8b8e35ab,// 403 PAY 377 

    0xd84e47a7,// 404 PAY 378 

    0x7f4f1f56,// 405 PAY 379 

    0x3502eba3,// 406 PAY 380 

    0x23f219ee,// 407 PAY 381 

    0x99c1166b,// 408 PAY 382 

    0xb37c7efc,// 409 PAY 383 

    0xecc5d9ac,// 410 PAY 384 

    0xd0721a15,// 411 PAY 385 

    0x8795235f,// 412 PAY 386 

    0x1c0e754f,// 413 PAY 387 

    0x6a7ac7f1,// 414 PAY 388 

    0x5c1b6edf,// 415 PAY 389 

    0x4676b35c,// 416 PAY 390 

    0x17e68557,// 417 PAY 391 

    0x3caadf90,// 418 PAY 392 

    0xfeca4f4e,// 419 PAY 393 

    0x61e2f92c,// 420 PAY 394 

    0xd9968cc4,// 421 PAY 395 

    0xd6165c03,// 422 PAY 396 

    0xe85e1c24,// 423 PAY 397 

    0x1b128abe,// 424 PAY 398 

    0x65e7ba07,// 425 PAY 399 

    0xac54791b,// 426 PAY 400 

    0x4cc718b8,// 427 PAY 401 

    0x968d2837,// 428 PAY 402 

    0xe5b2efcf,// 429 PAY 403 

    0xcfc92cbd,// 430 PAY 404 

    0xac601164,// 431 PAY 405 

    0x39eada58,// 432 PAY 406 

    0x76e383db,// 433 PAY 407 

    0x4a7134d2,// 434 PAY 408 

    0x678bf395,// 435 PAY 409 

    0x04045901,// 436 PAY 410 

    0x522111af,// 437 PAY 411 

    0x35846fc7,// 438 PAY 412 

    0xa5bb7eb7,// 439 PAY 413 

    0x71a7442f,// 440 PAY 414 

    0x9b8ba1ab,// 441 PAY 415 

    0xf4d4730f,// 442 PAY 416 

    0x32ec359a,// 443 PAY 417 

    0x8e741558,// 444 PAY 418 

    0xc17d4821,// 445 PAY 419 

    0x4075fc9c,// 446 PAY 420 

    0x54520906,// 447 PAY 421 

    0x7cd61f89,// 448 PAY 422 

    0x1df4061f,// 449 PAY 423 

    0x4eb023b4,// 450 PAY 424 

    0xa4d9cdd1,// 451 PAY 425 

    0x09849e41,// 452 PAY 426 

    0xe79290b5,// 453 PAY 427 

    0xb38d1a1a,// 454 PAY 428 

    0xc95cddc9,// 455 PAY 429 

    0x26076e98,// 456 PAY 430 

    0x8d26dbf3,// 457 PAY 431 

    0x181887eb,// 458 PAY 432 

    0x25d51417,// 459 PAY 433 

    0x7f2c9d78,// 460 PAY 434 

    0xd72a1675,// 461 PAY 435 

    0x820920fb,// 462 PAY 436 

    0x7f38fa8d,// 463 PAY 437 

    0x59bb5c84,// 464 PAY 438 

    0x93b5d46d,// 465 PAY 439 

    0x5c88af5e,// 466 PAY 440 

    0x555aca86,// 467 PAY 441 

    0x661ce86d,// 468 PAY 442 

    0x33d3271b,// 469 PAY 443 

    0xa221e79d,// 470 PAY 444 

    0xf9b8f25f,// 471 PAY 445 

    0x6440b4df,// 472 PAY 446 

    0x1dbab2fa,// 473 PAY 447 

    0xd567ec02,// 474 PAY 448 

    0xf6fb6dda,// 475 PAY 449 

    0x31291b60,// 476 PAY 450 

    0x61cf660f,// 477 PAY 451 

    0xdb70418c,// 478 PAY 452 

    0x303b3b4c,// 479 PAY 453 

    0x70379af8,// 480 PAY 454 

    0x50c73ff6,// 481 PAY 455 

    0x8bc1824e,// 482 PAY 456 

    0xc9d78aec,// 483 PAY 457 

    0x575912fb,// 484 PAY 458 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x71 

    0x01317149 // 485 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt10_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806428f6,// 4 SCX   2 

    0x000071c2,// 5 SCX   3 

    0x16811a67,// 6 SCX   4 

    0x7b44f299,// 7 SCX   5 

    0x557af4d8,// 8 SCX   6 

    0xb2b9a8d0,// 9 SCX   7 

    0xd58d4a01,// 10 SCX   8 

    0x745b345c,// 11 SCX   9 

    0x8fec857e,// 12 SCX  10 

    0x1f7a318e,// 13 SCX  11 

    0x634d5c30,// 14 SCX  12 

    0x4e64af56,// 15 SCX  13 

    0x675ecefd,// 16 SCX  14 

    0xfa57ae1e,// 17 SCX  15 

    0xfa2a4675,// 18 SCX  16 

    0xc906a33d,// 19 SCX  17 

    0xf1193292,// 20 SCX  18 

    0x9f1295b6,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1771 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1595 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1595 

/// BFD lencrypto      : 760 

/// BFD ofstcrypto     : 340 

/// BFD (ofst+len)cry  : 1100 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 1620 

    0x0000063b,// 22 BFD   1 

    0x015402f8,// 23 BFD   2 

    0x06540028,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c000cf1,// 25 MFM   1 

    0xf31f26e9,// 26 MFM   2 

    0x3256590f,// 27 MFM   3 

    0x0e910130,// 28 MFM   4 

    0xade8dca8,// 29 MFM   5 

    0x8e48fa5a,// 30 MFM   6 

    0xa16431fa,// 31 MFM   7 

    0xf31da1d3,// 32 MFM   8 

    0xb2350eee,// 33 MFM   9 

    0xa1f78849,// 34 MFM  10 

    0x8c84ece2,// 35 MFM  11 

    0x21d8a026,// 36 MFM  12 

    0x8b1ae113,// 37 MFM  13 

    0xc16f553b,// 38 MFM  14 

    0xe5bd2612,// 39 MFM  15 

    0x861fa655,// 40 MFM  16 

/// BDA is 444 words. 

/// BDA size     is 1771 (0x6eb) 

/// BDA id       is 0xdf39 

    0x06ebdf39,// 41 BDA   1 

/// PAY Generic Data size   : 1771 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xee1bf2e6,// 42 PAY   1 

    0xf452d10c,// 43 PAY   2 

    0x85914ff2,// 44 PAY   3 

    0xf46bb6ff,// 45 PAY   4 

    0xca3b02c8,// 46 PAY   5 

    0x179d3321,// 47 PAY   6 

    0x40bc7475,// 48 PAY   7 

    0x6939b2d6,// 49 PAY   8 

    0xfb346fc5,// 50 PAY   9 

    0x1d9dc3b7,// 51 PAY  10 

    0x5a276947,// 52 PAY  11 

    0xe12f0469,// 53 PAY  12 

    0xcdb142b0,// 54 PAY  13 

    0x582450bd,// 55 PAY  14 

    0x082dc4f0,// 56 PAY  15 

    0xdb61169d,// 57 PAY  16 

    0xd70d8214,// 58 PAY  17 

    0x71093e50,// 59 PAY  18 

    0xe6d46826,// 60 PAY  19 

    0x544547ce,// 61 PAY  20 

    0x4aebcdce,// 62 PAY  21 

    0xcfb5fc5f,// 63 PAY  22 

    0x7e78963d,// 64 PAY  23 

    0x3c098fab,// 65 PAY  24 

    0x99a04fbf,// 66 PAY  25 

    0x215bf313,// 67 PAY  26 

    0x648f4358,// 68 PAY  27 

    0x21dfa479,// 69 PAY  28 

    0x3ff61a7f,// 70 PAY  29 

    0x091c03e4,// 71 PAY  30 

    0xf6b59947,// 72 PAY  31 

    0x7ecf2943,// 73 PAY  32 

    0x5b75308f,// 74 PAY  33 

    0xbd93d5d9,// 75 PAY  34 

    0xc693ce4c,// 76 PAY  35 

    0x2250d1a3,// 77 PAY  36 

    0x215cd62e,// 78 PAY  37 

    0x203fb0e0,// 79 PAY  38 

    0x10d44d56,// 80 PAY  39 

    0x600b65a5,// 81 PAY  40 

    0x0ef18eee,// 82 PAY  41 

    0x897bf6a8,// 83 PAY  42 

    0xd1b72c47,// 84 PAY  43 

    0x5cbd95bc,// 85 PAY  44 

    0xbac4a43e,// 86 PAY  45 

    0xa5b39e40,// 87 PAY  46 

    0x20b7501f,// 88 PAY  47 

    0xb55fd748,// 89 PAY  48 

    0x7a17b832,// 90 PAY  49 

    0xb0f0bff3,// 91 PAY  50 

    0x37ae3c0a,// 92 PAY  51 

    0xfc5acb2e,// 93 PAY  52 

    0x623b85bf,// 94 PAY  53 

    0x79ca7d62,// 95 PAY  54 

    0x4797b17e,// 96 PAY  55 

    0xa1013847,// 97 PAY  56 

    0x90b68566,// 98 PAY  57 

    0x251dbe84,// 99 PAY  58 

    0xbb521501,// 100 PAY  59 

    0x254209d7,// 101 PAY  60 

    0xb481ee7d,// 102 PAY  61 

    0xcca6c4f2,// 103 PAY  62 

    0x73c77860,// 104 PAY  63 

    0xccccf6ab,// 105 PAY  64 

    0x7f30b95b,// 106 PAY  65 

    0xaff7a182,// 107 PAY  66 

    0x33e5eb96,// 108 PAY  67 

    0x7c13d8ec,// 109 PAY  68 

    0x05a60ea7,// 110 PAY  69 

    0xdaccf557,// 111 PAY  70 

    0xc971e42a,// 112 PAY  71 

    0x70092fbd,// 113 PAY  72 

    0x5a378c3e,// 114 PAY  73 

    0x417f4264,// 115 PAY  74 

    0xd8047429,// 116 PAY  75 

    0x3806fba2,// 117 PAY  76 

    0xc98a737e,// 118 PAY  77 

    0x43f41260,// 119 PAY  78 

    0xa3f9307e,// 120 PAY  79 

    0xfd2943ec,// 121 PAY  80 

    0x340e78d7,// 122 PAY  81 

    0xf379c5e8,// 123 PAY  82 

    0x51e58937,// 124 PAY  83 

    0xb46807da,// 125 PAY  84 

    0xa7a46b3b,// 126 PAY  85 

    0xcb7d2b78,// 127 PAY  86 

    0x9b50af01,// 128 PAY  87 

    0xe5eb51ff,// 129 PAY  88 

    0x0fe975d8,// 130 PAY  89 

    0x8ad30f5f,// 131 PAY  90 

    0x3959c164,// 132 PAY  91 

    0x87e149bf,// 133 PAY  92 

    0x46758fe7,// 134 PAY  93 

    0x97edd52d,// 135 PAY  94 

    0x43ce19ae,// 136 PAY  95 

    0x004a591f,// 137 PAY  96 

    0x3407841f,// 138 PAY  97 

    0xfdd87eb5,// 139 PAY  98 

    0x1816e77d,// 140 PAY  99 

    0xab2d449a,// 141 PAY 100 

    0xab4910dd,// 142 PAY 101 

    0x28a6539d,// 143 PAY 102 

    0xf8fd247b,// 144 PAY 103 

    0x4a5e4036,// 145 PAY 104 

    0x4e3033dc,// 146 PAY 105 

    0x23623990,// 147 PAY 106 

    0x075e1e82,// 148 PAY 107 

    0x84671ceb,// 149 PAY 108 

    0xaeabe194,// 150 PAY 109 

    0x9d24fcf2,// 151 PAY 110 

    0xd8c5aec1,// 152 PAY 111 

    0xa1e2a97c,// 153 PAY 112 

    0xba749749,// 154 PAY 113 

    0xe936e5ac,// 155 PAY 114 

    0xc8321129,// 156 PAY 115 

    0xd2035bc4,// 157 PAY 116 

    0x68d0b1bb,// 158 PAY 117 

    0x85d94973,// 159 PAY 118 

    0x5c71e755,// 160 PAY 119 

    0x3f3d4c65,// 161 PAY 120 

    0x45a0609b,// 162 PAY 121 

    0x2d7b8bce,// 163 PAY 122 

    0x4238b486,// 164 PAY 123 

    0xe8b1ddc7,// 165 PAY 124 

    0xa8171f61,// 166 PAY 125 

    0x42e35f7f,// 167 PAY 126 

    0x591a53b8,// 168 PAY 127 

    0xfc4460b4,// 169 PAY 128 

    0xab8a6108,// 170 PAY 129 

    0xaf479457,// 171 PAY 130 

    0xc9d3d7af,// 172 PAY 131 

    0x04020a78,// 173 PAY 132 

    0xd671ab35,// 174 PAY 133 

    0xc873acd5,// 175 PAY 134 

    0x8a5a8554,// 176 PAY 135 

    0x7abbb045,// 177 PAY 136 

    0xf468bd05,// 178 PAY 137 

    0x88acf13a,// 179 PAY 138 

    0x74fd56ec,// 180 PAY 139 

    0x57bad554,// 181 PAY 140 

    0xb6f01fa8,// 182 PAY 141 

    0x88ce807b,// 183 PAY 142 

    0xf03ba5bd,// 184 PAY 143 

    0x4fdae76f,// 185 PAY 144 

    0xd0e828d6,// 186 PAY 145 

    0xa8810a47,// 187 PAY 146 

    0x1f2dba09,// 188 PAY 147 

    0x7c156959,// 189 PAY 148 

    0x09a52246,// 190 PAY 149 

    0x2675553c,// 191 PAY 150 

    0xe9c480ca,// 192 PAY 151 

    0x451a1cfd,// 193 PAY 152 

    0xbcca541b,// 194 PAY 153 

    0xf2a84f6b,// 195 PAY 154 

    0xd0810226,// 196 PAY 155 

    0x474a0585,// 197 PAY 156 

    0x28c24a14,// 198 PAY 157 

    0x9d582c50,// 199 PAY 158 

    0x6486a796,// 200 PAY 159 

    0x61cf6312,// 201 PAY 160 

    0x0132ed30,// 202 PAY 161 

    0x85cd2e4e,// 203 PAY 162 

    0xc329a3ce,// 204 PAY 163 

    0xe9f755d0,// 205 PAY 164 

    0xd9e3d5c6,// 206 PAY 165 

    0x780c8544,// 207 PAY 166 

    0xad386c53,// 208 PAY 167 

    0x5a613373,// 209 PAY 168 

    0xc36c8c8c,// 210 PAY 169 

    0xbf3c868e,// 211 PAY 170 

    0x7373c34f,// 212 PAY 171 

    0x4df2298b,// 213 PAY 172 

    0xc6a3a112,// 214 PAY 173 

    0xf057dbdc,// 215 PAY 174 

    0x4864855b,// 216 PAY 175 

    0x26ce14a7,// 217 PAY 176 

    0x2d3f55ba,// 218 PAY 177 

    0x7109dc8b,// 219 PAY 178 

    0xb4750020,// 220 PAY 179 

    0x8263f884,// 221 PAY 180 

    0x7dfe7ddd,// 222 PAY 181 

    0x2157a58c,// 223 PAY 182 

    0xa0d9bf40,// 224 PAY 183 

    0xe0761908,// 225 PAY 184 

    0xaa195932,// 226 PAY 185 

    0x05f876cc,// 227 PAY 186 

    0x64964213,// 228 PAY 187 

    0xdf4a2642,// 229 PAY 188 

    0xf5dca2c4,// 230 PAY 189 

    0xc4a24967,// 231 PAY 190 

    0x9d3c324c,// 232 PAY 191 

    0x022bf184,// 233 PAY 192 

    0x1d284e6d,// 234 PAY 193 

    0x63f03de1,// 235 PAY 194 

    0xe5cf62e4,// 236 PAY 195 

    0xe6523ad8,// 237 PAY 196 

    0x2d063261,// 238 PAY 197 

    0x3cddc589,// 239 PAY 198 

    0xfb34b3a1,// 240 PAY 199 

    0xb58a4b15,// 241 PAY 200 

    0x8e1048e0,// 242 PAY 201 

    0x7d57358e,// 243 PAY 202 

    0x05fd840b,// 244 PAY 203 

    0x2809b67e,// 245 PAY 204 

    0x9e229411,// 246 PAY 205 

    0x648c60fc,// 247 PAY 206 

    0x7afc0985,// 248 PAY 207 

    0xf3b29aad,// 249 PAY 208 

    0x539d85c0,// 250 PAY 209 

    0xdb34777b,// 251 PAY 210 

    0x12ceae48,// 252 PAY 211 

    0x07a56f77,// 253 PAY 212 

    0x45f5c7c0,// 254 PAY 213 

    0x0007a6a1,// 255 PAY 214 

    0x579c52fd,// 256 PAY 215 

    0x8944912d,// 257 PAY 216 

    0xacfedc39,// 258 PAY 217 

    0x16415a83,// 259 PAY 218 

    0x68de4ad6,// 260 PAY 219 

    0x251143d9,// 261 PAY 220 

    0x75b2b2a5,// 262 PAY 221 

    0xb0e3dd3e,// 263 PAY 222 

    0x6d14c179,// 264 PAY 223 

    0xc54b0b17,// 265 PAY 224 

    0x9c7981d0,// 266 PAY 225 

    0x688e158f,// 267 PAY 226 

    0x8eed0136,// 268 PAY 227 

    0xab17b83c,// 269 PAY 228 

    0x86897e67,// 270 PAY 229 

    0xe4b270fc,// 271 PAY 230 

    0x12b188ac,// 272 PAY 231 

    0x5e6d3cd3,// 273 PAY 232 

    0xd77fd965,// 274 PAY 233 

    0xffce0c98,// 275 PAY 234 

    0xab1628f4,// 276 PAY 235 

    0xa5f8180e,// 277 PAY 236 

    0xe9296867,// 278 PAY 237 

    0x2b2528ac,// 279 PAY 238 

    0xf253a760,// 280 PAY 239 

    0x0828b4b7,// 281 PAY 240 

    0x103883de,// 282 PAY 241 

    0xd46efd06,// 283 PAY 242 

    0xfa3576ac,// 284 PAY 243 

    0xf30b0b12,// 285 PAY 244 

    0xaf384f84,// 286 PAY 245 

    0x84f9e360,// 287 PAY 246 

    0x8f924198,// 288 PAY 247 

    0xe022d048,// 289 PAY 248 

    0x7a6aec82,// 290 PAY 249 

    0x30abd365,// 291 PAY 250 

    0x88348e49,// 292 PAY 251 

    0x2e54580d,// 293 PAY 252 

    0x1526ce12,// 294 PAY 253 

    0x04e94b8e,// 295 PAY 254 

    0x3dde9dad,// 296 PAY 255 

    0x32fa651d,// 297 PAY 256 

    0x5526ef4f,// 298 PAY 257 

    0xf5bc9b52,// 299 PAY 258 

    0x266a5290,// 300 PAY 259 

    0x226ed155,// 301 PAY 260 

    0x87fa613b,// 302 PAY 261 

    0x16fbac66,// 303 PAY 262 

    0x1c73f487,// 304 PAY 263 

    0x332d6ca6,// 305 PAY 264 

    0xd69c4d2b,// 306 PAY 265 

    0x6334d211,// 307 PAY 266 

    0xc7b63185,// 308 PAY 267 

    0x24ece961,// 309 PAY 268 

    0x9bd8540d,// 310 PAY 269 

    0xe4d52293,// 311 PAY 270 

    0x56432ddd,// 312 PAY 271 

    0x227cc567,// 313 PAY 272 

    0x5cfa05a4,// 314 PAY 273 

    0x5db3023e,// 315 PAY 274 

    0x42df7e18,// 316 PAY 275 

    0x7ff2a896,// 317 PAY 276 

    0xef3c2eda,// 318 PAY 277 

    0x34e080c5,// 319 PAY 278 

    0x7db273a6,// 320 PAY 279 

    0x244097a5,// 321 PAY 280 

    0x9904da4b,// 322 PAY 281 

    0x990ac20c,// 323 PAY 282 

    0x764b0d03,// 324 PAY 283 

    0xf0bde167,// 325 PAY 284 

    0xa0d6ec2b,// 326 PAY 285 

    0x0e57c379,// 327 PAY 286 

    0xa17a3bac,// 328 PAY 287 

    0xbe897eaa,// 329 PAY 288 

    0x7adeaa10,// 330 PAY 289 

    0x2562f954,// 331 PAY 290 

    0x78dc6bcd,// 332 PAY 291 

    0x9ccd21ad,// 333 PAY 292 

    0xb1936c93,// 334 PAY 293 

    0xa565166f,// 335 PAY 294 

    0x7124ecd2,// 336 PAY 295 

    0x72c4e093,// 337 PAY 296 

    0x3108d688,// 338 PAY 297 

    0x0d1dc410,// 339 PAY 298 

    0x5c9b2774,// 340 PAY 299 

    0x32c2c30a,// 341 PAY 300 

    0x8b789ced,// 342 PAY 301 

    0x9b951446,// 343 PAY 302 

    0xd2a99560,// 344 PAY 303 

    0xc5c1b165,// 345 PAY 304 

    0x64696585,// 346 PAY 305 

    0xfc3a5a3d,// 347 PAY 306 

    0xfe46bd60,// 348 PAY 307 

    0xcd8c1a8a,// 349 PAY 308 

    0x0cfbe1a7,// 350 PAY 309 

    0x2da2416c,// 351 PAY 310 

    0x85142e93,// 352 PAY 311 

    0x2ee9cb5e,// 353 PAY 312 

    0xd8a0b38c,// 354 PAY 313 

    0xce61beb0,// 355 PAY 314 

    0xa70441b0,// 356 PAY 315 

    0xf53654ff,// 357 PAY 316 

    0x7bee950e,// 358 PAY 317 

    0x5313f503,// 359 PAY 318 

    0xb557dacb,// 360 PAY 319 

    0xa06c4a4c,// 361 PAY 320 

    0x4e0b35a8,// 362 PAY 321 

    0x41bdde50,// 363 PAY 322 

    0x84242fab,// 364 PAY 323 

    0x69847d6d,// 365 PAY 324 

    0xb8ee0e7d,// 366 PAY 325 

    0x04a454d3,// 367 PAY 326 

    0x042aa08c,// 368 PAY 327 

    0x504f7737,// 369 PAY 328 

    0x506a32fc,// 370 PAY 329 

    0xc2d9bdcd,// 371 PAY 330 

    0xcd1f3a29,// 372 PAY 331 

    0xeddac9c8,// 373 PAY 332 

    0x54185857,// 374 PAY 333 

    0x41b194b9,// 375 PAY 334 

    0xc742bb6c,// 376 PAY 335 

    0x2553aff1,// 377 PAY 336 

    0x2e292ae4,// 378 PAY 337 

    0x6f42a0ff,// 379 PAY 338 

    0x06df4343,// 380 PAY 339 

    0x994bdd13,// 381 PAY 340 

    0x14827ba9,// 382 PAY 341 

    0xe49873a5,// 383 PAY 342 

    0x1dbba3e8,// 384 PAY 343 

    0xa7b8a062,// 385 PAY 344 

    0xbe025381,// 386 PAY 345 

    0xda819ec0,// 387 PAY 346 

    0x4b8bca2b,// 388 PAY 347 

    0x3e2224b1,// 389 PAY 348 

    0x4d45f1e9,// 390 PAY 349 

    0xaa4472c8,// 391 PAY 350 

    0x069f10aa,// 392 PAY 351 

    0x87affa00,// 393 PAY 352 

    0xf9b6126c,// 394 PAY 353 

    0x6630187a,// 395 PAY 354 

    0xf8d8cb6e,// 396 PAY 355 

    0x5ad39403,// 397 PAY 356 

    0xe84b4b69,// 398 PAY 357 

    0x121e84c3,// 399 PAY 358 

    0x85f6ad02,// 400 PAY 359 

    0x77eeb4dd,// 401 PAY 360 

    0xd5ef8bba,// 402 PAY 361 

    0x353c3e7d,// 403 PAY 362 

    0xec84010b,// 404 PAY 363 

    0x0da9c808,// 405 PAY 364 

    0x805825a8,// 406 PAY 365 

    0x1c0bbda8,// 407 PAY 366 

    0x26c44e7c,// 408 PAY 367 

    0x21cc73f3,// 409 PAY 368 

    0xd61de739,// 410 PAY 369 

    0xae097791,// 411 PAY 370 

    0xaabbd9fc,// 412 PAY 371 

    0x40dd69a4,// 413 PAY 372 

    0xdbc988ff,// 414 PAY 373 

    0xfb9e6d8d,// 415 PAY 374 

    0x5609fd30,// 416 PAY 375 

    0x8f3810b1,// 417 PAY 376 

    0x911ec8c2,// 418 PAY 377 

    0x94d6c4bb,// 419 PAY 378 

    0xb7e5d967,// 420 PAY 379 

    0xc84988e7,// 421 PAY 380 

    0x50e4adbd,// 422 PAY 381 

    0x7f917efd,// 423 PAY 382 

    0x05dd866e,// 424 PAY 383 

    0xfb021239,// 425 PAY 384 

    0x1a15f55e,// 426 PAY 385 

    0xb464317e,// 427 PAY 386 

    0x0f29f25d,// 428 PAY 387 

    0x503771a8,// 429 PAY 388 

    0x33b61648,// 430 PAY 389 

    0xe696cb99,// 431 PAY 390 

    0x49a1e8f8,// 432 PAY 391 

    0x3439a06c,// 433 PAY 392 

    0xc0683b0c,// 434 PAY 393 

    0x095c6cc7,// 435 PAY 394 

    0x0313acab,// 436 PAY 395 

    0x14c6fd51,// 437 PAY 396 

    0xb6bf0875,// 438 PAY 397 

    0x4a4bd461,// 439 PAY 398 

    0x5f45998e,// 440 PAY 399 

    0xcf25c8d8,// 441 PAY 400 

    0xfd59ab0f,// 442 PAY 401 

    0xb83b4e8a,// 443 PAY 402 

    0xc1c696fe,// 444 PAY 403 

    0xe4d97d8f,// 445 PAY 404 

    0xc21e2262,// 446 PAY 405 

    0x526ff39f,// 447 PAY 406 

    0x384bb5b6,// 448 PAY 407 

    0x6c994c10,// 449 PAY 408 

    0x61f8b068,// 450 PAY 409 

    0xa0ee08fe,// 451 PAY 410 

    0xf841faf8,// 452 PAY 411 

    0xa575b813,// 453 PAY 412 

    0xde9cb361,// 454 PAY 413 

    0x8e06cb05,// 455 PAY 414 

    0xbda7f48e,// 456 PAY 415 

    0x760ee389,// 457 PAY 416 

    0xc79a8d53,// 458 PAY 417 

    0xbbf194f4,// 459 PAY 418 

    0x71eb9653,// 460 PAY 419 

    0x551d33de,// 461 PAY 420 

    0xc2b6d6c2,// 462 PAY 421 

    0xdfefd826,// 463 PAY 422 

    0xef6a2249,// 464 PAY 423 

    0xf93c8cfd,// 465 PAY 424 

    0xef87896a,// 466 PAY 425 

    0x96521116,// 467 PAY 426 

    0xaa464020,// 468 PAY 427 

    0xcbc99687,// 469 PAY 428 

    0xcbb19958,// 470 PAY 429 

    0xaabeadad,// 471 PAY 430 

    0x8167d71e,// 472 PAY 431 

    0x9aa89351,// 473 PAY 432 

    0x8a69f494,// 474 PAY 433 

    0x939c0237,// 475 PAY 434 

    0xe022edd1,// 476 PAY 435 

    0x4f9885c0,// 477 PAY 436 

    0x8de7e4e5,// 478 PAY 437 

    0x9b7de392,// 479 PAY 438 

    0x5297aa0a,// 480 PAY 439 

    0x91cd9128,// 481 PAY 440 

    0xa168e6ab,// 482 PAY 441 

    0xc90f86a6,// 483 PAY 442 

    0x052cb400,// 484 PAY 443 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe8 

    0x0359e82c // 485 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt11_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8062283e,// 4 SCX   2 

    0x00007100,// 5 SCX   3 

    0xa853915b,// 6 SCX   4 

    0x9dfa6d09,// 7 SCX   5 

    0x90b32ee7,// 8 SCX   6 

    0xeb86faca,// 9 SCX   7 

    0x930daf0f,// 10 SCX   8 

    0x12b5f68d,// 11 SCX   9 

    0x753cd196,// 12 SCX  10 

    0xea7b56d4,// 13 SCX  11 

    0xd709eb2e,// 14 SCX  12 

    0x5a7d4491,// 15 SCX  13 

    0x7a0036e0,// 16 SCX  14 

    0x7b1d2471,// 17 SCX  15 

    0xbb30e99c,// 18 SCX  16 

    0x544203d8,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 944 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 38 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 38 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 624 

    0x00000026,// 20 BFD   1 

    0x00080010,// 21 BFD   2 

    0x02700000,// 22 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x0200f200,// 23 MFM   1 

/// BDA is 237 words. 

/// BDA size     is 944 (0x3b0) 

/// BDA id       is 0x906 

    0x03b00906,// 24 BDA   1 

/// PAY Generic Data size   : 944 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x42aae3b1,// 25 PAY   1 

    0x06b07671,// 26 PAY   2 

    0xba84b674,// 27 PAY   3 

    0x1a4da84f,// 28 PAY   4 

    0xcd3c1ab4,// 29 PAY   5 

    0x04ae27bd,// 30 PAY   6 

    0x42a05258,// 31 PAY   7 

    0x282a5173,// 32 PAY   8 

    0x2f05e363,// 33 PAY   9 

    0xd5d8b826,// 34 PAY  10 

    0xefa5b3a9,// 35 PAY  11 

    0x5439881f,// 36 PAY  12 

    0xa2a4a04d,// 37 PAY  13 

    0x2df15a8d,// 38 PAY  14 

    0xc412aded,// 39 PAY  15 

    0x396b1834,// 40 PAY  16 

    0xa98b8983,// 41 PAY  17 

    0x91a90c65,// 42 PAY  18 

    0x31deef7d,// 43 PAY  19 

    0xd1d83872,// 44 PAY  20 

    0x76fa618f,// 45 PAY  21 

    0x2c95bb84,// 46 PAY  22 

    0xc89aa69f,// 47 PAY  23 

    0x8a61714e,// 48 PAY  24 

    0x2fefcd71,// 49 PAY  25 

    0x9bf0f538,// 50 PAY  26 

    0x704d9448,// 51 PAY  27 

    0xa39588e0,// 52 PAY  28 

    0x6ce41ade,// 53 PAY  29 

    0x376a5df9,// 54 PAY  30 

    0x5e5d94bd,// 55 PAY  31 

    0x1ce27201,// 56 PAY  32 

    0xd5a397f4,// 57 PAY  33 

    0x96fc5b3d,// 58 PAY  34 

    0x9525ddf2,// 59 PAY  35 

    0xf8ac8976,// 60 PAY  36 

    0xc38eee16,// 61 PAY  37 

    0xa877d95d,// 62 PAY  38 

    0x774f793e,// 63 PAY  39 

    0xbd990600,// 64 PAY  40 

    0x857ee90c,// 65 PAY  41 

    0x96400d72,// 66 PAY  42 

    0x3895160f,// 67 PAY  43 

    0x5ceed0a3,// 68 PAY  44 

    0x599d7351,// 69 PAY  45 

    0x462a76b7,// 70 PAY  46 

    0xe29913c5,// 71 PAY  47 

    0xdd278eb1,// 72 PAY  48 

    0x1bf7c9ce,// 73 PAY  49 

    0x89332337,// 74 PAY  50 

    0xfb2b6289,// 75 PAY  51 

    0x6df67d91,// 76 PAY  52 

    0xe9ad4dad,// 77 PAY  53 

    0xf760c072,// 78 PAY  54 

    0x4ac22d10,// 79 PAY  55 

    0x2bb6db46,// 80 PAY  56 

    0xa07f1eaa,// 81 PAY  57 

    0x06f19169,// 82 PAY  58 

    0x2df1f7ea,// 83 PAY  59 

    0xb869c3b2,// 84 PAY  60 

    0x0574e19b,// 85 PAY  61 

    0xf4c4c15d,// 86 PAY  62 

    0xa5c324b7,// 87 PAY  63 

    0xf79df1d5,// 88 PAY  64 

    0xab72016d,// 89 PAY  65 

    0x89886373,// 90 PAY  66 

    0xc78be41a,// 91 PAY  67 

    0xd8a250c5,// 92 PAY  68 

    0x70a19c55,// 93 PAY  69 

    0x7c3e9082,// 94 PAY  70 

    0xc806bf25,// 95 PAY  71 

    0x879f5bd1,// 96 PAY  72 

    0xcbb8cbf8,// 97 PAY  73 

    0xbee0b3e2,// 98 PAY  74 

    0xb97110d3,// 99 PAY  75 

    0x85683dc9,// 100 PAY  76 

    0x47ba536f,// 101 PAY  77 

    0xc5d01ce7,// 102 PAY  78 

    0x201ee1cf,// 103 PAY  79 

    0x9e0d4a30,// 104 PAY  80 

    0xd65c4d19,// 105 PAY  81 

    0x9c2f4c62,// 106 PAY  82 

    0x3984aba9,// 107 PAY  83 

    0x6cccd8c6,// 108 PAY  84 

    0xac426f82,// 109 PAY  85 

    0x5c19a0ef,// 110 PAY  86 

    0x55881f32,// 111 PAY  87 

    0x4b303e48,// 112 PAY  88 

    0xbae0524f,// 113 PAY  89 

    0xbfb54870,// 114 PAY  90 

    0xfe17039e,// 115 PAY  91 

    0xbc447d99,// 116 PAY  92 

    0x08db73d0,// 117 PAY  93 

    0xb9258023,// 118 PAY  94 

    0x6510f808,// 119 PAY  95 

    0xc71a4c02,// 120 PAY  96 

    0xe8723eb7,// 121 PAY  97 

    0x1bb08d97,// 122 PAY  98 

    0x0c7a6041,// 123 PAY  99 

    0x1262009d,// 124 PAY 100 

    0x0204b019,// 125 PAY 101 

    0x451f6d51,// 126 PAY 102 

    0x377eda64,// 127 PAY 103 

    0x9e2f88d2,// 128 PAY 104 

    0xe59453ee,// 129 PAY 105 

    0xfeb0e7ef,// 130 PAY 106 

    0x110f8b09,// 131 PAY 107 

    0xa8b7bb16,// 132 PAY 108 

    0x11f63352,// 133 PAY 109 

    0xa9383954,// 134 PAY 110 

    0xc5ef4ffe,// 135 PAY 111 

    0xb2ae9827,// 136 PAY 112 

    0x79ed176b,// 137 PAY 113 

    0x023a5f24,// 138 PAY 114 

    0x552b9543,// 139 PAY 115 

    0x135b47a2,// 140 PAY 116 

    0x9bf5629a,// 141 PAY 117 

    0xb7b50596,// 142 PAY 118 

    0x0861ce5f,// 143 PAY 119 

    0xd20f2d67,// 144 PAY 120 

    0xbc6c9983,// 145 PAY 121 

    0x08e94ae3,// 146 PAY 122 

    0xec897e2e,// 147 PAY 123 

    0x0e427418,// 148 PAY 124 

    0x9848cb6e,// 149 PAY 125 

    0x2041b816,// 150 PAY 126 

    0xae5e9fad,// 151 PAY 127 

    0x92d05c92,// 152 PAY 128 

    0xbd671b19,// 153 PAY 129 

    0x2721eb93,// 154 PAY 130 

    0x652fc104,// 155 PAY 131 

    0xbcb7e9c9,// 156 PAY 132 

    0x975e2481,// 157 PAY 133 

    0xf8a0b110,// 158 PAY 134 

    0xd2449843,// 159 PAY 135 

    0xbe5e405e,// 160 PAY 136 

    0xb80d5385,// 161 PAY 137 

    0xc5b9bd46,// 162 PAY 138 

    0x6b20510a,// 163 PAY 139 

    0xf2102646,// 164 PAY 140 

    0x78130073,// 165 PAY 141 

    0x5a92905b,// 166 PAY 142 

    0x7edd514c,// 167 PAY 143 

    0x0e541810,// 168 PAY 144 

    0xe5951059,// 169 PAY 145 

    0x845a3b8f,// 170 PAY 146 

    0x2324ae6d,// 171 PAY 147 

    0x7ab3ce58,// 172 PAY 148 

    0xe1cef568,// 173 PAY 149 

    0x761e672b,// 174 PAY 150 

    0x4eec9242,// 175 PAY 151 

    0x6fcc4cbe,// 176 PAY 152 

    0xe6b78a91,// 177 PAY 153 

    0xaa148805,// 178 PAY 154 

    0xbd1c2152,// 179 PAY 155 

    0x79530c2e,// 180 PAY 156 

    0x18a7b469,// 181 PAY 157 

    0x112095b1,// 182 PAY 158 

    0x86ba7a8d,// 183 PAY 159 

    0xe434d2ac,// 184 PAY 160 

    0x05de5efe,// 185 PAY 161 

    0xbf5d29e4,// 186 PAY 162 

    0x9c37f80d,// 187 PAY 163 

    0xb2beb0f0,// 188 PAY 164 

    0x2b150e48,// 189 PAY 165 

    0x3d022be5,// 190 PAY 166 

    0x8b6da051,// 191 PAY 167 

    0x65addac5,// 192 PAY 168 

    0xbd2f3fc9,// 193 PAY 169 

    0x58234240,// 194 PAY 170 

    0xfbf07542,// 195 PAY 171 

    0x8b2ad535,// 196 PAY 172 

    0xf1e37216,// 197 PAY 173 

    0xc36ff7f8,// 198 PAY 174 

    0xb7b17df7,// 199 PAY 175 

    0x09b32011,// 200 PAY 176 

    0x5765cfcb,// 201 PAY 177 

    0x6f495cf1,// 202 PAY 178 

    0x216ed275,// 203 PAY 179 

    0x8d44e51e,// 204 PAY 180 

    0xd5d16cd9,// 205 PAY 181 

    0x8e4d501d,// 206 PAY 182 

    0xd550827a,// 207 PAY 183 

    0xe6b9efaa,// 208 PAY 184 

    0x96685eca,// 209 PAY 185 

    0xfdf3a3f4,// 210 PAY 186 

    0x4401056e,// 211 PAY 187 

    0x5e454022,// 212 PAY 188 

    0xa876e540,// 213 PAY 189 

    0xb7ed19ee,// 214 PAY 190 

    0x18470358,// 215 PAY 191 

    0x25caeb99,// 216 PAY 192 

    0x06934ef4,// 217 PAY 193 

    0xb8fadebb,// 218 PAY 194 

    0x27779292,// 219 PAY 195 

    0x866d9896,// 220 PAY 196 

    0x81c03aa5,// 221 PAY 197 

    0x09da4a78,// 222 PAY 198 

    0xb3427d9c,// 223 PAY 199 

    0xc6e5a3c2,// 224 PAY 200 

    0x743061ac,// 225 PAY 201 

    0x4ea492cb,// 226 PAY 202 

    0x76515bf1,// 227 PAY 203 

    0x2b8022d2,// 228 PAY 204 

    0x257034b2,// 229 PAY 205 

    0x422ac679,// 230 PAY 206 

    0x73c319ab,// 231 PAY 207 

    0x06b056c5,// 232 PAY 208 

    0xbfd1f217,// 233 PAY 209 

    0x4b83ca9b,// 234 PAY 210 

    0x3f8d53ae,// 235 PAY 211 

    0x881a5d53,// 236 PAY 212 

    0xd10c08ce,// 237 PAY 213 

    0x71ef1af1,// 238 PAY 214 

    0x07f9dbe8,// 239 PAY 215 

    0xaf6224de,// 240 PAY 216 

    0xdc23a71f,// 241 PAY 217 

    0xb7707bc2,// 242 PAY 218 

    0x331d27ec,// 243 PAY 219 

    0x71959409,// 244 PAY 220 

    0xb735aabc,// 245 PAY 221 

    0x677e2e93,// 246 PAY 222 

    0x5f5d0d6b,// 247 PAY 223 

    0xbe7d157c,// 248 PAY 224 

    0x79638599,// 249 PAY 225 

    0x8556dfcb,// 250 PAY 226 

    0xd9998262,// 251 PAY 227 

    0x10d0a3d4,// 252 PAY 228 

    0x157a6342,// 253 PAY 229 

    0xc8b81c36,// 254 PAY 230 

    0xbb31a9c2,// 255 PAY 231 

    0x5808d80a,// 256 PAY 232 

    0x529739a0,// 257 PAY 233 

    0x7a244752,// 258 PAY 234 

    0x04d480a5,// 259 PAY 235 

    0x55113da5,// 260 PAY 236 

/// STA is 1 words. 

/// STA num_pkts       : 10 

/// STA pkt_idx        : 216 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7c 

    0x03607c0a // 261 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt12_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806028b2,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0xf36283e5,// 6 SCX   4 

    0x449e04d1,// 7 SCX   5 

    0xf71e710a,// 8 SCX   6 

    0x88ac42c0,// 9 SCX   7 

    0x45540f99,// 10 SCX   8 

    0xdaf9c2f7,// 11 SCX   9 

    0xa557bda1,// 12 SCX  10 

    0xda0e1b55,// 13 SCX  11 

    0xd9f5115c,// 14 SCX  12 

    0xcf33bc24,// 15 SCX  13 

    0x72157152,// 16 SCX  14 

    0x982c3c1c,// 17 SCX  15 

    0x4d04c966,// 18 SCX  16 

    0x7fa4efcb,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 416 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 18 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 18 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 16 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 120 

    0x00000012,// 20 BFD   1 

    0x00080008,// 21 BFD   2 

    0x00780000,// 22 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x02003000,// 23 MFM   1 

/// BDA is 105 words. 

/// BDA size     is 416 (0x1a0) 

/// BDA id       is 0x79ee 

    0x01a079ee,// 24 BDA   1 

/// PAY Generic Data size   : 416 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xed947e23,// 25 PAY   1 

    0xb79a9962,// 26 PAY   2 

    0x39536194,// 27 PAY   3 

    0x32484a1f,// 28 PAY   4 

    0xc36590db,// 29 PAY   5 

    0x73113177,// 30 PAY   6 

    0xb10416fb,// 31 PAY   7 

    0xbf9fc6d0,// 32 PAY   8 

    0x808cf3aa,// 33 PAY   9 

    0x5550015a,// 34 PAY  10 

    0x026e279a,// 35 PAY  11 

    0xfd782964,// 36 PAY  12 

    0x600b2062,// 37 PAY  13 

    0x62029f3c,// 38 PAY  14 

    0x0606e129,// 39 PAY  15 

    0xeb2d2072,// 40 PAY  16 

    0x92e06a89,// 41 PAY  17 

    0xce8e3b85,// 42 PAY  18 

    0x7df85e0d,// 43 PAY  19 

    0x58669a7d,// 44 PAY  20 

    0xf2bfcef3,// 45 PAY  21 

    0xfaa90d8b,// 46 PAY  22 

    0x953730e1,// 47 PAY  23 

    0xda9a0bf4,// 48 PAY  24 

    0x61a90499,// 49 PAY  25 

    0xe119259f,// 50 PAY  26 

    0xb9cbb4be,// 51 PAY  27 

    0xf5be755f,// 52 PAY  28 

    0x5495d3c9,// 53 PAY  29 

    0xe7b6e5f1,// 54 PAY  30 

    0x7d40f1eb,// 55 PAY  31 

    0x66585086,// 56 PAY  32 

    0x8a2201fd,// 57 PAY  33 

    0xa41e4e08,// 58 PAY  34 

    0xde0e036c,// 59 PAY  35 

    0x1baf41dd,// 60 PAY  36 

    0x44d23c67,// 61 PAY  37 

    0xa8c95025,// 62 PAY  38 

    0x21c79168,// 63 PAY  39 

    0xbf1c3cf2,// 64 PAY  40 

    0x61441361,// 65 PAY  41 

    0xb4927c80,// 66 PAY  42 

    0xdc358011,// 67 PAY  43 

    0x0f868331,// 68 PAY  44 

    0xda77ee9a,// 69 PAY  45 

    0xb219e3d9,// 70 PAY  46 

    0x8ea79b13,// 71 PAY  47 

    0xe366d5c5,// 72 PAY  48 

    0x963aaffc,// 73 PAY  49 

    0xb31b4f72,// 74 PAY  50 

    0x74b7a0db,// 75 PAY  51 

    0xfe69f30d,// 76 PAY  52 

    0x0793ce4a,// 77 PAY  53 

    0x92f5def4,// 78 PAY  54 

    0xba482710,// 79 PAY  55 

    0x9ead9611,// 80 PAY  56 

    0x91e4c71d,// 81 PAY  57 

    0x0b70a1ef,// 82 PAY  58 

    0x4206dc5f,// 83 PAY  59 

    0xba0ee1ec,// 84 PAY  60 

    0xb8a7ae16,// 85 PAY  61 

    0x63b53395,// 86 PAY  62 

    0x9d47a002,// 87 PAY  63 

    0x0fce43cc,// 88 PAY  64 

    0xfad24334,// 89 PAY  65 

    0x72f9ae11,// 90 PAY  66 

    0x93bcf45d,// 91 PAY  67 

    0x6525f025,// 92 PAY  68 

    0x4d3a1b1b,// 93 PAY  69 

    0xdb8fbb7d,// 94 PAY  70 

    0xcde2cb8b,// 95 PAY  71 

    0x1c72cada,// 96 PAY  72 

    0x00e207ef,// 97 PAY  73 

    0x5cf690f8,// 98 PAY  74 

    0x19b5d421,// 99 PAY  75 

    0x7f8f2749,// 100 PAY  76 

    0xd2a6ffc8,// 101 PAY  77 

    0x3b2f9235,// 102 PAY  78 

    0xbcb58f5e,// 103 PAY  79 

    0x117217f5,// 104 PAY  80 

    0x2bb811ed,// 105 PAY  81 

    0x76b3f4f7,// 106 PAY  82 

    0x138d47ec,// 107 PAY  83 

    0x368332cf,// 108 PAY  84 

    0xb6cd391c,// 109 PAY  85 

    0xf2d47697,// 110 PAY  86 

    0x1a681e20,// 111 PAY  87 

    0x9e7e7ce5,// 112 PAY  88 

    0x4816fb2b,// 113 PAY  89 

    0x7c8ca375,// 114 PAY  90 

    0x515b15d6,// 115 PAY  91 

    0x788929c7,// 116 PAY  92 

    0xc3c436f3,// 117 PAY  93 

    0x241fb195,// 118 PAY  94 

    0xa69561e1,// 119 PAY  95 

    0x3b129a5d,// 120 PAY  96 

    0x3d41897e,// 121 PAY  97 

    0xc298d323,// 122 PAY  98 

    0x95f0521c,// 123 PAY  99 

    0x9f1ba543,// 124 PAY 100 

    0x30091cb4,// 125 PAY 101 

    0x17f21294,// 126 PAY 102 

    0xcfa75efe,// 127 PAY 103 

    0x931f1db6,// 128 PAY 104 

/// STA is 1 words. 

/// STA num_pkts       : 116 

/// STA pkt_idx        : 70 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcf 

    0x0119cf74 // 129 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt13_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806228b7,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0xa9d2d89c,// 6 SCX   4 

    0x709938a9,// 7 SCX   5 

    0x93fa1aa6,// 8 SCX   6 

    0x8d32dddf,// 9 SCX   7 

    0x2bd4e7b2,// 10 SCX   8 

    0x95316421,// 11 SCX   9 

    0x549243a8,// 12 SCX  10 

    0x35c4e3f7,// 13 SCX  11 

    0xc2a853d3,// 14 SCX  12 

    0x41a566b6,// 15 SCX  13 

    0xf4411b1d,// 16 SCX  14 

    0xbffbd64a,// 17 SCX  15 

    0x0791dccf,// 18 SCX  16 

    0x12d1d619,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1367 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 702 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 702 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 508 

/// BFD (ofst+len)cry  : 556 

/// BFD ofstiv         : 224 

/// BFD ofsticv        : 912 

    0x000002be,// 20 BFD   1 

    0x01fc0030,// 21 BFD   2 

    0x039000e0,// 22 BFD   3 

/// MFM is 9 words. 

/// MFM vldnibs        : 41 

    0x41002bf6,// 23 MFM   1 

    0xe029419d,// 24 MFM   2 

    0xed98b843,// 25 MFM   3 

    0xf0537423,// 26 MFM   4 

    0x849e113b,// 27 MFM   5 

    0x6d38258d,// 28 MFM   6 

    0xf931e85b,// 29 MFM   7 

    0x558f42cc,// 30 MFM   8 

    0x47694000,// 31 MFM   9 

/// BDA is 343 words. 

/// BDA size     is 1367 (0x557) 

/// BDA id       is 0x91a 

    0x0557091a,// 32 BDA   1 

/// PAY Generic Data size   : 1367 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x844e346c,// 33 PAY   1 

    0x6f11c2d5,// 34 PAY   2 

    0x0b8f97b1,// 35 PAY   3 

    0xacaa12a8,// 36 PAY   4 

    0x37d22d51,// 37 PAY   5 

    0x48fa9b7c,// 38 PAY   6 

    0x69d304c3,// 39 PAY   7 

    0x8b927e26,// 40 PAY   8 

    0x74ac7dec,// 41 PAY   9 

    0xebd012b8,// 42 PAY  10 

    0x13ffe71a,// 43 PAY  11 

    0xacfddace,// 44 PAY  12 

    0x2528fe4e,// 45 PAY  13 

    0xc64828ef,// 46 PAY  14 

    0xbd93894d,// 47 PAY  15 

    0x47158067,// 48 PAY  16 

    0x0c8a3d35,// 49 PAY  17 

    0x9da1505c,// 50 PAY  18 

    0x2303e8f1,// 51 PAY  19 

    0x5ec1f636,// 52 PAY  20 

    0x16db887c,// 53 PAY  21 

    0xa7c6ea0b,// 54 PAY  22 

    0x99e84dfc,// 55 PAY  23 

    0x9e10daa0,// 56 PAY  24 

    0x6570f990,// 57 PAY  25 

    0xb1f97f28,// 58 PAY  26 

    0xa01f9d16,// 59 PAY  27 

    0x42a5742b,// 60 PAY  28 

    0xdd03139d,// 61 PAY  29 

    0x793d89f7,// 62 PAY  30 

    0x47c90fcf,// 63 PAY  31 

    0x5dc7367d,// 64 PAY  32 

    0x465f17f0,// 65 PAY  33 

    0x044bc444,// 66 PAY  34 

    0xf68cb8c8,// 67 PAY  35 

    0xc32cce52,// 68 PAY  36 

    0xa4815027,// 69 PAY  37 

    0x3edc1fcb,// 70 PAY  38 

    0xad8f5e8f,// 71 PAY  39 

    0xf0a63567,// 72 PAY  40 

    0xba288c68,// 73 PAY  41 

    0x88e44a6a,// 74 PAY  42 

    0xd06eed2c,// 75 PAY  43 

    0x566d7683,// 76 PAY  44 

    0x4dec8985,// 77 PAY  45 

    0xf9c9afe5,// 78 PAY  46 

    0xba334357,// 79 PAY  47 

    0xb0a0f709,// 80 PAY  48 

    0xda7b6898,// 81 PAY  49 

    0xe65ccdb4,// 82 PAY  50 

    0xaf0657fc,// 83 PAY  51 

    0xda92ebf2,// 84 PAY  52 

    0x19725407,// 85 PAY  53 

    0xcb0612df,// 86 PAY  54 

    0x2c8ba4fe,// 87 PAY  55 

    0xc5b510d2,// 88 PAY  56 

    0xc3a79d56,// 89 PAY  57 

    0x44ef94db,// 90 PAY  58 

    0x09bb792b,// 91 PAY  59 

    0x7f0b58ec,// 92 PAY  60 

    0x9e9b07e5,// 93 PAY  61 

    0x8ae5dead,// 94 PAY  62 

    0xfd22dce7,// 95 PAY  63 

    0x3b86f38b,// 96 PAY  64 

    0x405f696a,// 97 PAY  65 

    0x32ee9da7,// 98 PAY  66 

    0x63704d65,// 99 PAY  67 

    0xbcbbe77c,// 100 PAY  68 

    0xde02a755,// 101 PAY  69 

    0x5f8ff9fa,// 102 PAY  70 

    0xe6c43aba,// 103 PAY  71 

    0xd1ada1a3,// 104 PAY  72 

    0x06655e3c,// 105 PAY  73 

    0x1767c3cb,// 106 PAY  74 

    0xe5643cb4,// 107 PAY  75 

    0x432836bf,// 108 PAY  76 

    0x0fde2dd6,// 109 PAY  77 

    0xb67e81a3,// 110 PAY  78 

    0x8aef231b,// 111 PAY  79 

    0xc89327cd,// 112 PAY  80 

    0xba01588a,// 113 PAY  81 

    0x6e224f91,// 114 PAY  82 

    0xc11ca30d,// 115 PAY  83 

    0x2fc465d5,// 116 PAY  84 

    0x5abae0f2,// 117 PAY  85 

    0x39849d13,// 118 PAY  86 

    0x8bf6c9f8,// 119 PAY  87 

    0x72b3ebfa,// 120 PAY  88 

    0xf92b6c61,// 121 PAY  89 

    0xe483fb21,// 122 PAY  90 

    0xb7aad2f5,// 123 PAY  91 

    0xf7ce0cda,// 124 PAY  92 

    0xb4801488,// 125 PAY  93 

    0x0a40162e,// 126 PAY  94 

    0x5f89798e,// 127 PAY  95 

    0xcfb2cb18,// 128 PAY  96 

    0x754ff798,// 129 PAY  97 

    0x522089f7,// 130 PAY  98 

    0x69e9c062,// 131 PAY  99 

    0x3efbbde0,// 132 PAY 100 

    0x3d41cf3a,// 133 PAY 101 

    0x3dc714f9,// 134 PAY 102 

    0x569fa27b,// 135 PAY 103 

    0x4db31ead,// 136 PAY 104 

    0x972af9d1,// 137 PAY 105 

    0xafc5d8f8,// 138 PAY 106 

    0xaed71828,// 139 PAY 107 

    0xcacd5332,// 140 PAY 108 

    0x9e7dfe2f,// 141 PAY 109 

    0x5354420c,// 142 PAY 110 

    0xf69ec552,// 143 PAY 111 

    0x004cf47c,// 144 PAY 112 

    0xed60fc9e,// 145 PAY 113 

    0x4d6f1c90,// 146 PAY 114 

    0xd564a01c,// 147 PAY 115 

    0x1297c7ff,// 148 PAY 116 

    0x3af8bac3,// 149 PAY 117 

    0xecf2bb37,// 150 PAY 118 

    0xd29bd3ae,// 151 PAY 119 

    0x7bf82bb1,// 152 PAY 120 

    0xc68acb2a,// 153 PAY 121 

    0xb7f9fb2a,// 154 PAY 122 

    0x02c1dbc3,// 155 PAY 123 

    0xc1a17aaa,// 156 PAY 124 

    0x02cf69c0,// 157 PAY 125 

    0xd0cbf651,// 158 PAY 126 

    0x08a39516,// 159 PAY 127 

    0xa4021f71,// 160 PAY 128 

    0x9b8d0cbe,// 161 PAY 129 

    0xba70153a,// 162 PAY 130 

    0x24b76bcc,// 163 PAY 131 

    0x738e9268,// 164 PAY 132 

    0xa5d90b13,// 165 PAY 133 

    0x6474fe18,// 166 PAY 134 

    0xfbf888d2,// 167 PAY 135 

    0x969ddb59,// 168 PAY 136 

    0x0749e7ef,// 169 PAY 137 

    0x0a4eb025,// 170 PAY 138 

    0xc7a1f917,// 171 PAY 139 

    0x307a0e90,// 172 PAY 140 

    0xa0e6027b,// 173 PAY 141 

    0x61aa98f6,// 174 PAY 142 

    0xc9626522,// 175 PAY 143 

    0x6f7a3bb3,// 176 PAY 144 

    0x9a0c5b78,// 177 PAY 145 

    0x40392ce5,// 178 PAY 146 

    0x34e546ad,// 179 PAY 147 

    0x479c5475,// 180 PAY 148 

    0x54341425,// 181 PAY 149 

    0x5b50eb6e,// 182 PAY 150 

    0xef523500,// 183 PAY 151 

    0x08ab4d18,// 184 PAY 152 

    0x142cd672,// 185 PAY 153 

    0x86198e61,// 186 PAY 154 

    0x9ee447a0,// 187 PAY 155 

    0xb7d70b85,// 188 PAY 156 

    0x73b2e6ae,// 189 PAY 157 

    0x125311d3,// 190 PAY 158 

    0x8b28870e,// 191 PAY 159 

    0x03f60529,// 192 PAY 160 

    0xf0e3b7b1,// 193 PAY 161 

    0x3ece3c66,// 194 PAY 162 

    0xe4bee10b,// 195 PAY 163 

    0x142e46d8,// 196 PAY 164 

    0x37529c4f,// 197 PAY 165 

    0x050dd6e3,// 198 PAY 166 

    0x1735e3e2,// 199 PAY 167 

    0x10eb5f63,// 200 PAY 168 

    0xeb5e4832,// 201 PAY 169 

    0x241a9391,// 202 PAY 170 

    0xfb269ab6,// 203 PAY 171 

    0xf13b3ca4,// 204 PAY 172 

    0xfc483e17,// 205 PAY 173 

    0xbc71b6aa,// 206 PAY 174 

    0xe1460a7e,// 207 PAY 175 

    0xaa1d9792,// 208 PAY 176 

    0x73ec58ac,// 209 PAY 177 

    0x19a89c0e,// 210 PAY 178 

    0x6b4e1e50,// 211 PAY 179 

    0x39d39973,// 212 PAY 180 

    0xe208f312,// 213 PAY 181 

    0x9683188c,// 214 PAY 182 

    0x6f88ded0,// 215 PAY 183 

    0xd9018ee9,// 216 PAY 184 

    0xe5bbd3d0,// 217 PAY 185 

    0x840aaf9c,// 218 PAY 186 

    0x4b00e62e,// 219 PAY 187 

    0xa681a542,// 220 PAY 188 

    0x4d69bd88,// 221 PAY 189 

    0xe3e3034e,// 222 PAY 190 

    0x7a9b06f5,// 223 PAY 191 

    0x17bb2a09,// 224 PAY 192 

    0x20a8b5eb,// 225 PAY 193 

    0x6b0353b2,// 226 PAY 194 

    0xb36be11c,// 227 PAY 195 

    0x35cd81ab,// 228 PAY 196 

    0x94274cfb,// 229 PAY 197 

    0xe5f14ef5,// 230 PAY 198 

    0xbbbcba6d,// 231 PAY 199 

    0xbd64bccb,// 232 PAY 200 

    0x1e2e3138,// 233 PAY 201 

    0xa0346644,// 234 PAY 202 

    0xd2d08965,// 235 PAY 203 

    0x447379cb,// 236 PAY 204 

    0xd30d15e3,// 237 PAY 205 

    0x2c8cff8f,// 238 PAY 206 

    0x48bf6d73,// 239 PAY 207 

    0x538c4167,// 240 PAY 208 

    0x1a2ea4d7,// 241 PAY 209 

    0x262c299c,// 242 PAY 210 

    0x361ccf8e,// 243 PAY 211 

    0xe44ae1f0,// 244 PAY 212 

    0x718b4c0f,// 245 PAY 213 

    0xbb15b0ec,// 246 PAY 214 

    0x5e2891ee,// 247 PAY 215 

    0x192f4317,// 248 PAY 216 

    0xfe4e3af2,// 249 PAY 217 

    0x4aeac021,// 250 PAY 218 

    0x8034b89e,// 251 PAY 219 

    0x34980b59,// 252 PAY 220 

    0xcb20a473,// 253 PAY 221 

    0x06c2a34d,// 254 PAY 222 

    0x84718985,// 255 PAY 223 

    0xc3179ade,// 256 PAY 224 

    0x252273d9,// 257 PAY 225 

    0x0b7d8562,// 258 PAY 226 

    0xb706891d,// 259 PAY 227 

    0x935dd901,// 260 PAY 228 

    0x8a160c19,// 261 PAY 229 

    0xeadb2e4d,// 262 PAY 230 

    0xf3ecb769,// 263 PAY 231 

    0x9b418276,// 264 PAY 232 

    0xf05569f4,// 265 PAY 233 

    0xa0aa21da,// 266 PAY 234 

    0xfb33c0e8,// 267 PAY 235 

    0x64929e17,// 268 PAY 236 

    0x2f9a7a86,// 269 PAY 237 

    0x0d77ba15,// 270 PAY 238 

    0x523e5ab6,// 271 PAY 239 

    0x34131e4a,// 272 PAY 240 

    0xd7a06768,// 273 PAY 241 

    0x84d842a6,// 274 PAY 242 

    0x61a6d424,// 275 PAY 243 

    0x197fe65e,// 276 PAY 244 

    0x67a5d293,// 277 PAY 245 

    0x5102fb87,// 278 PAY 246 

    0x2641c8c2,// 279 PAY 247 

    0x3594851d,// 280 PAY 248 

    0xaa1f7580,// 281 PAY 249 

    0x8b8d6a20,// 282 PAY 250 

    0x330709e2,// 283 PAY 251 

    0x7ec66444,// 284 PAY 252 

    0xaec5c08c,// 285 PAY 253 

    0xeb94e212,// 286 PAY 254 

    0x0c3d4c5c,// 287 PAY 255 

    0x1b62a097,// 288 PAY 256 

    0x61231e36,// 289 PAY 257 

    0xd2792b13,// 290 PAY 258 

    0x29269a5a,// 291 PAY 259 

    0x958ec994,// 292 PAY 260 

    0xc4667990,// 293 PAY 261 

    0x98226a60,// 294 PAY 262 

    0xe9ed4c49,// 295 PAY 263 

    0x1282db3f,// 296 PAY 264 

    0x9e9954ed,// 297 PAY 265 

    0xc82c4eba,// 298 PAY 266 

    0xac16cc85,// 299 PAY 267 

    0xd225d49b,// 300 PAY 268 

    0xa18dd500,// 301 PAY 269 

    0xa44a1fc7,// 302 PAY 270 

    0xb7622fe4,// 303 PAY 271 

    0x6644188b,// 304 PAY 272 

    0x817dc966,// 305 PAY 273 

    0xdb06c600,// 306 PAY 274 

    0xe5d2a32d,// 307 PAY 275 

    0xc3e9ae63,// 308 PAY 276 

    0x8ef54ac4,// 309 PAY 277 

    0xe7f974a6,// 310 PAY 278 

    0x7a464466,// 311 PAY 279 

    0x4bd4160a,// 312 PAY 280 

    0x328de852,// 313 PAY 281 

    0xd85121ca,// 314 PAY 282 

    0x2df50739,// 315 PAY 283 

    0x92adabf4,// 316 PAY 284 

    0x54226027,// 317 PAY 285 

    0x2d7a38c6,// 318 PAY 286 

    0x80dcf50b,// 319 PAY 287 

    0xbb8714de,// 320 PAY 288 

    0x4e2da754,// 321 PAY 289 

    0x5acf03b5,// 322 PAY 290 

    0x678a0649,// 323 PAY 291 

    0x08268272,// 324 PAY 292 

    0x70164c02,// 325 PAY 293 

    0x981a5e5b,// 326 PAY 294 

    0x594f66f5,// 327 PAY 295 

    0xd7ea5165,// 328 PAY 296 

    0xa38f4f97,// 329 PAY 297 

    0x42661336,// 330 PAY 298 

    0x428f2cd6,// 331 PAY 299 

    0x4f23b7dd,// 332 PAY 300 

    0x30084e7a,// 333 PAY 301 

    0xdd85c86a,// 334 PAY 302 

    0xfb6e7ec8,// 335 PAY 303 

    0xbb52c2e4,// 336 PAY 304 

    0x3ef0c338,// 337 PAY 305 

    0xd83f0352,// 338 PAY 306 

    0x229996c4,// 339 PAY 307 

    0x70b571a4,// 340 PAY 308 

    0xdcd2cf0e,// 341 PAY 309 

    0xd51a5901,// 342 PAY 310 

    0xbbf8bc50,// 343 PAY 311 

    0x7f0cd6bb,// 344 PAY 312 

    0x5e85a35b,// 345 PAY 313 

    0x032dd1fd,// 346 PAY 314 

    0x25990961,// 347 PAY 315 

    0xa0b48781,// 348 PAY 316 

    0xa3e8885e,// 349 PAY 317 

    0xf8289dec,// 350 PAY 318 

    0x9650b538,// 351 PAY 319 

    0xe7a72fd0,// 352 PAY 320 

    0xfadb152e,// 353 PAY 321 

    0xbe694d87,// 354 PAY 322 

    0x1d188dd9,// 355 PAY 323 

    0x9a9914e1,// 356 PAY 324 

    0x117ef496,// 357 PAY 325 

    0x233b9c3c,// 358 PAY 326 

    0xae317eef,// 359 PAY 327 

    0x3dc9c92b,// 360 PAY 328 

    0xa0d83c48,// 361 PAY 329 

    0xe908c7c3,// 362 PAY 330 

    0x4d88425e,// 363 PAY 331 

    0xeba3a077,// 364 PAY 332 

    0x2a4e5492,// 365 PAY 333 

    0x5fbf28ba,// 366 PAY 334 

    0x54448224,// 367 PAY 335 

    0x09e17455,// 368 PAY 336 

    0x44299189,// 369 PAY 337 

    0x19575ca7,// 370 PAY 338 

    0xa8bc1dd4,// 371 PAY 339 

    0x43f896c5,// 372 PAY 340 

    0x1073ee4c,// 373 PAY 341 

    0x78bb2f00,// 374 PAY 342 

/// STA is 1 words. 

/// STA num_pkts       : 168 

/// STA pkt_idx        : 182 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3e 

    0x02d93ea8 // 375 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt14_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x80642874,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0xe004c7fb,// 6 SCX   4 

    0x08e69a98,// 7 SCX   5 

    0x425e03a1,// 8 SCX   6 

    0x710df3fa,// 9 SCX   7 

    0x300b7870,// 10 SCX   8 

    0x88f5abc2,// 11 SCX   9 

    0xff541346,// 12 SCX  10 

    0x574d4b11,// 13 SCX  11 

    0x25128ef4,// 14 SCX  12 

    0x05dfc472,// 15 SCX  13 

    0xf5de98e2,// 16 SCX  14 

    0xb79bf513,// 17 SCX  15 

    0x00c7ea2c,// 18 SCX  16 

    0x436f657e,// 19 SCX  17 

    0xb6044499,// 20 SCX  18 

    0x320e304c,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 505 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 210 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 210 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 36 

/// BFD (ofst+len)cry  : 84 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 296 

    0x000000d2,// 22 BFD   1 

    0x00240030,// 23 BFD   2 

    0x0128000c,// 24 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 2c 

    0x2c001235,// 25 MFM   1 

    0xddbadc84,// 26 MFM   2 

    0xe0e7bbbd,// 27 MFM   3 

    0x2c929859,// 28 MFM   4 

    0x58f0de88,// 29 MFM   5 

    0x426532ce,// 30 MFM   6 

/// BDA is 128 words. 

/// BDA size     is 505 (0x1f9) 

/// BDA id       is 0x241b 

    0x01f9241b,// 31 BDA   1 

/// PAY Generic Data size   : 505 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xbebc2e5a,// 32 PAY   1 

    0xcc046ae1,// 33 PAY   2 

    0x78e63a3d,// 34 PAY   3 

    0xf664e13d,// 35 PAY   4 

    0x0c59d8b2,// 36 PAY   5 

    0x018e0cfd,// 37 PAY   6 

    0xe799dbbe,// 38 PAY   7 

    0x7d217a20,// 39 PAY   8 

    0x3619da86,// 40 PAY   9 

    0xbe0b70eb,// 41 PAY  10 

    0xbd7fe47a,// 42 PAY  11 

    0x4e94fe29,// 43 PAY  12 

    0xddc5e7dd,// 44 PAY  13 

    0x3bb66099,// 45 PAY  14 

    0xb521fee3,// 46 PAY  15 

    0x76f72a7a,// 47 PAY  16 

    0x7858a5e0,// 48 PAY  17 

    0x2e3636f1,// 49 PAY  18 

    0xfc8d84e4,// 50 PAY  19 

    0xc0007cdf,// 51 PAY  20 

    0x821ad6ec,// 52 PAY  21 

    0xd98c9aa7,// 53 PAY  22 

    0xb72b5025,// 54 PAY  23 

    0xfa4781b0,// 55 PAY  24 

    0x9dc61ad8,// 56 PAY  25 

    0x2d7fc9fc,// 57 PAY  26 

    0xe28fe15e,// 58 PAY  27 

    0xf6f9a70e,// 59 PAY  28 

    0x5f1dc8e5,// 60 PAY  29 

    0x66116c35,// 61 PAY  30 

    0xba864d42,// 62 PAY  31 

    0x65553dee,// 63 PAY  32 

    0x1173d07e,// 64 PAY  33 

    0x44b9dae3,// 65 PAY  34 

    0x672f72a0,// 66 PAY  35 

    0x2c399fd9,// 67 PAY  36 

    0x5b4ebd20,// 68 PAY  37 

    0x3c754b79,// 69 PAY  38 

    0xe5f3d27e,// 70 PAY  39 

    0x93a98183,// 71 PAY  40 

    0x2c4be2ba,// 72 PAY  41 

    0x0e4f380f,// 73 PAY  42 

    0x6eaacadf,// 74 PAY  43 

    0xdec57d6a,// 75 PAY  44 

    0xecfd2f7e,// 76 PAY  45 

    0x4a4712d8,// 77 PAY  46 

    0x23f9880b,// 78 PAY  47 

    0x6f3c0313,// 79 PAY  48 

    0xaaabe1b4,// 80 PAY  49 

    0x9c9a6765,// 81 PAY  50 

    0x9b6ea08e,// 82 PAY  51 

    0x082c713c,// 83 PAY  52 

    0xb6ca2859,// 84 PAY  53 

    0xadc41232,// 85 PAY  54 

    0x832c8884,// 86 PAY  55 

    0x64d3dadc,// 87 PAY  56 

    0xb1f6c0e4,// 88 PAY  57 

    0xfc130bb3,// 89 PAY  58 

    0x85dd1cf7,// 90 PAY  59 

    0x72811996,// 91 PAY  60 

    0xb53c8f85,// 92 PAY  61 

    0xf32c3028,// 93 PAY  62 

    0x02b5bb41,// 94 PAY  63 

    0x9e9f249e,// 95 PAY  64 

    0xeb0764ba,// 96 PAY  65 

    0x7f22b5ef,// 97 PAY  66 

    0xb0801143,// 98 PAY  67 

    0x04a7f6dc,// 99 PAY  68 

    0xafeb6f98,// 100 PAY  69 

    0x3696e3b1,// 101 PAY  70 

    0xcb50e85f,// 102 PAY  71 

    0x56f06b2a,// 103 PAY  72 

    0x226b8691,// 104 PAY  73 

    0xa5c7b731,// 105 PAY  74 

    0xef86c773,// 106 PAY  75 

    0x222bb5f5,// 107 PAY  76 

    0x54a730ef,// 108 PAY  77 

    0xe446cda7,// 109 PAY  78 

    0x52c762b0,// 110 PAY  79 

    0x3c642779,// 111 PAY  80 

    0xcba79440,// 112 PAY  81 

    0x3a704336,// 113 PAY  82 

    0xc8b6c901,// 114 PAY  83 

    0xd9c21c3c,// 115 PAY  84 

    0x0857ec42,// 116 PAY  85 

    0xc629c9b1,// 117 PAY  86 

    0x494c58d4,// 118 PAY  87 

    0x27a3b743,// 119 PAY  88 

    0x59cef63d,// 120 PAY  89 

    0x8deacbf7,// 121 PAY  90 

    0x5dfad799,// 122 PAY  91 

    0xc2dfb7de,// 123 PAY  92 

    0xe07c65c7,// 124 PAY  93 

    0xc80cd6e7,// 125 PAY  94 

    0x13ae3ad5,// 126 PAY  95 

    0x28c2c728,// 127 PAY  96 

    0xeee04328,// 128 PAY  97 

    0x6501c1ce,// 129 PAY  98 

    0xc45cb21f,// 130 PAY  99 

    0x37587be7,// 131 PAY 100 

    0x8208d06f,// 132 PAY 101 

    0x0a8eab3f,// 133 PAY 102 

    0x4701e407,// 134 PAY 103 

    0x61cd5faf,// 135 PAY 104 

    0x9cb14d83,// 136 PAY 105 

    0x5cc7243f,// 137 PAY 106 

    0x471c2a37,// 138 PAY 107 

    0x19d82f90,// 139 PAY 108 

    0x3d5f1b92,// 140 PAY 109 

    0x7f0b1952,// 141 PAY 110 

    0x24917db8,// 142 PAY 111 

    0x43d3e209,// 143 PAY 112 

    0x286a2343,// 144 PAY 113 

    0x1f95f9d8,// 145 PAY 114 

    0xa4e08fe3,// 146 PAY 115 

    0x6d9df744,// 147 PAY 116 

    0x6f72c9fe,// 148 PAY 117 

    0x2731d023,// 149 PAY 118 

    0xae23b2a1,// 150 PAY 119 

    0x1d92846f,// 151 PAY 120 

    0x0e84f3e6,// 152 PAY 121 

    0xe47cb13b,// 153 PAY 122 

    0x6f5ef634,// 154 PAY 123 

    0x40836755,// 155 PAY 124 

    0xca0810b2,// 156 PAY 125 

    0x312f2e6f,// 157 PAY 126 

    0xa8000000,// 158 PAY 127 

/// STA is 1 words. 

/// STA num_pkts       : 132 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x26 

    0x01f12684 // 159 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt15_tmpl[] = {
    0xa8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806228cc,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0x862562e5,// 6 SCX   4 

    0x15ae2cc8,// 7 SCX   5 

    0x0e4b2bf0,// 8 SCX   6 

    0x7281fb5b,// 9 SCX   7 

    0x3bc20a0b,// 10 SCX   8 

    0x5bb02459,// 11 SCX   9 

    0xb2f9de07,// 12 SCX  10 

    0x33024147,// 13 SCX  11 

    0x4946de93,// 14 SCX  12 

    0x21c7dcc1,// 15 SCX  13 

    0x4e5ed2c9,// 16 SCX  14 

    0x712ca605,// 17 SCX  15 

    0xc621e1f9,// 18 SCX  16 

    0x5d79217b,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1410 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 155 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 155 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 120 

/// BFD (ofst+len)cry  : 144 

/// BFD ofstiv         : 68 

/// BFD ofsticv        : 1376 

    0x0000009b,// 20 BFD   1 

    0x00780018,// 21 BFD   2 

    0x05600044,// 22 BFD   3 

/// BDA is 354 words. 

/// BDA size     is 1410 (0x582) 

/// BDA id       is 0xa24 

    0x05820a24,// 23 BDA   1 

/// PAY Generic Data size   : 1410 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xd427529a,// 24 PAY   1 

    0xf83e0f0e,// 25 PAY   2 

    0x69d29a24,// 26 PAY   3 

    0x655cbdd7,// 27 PAY   4 

    0x3095ee69,// 28 PAY   5 

    0x48a392a7,// 29 PAY   6 

    0xcabaac65,// 30 PAY   7 

    0x64c343b8,// 31 PAY   8 

    0xfacf2976,// 32 PAY   9 

    0x0d4ee041,// 33 PAY  10 

    0xe59ffbe1,// 34 PAY  11 

    0x8d750442,// 35 PAY  12 

    0xe7c65a76,// 36 PAY  13 

    0xec71bcc3,// 37 PAY  14 

    0x6ebef965,// 38 PAY  15 

    0xcaf6d8f5,// 39 PAY  16 

    0xc3625f25,// 40 PAY  17 

    0x15c8c488,// 41 PAY  18 

    0xe90b662b,// 42 PAY  19 

    0x8ab4dfca,// 43 PAY  20 

    0x3cec9618,// 44 PAY  21 

    0x3f6f0af7,// 45 PAY  22 

    0x8fec12be,// 46 PAY  23 

    0xccc8bb0b,// 47 PAY  24 

    0x404ce64d,// 48 PAY  25 

    0x2b037e12,// 49 PAY  26 

    0x254ab6f6,// 50 PAY  27 

    0x46ea25e6,// 51 PAY  28 

    0xad64eb55,// 52 PAY  29 

    0x4a74e9fb,// 53 PAY  30 

    0x3f6bbc0f,// 54 PAY  31 

    0x4fb5bd6c,// 55 PAY  32 

    0x676cfd92,// 56 PAY  33 

    0xcb4556a0,// 57 PAY  34 

    0x32efbe2a,// 58 PAY  35 

    0x7e8a47c4,// 59 PAY  36 

    0x4b8a5020,// 60 PAY  37 

    0x3ff75de2,// 61 PAY  38 

    0xd8c83726,// 62 PAY  39 

    0x49dda4c2,// 63 PAY  40 

    0x83e27fcf,// 64 PAY  41 

    0x2800dd1a,// 65 PAY  42 

    0x92ddf78b,// 66 PAY  43 

    0x0a944ca4,// 67 PAY  44 

    0x583db4ce,// 68 PAY  45 

    0xf61331b7,// 69 PAY  46 

    0x86fe966e,// 70 PAY  47 

    0x9cfc09a0,// 71 PAY  48 

    0xb05c4aa8,// 72 PAY  49 

    0x3d6ef679,// 73 PAY  50 

    0xf0ff747e,// 74 PAY  51 

    0xd886d34b,// 75 PAY  52 

    0x099906ac,// 76 PAY  53 

    0x979a2504,// 77 PAY  54 

    0x018419ca,// 78 PAY  55 

    0x5f0313be,// 79 PAY  56 

    0x60fa39ed,// 80 PAY  57 

    0x468654f0,// 81 PAY  58 

    0xd41ccf1a,// 82 PAY  59 

    0x275fc545,// 83 PAY  60 

    0xdaac7016,// 84 PAY  61 

    0x6543429d,// 85 PAY  62 

    0x527ab93a,// 86 PAY  63 

    0x841f867a,// 87 PAY  64 

    0x6ace82e9,// 88 PAY  65 

    0x71c97049,// 89 PAY  66 

    0xc2308aa1,// 90 PAY  67 

    0xdef2a769,// 91 PAY  68 

    0xf768e050,// 92 PAY  69 

    0x89b08e13,// 93 PAY  70 

    0x07897d61,// 94 PAY  71 

    0xf0d90582,// 95 PAY  72 

    0x09a8959c,// 96 PAY  73 

    0x48e6dcbe,// 97 PAY  74 

    0xf4bd2a4b,// 98 PAY  75 

    0xec882cbf,// 99 PAY  76 

    0x330711d7,// 100 PAY  77 

    0x93a29386,// 101 PAY  78 

    0x34944943,// 102 PAY  79 

    0xd3eb792d,// 103 PAY  80 

    0xec64e611,// 104 PAY  81 

    0x8fd856e7,// 105 PAY  82 

    0x6c0f280e,// 106 PAY  83 

    0x62e04de8,// 107 PAY  84 

    0x938b8971,// 108 PAY  85 

    0x1d973874,// 109 PAY  86 

    0x3e678ff8,// 110 PAY  87 

    0xd102c596,// 111 PAY  88 

    0xc34a82ed,// 112 PAY  89 

    0xf518cbb3,// 113 PAY  90 

    0xd7d01058,// 114 PAY  91 

    0x83f958c8,// 115 PAY  92 

    0x378599b6,// 116 PAY  93 

    0x4b3dd9f0,// 117 PAY  94 

    0x37a5719c,// 118 PAY  95 

    0x68f29a39,// 119 PAY  96 

    0xbbf1a8ce,// 120 PAY  97 

    0x61cfe5a9,// 121 PAY  98 

    0xb40cfffa,// 122 PAY  99 

    0xc5e5f269,// 123 PAY 100 

    0x10ed55c2,// 124 PAY 101 

    0xc19be824,// 125 PAY 102 

    0x9b45cf8a,// 126 PAY 103 

    0xce98d0b3,// 127 PAY 104 

    0x35a39f85,// 128 PAY 105 

    0x8b11e32e,// 129 PAY 106 

    0x680f7a61,// 130 PAY 107 

    0xd9520a00,// 131 PAY 108 

    0xba51bdf6,// 132 PAY 109 

    0x17e73c1b,// 133 PAY 110 

    0xa740235b,// 134 PAY 111 

    0x22a1eb51,// 135 PAY 112 

    0x83e98b8f,// 136 PAY 113 

    0x5686db59,// 137 PAY 114 

    0xbcc42a68,// 138 PAY 115 

    0x8d52e030,// 139 PAY 116 

    0x12599bad,// 140 PAY 117 

    0x64884aca,// 141 PAY 118 

    0x85f6a283,// 142 PAY 119 

    0x73401252,// 143 PAY 120 

    0x9313099c,// 144 PAY 121 

    0xb8e00dc8,// 145 PAY 122 

    0x330a9d41,// 146 PAY 123 

    0x381a1358,// 147 PAY 124 

    0x31e3a22e,// 148 PAY 125 

    0x86779920,// 149 PAY 126 

    0xb7a9157d,// 150 PAY 127 

    0x0466f501,// 151 PAY 128 

    0x41c46b52,// 152 PAY 129 

    0xb3c909c7,// 153 PAY 130 

    0x4048ac4a,// 154 PAY 131 

    0x2b06f7fc,// 155 PAY 132 

    0x59663460,// 156 PAY 133 

    0xbfd96d97,// 157 PAY 134 

    0x3825c1b2,// 158 PAY 135 

    0x197a6b4c,// 159 PAY 136 

    0x07ed6160,// 160 PAY 137 

    0xac72048e,// 161 PAY 138 

    0x414ad589,// 162 PAY 139 

    0xa29eea4c,// 163 PAY 140 

    0xfc098f45,// 164 PAY 141 

    0x9e3445af,// 165 PAY 142 

    0x5d994404,// 166 PAY 143 

    0x3de07f07,// 167 PAY 144 

    0xe13ea340,// 168 PAY 145 

    0xde6cce38,// 169 PAY 146 

    0x16a8c05f,// 170 PAY 147 

    0xdd565888,// 171 PAY 148 

    0x814f3160,// 172 PAY 149 

    0x3f5b0ded,// 173 PAY 150 

    0x6a97b879,// 174 PAY 151 

    0x3d2c4d75,// 175 PAY 152 

    0x672a82ba,// 176 PAY 153 

    0x1c2c50b5,// 177 PAY 154 

    0x03b13766,// 178 PAY 155 

    0xbb748652,// 179 PAY 156 

    0x1a8884a0,// 180 PAY 157 

    0x611a7d5c,// 181 PAY 158 

    0x7060f5f9,// 182 PAY 159 

    0xe05076fa,// 183 PAY 160 

    0x5c19ee12,// 184 PAY 161 

    0x3fe2ff59,// 185 PAY 162 

    0xf34ff17e,// 186 PAY 163 

    0x408c9e2e,// 187 PAY 164 

    0xa7d03290,// 188 PAY 165 

    0xe0959904,// 189 PAY 166 

    0xdc99d830,// 190 PAY 167 

    0x4f681c9f,// 191 PAY 168 

    0xcbe92e8f,// 192 PAY 169 

    0x4f0dd563,// 193 PAY 170 

    0x6ddf99e1,// 194 PAY 171 

    0x3e59ff73,// 195 PAY 172 

    0x0c666ca7,// 196 PAY 173 

    0x76b70094,// 197 PAY 174 

    0x970b5b0b,// 198 PAY 175 

    0x12376b0f,// 199 PAY 176 

    0xd7ec1056,// 200 PAY 177 

    0xe8b793b3,// 201 PAY 178 

    0xcb9a2a58,// 202 PAY 179 

    0x27c04dc6,// 203 PAY 180 

    0x03be4bec,// 204 PAY 181 

    0x55653bf2,// 205 PAY 182 

    0xa65bd021,// 206 PAY 183 

    0x8444fb5f,// 207 PAY 184 

    0x4b28b659,// 208 PAY 185 

    0x1da0922e,// 209 PAY 186 

    0xf26275e9,// 210 PAY 187 

    0xf0acca6f,// 211 PAY 188 

    0x0a1c4f6e,// 212 PAY 189 

    0xa0d3dee6,// 213 PAY 190 

    0x6eda49f9,// 214 PAY 191 

    0xb79eebae,// 215 PAY 192 

    0x19bf8fcb,// 216 PAY 193 

    0x7ec2439d,// 217 PAY 194 

    0x972237e5,// 218 PAY 195 

    0x85145c73,// 219 PAY 196 

    0xe96d8b98,// 220 PAY 197 

    0xe4c85e95,// 221 PAY 198 

    0x02eb8511,// 222 PAY 199 

    0xc5e5b2cd,// 223 PAY 200 

    0xa94419eb,// 224 PAY 201 

    0x87ccb473,// 225 PAY 202 

    0x5207a401,// 226 PAY 203 

    0x42a3f112,// 227 PAY 204 

    0xae01bb76,// 228 PAY 205 

    0x2c9a20d6,// 229 PAY 206 

    0xed756fe9,// 230 PAY 207 

    0x5012d7c7,// 231 PAY 208 

    0x88ab2f4c,// 232 PAY 209 

    0xd4ca0707,// 233 PAY 210 

    0x96f52fe8,// 234 PAY 211 

    0x596103d7,// 235 PAY 212 

    0xb2ee6cd5,// 236 PAY 213 

    0x67e5a0b9,// 237 PAY 214 

    0x85406ab4,// 238 PAY 215 

    0xb7275d88,// 239 PAY 216 

    0x3d76fe21,// 240 PAY 217 

    0x43e0b4e7,// 241 PAY 218 

    0x1717e371,// 242 PAY 219 

    0x992a7758,// 243 PAY 220 

    0xc8bff934,// 244 PAY 221 

    0x37c4a577,// 245 PAY 222 

    0x26812f9a,// 246 PAY 223 

    0xc84ce29a,// 247 PAY 224 

    0x9c70bc0e,// 248 PAY 225 

    0x4488baa7,// 249 PAY 226 

    0xdf9304a5,// 250 PAY 227 

    0x20a2112a,// 251 PAY 228 

    0x55808236,// 252 PAY 229 

    0xb1f8a586,// 253 PAY 230 

    0x1cbd7ff7,// 254 PAY 231 

    0x071ae678,// 255 PAY 232 

    0xda234ace,// 256 PAY 233 

    0x2022789b,// 257 PAY 234 

    0x736fa92f,// 258 PAY 235 

    0x8e36475f,// 259 PAY 236 

    0xe2a3a79e,// 260 PAY 237 

    0x9adbbfc3,// 261 PAY 238 

    0x1626de70,// 262 PAY 239 

    0xa480805e,// 263 PAY 240 

    0x2dca6680,// 264 PAY 241 

    0x934dc46d,// 265 PAY 242 

    0x92eaec8e,// 266 PAY 243 

    0x351bcfb3,// 267 PAY 244 

    0x4d68f9aa,// 268 PAY 245 

    0x95fca2df,// 269 PAY 246 

    0x2e2e9d19,// 270 PAY 247 

    0x2e92cae0,// 271 PAY 248 

    0xd908ddca,// 272 PAY 249 

    0x430ac730,// 273 PAY 250 

    0xd3332444,// 274 PAY 251 

    0x85282262,// 275 PAY 252 

    0xf4051d72,// 276 PAY 253 

    0x3e0872c4,// 277 PAY 254 

    0xfaf0d49f,// 278 PAY 255 

    0x67726062,// 279 PAY 256 

    0xeca482a8,// 280 PAY 257 

    0x47aef03a,// 281 PAY 258 

    0xd882a59e,// 282 PAY 259 

    0x5f5f9c8b,// 283 PAY 260 

    0x95f3d1a1,// 284 PAY 261 

    0xfce808a8,// 285 PAY 262 

    0x934f6e0d,// 286 PAY 263 

    0xdea22300,// 287 PAY 264 

    0x65f5f8d8,// 288 PAY 265 

    0x411fbe28,// 289 PAY 266 

    0xd514933d,// 290 PAY 267 

    0x61007c9e,// 291 PAY 268 

    0xfa4373dc,// 292 PAY 269 

    0x6712531b,// 293 PAY 270 

    0x2e1ab091,// 294 PAY 271 

    0xe342e03a,// 295 PAY 272 

    0xba8c3713,// 296 PAY 273 

    0x418c52d4,// 297 PAY 274 

    0xd60898d1,// 298 PAY 275 

    0x8182a67c,// 299 PAY 276 

    0x6c78a494,// 300 PAY 277 

    0x65bf36ff,// 301 PAY 278 

    0x48aefdfd,// 302 PAY 279 

    0x2146eddb,// 303 PAY 280 

    0xc4e65fb0,// 304 PAY 281 

    0xbcff692e,// 305 PAY 282 

    0x268788ab,// 306 PAY 283 

    0xeed82f2f,// 307 PAY 284 

    0x1a551e4d,// 308 PAY 285 

    0xabb84eb7,// 309 PAY 286 

    0xd0d11b3d,// 310 PAY 287 

    0xc5c57d96,// 311 PAY 288 

    0x080e3c74,// 312 PAY 289 

    0xcbc46fbb,// 313 PAY 290 

    0x485385e8,// 314 PAY 291 

    0x1a8f3bd2,// 315 PAY 292 

    0x2fe9f5ce,// 316 PAY 293 

    0xaa7cbf16,// 317 PAY 294 

    0x32efcc51,// 318 PAY 295 

    0x864b274b,// 319 PAY 296 

    0xbb4b808c,// 320 PAY 297 

    0xee77e78c,// 321 PAY 298 

    0xc016f331,// 322 PAY 299 

    0xccacaeac,// 323 PAY 300 

    0x38845d1e,// 324 PAY 301 

    0x50e608a7,// 325 PAY 302 

    0x5daef07b,// 326 PAY 303 

    0xc79b7880,// 327 PAY 304 

    0x83601c74,// 328 PAY 305 

    0xb8394a90,// 329 PAY 306 

    0xe440ed5a,// 330 PAY 307 

    0x8772bc53,// 331 PAY 308 

    0x6dbf306a,// 332 PAY 309 

    0xa08a3160,// 333 PAY 310 

    0x0f5bc0bd,// 334 PAY 311 

    0x69882ecf,// 335 PAY 312 

    0x8bc8930a,// 336 PAY 313 

    0x62e73e7c,// 337 PAY 314 

    0x51462a73,// 338 PAY 315 

    0xab0cf552,// 339 PAY 316 

    0x2a6ecfb9,// 340 PAY 317 

    0x12f556be,// 341 PAY 318 

    0xac222cb3,// 342 PAY 319 

    0x69ff1604,// 343 PAY 320 

    0xf1a7e87b,// 344 PAY 321 

    0x213220ea,// 345 PAY 322 

    0x17c62717,// 346 PAY 323 

    0xe44ff878,// 347 PAY 324 

    0xef1275b1,// 348 PAY 325 

    0x1e5025ef,// 349 PAY 326 

    0xaaa37cf9,// 350 PAY 327 

    0xea90ec4c,// 351 PAY 328 

    0x6b9632c5,// 352 PAY 329 

    0x72468854,// 353 PAY 330 

    0x6db111a0,// 354 PAY 331 

    0xafb09e15,// 355 PAY 332 

    0xadcc3878,// 356 PAY 333 

    0x0da3055a,// 357 PAY 334 

    0x3ca71a0e,// 358 PAY 335 

    0xe810b713,// 359 PAY 336 

    0x386a26bb,// 360 PAY 337 

    0x3c0ece6c,// 361 PAY 338 

    0x9091a6f2,// 362 PAY 339 

    0x63613821,// 363 PAY 340 

    0x2fe91aa4,// 364 PAY 341 

    0xfdf663fc,// 365 PAY 342 

    0x5e5f1d54,// 366 PAY 343 

    0x5d2c06d3,// 367 PAY 344 

    0x2502d9a4,// 368 PAY 345 

    0x384b1e10,// 369 PAY 346 

    0x1aa229aa,// 370 PAY 347 

    0xf6290650,// 371 PAY 348 

    0x5567fe1c,// 372 PAY 349 

    0xab1e73b8,// 373 PAY 350 

    0xa883c3b3,// 374 PAY 351 

    0x79ccc88b,// 375 PAY 352 

    0xbc560000,// 376 PAY 353 

/// STA is 1 words. 

/// STA num_pkts       : 92 

/// STA pkt_idx        : 100 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xde 

    0x0191de5c // 377 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt16_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80602838,// 4 SCX   2 

    0x00003400,// 5 SCX   3 

    0x40c18299,// 6 SCX   4 

    0xacaba97e,// 7 SCX   5 

    0x7437eda9,// 8 SCX   6 

    0x43b9df14,// 9 SCX   7 

    0x491a0a9e,// 10 SCX   8 

    0xe4878813,// 11 SCX   9 

    0x12234475,// 12 SCX  10 

    0xc691e6de,// 13 SCX  11 

    0x902ccf70,// 14 SCX  12 

    0xdb4cbed8,// 15 SCX  13 

    0x1808313f,// 16 SCX  14 

    0x284c7275,// 17 SCX  15 

    0x8e532434,// 18 SCX  16 

    0x930f4c2a,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1138 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 975 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 975 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 656 

/// BFD (ofst+len)cry  : 768 

/// BFD ofstiv         : 612 

/// BFD ofsticv        : 980 

    0x000003cf,// 20 BFD   1 

    0x02900070,// 21 BFD   2 

    0x03d40264,// 22 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 2d 

    0x2d00cea4,// 23 MFM   1 

    0x36ab468c,// 24 MFM   2 

    0x1acd3716,// 25 MFM   3 

    0x73ddf837,// 26 MFM   4 

    0x5f853398,// 27 MFM   5 

    0x7f2a5be9,// 28 MFM   6 

    0x50000000,// 29 MFM   7 

/// BDA is 286 words. 

/// BDA size     is 1138 (0x472) 

/// BDA id       is 0x8a3d 

    0x04728a3d,// 30 BDA   1 

/// PAY Generic Data size   : 1138 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x14a592b1,// 31 PAY   1 

    0x1151c4f5,// 32 PAY   2 

    0xec86d0a4,// 33 PAY   3 

    0xe31a2eaa,// 34 PAY   4 

    0xe4769455,// 35 PAY   5 

    0xf01d083a,// 36 PAY   6 

    0xa7f3e069,// 37 PAY   7 

    0xe1284f5e,// 38 PAY   8 

    0xa0061f86,// 39 PAY   9 

    0x4fcf60dd,// 40 PAY  10 

    0x40696bc7,// 41 PAY  11 

    0x71ce182c,// 42 PAY  12 

    0x8a14d1da,// 43 PAY  13 

    0xcb79b2c6,// 44 PAY  14 

    0xf9695bbc,// 45 PAY  15 

    0xda092272,// 46 PAY  16 

    0x382f6db7,// 47 PAY  17 

    0x58a83c6d,// 48 PAY  18 

    0x6141f5eb,// 49 PAY  19 

    0x9c130718,// 50 PAY  20 

    0x24cdbae5,// 51 PAY  21 

    0x4ebf7281,// 52 PAY  22 

    0xb5e22747,// 53 PAY  23 

    0x92edc4b5,// 54 PAY  24 

    0xc19a4bbd,// 55 PAY  25 

    0x2361b47f,// 56 PAY  26 

    0xc7169c07,// 57 PAY  27 

    0x69361fbe,// 58 PAY  28 

    0xbd79a90b,// 59 PAY  29 

    0x0e841e51,// 60 PAY  30 

    0xdb66476a,// 61 PAY  31 

    0xdf2786df,// 62 PAY  32 

    0x435f719c,// 63 PAY  33 

    0x2938f58f,// 64 PAY  34 

    0x4d6603c2,// 65 PAY  35 

    0x29493f2b,// 66 PAY  36 

    0x6ec3258a,// 67 PAY  37 

    0xb9ab7588,// 68 PAY  38 

    0xe9bf9713,// 69 PAY  39 

    0x49cbd518,// 70 PAY  40 

    0xb50a1709,// 71 PAY  41 

    0x90b1cb0a,// 72 PAY  42 

    0x9b73bbd1,// 73 PAY  43 

    0x57ceee80,// 74 PAY  44 

    0xc62df69b,// 75 PAY  45 

    0x4fbfb668,// 76 PAY  46 

    0x8db814f7,// 77 PAY  47 

    0x3122cce9,// 78 PAY  48 

    0x5ba7d9a3,// 79 PAY  49 

    0x21b99f87,// 80 PAY  50 

    0x7cf3f8ed,// 81 PAY  51 

    0xbee8228b,// 82 PAY  52 

    0x5303aa81,// 83 PAY  53 

    0xc0feb368,// 84 PAY  54 

    0x922dd8a4,// 85 PAY  55 

    0xbd86e794,// 86 PAY  56 

    0xd5b7b8a8,// 87 PAY  57 

    0x13bcef17,// 88 PAY  58 

    0x80b5e900,// 89 PAY  59 

    0x886a212d,// 90 PAY  60 

    0x31b51011,// 91 PAY  61 

    0xeb6546a1,// 92 PAY  62 

    0xdebd9cc2,// 93 PAY  63 

    0x0f91759c,// 94 PAY  64 

    0x5ea9e83c,// 95 PAY  65 

    0xcdddc529,// 96 PAY  66 

    0x15cc9308,// 97 PAY  67 

    0xec13847d,// 98 PAY  68 

    0xc0ced4a5,// 99 PAY  69 

    0x276b7eff,// 100 PAY  70 

    0x7d22bf96,// 101 PAY  71 

    0x5bf7c067,// 102 PAY  72 

    0x0e5d5280,// 103 PAY  73 

    0xb671ade5,// 104 PAY  74 

    0x67d7a130,// 105 PAY  75 

    0xe63f51a3,// 106 PAY  76 

    0xfd28773b,// 107 PAY  77 

    0x5f28c63d,// 108 PAY  78 

    0xe75a1aa7,// 109 PAY  79 

    0xc382f564,// 110 PAY  80 

    0x17776950,// 111 PAY  81 

    0xd00b9849,// 112 PAY  82 

    0xd94c3b7f,// 113 PAY  83 

    0x963a3224,// 114 PAY  84 

    0xa363c0f4,// 115 PAY  85 

    0x835980b4,// 116 PAY  86 

    0xbfdb0a6e,// 117 PAY  87 

    0x2271fbab,// 118 PAY  88 

    0x37ab8c80,// 119 PAY  89 

    0x2f4a11b7,// 120 PAY  90 

    0x929757f1,// 121 PAY  91 

    0x1283927c,// 122 PAY  92 

    0x9ec79676,// 123 PAY  93 

    0xc5642db7,// 124 PAY  94 

    0x63918551,// 125 PAY  95 

    0x8125df92,// 126 PAY  96 

    0xd815eed8,// 127 PAY  97 

    0x7add9ee2,// 128 PAY  98 

    0x47aa6194,// 129 PAY  99 

    0xac5d0be4,// 130 PAY 100 

    0xd40d3f53,// 131 PAY 101 

    0xe24a569e,// 132 PAY 102 

    0x418e493c,// 133 PAY 103 

    0x0ab6f72c,// 134 PAY 104 

    0xdf5a11c8,// 135 PAY 105 

    0xe4e0ab53,// 136 PAY 106 

    0x388a4278,// 137 PAY 107 

    0x2ccf7699,// 138 PAY 108 

    0x38ad4102,// 139 PAY 109 

    0xfcdd290a,// 140 PAY 110 

    0x874f6d46,// 141 PAY 111 

    0x7ab94b28,// 142 PAY 112 

    0xced073f3,// 143 PAY 113 

    0x6f27b6f4,// 144 PAY 114 

    0xa54a17ae,// 145 PAY 115 

    0x287350ed,// 146 PAY 116 

    0x9195a2a9,// 147 PAY 117 

    0x2a2354fb,// 148 PAY 118 

    0x0c56e25c,// 149 PAY 119 

    0xaed29bc7,// 150 PAY 120 

    0xcd026b8c,// 151 PAY 121 

    0x3eeb7911,// 152 PAY 122 

    0x0be12220,// 153 PAY 123 

    0x29fa3f47,// 154 PAY 124 

    0xcce266c4,// 155 PAY 125 

    0xe2300172,// 156 PAY 126 

    0x05bec114,// 157 PAY 127 

    0x2bcc3875,// 158 PAY 128 

    0x94d5f33b,// 159 PAY 129 

    0x09d01443,// 160 PAY 130 

    0x9f2a561c,// 161 PAY 131 

    0xffc452ed,// 162 PAY 132 

    0x032a82cb,// 163 PAY 133 

    0x44d3ba43,// 164 PAY 134 

    0x42fc8b33,// 165 PAY 135 

    0xc30366a0,// 166 PAY 136 

    0xfb09f0ed,// 167 PAY 137 

    0x431d8963,// 168 PAY 138 

    0xa3ddb623,// 169 PAY 139 

    0x10e8b99d,// 170 PAY 140 

    0x53eb6e90,// 171 PAY 141 

    0x4060314c,// 172 PAY 142 

    0x6b48765a,// 173 PAY 143 

    0x2763cb98,// 174 PAY 144 

    0xb10511c7,// 175 PAY 145 

    0x7263c971,// 176 PAY 146 

    0x926184f4,// 177 PAY 147 

    0xe8842a54,// 178 PAY 148 

    0x98e7d032,// 179 PAY 149 

    0xc78d6ea3,// 180 PAY 150 

    0x728abd4c,// 181 PAY 151 

    0xda88b301,// 182 PAY 152 

    0x60171cff,// 183 PAY 153 

    0x148380df,// 184 PAY 154 

    0x93b94327,// 185 PAY 155 

    0xfa1310e9,// 186 PAY 156 

    0x97e09827,// 187 PAY 157 

    0x2f74e1dc,// 188 PAY 158 

    0x69a2dda2,// 189 PAY 159 

    0x4def17f3,// 190 PAY 160 

    0x0e7e2795,// 191 PAY 161 

    0x0709c709,// 192 PAY 162 

    0x22fe80c5,// 193 PAY 163 

    0xa8ac577a,// 194 PAY 164 

    0x16d5dc16,// 195 PAY 165 

    0x62c1ed7a,// 196 PAY 166 

    0xe7e0d154,// 197 PAY 167 

    0x75fc05e1,// 198 PAY 168 

    0x30382aba,// 199 PAY 169 

    0x3a2c1af7,// 200 PAY 170 

    0x37abec4c,// 201 PAY 171 

    0x2fb1c451,// 202 PAY 172 

    0x6882a4c2,// 203 PAY 173 

    0x51d55001,// 204 PAY 174 

    0x4c6243db,// 205 PAY 175 

    0x67d16119,// 206 PAY 176 

    0x1cd64e30,// 207 PAY 177 

    0xb22827ca,// 208 PAY 178 

    0xa454a1b1,// 209 PAY 179 

    0xc9baa552,// 210 PAY 180 

    0x92c03917,// 211 PAY 181 

    0xc8cad78d,// 212 PAY 182 

    0xd7b102ff,// 213 PAY 183 

    0x621f503e,// 214 PAY 184 

    0x6c87d064,// 215 PAY 185 

    0x9542012b,// 216 PAY 186 

    0x36a11309,// 217 PAY 187 

    0x1fc7fd42,// 218 PAY 188 

    0xb7ef6ed7,// 219 PAY 189 

    0x87812a4a,// 220 PAY 190 

    0xae99ff34,// 221 PAY 191 

    0x5940a79f,// 222 PAY 192 

    0xdb2e19ee,// 223 PAY 193 

    0xebc88bb3,// 224 PAY 194 

    0x9bbb4c24,// 225 PAY 195 

    0x76fe69e5,// 226 PAY 196 

    0x27e87231,// 227 PAY 197 

    0x18762a89,// 228 PAY 198 

    0xcdef1e26,// 229 PAY 199 

    0xec42ab5b,// 230 PAY 200 

    0xe55de240,// 231 PAY 201 

    0x6154083d,// 232 PAY 202 

    0x20064b62,// 233 PAY 203 

    0x7f7f4c63,// 234 PAY 204 

    0xa693eeac,// 235 PAY 205 

    0x102d8e09,// 236 PAY 206 

    0x78b69c4b,// 237 PAY 207 

    0xafe1aa20,// 238 PAY 208 

    0xc66fff4c,// 239 PAY 209 

    0x8ce3f5df,// 240 PAY 210 

    0x04c08767,// 241 PAY 211 

    0x3677a8c7,// 242 PAY 212 

    0xf57f39b4,// 243 PAY 213 

    0xfc490016,// 244 PAY 214 

    0x14280703,// 245 PAY 215 

    0x9c71c744,// 246 PAY 216 

    0x839c2dd5,// 247 PAY 217 

    0x94214bc0,// 248 PAY 218 

    0x0bfdc141,// 249 PAY 219 

    0x34f64a1f,// 250 PAY 220 

    0x7048e85a,// 251 PAY 221 

    0x3c99f2fc,// 252 PAY 222 

    0x8d6dea05,// 253 PAY 223 

    0xf237719e,// 254 PAY 224 

    0x9572b3c7,// 255 PAY 225 

    0xdb662fbf,// 256 PAY 226 

    0xe98042a4,// 257 PAY 227 

    0x4acd94a8,// 258 PAY 228 

    0x9e98f2b9,// 259 PAY 229 

    0x7b762bcd,// 260 PAY 230 

    0xad43e742,// 261 PAY 231 

    0x6bc3772e,// 262 PAY 232 

    0x2bf20e12,// 263 PAY 233 

    0xd841a469,// 264 PAY 234 

    0x0f12c13d,// 265 PAY 235 

    0x83b1b096,// 266 PAY 236 

    0xef02fb04,// 267 PAY 237 

    0x84a4e878,// 268 PAY 238 

    0x2b141186,// 269 PAY 239 

    0x14a3dd2f,// 270 PAY 240 

    0x89ad8eba,// 271 PAY 241 

    0x930e961a,// 272 PAY 242 

    0x92c54f42,// 273 PAY 243 

    0x578ee017,// 274 PAY 244 

    0x005f3628,// 275 PAY 245 

    0x74971c97,// 276 PAY 246 

    0x48c154bb,// 277 PAY 247 

    0xd45685cf,// 278 PAY 248 

    0x4dc2b520,// 279 PAY 249 

    0x97eaad75,// 280 PAY 250 

    0x441f454a,// 281 PAY 251 

    0xfe68e806,// 282 PAY 252 

    0x2bc37eb9,// 283 PAY 253 

    0x044d274e,// 284 PAY 254 

    0xf03f437e,// 285 PAY 255 

    0xcaa80530,// 286 PAY 256 

    0x0ec008d5,// 287 PAY 257 

    0xe2de1f1a,// 288 PAY 258 

    0xf15388df,// 289 PAY 259 

    0x44da4ceb,// 290 PAY 260 

    0x72ff0f84,// 291 PAY 261 

    0x4d6fbb66,// 292 PAY 262 

    0xb6e2d550,// 293 PAY 263 

    0x3bb1f6c5,// 294 PAY 264 

    0x319a497e,// 295 PAY 265 

    0xa22b1e3b,// 296 PAY 266 

    0x796e6a21,// 297 PAY 267 

    0x78f5e7d8,// 298 PAY 268 

    0xf2590dde,// 299 PAY 269 

    0x3f605c30,// 300 PAY 270 

    0x12ba37e8,// 301 PAY 271 

    0x541d8dea,// 302 PAY 272 

    0x467812eb,// 303 PAY 273 

    0xbb46d039,// 304 PAY 274 

    0x803c48a5,// 305 PAY 275 

    0x1c46752e,// 306 PAY 276 

    0x469752ec,// 307 PAY 277 

    0xde21673e,// 308 PAY 278 

    0xe5d3d820,// 309 PAY 279 

    0x8bca9357,// 310 PAY 280 

    0x52a3d9fb,// 311 PAY 281 

    0xc3d96503,// 312 PAY 282 

    0xf912092a,// 313 PAY 283 

    0x9d4b6763,// 314 PAY 284 

    0x31c90000,// 315 PAY 285 

/// STA is 1 words. 

/// STA num_pkts       : 124 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc5 

    0x03dcc57c // 316 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt17_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8060287b,// 4 SCX   2 

    0x00002400,// 5 SCX   3 

    0x645d57b7,// 6 SCX   4 

    0xb4b092d3,// 7 SCX   5 

    0xa5757684,// 8 SCX   6 

    0xbe89e9fb,// 9 SCX   7 

    0xae9ecf92,// 10 SCX   8 

    0x719c5dc9,// 11 SCX   9 

    0xaec511ee,// 12 SCX  10 

    0x5d5eb4a0,// 13 SCX  11 

    0xdf902895,// 14 SCX  12 

    0x74eef36a,// 15 SCX  13 

    0x8a618577,// 16 SCX  14 

    0xe8845328,// 17 SCX  15 

    0x13036b74,// 18 SCX  16 

    0x56719ae1,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 182 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 84 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 84 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 44 

/// BFD (ofst+len)cry  : 52 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 120 

    0x00000054,// 20 BFD   1 

    0x002c0008,// 21 BFD   2 

    0x00780008,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x1300fc6a,// 23 MFM   1 

    0x3a5f7d78,// 24 MFM   2 

    0xc20662c0,// 25 MFM   3 

/// BDA is 47 words. 

/// BDA size     is 182 (0xb6) 

/// BDA id       is 0xc3ba 

    0x00b6c3ba,// 26 BDA   1 

/// PAY Generic Data size   : 182 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x8e1c0abf,// 27 PAY   1 

    0x680b03cf,// 28 PAY   2 

    0xb58f5caa,// 29 PAY   3 

    0x48903301,// 30 PAY   4 

    0xd560125d,// 31 PAY   5 

    0xd16939a2,// 32 PAY   6 

    0x8495b648,// 33 PAY   7 

    0x62083b13,// 34 PAY   8 

    0xfe2db590,// 35 PAY   9 

    0x7cb399fd,// 36 PAY  10 

    0xdd277b25,// 37 PAY  11 

    0x42f39b27,// 38 PAY  12 

    0x83388aa3,// 39 PAY  13 

    0x5eb1bec0,// 40 PAY  14 

    0x76c38205,// 41 PAY  15 

    0x50b03b5a,// 42 PAY  16 

    0x879d3a22,// 43 PAY  17 

    0xf55619d2,// 44 PAY  18 

    0x2312b2f4,// 45 PAY  19 

    0x8b773bd2,// 46 PAY  20 

    0xabc23b37,// 47 PAY  21 

    0x7597fd38,// 48 PAY  22 

    0x303fcaaf,// 49 PAY  23 

    0xd3e39c74,// 50 PAY  24 

    0x5a973d9b,// 51 PAY  25 

    0xb8333ebe,// 52 PAY  26 

    0x0e5045dd,// 53 PAY  27 

    0x9ce92bce,// 54 PAY  28 

    0x43b78583,// 55 PAY  29 

    0x2073b36c,// 56 PAY  30 

    0x53b1231f,// 57 PAY  31 

    0xc48b9341,// 58 PAY  32 

    0x0ac600d0,// 59 PAY  33 

    0xffb08a88,// 60 PAY  34 

    0x5ec6dae5,// 61 PAY  35 

    0xac24fcf1,// 62 PAY  36 

    0xd4084c25,// 63 PAY  37 

    0xe426b64d,// 64 PAY  38 

    0xe8bd03c6,// 65 PAY  39 

    0x926d1a6d,// 66 PAY  40 

    0x1e705504,// 67 PAY  41 

    0xaebaf796,// 68 PAY  42 

    0x033e66af,// 69 PAY  43 

    0xf93d5d41,// 70 PAY  44 

    0x75f0a1ca,// 71 PAY  45 

    0x223e0000,// 72 PAY  46 

/// STA is 1 words. 

/// STA num_pkts       : 137 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc0 

    0x01b5c089 // 73 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt18_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806428a9,// 4 SCX   2 

    0x00004142,// 5 SCX   3 

    0x5aa6df11,// 6 SCX   4 

    0xae8f0351,// 7 SCX   5 

    0xc925b30c,// 8 SCX   6 

    0x5d5cbec3,// 9 SCX   7 

    0x30b2a671,// 10 SCX   8 

    0xed2a7fe1,// 11 SCX   9 

    0xcdb31492,// 12 SCX  10 

    0x66d84def,// 13 SCX  11 

    0x197cdf7a,// 14 SCX  12 

    0xc966ccf5,// 15 SCX  13 

    0xa721ceab,// 16 SCX  14 

    0x838e5753,// 17 SCX  15 

    0x75ab82f9,// 18 SCX  16 

    0x7955350a,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1144 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 802 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 802 

/// BFD lencrypto      : 224 

/// BFD ofstcrypto     : 564 

/// BFD (ofst+len)cry  : 788 

/// BFD ofstiv         : 304 

/// BFD ofsticv        : 828 

    0x00000322,// 20 BFD   1 

    0x023400e0,// 21 BFD   2 

    0x033c0130,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600e870,// 23 MFM   1 

    0xd9000000,// 24 MFM   2 

/// BDA is 287 words. 

/// BDA size     is 1144 (0x478) 

/// BDA id       is 0xdbea 

    0x0478dbea,// 25 BDA   1 

/// PAY Generic Data size   : 1144 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x313219ab,// 26 PAY   1 

    0xa04f3bc1,// 27 PAY   2 

    0xf73fb9dd,// 28 PAY   3 

    0xf76c7e49,// 29 PAY   4 

    0xcc01be39,// 30 PAY   5 

    0xe3e18d30,// 31 PAY   6 

    0x000cc02e,// 32 PAY   7 

    0x2d1e6ba6,// 33 PAY   8 

    0xfd52f8ee,// 34 PAY   9 

    0xdd3097c9,// 35 PAY  10 

    0x42503f38,// 36 PAY  11 

    0xe5043679,// 37 PAY  12 

    0xca16e35c,// 38 PAY  13 

    0x2464c037,// 39 PAY  14 

    0xfe7392fc,// 40 PAY  15 

    0x4402643e,// 41 PAY  16 

    0x722a2666,// 42 PAY  17 

    0x37245b18,// 43 PAY  18 

    0xf71d9ee2,// 44 PAY  19 

    0x8188d981,// 45 PAY  20 

    0x09520c73,// 46 PAY  21 

    0x3d247d60,// 47 PAY  22 

    0x2fa06c30,// 48 PAY  23 

    0x7882c538,// 49 PAY  24 

    0xe31e75d0,// 50 PAY  25 

    0x93fa30c1,// 51 PAY  26 

    0xe5119aa4,// 52 PAY  27 

    0x95446dff,// 53 PAY  28 

    0x3c33fa6d,// 54 PAY  29 

    0x3f02270e,// 55 PAY  30 

    0x351a381b,// 56 PAY  31 

    0xb5d3041e,// 57 PAY  32 

    0xeae98d7c,// 58 PAY  33 

    0x8f98c650,// 59 PAY  34 

    0x8a87ed0d,// 60 PAY  35 

    0x25de9c2b,// 61 PAY  36 

    0x615b9142,// 62 PAY  37 

    0x7d7454f5,// 63 PAY  38 

    0x8ee83150,// 64 PAY  39 

    0xcd73239e,// 65 PAY  40 

    0xbf7dc450,// 66 PAY  41 

    0x47d80201,// 67 PAY  42 

    0xf19f1f81,// 68 PAY  43 

    0xe56e63d9,// 69 PAY  44 

    0x6974fa61,// 70 PAY  45 

    0x6563485d,// 71 PAY  46 

    0x9cbfdbd3,// 72 PAY  47 

    0x7cac7634,// 73 PAY  48 

    0xe02fde3a,// 74 PAY  49 

    0x7da24c43,// 75 PAY  50 

    0x38c1d29b,// 76 PAY  51 

    0xfa92c803,// 77 PAY  52 

    0xc1a5dac2,// 78 PAY  53 

    0x8efcc84c,// 79 PAY  54 

    0xe28298b1,// 80 PAY  55 

    0x895530d0,// 81 PAY  56 

    0xbaa1eff4,// 82 PAY  57 

    0xae3012f6,// 83 PAY  58 

    0xb871d61f,// 84 PAY  59 

    0x7487cd10,// 85 PAY  60 

    0xbd8a4366,// 86 PAY  61 

    0x9ab54827,// 87 PAY  62 

    0x9f0a8bee,// 88 PAY  63 

    0x17fe389b,// 89 PAY  64 

    0xe77501a9,// 90 PAY  65 

    0x2ebc46b1,// 91 PAY  66 

    0x48892657,// 92 PAY  67 

    0xbc8f3183,// 93 PAY  68 

    0xc01c4c7f,// 94 PAY  69 

    0x2da2abfd,// 95 PAY  70 

    0x45be9507,// 96 PAY  71 

    0x15062cbb,// 97 PAY  72 

    0xf587f0fa,// 98 PAY  73 

    0x8d167ab3,// 99 PAY  74 

    0x94c14b48,// 100 PAY  75 

    0x1a6ef857,// 101 PAY  76 

    0xcf3ac294,// 102 PAY  77 

    0xec96d44e,// 103 PAY  78 

    0x59d9a749,// 104 PAY  79 

    0x9c7d3d48,// 105 PAY  80 

    0x2592ca0e,// 106 PAY  81 

    0xb6002341,// 107 PAY  82 

    0x11c2b7f2,// 108 PAY  83 

    0x4de7b67a,// 109 PAY  84 

    0x63f01663,// 110 PAY  85 

    0xc4b99156,// 111 PAY  86 

    0x4f3d1ba2,// 112 PAY  87 

    0x90e430d0,// 113 PAY  88 

    0xa7ea9e64,// 114 PAY  89 

    0x413b2729,// 115 PAY  90 

    0x1489cbd0,// 116 PAY  91 

    0xac6881a5,// 117 PAY  92 

    0x7ac44728,// 118 PAY  93 

    0x402dea35,// 119 PAY  94 

    0xca7cf804,// 120 PAY  95 

    0x98a020d0,// 121 PAY  96 

    0x818cdb55,// 122 PAY  97 

    0xdb7f2739,// 123 PAY  98 

    0x8c2c91a3,// 124 PAY  99 

    0xca28639a,// 125 PAY 100 

    0x9e9f804a,// 126 PAY 101 

    0xca14bd2a,// 127 PAY 102 

    0x01823f41,// 128 PAY 103 

    0xa0bfae01,// 129 PAY 104 

    0x4dff26fb,// 130 PAY 105 

    0x4863b2e2,// 131 PAY 106 

    0x21c924a4,// 132 PAY 107 

    0x21330288,// 133 PAY 108 

    0x8bb4a971,// 134 PAY 109 

    0xba6e1ff1,// 135 PAY 110 

    0x27290be7,// 136 PAY 111 

    0x38e98c15,// 137 PAY 112 

    0x12ca6860,// 138 PAY 113 

    0x9f2a1ffc,// 139 PAY 114 

    0x28af3462,// 140 PAY 115 

    0xda8c0ac6,// 141 PAY 116 

    0x0164cece,// 142 PAY 117 

    0x64611691,// 143 PAY 118 

    0xf178be3a,// 144 PAY 119 

    0x7d3c3244,// 145 PAY 120 

    0xb6b4cbb7,// 146 PAY 121 

    0x68c34838,// 147 PAY 122 

    0xac63e28c,// 148 PAY 123 

    0x9dcff1a7,// 149 PAY 124 

    0x962d163e,// 150 PAY 125 

    0x393059b9,// 151 PAY 126 

    0x9d6f3375,// 152 PAY 127 

    0xcfba57a6,// 153 PAY 128 

    0x08f27c1b,// 154 PAY 129 

    0xee829178,// 155 PAY 130 

    0xb07281af,// 156 PAY 131 

    0x6b6b5b3b,// 157 PAY 132 

    0xee230c65,// 158 PAY 133 

    0xa871224a,// 159 PAY 134 

    0x56e43fac,// 160 PAY 135 

    0xbe09cdbb,// 161 PAY 136 

    0x6d2b39b0,// 162 PAY 137 

    0xe49c815b,// 163 PAY 138 

    0x64bf8578,// 164 PAY 139 

    0x92919ce6,// 165 PAY 140 

    0xf0a183ed,// 166 PAY 141 

    0xfef3da69,// 167 PAY 142 

    0x1e63801c,// 168 PAY 143 

    0x9aab5fb6,// 169 PAY 144 

    0x8f14ec97,// 170 PAY 145 

    0x447f63fb,// 171 PAY 146 

    0x72799786,// 172 PAY 147 

    0x520b93dc,// 173 PAY 148 

    0xb8a639a3,// 174 PAY 149 

    0xa6d589fb,// 175 PAY 150 

    0x5a3e6151,// 176 PAY 151 

    0x64232c4c,// 177 PAY 152 

    0x9e2fb00b,// 178 PAY 153 

    0xedbc6dc2,// 179 PAY 154 

    0x8c59ebd1,// 180 PAY 155 

    0x91c43b30,// 181 PAY 156 

    0x26c2ff67,// 182 PAY 157 

    0x7b6ee387,// 183 PAY 158 

    0x09d39844,// 184 PAY 159 

    0x1891b825,// 185 PAY 160 

    0xda2fb41c,// 186 PAY 161 

    0x9e31cc25,// 187 PAY 162 

    0xe0f090ef,// 188 PAY 163 

    0xe2140f36,// 189 PAY 164 

    0x6720bf71,// 190 PAY 165 

    0xc7aaa49d,// 191 PAY 166 

    0x672612dd,// 192 PAY 167 

    0x5903f4fc,// 193 PAY 168 

    0x129a40e9,// 194 PAY 169 

    0x987dc1dc,// 195 PAY 170 

    0x16a85016,// 196 PAY 171 

    0x1ba11f9a,// 197 PAY 172 

    0xc28ab11c,// 198 PAY 173 

    0x88c4fbce,// 199 PAY 174 

    0x8d308b83,// 200 PAY 175 

    0x0601c206,// 201 PAY 176 

    0x64ba5573,// 202 PAY 177 

    0xc8a410dd,// 203 PAY 178 

    0x90f0c09d,// 204 PAY 179 

    0x3de0350b,// 205 PAY 180 

    0xcce280d7,// 206 PAY 181 

    0x75f5345c,// 207 PAY 182 

    0xea782c39,// 208 PAY 183 

    0x1faed8a9,// 209 PAY 184 

    0x830fbb1e,// 210 PAY 185 

    0xf4d214a6,// 211 PAY 186 

    0xd554bab1,// 212 PAY 187 

    0xd3cd292d,// 213 PAY 188 

    0x32fa9ab5,// 214 PAY 189 

    0x457b0c03,// 215 PAY 190 

    0xc4b97cda,// 216 PAY 191 

    0xda004a31,// 217 PAY 192 

    0xa4e30487,// 218 PAY 193 

    0x22ce70b8,// 219 PAY 194 

    0xdaee6611,// 220 PAY 195 

    0xbff798cd,// 221 PAY 196 

    0xa501aad6,// 222 PAY 197 

    0x624f9cdc,// 223 PAY 198 

    0x4a6be3f9,// 224 PAY 199 

    0x880c5129,// 225 PAY 200 

    0x7ee09287,// 226 PAY 201 

    0x06db1bc1,// 227 PAY 202 

    0xaa794952,// 228 PAY 203 

    0xc2db4100,// 229 PAY 204 

    0x5cb05a1e,// 230 PAY 205 

    0xbfe07c49,// 231 PAY 206 

    0x8b73127d,// 232 PAY 207 

    0xc9e5ca0b,// 233 PAY 208 

    0xd761a9ab,// 234 PAY 209 

    0x0902835a,// 235 PAY 210 

    0xb227d11b,// 236 PAY 211 

    0x13a8603a,// 237 PAY 212 

    0x6984e729,// 238 PAY 213 

    0x1a756e72,// 239 PAY 214 

    0x75d6912b,// 240 PAY 215 

    0xd26a3c9a,// 241 PAY 216 

    0x71eac7be,// 242 PAY 217 

    0xaa36782f,// 243 PAY 218 

    0x0d23d558,// 244 PAY 219 

    0x6957f122,// 245 PAY 220 

    0xc7400d69,// 246 PAY 221 

    0x73d23671,// 247 PAY 222 

    0xfbbdbd10,// 248 PAY 223 

    0x6fe0cb78,// 249 PAY 224 

    0x7cc07b22,// 250 PAY 225 

    0x83aeb5e6,// 251 PAY 226 

    0x451fe760,// 252 PAY 227 

    0x12cf177c,// 253 PAY 228 

    0x19a13fb7,// 254 PAY 229 

    0x666c6cc4,// 255 PAY 230 

    0xf0d0a554,// 256 PAY 231 

    0x428bafa7,// 257 PAY 232 

    0x29c16f1c,// 258 PAY 233 

    0x5d937706,// 259 PAY 234 

    0xbc879775,// 260 PAY 235 

    0x266e14af,// 261 PAY 236 

    0xf09b4c40,// 262 PAY 237 

    0xf945853c,// 263 PAY 238 

    0xe2258519,// 264 PAY 239 

    0xbfca556c,// 265 PAY 240 

    0x95444964,// 266 PAY 241 

    0x9a944986,// 267 PAY 242 

    0xaac172ce,// 268 PAY 243 

    0xdfb271f6,// 269 PAY 244 

    0x6b995f51,// 270 PAY 245 

    0x181f441d,// 271 PAY 246 

    0x44eb9e91,// 272 PAY 247 

    0x12b233a7,// 273 PAY 248 

    0xf217b53e,// 274 PAY 249 

    0xa8aa8661,// 275 PAY 250 

    0x1028f734,// 276 PAY 251 

    0xea5db38a,// 277 PAY 252 

    0x8cb526fe,// 278 PAY 253 

    0x7c683eea,// 279 PAY 254 

    0xc03d2950,// 280 PAY 255 

    0x65e877d4,// 281 PAY 256 

    0x1ca5a22e,// 282 PAY 257 

    0xe64caf61,// 283 PAY 258 

    0x71c3cada,// 284 PAY 259 

    0x88afd8b4,// 285 PAY 260 

    0xbc38ffa3,// 286 PAY 261 

    0x376b6c87,// 287 PAY 262 

    0xa5e5c1f9,// 288 PAY 263 

    0xfc2e25df,// 289 PAY 264 

    0x8659646d,// 290 PAY 265 

    0x30da1ace,// 291 PAY 266 

    0x77fde0f0,// 292 PAY 267 

    0xd6e6b012,// 293 PAY 268 

    0x92c050b0,// 294 PAY 269 

    0x428779d0,// 295 PAY 270 

    0xccfe1d48,// 296 PAY 271 

    0x07eb6190,// 297 PAY 272 

    0xe0821607,// 298 PAY 273 

    0xf844d3d1,// 299 PAY 274 

    0x06e54c6d,// 300 PAY 275 

    0xebe50335,// 301 PAY 276 

    0xc296c0a8,// 302 PAY 277 

    0xe5b5def8,// 303 PAY 278 

    0x3bed1c69,// 304 PAY 279 

    0xfe30934b,// 305 PAY 280 

    0xe7c8f679,// 306 PAY 281 

    0x651cda10,// 307 PAY 282 

    0x53207572,// 308 PAY 283 

    0x4f2802ba,// 309 PAY 284 

    0x313f13b0,// 310 PAY 285 

    0x3e595848,// 311 PAY 286 

/// STA is 1 words. 

/// STA num_pkts       : 212 

/// STA pkt_idx        : 86 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe6 

    0x0158e6d4 // 312 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt19_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806128c6,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0x77e4262a,// 6 SCX   4 

    0xadd4a2a9,// 7 SCX   5 

    0xf384d6b2,// 8 SCX   6 

    0x4c3120ea,// 9 SCX   7 

    0x6ae61ec3,// 10 SCX   8 

    0x7248417e,// 11 SCX   9 

    0x79a78b39,// 12 SCX  10 

    0xfcc04107,// 13 SCX  11 

    0x362887b9,// 14 SCX  12 

    0x63115f5c,// 15 SCX  13 

    0x4a2aa6bc,// 16 SCX  14 

    0x1d97cdb9,// 17 SCX  15 

    0xc96f89c6,// 18 SCX  16 

    0x41d8f021,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 218 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 112 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 112 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 108 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 128 

    0x00000070,// 20 BFD   1 

    0x00440028,// 21 BFD   2 

    0x00800014,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 9 

    0x0900a275,// 23 MFM   1 

    0xa2e52000,// 24 MFM   2 

/// BDA is 56 words. 

/// BDA size     is 218 (0xda) 

/// BDA id       is 0x426c 

    0x00da426c,// 25 BDA   1 

/// PAY Generic Data size   : 218 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0beb7dbf,// 26 PAY   1 

    0x5ecadbb4,// 27 PAY   2 

    0x65071c52,// 28 PAY   3 

    0x2b83d669,// 29 PAY   4 

    0xa215162e,// 30 PAY   5 

    0x55e822d9,// 31 PAY   6 

    0x44b1b620,// 32 PAY   7 

    0xecffa843,// 33 PAY   8 

    0xeff6f4ef,// 34 PAY   9 

    0x3b794e8d,// 35 PAY  10 

    0x497945e1,// 36 PAY  11 

    0x0fab4181,// 37 PAY  12 

    0xc60cc56a,// 38 PAY  13 

    0x9cb36323,// 39 PAY  14 

    0xcecc69c4,// 40 PAY  15 

    0x23b6d830,// 41 PAY  16 

    0xed457ba4,// 42 PAY  17 

    0x35835d30,// 43 PAY  18 

    0xaa255715,// 44 PAY  19 

    0xaedb5510,// 45 PAY  20 

    0xc3a88afb,// 46 PAY  21 

    0x029e3f3d,// 47 PAY  22 

    0xdae8beed,// 48 PAY  23 

    0x09dcaf32,// 49 PAY  24 

    0x0b1a4d47,// 50 PAY  25 

    0xef47ffee,// 51 PAY  26 

    0x4d66e829,// 52 PAY  27 

    0x87145ff7,// 53 PAY  28 

    0xbbad2053,// 54 PAY  29 

    0x4e9006ba,// 55 PAY  30 

    0x086eb00c,// 56 PAY  31 

    0xb5556976,// 57 PAY  32 

    0x4f398873,// 58 PAY  33 

    0x410843c3,// 59 PAY  34 

    0x655da360,// 60 PAY  35 

    0xfa805911,// 61 PAY  36 

    0x7de045c7,// 62 PAY  37 

    0x38292758,// 63 PAY  38 

    0xaca509bf,// 64 PAY  39 

    0x2f489dec,// 65 PAY  40 

    0x4e0d167e,// 66 PAY  41 

    0x1c4e32a9,// 67 PAY  42 

    0xf6c0b554,// 68 PAY  43 

    0x515cb24b,// 69 PAY  44 

    0xaa8d00b8,// 70 PAY  45 

    0x37300051,// 71 PAY  46 

    0x921f7e30,// 72 PAY  47 

    0x1edaa9a4,// 73 PAY  48 

    0xe67ed09d,// 74 PAY  49 

    0x512a2f27,// 75 PAY  50 

    0xd69d7eca,// 76 PAY  51 

    0x9ff59006,// 77 PAY  52 

    0x214e632d,// 78 PAY  53 

    0xcbd5eec8,// 79 PAY  54 

    0xcc6a0000,// 80 PAY  55 

/// STA is 1 words. 

/// STA num_pkts       : 27 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02cc3c1b // 81 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt20_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806028a8,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xb9fdd983,// 6 SCX   4 

    0x6e0a3159,// 7 SCX   5 

    0x34f1dfc5,// 8 SCX   6 

    0x3301f00c,// 9 SCX   7 

    0x8cb7fcb0,// 10 SCX   8 

    0xe46fd4fa,// 11 SCX   9 

    0x27cd181b,// 12 SCX  10 

    0xcb8f32aa,// 13 SCX  11 

    0xf0c56df4,// 14 SCX  12 

    0x60d0ddf4,// 15 SCX  13 

    0x6c1ba9d5,// 16 SCX  14 

    0xd265a4a3,// 17 SCX  15 

    0x24d3dd7d,// 18 SCX  16 

    0x71a9f5fc,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 364 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 289 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 289 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 264 

/// BFD (ofst+len)cry  : 288 

/// BFD ofstiv         : 64 

/// BFD ofsticv        : 340 

    0x00000121,// 20 BFD   1 

    0x01080018,// 21 BFD   2 

    0x01540040,// 22 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 45 

    0x4500f845,// 23 MFM   1 

    0xbb1274c1,// 24 MFM   2 

    0x01651677,// 25 MFM   3 

    0xc738ef34,// 26 MFM   4 

    0x9668334b,// 27 MFM   5 

    0xa2be690d,// 28 MFM   6 

    0x8e22a52b,// 29 MFM   7 

    0xe97455e0,// 30 MFM   8 

    0x42244a7c,// 31 MFM   9 

    0xb0000000,// 32 MFM  10 

/// BDA is 92 words. 

/// BDA size     is 364 (0x16c) 

/// BDA id       is 0x1692 

    0x016c1692,// 33 BDA   1 

/// PAY Generic Data size   : 364 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xb7bfe802,// 34 PAY   1 

    0x4f36d580,// 35 PAY   2 

    0xa2bdaa35,// 36 PAY   3 

    0xa504eed0,// 37 PAY   4 

    0xf2920c72,// 38 PAY   5 

    0x6b97e3da,// 39 PAY   6 

    0x8cb67451,// 40 PAY   7 

    0xbd11eab9,// 41 PAY   8 

    0x09197788,// 42 PAY   9 

    0x5c449632,// 43 PAY  10 

    0xc86b91d5,// 44 PAY  11 

    0x73ae6ae9,// 45 PAY  12 

    0x4b19d117,// 46 PAY  13 

    0xac5a9480,// 47 PAY  14 

    0x75893b29,// 48 PAY  15 

    0x7137fca9,// 49 PAY  16 

    0xc9402de5,// 50 PAY  17 

    0x1014d603,// 51 PAY  18 

    0x37123c8c,// 52 PAY  19 

    0xd54c59f9,// 53 PAY  20 

    0xbecbce21,// 54 PAY  21 

    0xb2c5250e,// 55 PAY  22 

    0x3f2e4d99,// 56 PAY  23 

    0x7816e514,// 57 PAY  24 

    0xf44c7ea3,// 58 PAY  25 

    0x3cc9810f,// 59 PAY  26 

    0xe434a574,// 60 PAY  27 

    0xfb302d56,// 61 PAY  28 

    0x92ba7fb3,// 62 PAY  29 

    0xa1e47385,// 63 PAY  30 

    0x03a6d4a5,// 64 PAY  31 

    0x512c8bcc,// 65 PAY  32 

    0xb08a6b70,// 66 PAY  33 

    0x417804d6,// 67 PAY  34 

    0x8e1a1782,// 68 PAY  35 

    0x4d41f650,// 69 PAY  36 

    0xad211852,// 70 PAY  37 

    0xb9c0e050,// 71 PAY  38 

    0x826db892,// 72 PAY  39 

    0x69d2f13e,// 73 PAY  40 

    0x027911c3,// 74 PAY  41 

    0x213061cd,// 75 PAY  42 

    0xfd4d096a,// 76 PAY  43 

    0x1583258d,// 77 PAY  44 

    0x45e141bf,// 78 PAY  45 

    0x2b58f540,// 79 PAY  46 

    0x273ba6a0,// 80 PAY  47 

    0x503724d0,// 81 PAY  48 

    0xbe8a6d93,// 82 PAY  49 

    0x80a69d79,// 83 PAY  50 

    0xe06ff9fd,// 84 PAY  51 

    0xecf31502,// 85 PAY  52 

    0xe2d22cda,// 86 PAY  53 

    0x81168baf,// 87 PAY  54 

    0x740cd847,// 88 PAY  55 

    0xcdf4e874,// 89 PAY  56 

    0x89263463,// 90 PAY  57 

    0xdb564a4e,// 91 PAY  58 

    0x66a45457,// 92 PAY  59 

    0xa7b388b6,// 93 PAY  60 

    0xc232a774,// 94 PAY  61 

    0x1fe96dda,// 95 PAY  62 

    0x63ec0bc9,// 96 PAY  63 

    0xf215849b,// 97 PAY  64 

    0xafe017f4,// 98 PAY  65 

    0x899e2cd1,// 99 PAY  66 

    0x199a30b7,// 100 PAY  67 

    0x82549449,// 101 PAY  68 

    0x669a2446,// 102 PAY  69 

    0x2dd84e8a,// 103 PAY  70 

    0x3a27598b,// 104 PAY  71 

    0x3195ba25,// 105 PAY  72 

    0xefea54ad,// 106 PAY  73 

    0x31a0470d,// 107 PAY  74 

    0x7a0655ce,// 108 PAY  75 

    0xb814fe17,// 109 PAY  76 

    0x49976485,// 110 PAY  77 

    0x80f57f2c,// 111 PAY  78 

    0xd47bc2ce,// 112 PAY  79 

    0xb9e1ccb1,// 113 PAY  80 

    0x77f4e999,// 114 PAY  81 

    0xb969c159,// 115 PAY  82 

    0x2666ecaf,// 116 PAY  83 

    0x254e666f,// 117 PAY  84 

    0xea3b1934,// 118 PAY  85 

    0x012c8e73,// 119 PAY  86 

    0x1222040a,// 120 PAY  87 

    0x34232396,// 121 PAY  88 

    0x086b8f84,// 122 PAY  89 

    0x8f525ee4,// 123 PAY  90 

    0xf38976e9,// 124 PAY  91 

/// STA is 1 words. 

/// STA num_pkts       : 230 

/// STA pkt_idx        : 23 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x005c5be6 // 125 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt21_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80612811,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0xbb1b0f32,// 6 SCX   4 

    0x81137322,// 7 SCX   5 

    0x30f13512,// 8 SCX   6 

    0x316fbac1,// 9 SCX   7 

    0xbb22197c,// 10 SCX   8 

    0x57dedb2b,// 11 SCX   9 

    0x8f54cafa,// 12 SCX  10 

    0xab1c2ea3,// 13 SCX  11 

    0x8d091ccb,// 14 SCX  12 

    0x367be055,// 15 SCX  13 

    0x472f7716,// 16 SCX  14 

    0x31caad2a,// 17 SCX  15 

    0xbec0ddbf,// 18 SCX  16 

    0x094d4e67,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 442 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 414 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 414 

/// BFD lencrypto      : 184 

/// BFD ofstcrypto     : 132 

/// BFD (ofst+len)cry  : 316 

/// BFD ofstiv         : 112 

/// BFD ofsticv        : 416 

    0x0000019e,// 20 BFD   1 

    0x008400b8,// 21 BFD   2 

    0x01a00070,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x060063e2,// 23 MFM   1 

    0x6f000000,// 24 MFM   2 

/// BDA is 112 words. 

/// BDA size     is 442 (0x1ba) 

/// BDA id       is 0xb7c2 

    0x01bab7c2,// 25 BDA   1 

/// PAY Generic Data size   : 442 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xc3b1c1f0,// 26 PAY   1 

    0xa623d261,// 27 PAY   2 

    0xdfaffdbe,// 28 PAY   3 

    0x5c566f38,// 29 PAY   4 

    0xfb253181,// 30 PAY   5 

    0x4ecc12d4,// 31 PAY   6 

    0xcdd4abc5,// 32 PAY   7 

    0x0dc0dbd6,// 33 PAY   8 

    0x0896647e,// 34 PAY   9 

    0x86f9caaf,// 35 PAY  10 

    0x09d3d721,// 36 PAY  11 

    0xf60047f0,// 37 PAY  12 

    0xdb8d5bf3,// 38 PAY  13 

    0x4261605d,// 39 PAY  14 

    0x3c83d69a,// 40 PAY  15 

    0xbca4fe8f,// 41 PAY  16 

    0xd006ce1c,// 42 PAY  17 

    0x53f02c0d,// 43 PAY  18 

    0x65d864f4,// 44 PAY  19 

    0xf6ff76e4,// 45 PAY  20 

    0xabd769aa,// 46 PAY  21 

    0x8592bba8,// 47 PAY  22 

    0x6bca728b,// 48 PAY  23 

    0x8153856f,// 49 PAY  24 

    0xfbc075fd,// 50 PAY  25 

    0xc0d2eac4,// 51 PAY  26 

    0xd98178e1,// 52 PAY  27 

    0x17f71a62,// 53 PAY  28 

    0xd134f851,// 54 PAY  29 

    0xcc6ea311,// 55 PAY  30 

    0xd9c1ca12,// 56 PAY  31 

    0xb9e9f8b1,// 57 PAY  32 

    0xa1822f3c,// 58 PAY  33 

    0x0e85c2f1,// 59 PAY  34 

    0x10bb1b08,// 60 PAY  35 

    0xaf102dbd,// 61 PAY  36 

    0xba3cdf38,// 62 PAY  37 

    0x376bdf43,// 63 PAY  38 

    0xfda360cc,// 64 PAY  39 

    0xba7132a6,// 65 PAY  40 

    0x4c376363,// 66 PAY  41 

    0x5bbb8f26,// 67 PAY  42 

    0xfbed55ed,// 68 PAY  43 

    0x3593fd97,// 69 PAY  44 

    0xc805c1d5,// 70 PAY  45 

    0x61de88f7,// 71 PAY  46 

    0xd132dc14,// 72 PAY  47 

    0x42cb57af,// 73 PAY  48 

    0xda2c9837,// 74 PAY  49 

    0x4070f6d3,// 75 PAY  50 

    0xc6a5764b,// 76 PAY  51 

    0x42a327f5,// 77 PAY  52 

    0x0a8f7240,// 78 PAY  53 

    0x1446e762,// 79 PAY  54 

    0x69a0d5c2,// 80 PAY  55 

    0x4a77bc5d,// 81 PAY  56 

    0x9b2f0d66,// 82 PAY  57 

    0x0a384004,// 83 PAY  58 

    0x67bc9126,// 84 PAY  59 

    0xfc272b93,// 85 PAY  60 

    0x917ad267,// 86 PAY  61 

    0x21ccc932,// 87 PAY  62 

    0xfb223294,// 88 PAY  63 

    0x52334820,// 89 PAY  64 

    0x3c651168,// 90 PAY  65 

    0xdd369333,// 91 PAY  66 

    0xdf2b9065,// 92 PAY  67 

    0x481cdff2,// 93 PAY  68 

    0xbf0c004d,// 94 PAY  69 

    0xb8e01970,// 95 PAY  70 

    0x38b507f2,// 96 PAY  71 

    0x689dbd02,// 97 PAY  72 

    0x61ded503,// 98 PAY  73 

    0xaff93620,// 99 PAY  74 

    0x74bad58a,// 100 PAY  75 

    0xf8054b94,// 101 PAY  76 

    0x4d08b04f,// 102 PAY  77 

    0xa6fd0797,// 103 PAY  78 

    0x6990913a,// 104 PAY  79 

    0x5a6fd67a,// 105 PAY  80 

    0x34824930,// 106 PAY  81 

    0xa45557f5,// 107 PAY  82 

    0xaa190428,// 108 PAY  83 

    0xad735a3b,// 109 PAY  84 

    0xa3671d47,// 110 PAY  85 

    0xa225254f,// 111 PAY  86 

    0x7be260a6,// 112 PAY  87 

    0x75a70932,// 113 PAY  88 

    0x4314e949,// 114 PAY  89 

    0x0bddcd86,// 115 PAY  90 

    0xf4ad681e,// 116 PAY  91 

    0xc2d0adfa,// 117 PAY  92 

    0x142f2d20,// 118 PAY  93 

    0xb928cfae,// 119 PAY  94 

    0x69b35a4a,// 120 PAY  95 

    0x74795b0c,// 121 PAY  96 

    0x26111565,// 122 PAY  97 

    0x8fb49b1a,// 123 PAY  98 

    0xac978841,// 124 PAY  99 

    0xc0391fb9,// 125 PAY 100 

    0x4c72967f,// 126 PAY 101 

    0x676f15c1,// 127 PAY 102 

    0xe3f04e55,// 128 PAY 103 

    0x6dd3dd83,// 129 PAY 104 

    0x5617e43b,// 130 PAY 105 

    0x167f49e8,// 131 PAY 106 

    0x640ad9cf,// 132 PAY 107 

    0x57071785,// 133 PAY 108 

    0xbe689f08,// 134 PAY 109 

    0x03e7a23c,// 135 PAY 110 

    0x43fb0000,// 136 PAY 111 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 59 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x14 

    0x00ec1485 // 137 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt22_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806028e0,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0x603a58c9,// 6 SCX   4 

    0x761f9780,// 7 SCX   5 

    0xa3ce17ab,// 8 SCX   6 

    0x8ac270cd,// 9 SCX   7 

    0xadfd9c0c,// 10 SCX   8 

    0xf6c9867d,// 11 SCX   9 

    0x7f7bb2da,// 12 SCX  10 

    0x8f55a53f,// 13 SCX  11 

    0x05b43ece,// 14 SCX  12 

    0x31aecf29,// 15 SCX  13 

    0xce5aff05,// 16 SCX  14 

    0xf7b5d5f4,// 17 SCX  15 

    0x86512881,// 18 SCX  16 

    0x0fb0d28c,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1652 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 251 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 251 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 192 

/// BFD (ofst+len)cry  : 216 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 332 

    0x000000fb,// 20 BFD   1 

    0x00c00018,// 21 BFD   2 

    0x014c0080,// 22 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 32 

    0x32009d3c,// 23 MFM   1 

    0x717981db,// 24 MFM   2 

    0xd60254e0,// 25 MFM   3 

    0x4714964d,// 26 MFM   4 

    0x068f545f,// 27 MFM   5 

    0xd5d83f78,// 28 MFM   6 

    0xae763b00,// 29 MFM   7 

/// BDA is 414 words. 

/// BDA size     is 1652 (0x674) 

/// BDA id       is 0x393e 

    0x0674393e,// 30 BDA   1 

/// PAY Generic Data size   : 1652 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xe3af2ffd,// 31 PAY   1 

    0x489c6e5b,// 32 PAY   2 

    0xa1748dbc,// 33 PAY   3 

    0x916e4acd,// 34 PAY   4 

    0x687bea98,// 35 PAY   5 

    0x9e2d0265,// 36 PAY   6 

    0x0c6202a4,// 37 PAY   7 

    0x6c615cd7,// 38 PAY   8 

    0xb506d6b3,// 39 PAY   9 

    0xd156c133,// 40 PAY  10 

    0xb6b588a5,// 41 PAY  11 

    0x83060d7e,// 42 PAY  12 

    0x8d5a4df9,// 43 PAY  13 

    0x2ef1695c,// 44 PAY  14 

    0x3305a263,// 45 PAY  15 

    0xae9465cb,// 46 PAY  16 

    0xdbfe1cfc,// 47 PAY  17 

    0xbaf5ac32,// 48 PAY  18 

    0x4cd302ab,// 49 PAY  19 

    0x60171234,// 50 PAY  20 

    0x58c3d240,// 51 PAY  21 

    0xa84a1a70,// 52 PAY  22 

    0x6150ffcb,// 53 PAY  23 

    0x737ce8aa,// 54 PAY  24 

    0x824d8c3b,// 55 PAY  25 

    0xc5df7ee7,// 56 PAY  26 

    0x4647a120,// 57 PAY  27 

    0xdb3d93c1,// 58 PAY  28 

    0x32c81bda,// 59 PAY  29 

    0xd2dbdbb0,// 60 PAY  30 

    0x530fdc7f,// 61 PAY  31 

    0x8239d704,// 62 PAY  32 

    0xef46383d,// 63 PAY  33 

    0x0f21f153,// 64 PAY  34 

    0x0a66459b,// 65 PAY  35 

    0xc65612ab,// 66 PAY  36 

    0x688283e6,// 67 PAY  37 

    0x8c34f36e,// 68 PAY  38 

    0xad2c1789,// 69 PAY  39 

    0xe979aad8,// 70 PAY  40 

    0x3033591d,// 71 PAY  41 

    0x838351b0,// 72 PAY  42 

    0x19b23530,// 73 PAY  43 

    0xa378d9bc,// 74 PAY  44 

    0xa0424354,// 75 PAY  45 

    0x6c897288,// 76 PAY  46 

    0x3e5b3df9,// 77 PAY  47 

    0xbc6d3e62,// 78 PAY  48 

    0xd4ba6476,// 79 PAY  49 

    0x9a39c4d8,// 80 PAY  50 

    0xc575718c,// 81 PAY  51 

    0xa4490677,// 82 PAY  52 

    0x30b30614,// 83 PAY  53 

    0xbd249066,// 84 PAY  54 

    0xf2049d91,// 85 PAY  55 

    0x3e19d1f3,// 86 PAY  56 

    0xcd33bba5,// 87 PAY  57 

    0x04154796,// 88 PAY  58 

    0x61f2a978,// 89 PAY  59 

    0x8e121b63,// 90 PAY  60 

    0xeaf42c49,// 91 PAY  61 

    0x6e0c5d65,// 92 PAY  62 

    0x2ac16ae5,// 93 PAY  63 

    0xb1cb6316,// 94 PAY  64 

    0x6c1f5479,// 95 PAY  65 

    0xd3bdd75f,// 96 PAY  66 

    0x6a09d672,// 97 PAY  67 

    0xa6fbf972,// 98 PAY  68 

    0x5a362ac7,// 99 PAY  69 

    0x3d3c8a13,// 100 PAY  70 

    0x2e095bce,// 101 PAY  71 

    0xa84101aa,// 102 PAY  72 

    0x70546116,// 103 PAY  73 

    0xd65613ee,// 104 PAY  74 

    0x6e97b9cb,// 105 PAY  75 

    0x38ee7556,// 106 PAY  76 

    0x0fa4533d,// 107 PAY  77 

    0x43aff3b7,// 108 PAY  78 

    0xd6d8a8fe,// 109 PAY  79 

    0xd6c84c56,// 110 PAY  80 

    0x435b8673,// 111 PAY  81 

    0xa81b21d4,// 112 PAY  82 

    0x78ddb9d8,// 113 PAY  83 

    0x08827483,// 114 PAY  84 

    0x624f6623,// 115 PAY  85 

    0x7fd20f00,// 116 PAY  86 

    0x78683270,// 117 PAY  87 

    0x05f7b962,// 118 PAY  88 

    0x9fed3d89,// 119 PAY  89 

    0x58bbc8a9,// 120 PAY  90 

    0x29bf9241,// 121 PAY  91 

    0xcb21b67b,// 122 PAY  92 

    0x02e64205,// 123 PAY  93 

    0x147dc6b3,// 124 PAY  94 

    0x2bc0d7bf,// 125 PAY  95 

    0xfb657218,// 126 PAY  96 

    0xf993871f,// 127 PAY  97 

    0x405168e5,// 128 PAY  98 

    0x97e41617,// 129 PAY  99 

    0xe05e06d6,// 130 PAY 100 

    0x503b19ad,// 131 PAY 101 

    0x1f0ec989,// 132 PAY 102 

    0x45058cd2,// 133 PAY 103 

    0xf4e1185f,// 134 PAY 104 

    0xc4ae5eff,// 135 PAY 105 

    0x080d5c11,// 136 PAY 106 

    0x6161f607,// 137 PAY 107 

    0x4817e38c,// 138 PAY 108 

    0x719d5669,// 139 PAY 109 

    0x60eb33b7,// 140 PAY 110 

    0x59230c9c,// 141 PAY 111 

    0x2617860f,// 142 PAY 112 

    0xdff05d10,// 143 PAY 113 

    0xafb54a32,// 144 PAY 114 

    0xde29b200,// 145 PAY 115 

    0x64baf386,// 146 PAY 116 

    0xbb4ddecd,// 147 PAY 117 

    0x822c3a2a,// 148 PAY 118 

    0x47c8b2c2,// 149 PAY 119 

    0xfde6ba05,// 150 PAY 120 

    0x65ac8446,// 151 PAY 121 

    0xcf89eb07,// 152 PAY 122 

    0x6d6b3946,// 153 PAY 123 

    0xd9192196,// 154 PAY 124 

    0x09f4c9d2,// 155 PAY 125 

    0x0cc08864,// 156 PAY 126 

    0x9a40435f,// 157 PAY 127 

    0xa74ed7b4,// 158 PAY 128 

    0x0245ac17,// 159 PAY 129 

    0x43ec83ac,// 160 PAY 130 

    0x49b8d962,// 161 PAY 131 

    0xb52e938d,// 162 PAY 132 

    0xe42e45d9,// 163 PAY 133 

    0x5a9e5e4c,// 164 PAY 134 

    0xb8142ffc,// 165 PAY 135 

    0x585fb562,// 166 PAY 136 

    0xfbca8810,// 167 PAY 137 

    0x1bc2d526,// 168 PAY 138 

    0x9696dbfd,// 169 PAY 139 

    0x0caa88a8,// 170 PAY 140 

    0xacdfd7b0,// 171 PAY 141 

    0x6c61857c,// 172 PAY 142 

    0xa23b6f30,// 173 PAY 143 

    0x750e55d8,// 174 PAY 144 

    0x0795c718,// 175 PAY 145 

    0xa6460fa4,// 176 PAY 146 

    0xb919857c,// 177 PAY 147 

    0x42e3c066,// 178 PAY 148 

    0xfe1a69db,// 179 PAY 149 

    0xd1394d0c,// 180 PAY 150 

    0xb22efe1e,// 181 PAY 151 

    0x0fb59192,// 182 PAY 152 

    0x411a39f5,// 183 PAY 153 

    0x600b3bac,// 184 PAY 154 

    0xbda712dc,// 185 PAY 155 

    0x033bbf79,// 186 PAY 156 

    0x8d720e73,// 187 PAY 157 

    0x90c52c11,// 188 PAY 158 

    0x7b074b5b,// 189 PAY 159 

    0x11635b4b,// 190 PAY 160 

    0xf61b2e56,// 191 PAY 161 

    0x1cd6f4c0,// 192 PAY 162 

    0x4eded6c8,// 193 PAY 163 

    0x81a54c4d,// 194 PAY 164 

    0x3a5329b0,// 195 PAY 165 

    0x9e408791,// 196 PAY 166 

    0x46f81498,// 197 PAY 167 

    0xce15539e,// 198 PAY 168 

    0xe5d0a4ce,// 199 PAY 169 

    0x7012cdb1,// 200 PAY 170 

    0x7147741f,// 201 PAY 171 

    0x9aa39799,// 202 PAY 172 

    0xf3dee3fe,// 203 PAY 173 

    0x30eebdf9,// 204 PAY 174 

    0x268b7c93,// 205 PAY 175 

    0x66aa2cff,// 206 PAY 176 

    0x9627cbb2,// 207 PAY 177 

    0x72435d4e,// 208 PAY 178 

    0xb75d6187,// 209 PAY 179 

    0xd7cef32f,// 210 PAY 180 

    0x2421b92d,// 211 PAY 181 

    0x691689c3,// 212 PAY 182 

    0xaba18801,// 213 PAY 183 

    0x2814a9cd,// 214 PAY 184 

    0x40b3c0dc,// 215 PAY 185 

    0xf22df363,// 216 PAY 186 

    0xf10488ad,// 217 PAY 187 

    0xb20bc1aa,// 218 PAY 188 

    0xb0d05aee,// 219 PAY 189 

    0x5a834f2f,// 220 PAY 190 

    0x2ca4165c,// 221 PAY 191 

    0xff6b4354,// 222 PAY 192 

    0xb363dbbf,// 223 PAY 193 

    0xb0dce2ce,// 224 PAY 194 

    0xeb891d86,// 225 PAY 195 

    0x8847964b,// 226 PAY 196 

    0x55e699f6,// 227 PAY 197 

    0x863aa4e8,// 228 PAY 198 

    0xd054d6ac,// 229 PAY 199 

    0x9b46a27b,// 230 PAY 200 

    0x8e8d22bd,// 231 PAY 201 

    0xdb1e684b,// 232 PAY 202 

    0xfaea1aa1,// 233 PAY 203 

    0x6efb5b18,// 234 PAY 204 

    0xc62f8187,// 235 PAY 205 

    0xb169283e,// 236 PAY 206 

    0xdea18f38,// 237 PAY 207 

    0x7c54ee1d,// 238 PAY 208 

    0x3deb6f49,// 239 PAY 209 

    0x913bf9c7,// 240 PAY 210 

    0xd71943a0,// 241 PAY 211 

    0x5236997c,// 242 PAY 212 

    0xefb4cbb7,// 243 PAY 213 

    0x8675a6fe,// 244 PAY 214 

    0x100e721f,// 245 PAY 215 

    0xe482b4fc,// 246 PAY 216 

    0x8a7aefb8,// 247 PAY 217 

    0x7fcea9b9,// 248 PAY 218 

    0x2d0a576b,// 249 PAY 219 

    0xbddd229c,// 250 PAY 220 

    0x631aef47,// 251 PAY 221 

    0xc6164e52,// 252 PAY 222 

    0x4b9ace60,// 253 PAY 223 

    0xd34e5ae3,// 254 PAY 224 

    0x7df6b48b,// 255 PAY 225 

    0xabfe1ec2,// 256 PAY 226 

    0x901b8241,// 257 PAY 227 

    0x8720ccdf,// 258 PAY 228 

    0x3a4dd39d,// 259 PAY 229 

    0x58e4ec93,// 260 PAY 230 

    0xb206fe74,// 261 PAY 231 

    0x367e0c49,// 262 PAY 232 

    0xe38403f5,// 263 PAY 233 

    0xdc31e3c5,// 264 PAY 234 

    0x5f58f2be,// 265 PAY 235 

    0x7827337a,// 266 PAY 236 

    0x8bfe249a,// 267 PAY 237 

    0x082994da,// 268 PAY 238 

    0xab8f694b,// 269 PAY 239 

    0xec0455d7,// 270 PAY 240 

    0x730a0ccf,// 271 PAY 241 

    0xa987cfbe,// 272 PAY 242 

    0x67409e6a,// 273 PAY 243 

    0xacbbb3a0,// 274 PAY 244 

    0x5e849e86,// 275 PAY 245 

    0x4f8c997a,// 276 PAY 246 

    0x1c288e4d,// 277 PAY 247 

    0xc43fb796,// 278 PAY 248 

    0xf67542fc,// 279 PAY 249 

    0xfac9db84,// 280 PAY 250 

    0x12403215,// 281 PAY 251 

    0x8ceb1388,// 282 PAY 252 

    0xa7b01db4,// 283 PAY 253 

    0xe89ffae8,// 284 PAY 254 

    0xb05372d6,// 285 PAY 255 

    0xa4947a88,// 286 PAY 256 

    0x8211d4f0,// 287 PAY 257 

    0x01ffb03b,// 288 PAY 258 

    0xb15bfcdc,// 289 PAY 259 

    0xa00dec10,// 290 PAY 260 

    0x0f07a8d1,// 291 PAY 261 

    0xab2ada92,// 292 PAY 262 

    0xd6a3dc94,// 293 PAY 263 

    0xfa65c286,// 294 PAY 264 

    0x23086f05,// 295 PAY 265 

    0xfe6f3069,// 296 PAY 266 

    0x3c3c693a,// 297 PAY 267 

    0x054784a0,// 298 PAY 268 

    0x31074d06,// 299 PAY 269 

    0xb5684b75,// 300 PAY 270 

    0x3da12273,// 301 PAY 271 

    0x9ed9e0ec,// 302 PAY 272 

    0x030bfa87,// 303 PAY 273 

    0xd8032d8d,// 304 PAY 274 

    0x57fa1918,// 305 PAY 275 

    0x1aad5a56,// 306 PAY 276 

    0x945b1333,// 307 PAY 277 

    0x8dd48205,// 308 PAY 278 

    0x27e7fc1f,// 309 PAY 279 

    0x28d83440,// 310 PAY 280 

    0x565f1ca1,// 311 PAY 281 

    0xecc970b7,// 312 PAY 282 

    0x4051b677,// 313 PAY 283 

    0x8314ccd8,// 314 PAY 284 

    0xc5eb6f6a,// 315 PAY 285 

    0x0ff07c96,// 316 PAY 286 

    0xadfc5516,// 317 PAY 287 

    0xcc4e41da,// 318 PAY 288 

    0x196b48cb,// 319 PAY 289 

    0xd08775aa,// 320 PAY 290 

    0x0f402a63,// 321 PAY 291 

    0x44916331,// 322 PAY 292 

    0x041f0520,// 323 PAY 293 

    0x6bffce90,// 324 PAY 294 

    0x0f7011a5,// 325 PAY 295 

    0xecfa8423,// 326 PAY 296 

    0x9f258aa5,// 327 PAY 297 

    0x281cbf17,// 328 PAY 298 

    0x9ba3f553,// 329 PAY 299 

    0xbc069319,// 330 PAY 300 

    0x61955b5a,// 331 PAY 301 

    0x6a92dddf,// 332 PAY 302 

    0xfa1589cb,// 333 PAY 303 

    0xae124ae5,// 334 PAY 304 

    0xe0b8618b,// 335 PAY 305 

    0x53117441,// 336 PAY 306 

    0x56b0ddc8,// 337 PAY 307 

    0x5f3865ad,// 338 PAY 308 

    0x7da0d06c,// 339 PAY 309 

    0xead315f0,// 340 PAY 310 

    0xbcdc841d,// 341 PAY 311 

    0x26acda4f,// 342 PAY 312 

    0x394bd7a0,// 343 PAY 313 

    0x8c8dbe70,// 344 PAY 314 

    0x5e018770,// 345 PAY 315 

    0xe9182a4a,// 346 PAY 316 

    0xca7250b3,// 347 PAY 317 

    0x4441250c,// 348 PAY 318 

    0xd3c15dfd,// 349 PAY 319 

    0x5fa097f0,// 350 PAY 320 

    0x93ed43cc,// 351 PAY 321 

    0x1ccc5d94,// 352 PAY 322 

    0x2ec5f415,// 353 PAY 323 

    0x723d2198,// 354 PAY 324 

    0xde1c9150,// 355 PAY 325 

    0x83cbf64d,// 356 PAY 326 

    0x7072ff52,// 357 PAY 327 

    0xaef836a0,// 358 PAY 328 

    0x79ba1ae1,// 359 PAY 329 

    0x69becff5,// 360 PAY 330 

    0x3a1c0ac0,// 361 PAY 331 

    0xa9998935,// 362 PAY 332 

    0x608f00db,// 363 PAY 333 

    0xbcd8b78f,// 364 PAY 334 

    0xd64f1d54,// 365 PAY 335 

    0xcffc5051,// 366 PAY 336 

    0x40a5e207,// 367 PAY 337 

    0xc0b4458c,// 368 PAY 338 

    0x08611fdc,// 369 PAY 339 

    0x72948bed,// 370 PAY 340 

    0x07233761,// 371 PAY 341 

    0x66350b8d,// 372 PAY 342 

    0x19c61606,// 373 PAY 343 

    0xd72eb0de,// 374 PAY 344 

    0x2850fada,// 375 PAY 345 

    0x5d349cba,// 376 PAY 346 

    0xcc9f9f6b,// 377 PAY 347 

    0xe015e97f,// 378 PAY 348 

    0x22c12daa,// 379 PAY 349 

    0xab9ad980,// 380 PAY 350 

    0x2642dde8,// 381 PAY 351 

    0xdb0f459c,// 382 PAY 352 

    0x16d0949f,// 383 PAY 353 

    0xede1a76d,// 384 PAY 354 

    0xb7ff6532,// 385 PAY 355 

    0x2624b5e8,// 386 PAY 356 

    0x76efd4fb,// 387 PAY 357 

    0x1f359db2,// 388 PAY 358 

    0x8f1b50e1,// 389 PAY 359 

    0x1dd446c5,// 390 PAY 360 

    0xef59c556,// 391 PAY 361 

    0x3eebbe29,// 392 PAY 362 

    0xf1b783fd,// 393 PAY 363 

    0x523575ae,// 394 PAY 364 

    0x0dd0ea5c,// 395 PAY 365 

    0xfdc99a37,// 396 PAY 366 

    0x00963b62,// 397 PAY 367 

    0x99713762,// 398 PAY 368 

    0xa0063407,// 399 PAY 369 

    0x89113364,// 400 PAY 370 

    0x086386b9,// 401 PAY 371 

    0xfbedf101,// 402 PAY 372 

    0xad423951,// 403 PAY 373 

    0xb858f229,// 404 PAY 374 

    0x4e1f4400,// 405 PAY 375 

    0x2da8a955,// 406 PAY 376 

    0x81f877a1,// 407 PAY 377 

    0x3cbccedc,// 408 PAY 378 

    0x51f9a3ff,// 409 PAY 379 

    0x783d7f74,// 410 PAY 380 

    0x6c4d2011,// 411 PAY 381 

    0x46696f0a,// 412 PAY 382 

    0xc42713dc,// 413 PAY 383 

    0x447f65d2,// 414 PAY 384 

    0x9eb80b7b,// 415 PAY 385 

    0xfa9f5fc7,// 416 PAY 386 

    0x195e9885,// 417 PAY 387 

    0xc22de9b3,// 418 PAY 388 

    0xb39c6805,// 419 PAY 389 

    0xf38fffbe,// 420 PAY 390 

    0xee53baa2,// 421 PAY 391 

    0x16c3e49e,// 422 PAY 392 

    0x4c31b1e4,// 423 PAY 393 

    0x1647e421,// 424 PAY 394 

    0x5ced6fe4,// 425 PAY 395 

    0xffc8ebe3,// 426 PAY 396 

    0x8200bbc0,// 427 PAY 397 

    0x577aa2bb,// 428 PAY 398 

    0x4a2808cd,// 429 PAY 399 

    0x06afcb35,// 430 PAY 400 

    0x14a0bb5b,// 431 PAY 401 

    0xb3ba0fc9,// 432 PAY 402 

    0xc5e90469,// 433 PAY 403 

    0x77a756e8,// 434 PAY 404 

    0xd48b61b4,// 435 PAY 405 

    0x0829650b,// 436 PAY 406 

    0x011084c1,// 437 PAY 407 

    0x8d73b55d,// 438 PAY 408 

    0xe86c1d0a,// 439 PAY 409 

    0x508f99d2,// 440 PAY 410 

    0xd81c644d,// 441 PAY 411 

    0xa964ab09,// 442 PAY 412 

    0xaf7f7cac,// 443 PAY 413 

/// STA is 1 words. 

/// STA num_pkts       : 76 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x0160804c // 444 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt23_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80662813,// 4 SCX   2 

    0x00007342,// 5 SCX   3 

    0x05526058,// 6 SCX   4 

    0xb9576bea,// 7 SCX   5 

    0x162c9591,// 8 SCX   6 

    0x444c1e97,// 9 SCX   7 

    0x14ac4baa,// 10 SCX   8 

    0xad240fe7,// 11 SCX   9 

    0x48f3dc2f,// 12 SCX  10 

    0x42ecac40,// 13 SCX  11 

    0xe6c07138,// 14 SCX  12 

    0x44385137,// 15 SCX  13 

    0xf938bfb7,// 16 SCX  14 

    0xe2732213,// 17 SCX  15 

    0x4e6bc2f9,// 18 SCX  16 

    0x7996f29e,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1131 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 957 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 957 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 908 

/// BFD (ofst+len)cry  : 940 

/// BFD ofstiv         : 500 

/// BFD ofsticv        : 1096 

    0x000003bd,// 20 BFD   1 

    0x038c0020,// 21 BFD   2 

    0x044801f4,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c000e92,// 23 MFM   1 

    0x85ff8b1c,// 24 MFM   2 

    0x58534b24,// 25 MFM   3 

    0x35b2d183,// 26 MFM   4 

    0x2937a062,// 27 MFM   5 

    0x381f449a,// 28 MFM   6 

    0x78235803,// 29 MFM   7 

    0x22363071,// 30 MFM   8 

    0x6abfbfc6,// 31 MFM   9 

    0xb53f60ad,// 32 MFM  10 

    0x70a1c5de,// 33 MFM  11 

    0xd233f89b,// 34 MFM  12 

    0xef410042,// 35 MFM  13 

    0x13e4cc7f,// 36 MFM  14 

    0xe11fc735,// 37 MFM  15 

    0xefeab109,// 38 MFM  16 

/// BDA is 284 words. 

/// BDA size     is 1131 (0x46b) 

/// BDA id       is 0x6a15 

    0x046b6a15,// 39 BDA   1 

/// PAY Generic Data size   : 1131 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x9c72253c,// 40 PAY   1 

    0xe1c5b1b3,// 41 PAY   2 

    0x3eeca832,// 42 PAY   3 

    0xd9b6052a,// 43 PAY   4 

    0x686709a7,// 44 PAY   5 

    0xd3608b6f,// 45 PAY   6 

    0xfffbb6f0,// 46 PAY   7 

    0x6571bc8d,// 47 PAY   8 

    0x5e357df0,// 48 PAY   9 

    0x759a57f4,// 49 PAY  10 

    0x1d18a297,// 50 PAY  11 

    0xf3aea47f,// 51 PAY  12 

    0xabaf006d,// 52 PAY  13 

    0x0d4f1c68,// 53 PAY  14 

    0x6e60d984,// 54 PAY  15 

    0xdf4139b4,// 55 PAY  16 

    0x215f0c2a,// 56 PAY  17 

    0x3f128837,// 57 PAY  18 

    0xd7bf3830,// 58 PAY  19 

    0x918ac106,// 59 PAY  20 

    0x23e41595,// 60 PAY  21 

    0xd65601fb,// 61 PAY  22 

    0x21c2743c,// 62 PAY  23 

    0x91372caf,// 63 PAY  24 

    0x3d58574f,// 64 PAY  25 

    0xeb6f9d15,// 65 PAY  26 

    0xae5c513f,// 66 PAY  27 

    0x069edebe,// 67 PAY  28 

    0x20601538,// 68 PAY  29 

    0xea7a2f70,// 69 PAY  30 

    0xdd96bf5e,// 70 PAY  31 

    0xf67eb667,// 71 PAY  32 

    0x3c3a1daa,// 72 PAY  33 

    0xaf859d40,// 73 PAY  34 

    0x4f00dd1f,// 74 PAY  35 

    0xd1d0e712,// 75 PAY  36 

    0x4535aea6,// 76 PAY  37 

    0xd49111ce,// 77 PAY  38 

    0x00cfdb89,// 78 PAY  39 

    0x93a27741,// 79 PAY  40 

    0xd82d2464,// 80 PAY  41 

    0xba3b5c1c,// 81 PAY  42 

    0x1b35fcf0,// 82 PAY  43 

    0x3554f991,// 83 PAY  44 

    0x1c337275,// 84 PAY  45 

    0x609b12c4,// 85 PAY  46 

    0x5394dabe,// 86 PAY  47 

    0x5a77bb68,// 87 PAY  48 

    0xe1b125e8,// 88 PAY  49 

    0xca2ff296,// 89 PAY  50 

    0x9c984c61,// 90 PAY  51 

    0x7e896a54,// 91 PAY  52 

    0x53dd02d0,// 92 PAY  53 

    0x7eadb562,// 93 PAY  54 

    0x8fbd92e2,// 94 PAY  55 

    0x334ce669,// 95 PAY  56 

    0xb0f45eb0,// 96 PAY  57 

    0x23ec22ba,// 97 PAY  58 

    0xaac8a4b2,// 98 PAY  59 

    0x4bf1fa9b,// 99 PAY  60 

    0x07bbecb4,// 100 PAY  61 

    0xe71d5e67,// 101 PAY  62 

    0x7f9ae1a8,// 102 PAY  63 

    0xaaf1663d,// 103 PAY  64 

    0x7334742e,// 104 PAY  65 

    0x896a27c5,// 105 PAY  66 

    0x961ff471,// 106 PAY  67 

    0xeb172cb5,// 107 PAY  68 

    0x464e7ab1,// 108 PAY  69 

    0x46254c0b,// 109 PAY  70 

    0xe7167be1,// 110 PAY  71 

    0xca492531,// 111 PAY  72 

    0x09985603,// 112 PAY  73 

    0x7fc0507b,// 113 PAY  74 

    0x0c3de502,// 114 PAY  75 

    0x84fc822c,// 115 PAY  76 

    0xec87d0c0,// 116 PAY  77 

    0xa81cff77,// 117 PAY  78 

    0xbff8fa17,// 118 PAY  79 

    0xc5a9c3f0,// 119 PAY  80 

    0x8efc5f5d,// 120 PAY  81 

    0x630f2c00,// 121 PAY  82 

    0x1bf8afac,// 122 PAY  83 

    0x37e72f5e,// 123 PAY  84 

    0x5c92f060,// 124 PAY  85 

    0xc262ce29,// 125 PAY  86 

    0x9c856ade,// 126 PAY  87 

    0x751b00d7,// 127 PAY  88 

    0x81fa0c2d,// 128 PAY  89 

    0x2252387d,// 129 PAY  90 

    0x96953931,// 130 PAY  91 

    0x1f077641,// 131 PAY  92 

    0xcca1c566,// 132 PAY  93 

    0xb1f3b200,// 133 PAY  94 

    0x035f6c3f,// 134 PAY  95 

    0x40ae7d8e,// 135 PAY  96 

    0x5a288352,// 136 PAY  97 

    0xa72a687e,// 137 PAY  98 

    0x0448c21d,// 138 PAY  99 

    0xbb6f5487,// 139 PAY 100 

    0xb8f252df,// 140 PAY 101 

    0x74ccb5f0,// 141 PAY 102 

    0x1aece0ce,// 142 PAY 103 

    0x910edfea,// 143 PAY 104 

    0x7189e639,// 144 PAY 105 

    0xfd8e718a,// 145 PAY 106 

    0x68b29105,// 146 PAY 107 

    0x1f4be6b8,// 147 PAY 108 

    0x6e510058,// 148 PAY 109 

    0xee5a9d7f,// 149 PAY 110 

    0x5b3c13e7,// 150 PAY 111 

    0xac4ae5d3,// 151 PAY 112 

    0x0e998aa2,// 152 PAY 113 

    0x8bc26b4c,// 153 PAY 114 

    0x89273a69,// 154 PAY 115 

    0x7d779966,// 155 PAY 116 

    0xccb59f31,// 156 PAY 117 

    0x2f8fee43,// 157 PAY 118 

    0xe1416717,// 158 PAY 119 

    0x4c593f9f,// 159 PAY 120 

    0x6388fd72,// 160 PAY 121 

    0x51882379,// 161 PAY 122 

    0xb31a8e39,// 162 PAY 123 

    0x210a39dd,// 163 PAY 124 

    0x567df4b3,// 164 PAY 125 

    0xa723a060,// 165 PAY 126 

    0x682bae00,// 166 PAY 127 

    0x104eac15,// 167 PAY 128 

    0xb7fe6b27,// 168 PAY 129 

    0x017cfb34,// 169 PAY 130 

    0x4e1b6328,// 170 PAY 131 

    0x7f0ccc04,// 171 PAY 132 

    0x88daa6e3,// 172 PAY 133 

    0x6d59f5e7,// 173 PAY 134 

    0xf9e8d79d,// 174 PAY 135 

    0x0431fff6,// 175 PAY 136 

    0xeb883f40,// 176 PAY 137 

    0x5d090735,// 177 PAY 138 

    0xfa8d49d8,// 178 PAY 139 

    0x74672930,// 179 PAY 140 

    0xd8d99a54,// 180 PAY 141 

    0xba66c8fc,// 181 PAY 142 

    0x5a4767a0,// 182 PAY 143 

    0x6b2451bf,// 183 PAY 144 

    0x583abf34,// 184 PAY 145 

    0x5b27f07e,// 185 PAY 146 

    0x4a348499,// 186 PAY 147 

    0x8a76c64b,// 187 PAY 148 

    0xc848e899,// 188 PAY 149 

    0x1442dba6,// 189 PAY 150 

    0xbf383f4e,// 190 PAY 151 

    0x1805d380,// 191 PAY 152 

    0x35d3f012,// 192 PAY 153 

    0x542c818b,// 193 PAY 154 

    0xa1be5ed3,// 194 PAY 155 

    0x8dd7769b,// 195 PAY 156 

    0x762f676e,// 196 PAY 157 

    0x6c3a8867,// 197 PAY 158 

    0xc7cab5b6,// 198 PAY 159 

    0xfd387165,// 199 PAY 160 

    0x78814fb2,// 200 PAY 161 

    0x0a3ad9a0,// 201 PAY 162 

    0x5389794b,// 202 PAY 163 

    0xcae715cf,// 203 PAY 164 

    0x4206ffa9,// 204 PAY 165 

    0x650f4d0b,// 205 PAY 166 

    0xe14807b6,// 206 PAY 167 

    0x99add00c,// 207 PAY 168 

    0x1370f00d,// 208 PAY 169 

    0x657406f6,// 209 PAY 170 

    0x6d4d56d3,// 210 PAY 171 

    0x811d15b7,// 211 PAY 172 

    0x0bf9e5c9,// 212 PAY 173 

    0x4f762f39,// 213 PAY 174 

    0x47253758,// 214 PAY 175 

    0x10b2379d,// 215 PAY 176 

    0x2dc83fff,// 216 PAY 177 

    0x7239345e,// 217 PAY 178 

    0xd0a9f877,// 218 PAY 179 

    0x432a992a,// 219 PAY 180 

    0x9cd6a7dd,// 220 PAY 181 

    0xd5395ff3,// 221 PAY 182 

    0x49141133,// 222 PAY 183 

    0x0bf069a8,// 223 PAY 184 

    0x82fe5860,// 224 PAY 185 

    0x50c3415b,// 225 PAY 186 

    0x31081b9d,// 226 PAY 187 

    0xc60229d0,// 227 PAY 188 

    0xf74657f6,// 228 PAY 189 

    0x897922ef,// 229 PAY 190 

    0x38af1e60,// 230 PAY 191 

    0x6a2593da,// 231 PAY 192 

    0xc17db52a,// 232 PAY 193 

    0x6d1b3364,// 233 PAY 194 

    0x246ac585,// 234 PAY 195 

    0x09b21465,// 235 PAY 196 

    0x4a4e177f,// 236 PAY 197 

    0x8dae3465,// 237 PAY 198 

    0x958ff289,// 238 PAY 199 

    0x547358fe,// 239 PAY 200 

    0x09d8aad5,// 240 PAY 201 

    0x28a25697,// 241 PAY 202 

    0x18ff95e0,// 242 PAY 203 

    0xf9c12193,// 243 PAY 204 

    0xa6513a8c,// 244 PAY 205 

    0x8c215bfb,// 245 PAY 206 

    0xdee9106d,// 246 PAY 207 

    0x5122db8f,// 247 PAY 208 

    0x41a38880,// 248 PAY 209 

    0x96c2c08c,// 249 PAY 210 

    0x9a130361,// 250 PAY 211 

    0x70da903f,// 251 PAY 212 

    0x9f78cf48,// 252 PAY 213 

    0x6865e75a,// 253 PAY 214 

    0xdb27ddc7,// 254 PAY 215 

    0x9cf18611,// 255 PAY 216 

    0xcdfb8bad,// 256 PAY 217 

    0x661dd859,// 257 PAY 218 

    0x36fc3421,// 258 PAY 219 

    0xcaba4698,// 259 PAY 220 

    0x4d4d32f4,// 260 PAY 221 

    0xe58cee2c,// 261 PAY 222 

    0xa1245d21,// 262 PAY 223 

    0x12a6db22,// 263 PAY 224 

    0xd3515355,// 264 PAY 225 

    0xc565a8a6,// 265 PAY 226 

    0x83790d20,// 266 PAY 227 

    0xceb0524b,// 267 PAY 228 

    0x17f0b076,// 268 PAY 229 

    0x28170f9b,// 269 PAY 230 

    0x5df78428,// 270 PAY 231 

    0x3f973898,// 271 PAY 232 

    0x8d64c0d4,// 272 PAY 233 

    0x855e4070,// 273 PAY 234 

    0x5ac979ca,// 274 PAY 235 

    0xf77b90d7,// 275 PAY 236 

    0x031968d9,// 276 PAY 237 

    0x311edd04,// 277 PAY 238 

    0x2e7a4a40,// 278 PAY 239 

    0x463ecece,// 279 PAY 240 

    0xf41032da,// 280 PAY 241 

    0x1635ecf2,// 281 PAY 242 

    0x4b889296,// 282 PAY 243 

    0x9d23944f,// 283 PAY 244 

    0x42805ddd,// 284 PAY 245 

    0x02cbce32,// 285 PAY 246 

    0x3b4de8c5,// 286 PAY 247 

    0xbfe15359,// 287 PAY 248 

    0x677f5319,// 288 PAY 249 

    0x71272ff8,// 289 PAY 250 

    0x88b2d154,// 290 PAY 251 

    0x9f0130bc,// 291 PAY 252 

    0x7bcc7d06,// 292 PAY 253 

    0xee1434b5,// 293 PAY 254 

    0x12cd0abd,// 294 PAY 255 

    0x4975fcc2,// 295 PAY 256 

    0xb9ab1582,// 296 PAY 257 

    0x1e90225b,// 297 PAY 258 

    0x1f400f70,// 298 PAY 259 

    0xc6893a07,// 299 PAY 260 

    0x3f314454,// 300 PAY 261 

    0xca4045fc,// 301 PAY 262 

    0xd56674c9,// 302 PAY 263 

    0xa789b3a3,// 303 PAY 264 

    0x7f4f3d1c,// 304 PAY 265 

    0x9e10bb0d,// 305 PAY 266 

    0x70ac7c14,// 306 PAY 267 

    0x8efef134,// 307 PAY 268 

    0x2ab19480,// 308 PAY 269 

    0x954eed78,// 309 PAY 270 

    0xed8a0244,// 310 PAY 271 

    0xa30a2e68,// 311 PAY 272 

    0xf5c8b771,// 312 PAY 273 

    0xf6f0cec2,// 313 PAY 274 

    0x4937cbbc,// 314 PAY 275 

    0x9954d862,// 315 PAY 276 

    0xb44e87b3,// 316 PAY 277 

    0x6d782326,// 317 PAY 278 

    0x10d34c02,// 318 PAY 279 

    0x601f684c,// 319 PAY 280 

    0xa8fdeba7,// 320 PAY 281 

    0x7d82fc7a,// 321 PAY 282 

    0x20d08f00,// 322 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 23 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd8 

    0x03d9d817 // 323 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt24_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x8064287f,// 4 SCX   2 

    0x00003242,// 5 SCX   3 

    0x986b4f9c,// 6 SCX   4 

    0xb6831d6e,// 7 SCX   5 

    0x0fd95763,// 8 SCX   6 

    0xf87a7ade,// 9 SCX   7 

    0x25b1f1c3,// 10 SCX   8 

    0xc11b0040,// 11 SCX   9 

    0x5a2968a0,// 12 SCX  10 

    0xd348d9b5,// 13 SCX  11 

    0xd292107c,// 14 SCX  12 

    0x0429ed27,// 15 SCX  13 

    0xb7da6edf,// 16 SCX  14 

    0xbe953436,// 17 SCX  15 

    0x291b7201,// 18 SCX  16 

    0xd009c5c5,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1457 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 460 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 460 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 348 

/// BFD (ofst+len)cry  : 452 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 488 

    0x000001cc,// 20 BFD   1 

    0x015c0068,// 21 BFD   2 

    0x01e8009c,// 22 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 3c 

    0x3c004673,// 23 MFM   1 

    0x43edc513,// 24 MFM   2 

    0x8870c35f,// 25 MFM   3 

    0x00c538d9,// 26 MFM   4 

    0x5a879ed2,// 27 MFM   5 

    0xde3a96ad,// 28 MFM   6 

    0x72b80d64,// 29 MFM   7 

    0xbdb429c7,// 30 MFM   8 

/// BDA is 366 words. 

/// BDA size     is 1457 (0x5b1) 

/// BDA id       is 0x2a9b 

    0x05b12a9b,// 31 BDA   1 

/// PAY Generic Data size   : 1457 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2925892c,// 32 PAY   1 

    0x6e9e13a4,// 33 PAY   2 

    0x549ab820,// 34 PAY   3 

    0x63c6fec9,// 35 PAY   4 

    0x43707279,// 36 PAY   5 

    0xbf7a3c55,// 37 PAY   6 

    0x30696545,// 38 PAY   7 

    0xdc215c81,// 39 PAY   8 

    0x61ed6494,// 40 PAY   9 

    0x4e062b47,// 41 PAY  10 

    0x0b6d1f5f,// 42 PAY  11 

    0x657715d3,// 43 PAY  12 

    0xa2373b06,// 44 PAY  13 

    0xb183ef53,// 45 PAY  14 

    0x3c4e5545,// 46 PAY  15 

    0xbe2f2fd7,// 47 PAY  16 

    0xcd0f28ba,// 48 PAY  17 

    0x0ede6b6a,// 49 PAY  18 

    0x10fbddb8,// 50 PAY  19 

    0xc9391b86,// 51 PAY  20 

    0x97d6d358,// 52 PAY  21 

    0xe25449d8,// 53 PAY  22 

    0x1dff35db,// 54 PAY  23 

    0xcef21b91,// 55 PAY  24 

    0xcb502799,// 56 PAY  25 

    0xeb09a772,// 57 PAY  26 

    0xd28bdac0,// 58 PAY  27 

    0x1b35a946,// 59 PAY  28 

    0x6b5fb813,// 60 PAY  29 

    0x40233fd3,// 61 PAY  30 

    0x69f71886,// 62 PAY  31 

    0x54d8a8bd,// 63 PAY  32 

    0x8fab434e,// 64 PAY  33 

    0x0bb355be,// 65 PAY  34 

    0xa09dd0bb,// 66 PAY  35 

    0x30458666,// 67 PAY  36 

    0x489f19c4,// 68 PAY  37 

    0x24f656f0,// 69 PAY  38 

    0xcf3bc443,// 70 PAY  39 

    0x6067a823,// 71 PAY  40 

    0x9ba9a018,// 72 PAY  41 

    0x4fb7c7ca,// 73 PAY  42 

    0xfa2806f6,// 74 PAY  43 

    0x51463dbd,// 75 PAY  44 

    0x266a290a,// 76 PAY  45 

    0xdad4e60a,// 77 PAY  46 

    0x708604a3,// 78 PAY  47 

    0x88d84a7f,// 79 PAY  48 

    0x3e5ac9a9,// 80 PAY  49 

    0x235e3d9f,// 81 PAY  50 

    0x6447663f,// 82 PAY  51 

    0xc2f87018,// 83 PAY  52 

    0xb28e39b2,// 84 PAY  53 

    0x4085fe54,// 85 PAY  54 

    0xab9ec9c1,// 86 PAY  55 

    0xe42fcfa7,// 87 PAY  56 

    0xf5f78ff4,// 88 PAY  57 

    0xf68a204f,// 89 PAY  58 

    0xf5258b62,// 90 PAY  59 

    0xf30785fc,// 91 PAY  60 

    0xbc59fd91,// 92 PAY  61 

    0x94732e91,// 93 PAY  62 

    0x8d2312d4,// 94 PAY  63 

    0x071d254d,// 95 PAY  64 

    0xa1f5165f,// 96 PAY  65 

    0xda0fff3d,// 97 PAY  66 

    0x148ca7b7,// 98 PAY  67 

    0xaf6243ea,// 99 PAY  68 

    0x359f05e6,// 100 PAY  69 

    0xa7107044,// 101 PAY  70 

    0x23a654b7,// 102 PAY  71 

    0x4fe1fa57,// 103 PAY  72 

    0x10f97228,// 104 PAY  73 

    0x5060b8c1,// 105 PAY  74 

    0xf9cd9e16,// 106 PAY  75 

    0xfc114b16,// 107 PAY  76 

    0x4f942479,// 108 PAY  77 

    0x85c76346,// 109 PAY  78 

    0xbe21d250,// 110 PAY  79 

    0x50db7306,// 111 PAY  80 

    0xcf614709,// 112 PAY  81 

    0x84998627,// 113 PAY  82 

    0xb9e0834b,// 114 PAY  83 

    0xc76509be,// 115 PAY  84 

    0x5a9b0d1c,// 116 PAY  85 

    0x369eaaa4,// 117 PAY  86 

    0xdaf6790e,// 118 PAY  87 

    0xe782db01,// 119 PAY  88 

    0x17903150,// 120 PAY  89 

    0xad674162,// 121 PAY  90 

    0x58325bc3,// 122 PAY  91 

    0x6a8f06f7,// 123 PAY  92 

    0x9eb284d0,// 124 PAY  93 

    0x60a0bad3,// 125 PAY  94 

    0xc6f5c979,// 126 PAY  95 

    0x75dd34b9,// 127 PAY  96 

    0x9c0892cf,// 128 PAY  97 

    0xe7d9b72f,// 129 PAY  98 

    0x861cc253,// 130 PAY  99 

    0xaeb97db6,// 131 PAY 100 

    0xfcc451ed,// 132 PAY 101 

    0x07bb1a4e,// 133 PAY 102 

    0x133dcfed,// 134 PAY 103 

    0xf147864e,// 135 PAY 104 

    0x9ef618ad,// 136 PAY 105 

    0x0ed100c4,// 137 PAY 106 

    0x7289f6bb,// 138 PAY 107 

    0x25992698,// 139 PAY 108 

    0xf43d73fc,// 140 PAY 109 

    0xa8788fe1,// 141 PAY 110 

    0x5e8a7a55,// 142 PAY 111 

    0x77f4f0f3,// 143 PAY 112 

    0x93bd6f49,// 144 PAY 113 

    0x3646d7cf,// 145 PAY 114 

    0x0d916670,// 146 PAY 115 

    0x7caea41e,// 147 PAY 116 

    0x8c0253c1,// 148 PAY 117 

    0xbde8eba9,// 149 PAY 118 

    0x6ea54282,// 150 PAY 119 

    0x31719bcd,// 151 PAY 120 

    0x030d0fe7,// 152 PAY 121 

    0x95b0c7a6,// 153 PAY 122 

    0x2894f89a,// 154 PAY 123 

    0x0e8eb43d,// 155 PAY 124 

    0xbcb5efca,// 156 PAY 125 

    0xf348c518,// 157 PAY 126 

    0x6eab1f9c,// 158 PAY 127 

    0x912e8066,// 159 PAY 128 

    0x246597cf,// 160 PAY 129 

    0xef244605,// 161 PAY 130 

    0x4baf4282,// 162 PAY 131 

    0xffcebe5f,// 163 PAY 132 

    0x89a2662a,// 164 PAY 133 

    0x70f066d9,// 165 PAY 134 

    0xbcd42656,// 166 PAY 135 

    0x95f76f9d,// 167 PAY 136 

    0x6b51a52f,// 168 PAY 137 

    0x8436f1f7,// 169 PAY 138 

    0xc5c1183a,// 170 PAY 139 

    0x88f334c0,// 171 PAY 140 

    0x6997b0b8,// 172 PAY 141 

    0x44737bba,// 173 PAY 142 

    0x54da4072,// 174 PAY 143 

    0x09cdf752,// 175 PAY 144 

    0x2a1da16d,// 176 PAY 145 

    0xcefe4e10,// 177 PAY 146 

    0x3d0ef6ee,// 178 PAY 147 

    0x836d983d,// 179 PAY 148 

    0xf71394d6,// 180 PAY 149 

    0xbb97319b,// 181 PAY 150 

    0x3401ec65,// 182 PAY 151 

    0x2c83f2a3,// 183 PAY 152 

    0xae86afc0,// 184 PAY 153 

    0x494f58cb,// 185 PAY 154 

    0x4e46ae3d,// 186 PAY 155 

    0x2bcb5b61,// 187 PAY 156 

    0xddfb7e91,// 188 PAY 157 

    0x4a8750fc,// 189 PAY 158 

    0x1b0927ab,// 190 PAY 159 

    0x413d05a5,// 191 PAY 160 

    0x692d7c13,// 192 PAY 161 

    0x28421a61,// 193 PAY 162 

    0x03f60817,// 194 PAY 163 

    0x55a094fa,// 195 PAY 164 

    0xc159a35d,// 196 PAY 165 

    0x1f468196,// 197 PAY 166 

    0xec7a55d5,// 198 PAY 167 

    0x9b4236b3,// 199 PAY 168 

    0x4cb94f02,// 200 PAY 169 

    0x22aebf68,// 201 PAY 170 

    0xdddbec70,// 202 PAY 171 

    0x957eeb0b,// 203 PAY 172 

    0xcd980a45,// 204 PAY 173 

    0x6b90d376,// 205 PAY 174 

    0xcb425232,// 206 PAY 175 

    0xab523b04,// 207 PAY 176 

    0x38ef2afb,// 208 PAY 177 

    0xa6c89718,// 209 PAY 178 

    0x5f8d49c6,// 210 PAY 179 

    0x4091aeaf,// 211 PAY 180 

    0x969a6c93,// 212 PAY 181 

    0x094ae59c,// 213 PAY 182 

    0x01fa44b0,// 214 PAY 183 

    0x6e065ef2,// 215 PAY 184 

    0x40b4dd19,// 216 PAY 185 

    0x03398b74,// 217 PAY 186 

    0x95eee99f,// 218 PAY 187 

    0xd93f9154,// 219 PAY 188 

    0x44b281ac,// 220 PAY 189 

    0x3bf552a6,// 221 PAY 190 

    0x8e82e2b9,// 222 PAY 191 

    0x1799ef59,// 223 PAY 192 

    0x84d9b2b7,// 224 PAY 193 

    0xb33dca79,// 225 PAY 194 

    0x01106e4d,// 226 PAY 195 

    0x6b1c91d8,// 227 PAY 196 

    0xb6d2cb0d,// 228 PAY 197 

    0x05f6a94c,// 229 PAY 198 

    0x36301011,// 230 PAY 199 

    0x3fa25cd4,// 231 PAY 200 

    0xd1d9995a,// 232 PAY 201 

    0x383265cf,// 233 PAY 202 

    0xb745cb6a,// 234 PAY 203 

    0xbc4781e9,// 235 PAY 204 

    0xc4da061f,// 236 PAY 205 

    0x769c7142,// 237 PAY 206 

    0x0422d762,// 238 PAY 207 

    0x7ba5fa5c,// 239 PAY 208 

    0xb9024a7f,// 240 PAY 209 

    0x0b78f4c8,// 241 PAY 210 

    0x1fe4af63,// 242 PAY 211 

    0x3b81dbf0,// 243 PAY 212 

    0xf6043690,// 244 PAY 213 

    0xc0b9698d,// 245 PAY 214 

    0x91d3fe47,// 246 PAY 215 

    0x9dbccc99,// 247 PAY 216 

    0x345bc19a,// 248 PAY 217 

    0xefe25556,// 249 PAY 218 

    0x5aac0377,// 250 PAY 219 

    0xa4df94f1,// 251 PAY 220 

    0x99a50150,// 252 PAY 221 

    0xb93b7c4a,// 253 PAY 222 

    0xf8d430c7,// 254 PAY 223 

    0xbed7b2ab,// 255 PAY 224 

    0x513089ca,// 256 PAY 225 

    0xa542a31f,// 257 PAY 226 

    0xda2e6a87,// 258 PAY 227 

    0x85024d40,// 259 PAY 228 

    0x6644c0e3,// 260 PAY 229 

    0x71a348b0,// 261 PAY 230 

    0x9b329b00,// 262 PAY 231 

    0x979b37d6,// 263 PAY 232 

    0xb4ec20e9,// 264 PAY 233 

    0xd46a738d,// 265 PAY 234 

    0x1dac5041,// 266 PAY 235 

    0x61e7ed33,// 267 PAY 236 

    0x5f53265b,// 268 PAY 237 

    0x64ae5326,// 269 PAY 238 

    0xd1556110,// 270 PAY 239 

    0x60e74c10,// 271 PAY 240 

    0x0facacdf,// 272 PAY 241 

    0xa7b61a02,// 273 PAY 242 

    0x140df53f,// 274 PAY 243 

    0x55ba32ed,// 275 PAY 244 

    0x1b911dd9,// 276 PAY 245 

    0xd2c7bb7b,// 277 PAY 246 

    0x12793d36,// 278 PAY 247 

    0x04937993,// 279 PAY 248 

    0xee940935,// 280 PAY 249 

    0xd487b034,// 281 PAY 250 

    0xf804c2a2,// 282 PAY 251 

    0xa5fbddc1,// 283 PAY 252 

    0xa177e7ea,// 284 PAY 253 

    0xaeeec320,// 285 PAY 254 

    0xb804c3e2,// 286 PAY 255 

    0x7fef1071,// 287 PAY 256 

    0x7a2d41e4,// 288 PAY 257 

    0xfc0d21d3,// 289 PAY 258 

    0x0afed52f,// 290 PAY 259 

    0x98d8e13b,// 291 PAY 260 

    0x9fcbb082,// 292 PAY 261 

    0x7ae4168a,// 293 PAY 262 

    0xce249e5f,// 294 PAY 263 

    0xf0d8f580,// 295 PAY 264 

    0x743518e9,// 296 PAY 265 

    0x771fff12,// 297 PAY 266 

    0xb1a36e70,// 298 PAY 267 

    0x8cf39d8a,// 299 PAY 268 

    0x9a8478ed,// 300 PAY 269 

    0xe1979b72,// 301 PAY 270 

    0xfd0a721d,// 302 PAY 271 

    0xd733021c,// 303 PAY 272 

    0x823cfbb3,// 304 PAY 273 

    0x29cff339,// 305 PAY 274 

    0xe4b6817c,// 306 PAY 275 

    0x258ec3b4,// 307 PAY 276 

    0x0c3418de,// 308 PAY 277 

    0x15a4eb2d,// 309 PAY 278 

    0x85ed4d87,// 310 PAY 279 

    0xda2824a7,// 311 PAY 280 

    0xedb16750,// 312 PAY 281 

    0xd4c6bf97,// 313 PAY 282 

    0x7be8fc17,// 314 PAY 283 

    0xe9af424a,// 315 PAY 284 

    0x74227c7d,// 316 PAY 285 

    0xc794277d,// 317 PAY 286 

    0xfa3bb3f5,// 318 PAY 287 

    0xc66b78b9,// 319 PAY 288 

    0x0cb215cb,// 320 PAY 289 

    0x5cb59d70,// 321 PAY 290 

    0xd73031a9,// 322 PAY 291 

    0x28d40085,// 323 PAY 292 

    0xea5c4fb5,// 324 PAY 293 

    0x0de93448,// 325 PAY 294 

    0x3cfa7142,// 326 PAY 295 

    0x0851234e,// 327 PAY 296 

    0x6bb09621,// 328 PAY 297 

    0x44fb28ed,// 329 PAY 298 

    0xc014056a,// 330 PAY 299 

    0xbad7e500,// 331 PAY 300 

    0x7731078a,// 332 PAY 301 

    0x9963e54a,// 333 PAY 302 

    0xb13665db,// 334 PAY 303 

    0xf0aa34a9,// 335 PAY 304 

    0xad96da86,// 336 PAY 305 

    0xab8055b3,// 337 PAY 306 

    0x4b72c9c2,// 338 PAY 307 

    0x93092018,// 339 PAY 308 

    0x721a18c2,// 340 PAY 309 

    0xee55d621,// 341 PAY 310 

    0xc9fc6bf4,// 342 PAY 311 

    0x6f6fa126,// 343 PAY 312 

    0xbfeff0a7,// 344 PAY 313 

    0xfe9811a7,// 345 PAY 314 

    0xb63fcb22,// 346 PAY 315 

    0x389fbdaa,// 347 PAY 316 

    0xf5d6e886,// 348 PAY 317 

    0xc30b05a3,// 349 PAY 318 

    0x4e5ab0e9,// 350 PAY 319 

    0x9f54d24d,// 351 PAY 320 

    0x38fae6c1,// 352 PAY 321 

    0x67cb9d76,// 353 PAY 322 

    0xc78e5169,// 354 PAY 323 

    0x88f74f7e,// 355 PAY 324 

    0xcbcd211b,// 356 PAY 325 

    0xe02c5729,// 357 PAY 326 

    0xd7572720,// 358 PAY 327 

    0xd785241e,// 359 PAY 328 

    0x3617f120,// 360 PAY 329 

    0x7f931991,// 361 PAY 330 

    0x0facf5eb,// 362 PAY 331 

    0x08ec273d,// 363 PAY 332 

    0x39f0574a,// 364 PAY 333 

    0xaed03c4a,// 365 PAY 334 

    0x386218fd,// 366 PAY 335 

    0x7da04401,// 367 PAY 336 

    0xdb25b1f1,// 368 PAY 337 

    0xefb689a9,// 369 PAY 338 

    0xdb5e3fb7,// 370 PAY 339 

    0xc15d08c7,// 371 PAY 340 

    0x8dd20ce4,// 372 PAY 341 

    0x1ba21329,// 373 PAY 342 

    0x613b247a,// 374 PAY 343 

    0x3f45b009,// 375 PAY 344 

    0xd7f20566,// 376 PAY 345 

    0x54e4b6ff,// 377 PAY 346 

    0x038ef826,// 378 PAY 347 

    0xf0735369,// 379 PAY 348 

    0x176eb81a,// 380 PAY 349 

    0x81bcf51d,// 381 PAY 350 

    0x09dd71e2,// 382 PAY 351 

    0x3ca34708,// 383 PAY 352 

    0x9ed60315,// 384 PAY 353 

    0xf9ddaa4e,// 385 PAY 354 

    0xe8548d3a,// 386 PAY 355 

    0x1d33acfe,// 387 PAY 356 

    0xe9ce01b5,// 388 PAY 357 

    0xb84189e5,// 389 PAY 358 

    0x85391d98,// 390 PAY 359 

    0x6cece17d,// 391 PAY 360 

    0x761939b0,// 392 PAY 361 

    0x40ad74dc,// 393 PAY 362 

    0x2933a88e,// 394 PAY 363 

    0x774deb6d,// 395 PAY 364 

    0x46000000,// 396 PAY 365 

/// STA is 1 words. 

/// STA num_pkts       : 151 

/// STA pkt_idx        : 156 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02703c97 // 397 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt25_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80602846,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xd2e3b44b,// 6 SCX   4 

    0x5f3cb2ee,// 7 SCX   5 

    0x353a8a01,// 8 SCX   6 

    0x724b61e5,// 9 SCX   7 

    0x6ec4ed59,// 10 SCX   8 

    0x1f1d2f16,// 11 SCX   9 

    0xea72c941,// 12 SCX  10 

    0xa3360e5e,// 13 SCX  11 

    0xc9b352f3,// 14 SCX  12 

    0xf9349f5b,// 15 SCX  13 

    0x4adb349c,// 16 SCX  14 

    0x1da351c2,// 17 SCX  15 

    0x8eff7111,// 18 SCX  16 

    0xcb4b1008,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1284 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 793 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 793 

/// BFD lencrypto      : 480 

/// BFD ofstcrypto     : 84 

/// BFD (ofst+len)cry  : 564 

/// BFD ofstiv         : 56 

/// BFD ofsticv        : 964 

    0x00000319,// 20 BFD   1 

    0x005401e0,// 21 BFD   2 

    0x03c40038,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c0039ec,// 23 MFM   1 

    0x31f21406,// 24 MFM   2 

    0x63b5d948,// 25 MFM   3 

    0xfe12c277,// 26 MFM   4 

    0x1f6a4164,// 27 MFM   5 

    0x97530d81,// 28 MFM   6 

    0xb34c3f7c,// 29 MFM   7 

    0x9f7036d2,// 30 MFM   8 

    0xc058332e,// 31 MFM   9 

    0xd8e1cc05,// 32 MFM  10 

    0x377e38a9,// 33 MFM  11 

    0xb90dfceb,// 34 MFM  12 

    0x57b3fcdd,// 35 MFM  13 

    0xb7c521be,// 36 MFM  14 

    0x724cc6cb,// 37 MFM  15 

    0x873ee439,// 38 MFM  16 

/// BDA is 322 words. 

/// BDA size     is 1284 (0x504) 

/// BDA id       is 0xdca0 

    0x0504dca0,// 39 BDA   1 

/// PAY Generic Data size   : 1284 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x837034ef,// 40 PAY   1 

    0x951db558,// 41 PAY   2 

    0xb7483f5f,// 42 PAY   3 

    0x046abba2,// 43 PAY   4 

    0xbb1a4c20,// 44 PAY   5 

    0x01d1db32,// 45 PAY   6 

    0x8285c5d7,// 46 PAY   7 

    0x3b1f4cf2,// 47 PAY   8 

    0x40fe26b9,// 48 PAY   9 

    0x0fa95211,// 49 PAY  10 

    0x33378c03,// 50 PAY  11 

    0xc5985311,// 51 PAY  12 

    0x01c1f203,// 52 PAY  13 

    0x1bc5869a,// 53 PAY  14 

    0x3902e8e1,// 54 PAY  15 

    0xde58e18f,// 55 PAY  16 

    0x674bc1ad,// 56 PAY  17 

    0x77392798,// 57 PAY  18 

    0x12a1ba28,// 58 PAY  19 

    0x1bd6bfa3,// 59 PAY  20 

    0x71c20d5c,// 60 PAY  21 

    0xbb92d0e8,// 61 PAY  22 

    0x48c3fa03,// 62 PAY  23 

    0xd901edf8,// 63 PAY  24 

    0xb64e8c66,// 64 PAY  25 

    0x26ee1da7,// 65 PAY  26 

    0x24c09997,// 66 PAY  27 

    0xc14beea5,// 67 PAY  28 

    0x52aac764,// 68 PAY  29 

    0x8d303bb1,// 69 PAY  30 

    0xbcad94d1,// 70 PAY  31 

    0x5bcf004d,// 71 PAY  32 

    0x8e7542a7,// 72 PAY  33 

    0xc3695e38,// 73 PAY  34 

    0xf0501027,// 74 PAY  35 

    0xdc46ad8d,// 75 PAY  36 

    0x9c68b7e1,// 76 PAY  37 

    0x1a07961a,// 77 PAY  38 

    0xc1d727c4,// 78 PAY  39 

    0xbe5350e6,// 79 PAY  40 

    0xfb4065fc,// 80 PAY  41 

    0xbb429061,// 81 PAY  42 

    0xa3b09f6b,// 82 PAY  43 

    0x75bcd7a0,// 83 PAY  44 

    0x1d3219e7,// 84 PAY  45 

    0x46c32150,// 85 PAY  46 

    0x719405f4,// 86 PAY  47 

    0x7b2a0e1f,// 87 PAY  48 

    0x403e4f0a,// 88 PAY  49 

    0x90e895b3,// 89 PAY  50 

    0xe9675ce5,// 90 PAY  51 

    0xc0d0bd5d,// 91 PAY  52 

    0xa7331798,// 92 PAY  53 

    0x2d9bcfa6,// 93 PAY  54 

    0x3913e7f1,// 94 PAY  55 

    0xa25083d3,// 95 PAY  56 

    0x5a17c060,// 96 PAY  57 

    0xc40004e5,// 97 PAY  58 

    0xe42f6067,// 98 PAY  59 

    0x6ca132fc,// 99 PAY  60 

    0x852d97ff,// 100 PAY  61 

    0x077317f6,// 101 PAY  62 

    0xf6cd67db,// 102 PAY  63 

    0xdee6fe87,// 103 PAY  64 

    0xc73ad997,// 104 PAY  65 

    0x5e20172a,// 105 PAY  66 

    0x5b63a28a,// 106 PAY  67 

    0x54c34596,// 107 PAY  68 

    0x0ad1090a,// 108 PAY  69 

    0x8fdb9a3e,// 109 PAY  70 

    0xb12aa86e,// 110 PAY  71 

    0x0aaaad15,// 111 PAY  72 

    0xd7e84a45,// 112 PAY  73 

    0x41e29f20,// 113 PAY  74 

    0x6a7e27e9,// 114 PAY  75 

    0x8c1b6951,// 115 PAY  76 

    0xc2ee8b44,// 116 PAY  77 

    0x75d840a5,// 117 PAY  78 

    0xe222db66,// 118 PAY  79 

    0x70e49690,// 119 PAY  80 

    0x8fc25727,// 120 PAY  81 

    0x7a4f0197,// 121 PAY  82 

    0xf86027fb,// 122 PAY  83 

    0xe12b9130,// 123 PAY  84 

    0x07481bdc,// 124 PAY  85 

    0x1b409bc7,// 125 PAY  86 

    0x0e9aafa9,// 126 PAY  87 

    0xa819d25a,// 127 PAY  88 

    0x3e01ecba,// 128 PAY  89 

    0x80450480,// 129 PAY  90 

    0x4a5bb41a,// 130 PAY  91 

    0xa371e92f,// 131 PAY  92 

    0x31b9eacf,// 132 PAY  93 

    0xd62b514f,// 133 PAY  94 

    0x738eb39f,// 134 PAY  95 

    0xba579e14,// 135 PAY  96 

    0x3e6f06b4,// 136 PAY  97 

    0x0e03086d,// 137 PAY  98 

    0x1d47e2f0,// 138 PAY  99 

    0xa9502a73,// 139 PAY 100 

    0xcc3a6b61,// 140 PAY 101 

    0xf93ec02d,// 141 PAY 102 

    0xacf1d153,// 142 PAY 103 

    0x2985d79e,// 143 PAY 104 

    0x94322894,// 144 PAY 105 

    0x08b2d02e,// 145 PAY 106 

    0xce55f9c6,// 146 PAY 107 

    0x02e7bdb5,// 147 PAY 108 

    0xa9a8ecdc,// 148 PAY 109 

    0x72ea7fbb,// 149 PAY 110 

    0x57767a52,// 150 PAY 111 

    0x99dc1bcd,// 151 PAY 112 

    0x87a26020,// 152 PAY 113 

    0x345d21f2,// 153 PAY 114 

    0x533571ea,// 154 PAY 115 

    0x9c105397,// 155 PAY 116 

    0x19d1a156,// 156 PAY 117 

    0x2f5d7634,// 157 PAY 118 

    0x6d32ab74,// 158 PAY 119 

    0xad847856,// 159 PAY 120 

    0xc22b44a7,// 160 PAY 121 

    0x305e3372,// 161 PAY 122 

    0x60e0280e,// 162 PAY 123 

    0x13daf8b4,// 163 PAY 124 

    0x0023ace8,// 164 PAY 125 

    0x2fb1d1ef,// 165 PAY 126 

    0x6b5a43e9,// 166 PAY 127 

    0xb9ca85c6,// 167 PAY 128 

    0xc6dd6d3c,// 168 PAY 129 

    0x600bf2c7,// 169 PAY 130 

    0xad1fcd5b,// 170 PAY 131 

    0xd057498b,// 171 PAY 132 

    0xb087e29c,// 172 PAY 133 

    0x17c20299,// 173 PAY 134 

    0x3c612341,// 174 PAY 135 

    0x6c1e14a7,// 175 PAY 136 

    0xe117dd7e,// 176 PAY 137 

    0xc5f301e7,// 177 PAY 138 

    0x56d04508,// 178 PAY 139 

    0x34411113,// 179 PAY 140 

    0xd41ae6b6,// 180 PAY 141 

    0x3f5032e5,// 181 PAY 142 

    0xbad5cb70,// 182 PAY 143 

    0x8fb6cc3f,// 183 PAY 144 

    0x97cd8776,// 184 PAY 145 

    0x91676797,// 185 PAY 146 

    0xb0a7b15b,// 186 PAY 147 

    0x5efd490e,// 187 PAY 148 

    0xabe7bdf0,// 188 PAY 149 

    0xe28f9348,// 189 PAY 150 

    0x235287ae,// 190 PAY 151 

    0xd7bd47ab,// 191 PAY 152 

    0x4638ceb0,// 192 PAY 153 

    0x128278b4,// 193 PAY 154 

    0xe3f9048d,// 194 PAY 155 

    0x46789858,// 195 PAY 156 

    0xae62f628,// 196 PAY 157 

    0xe0c4da65,// 197 PAY 158 

    0x3e777ad4,// 198 PAY 159 

    0x19c0f945,// 199 PAY 160 

    0x0080a70f,// 200 PAY 161 

    0x76de0814,// 201 PAY 162 

    0xd02477ce,// 202 PAY 163 

    0x24404dd8,// 203 PAY 164 

    0x0348b361,// 204 PAY 165 

    0x5fcea812,// 205 PAY 166 

    0xed65708c,// 206 PAY 167 

    0xd149cd20,// 207 PAY 168 

    0x55679bcf,// 208 PAY 169 

    0x9443b042,// 209 PAY 170 

    0x395be7b7,// 210 PAY 171 

    0x2cff4347,// 211 PAY 172 

    0xb12f4413,// 212 PAY 173 

    0x1d62391b,// 213 PAY 174 

    0x023c884b,// 214 PAY 175 

    0x452d0a64,// 215 PAY 176 

    0x0e09985f,// 216 PAY 177 

    0x0fbd6c03,// 217 PAY 178 

    0x43dc6a9d,// 218 PAY 179 

    0x170ea0bb,// 219 PAY 180 

    0x88d3566a,// 220 PAY 181 

    0x0bfb1eb3,// 221 PAY 182 

    0x98eb758b,// 222 PAY 183 

    0xe03faa3e,// 223 PAY 184 

    0xcec43488,// 224 PAY 185 

    0xbc9e8de0,// 225 PAY 186 

    0xe85bbfb7,// 226 PAY 187 

    0x1c72b412,// 227 PAY 188 

    0x133040c4,// 228 PAY 189 

    0x7c66f642,// 229 PAY 190 

    0x75928b35,// 230 PAY 191 

    0xb8fa3d42,// 231 PAY 192 

    0x6d15c4e4,// 232 PAY 193 

    0x65136da3,// 233 PAY 194 

    0x342e0380,// 234 PAY 195 

    0xc97c56ec,// 235 PAY 196 

    0x98412435,// 236 PAY 197 

    0x7a77c477,// 237 PAY 198 

    0x22ca98f8,// 238 PAY 199 

    0x731d080e,// 239 PAY 200 

    0xb503fd55,// 240 PAY 201 

    0xf4563b6c,// 241 PAY 202 

    0x5a7659c1,// 242 PAY 203 

    0xa2fca8f9,// 243 PAY 204 

    0x0ffde924,// 244 PAY 205 

    0x390c755e,// 245 PAY 206 

    0xdd8d0946,// 246 PAY 207 

    0xf8fdf425,// 247 PAY 208 

    0x86e1276e,// 248 PAY 209 

    0x9621c6e3,// 249 PAY 210 

    0x7a62dc66,// 250 PAY 211 

    0xa4140d0e,// 251 PAY 212 

    0x1348e101,// 252 PAY 213 

    0xb6fce2d0,// 253 PAY 214 

    0xb0fcfc29,// 254 PAY 215 

    0xef1aa321,// 255 PAY 216 

    0x8286c34c,// 256 PAY 217 

    0x76af8167,// 257 PAY 218 

    0x4056f1f8,// 258 PAY 219 

    0x3950e849,// 259 PAY 220 

    0x0a03ec7f,// 260 PAY 221 

    0x089caba4,// 261 PAY 222 

    0x1b294921,// 262 PAY 223 

    0xe315a485,// 263 PAY 224 

    0x17905273,// 264 PAY 225 

    0x37cc4da8,// 265 PAY 226 

    0x3836f389,// 266 PAY 227 

    0xb7146700,// 267 PAY 228 

    0x44e7afc8,// 268 PAY 229 

    0x5df16b6f,// 269 PAY 230 

    0x1566e156,// 270 PAY 231 

    0x0309f79e,// 271 PAY 232 

    0xf567cefd,// 272 PAY 233 

    0xdcee7c8c,// 273 PAY 234 

    0x3189fef4,// 274 PAY 235 

    0x02faf92b,// 275 PAY 236 

    0x91a6d600,// 276 PAY 237 

    0x10dfed4e,// 277 PAY 238 

    0x230cdee3,// 278 PAY 239 

    0x0f9886d4,// 279 PAY 240 

    0x9486bdca,// 280 PAY 241 

    0x5720afb2,// 281 PAY 242 

    0xd9f4cb0f,// 282 PAY 243 

    0xfe5dd438,// 283 PAY 244 

    0x0ec7cbc5,// 284 PAY 245 

    0x053ee180,// 285 PAY 246 

    0x2f07496b,// 286 PAY 247 

    0xc812148d,// 287 PAY 248 

    0xe4ddbf7e,// 288 PAY 249 

    0x795ba4d2,// 289 PAY 250 

    0x753a2ca5,// 290 PAY 251 

    0xc862b71c,// 291 PAY 252 

    0x8fb0f614,// 292 PAY 253 

    0x558aaf9a,// 293 PAY 254 

    0x73c41ff3,// 294 PAY 255 

    0x6370fe7d,// 295 PAY 256 

    0xe949ef96,// 296 PAY 257 

    0x78705d82,// 297 PAY 258 

    0x93e5daa4,// 298 PAY 259 

    0xd0eda3ed,// 299 PAY 260 

    0xe4ed34d6,// 300 PAY 261 

    0xce94c044,// 301 PAY 262 

    0x5f5567db,// 302 PAY 263 

    0x0668f162,// 303 PAY 264 

    0x4832501c,// 304 PAY 265 

    0x505839c5,// 305 PAY 266 

    0xf79c1109,// 306 PAY 267 

    0xe0175a1e,// 307 PAY 268 

    0xc6ee369d,// 308 PAY 269 

    0x95ad2d49,// 309 PAY 270 

    0xbe405f9c,// 310 PAY 271 

    0x74edb043,// 311 PAY 272 

    0xc7f244d8,// 312 PAY 273 

    0x5e8f04ff,// 313 PAY 274 

    0x5791db54,// 314 PAY 275 

    0xdb4a8468,// 315 PAY 276 

    0x3829c2bf,// 316 PAY 277 

    0x853976a0,// 317 PAY 278 

    0x56e7a466,// 318 PAY 279 

    0x86dc4fdf,// 319 PAY 280 

    0x6530669d,// 320 PAY 281 

    0x73ff6d86,// 321 PAY 282 

    0x11c2e020,// 322 PAY 283 

    0x2df8edb8,// 323 PAY 284 

    0x3a2aab2e,// 324 PAY 285 

    0xd3ab356b,// 325 PAY 286 

    0xfc49e3e7,// 326 PAY 287 

    0x1992fa4b,// 327 PAY 288 

    0x0aee296b,// 328 PAY 289 

    0x43a03ed8,// 329 PAY 290 

    0x2008ad64,// 330 PAY 291 

    0xe42fde82,// 331 PAY 292 

    0x6f6789fe,// 332 PAY 293 

    0xeb5882ec,// 333 PAY 294 

    0x627a03af,// 334 PAY 295 

    0x211c0d99,// 335 PAY 296 

    0x2ce1e3a9,// 336 PAY 297 

    0x03f2cd9c,// 337 PAY 298 

    0xe7205e64,// 338 PAY 299 

    0x25336ac9,// 339 PAY 300 

    0x30dc372c,// 340 PAY 301 

    0x5833e5f7,// 341 PAY 302 

    0xe2c478e6,// 342 PAY 303 

    0x62f3b20a,// 343 PAY 304 

    0xc4bb28b6,// 344 PAY 305 

    0x71d09764,// 345 PAY 306 

    0xfebdab4e,// 346 PAY 307 

    0x3a7ebe23,// 347 PAY 308 

    0x09a49319,// 348 PAY 309 

    0x950d9067,// 349 PAY 310 

    0xa976e332,// 350 PAY 311 

    0xed3f0092,// 351 PAY 312 

    0x5daa3500,// 352 PAY 313 

    0xe2d84d4b,// 353 PAY 314 

    0x4bb47bca,// 354 PAY 315 

    0x1e2ef813,// 355 PAY 316 

    0x17f1228a,// 356 PAY 317 

    0x9dc02f2e,// 357 PAY 318 

    0x290f0c3f,// 358 PAY 319 

    0x04659c81,// 359 PAY 320 

    0x618576ef,// 360 PAY 321 

/// STA is 1 words. 

/// STA num_pkts       : 145 

/// STA pkt_idx        : 230 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x03994d91 // 361 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt26_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8061280c,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x088e0f43,// 6 SCX   4 

    0xe3fd26f4,// 7 SCX   5 

    0x21c89581,// 8 SCX   6 

    0x91e8ee3f,// 9 SCX   7 

    0x2ddebcc4,// 10 SCX   8 

    0x2ead8d11,// 11 SCX   9 

    0x0325c5e8,// 12 SCX  10 

    0x486e0243,// 13 SCX  11 

    0x2b5bdc6c,// 14 SCX  12 

    0x58c3e3e7,// 15 SCX  13 

    0xd8af0d02,// 16 SCX  14 

    0x5131b7f5,// 17 SCX  15 

    0x9655671e,// 18 SCX  16 

    0x3cf3df34,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 431 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 265 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 265 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 100 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 344 

    0x00000109,// 20 BFD   1 

    0x003c0028,// 21 BFD   2 

    0x01580028,// 22 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 25 

    0x2500d6e3,// 23 MFM   1 

    0x3515c43f,// 24 MFM   2 

    0xf8fb4d59,// 25 MFM   3 

    0xf5947e22,// 26 MFM   4 

    0x8e4c30e0,// 27 MFM   5 

    0xc0000000,// 28 MFM   6 

/// BDA is 109 words. 

/// BDA size     is 431 (0x1af) 

/// BDA id       is 0x9ed4 

    0x01af9ed4,// 29 BDA   1 

/// PAY Generic Data size   : 431 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x91cb524d,// 30 PAY   1 

    0xcc58a94e,// 31 PAY   2 

    0x24cbf6cf,// 32 PAY   3 

    0x592e44eb,// 33 PAY   4 

    0xf82ed209,// 34 PAY   5 

    0xea49eb19,// 35 PAY   6 

    0x177841a5,// 36 PAY   7 

    0xa45bedfc,// 37 PAY   8 

    0xb22db768,// 38 PAY   9 

    0x3ef59a2d,// 39 PAY  10 

    0xd8af37d5,// 40 PAY  11 

    0xa52d0ce3,// 41 PAY  12 

    0x08527a93,// 42 PAY  13 

    0x2073b8c8,// 43 PAY  14 

    0x644f9464,// 44 PAY  15 

    0x7a1bd9ea,// 45 PAY  16 

    0xdcd6dcff,// 46 PAY  17 

    0x445c5eb7,// 47 PAY  18 

    0x6b2465fe,// 48 PAY  19 

    0x93e86d65,// 49 PAY  20 

    0x89b6ae68,// 50 PAY  21 

    0x1586a3cf,// 51 PAY  22 

    0xa72d8dc8,// 52 PAY  23 

    0xd1085c8c,// 53 PAY  24 

    0xdbffb434,// 54 PAY  25 

    0x8e8c378b,// 55 PAY  26 

    0x8b671aa0,// 56 PAY  27 

    0xcb33880a,// 57 PAY  28 

    0xff4327f4,// 58 PAY  29 

    0x9d3df710,// 59 PAY  30 

    0x9354f1c1,// 60 PAY  31 

    0x382bf611,// 61 PAY  32 

    0x21dc8b2b,// 62 PAY  33 

    0x6a73bc09,// 63 PAY  34 

    0x3eae9d06,// 64 PAY  35 

    0x9316af64,// 65 PAY  36 

    0xc4e18e1a,// 66 PAY  37 

    0xf49aea38,// 67 PAY  38 

    0x0b9868d7,// 68 PAY  39 

    0x05a9a0d7,// 69 PAY  40 

    0xe3e1fb86,// 70 PAY  41 

    0xd8343454,// 71 PAY  42 

    0xa000e436,// 72 PAY  43 

    0x3b3bdf14,// 73 PAY  44 

    0xed05ead4,// 74 PAY  45 

    0x4b027c29,// 75 PAY  46 

    0x38ee210b,// 76 PAY  47 

    0x2e91cd5f,// 77 PAY  48 

    0xf43b74e4,// 78 PAY  49 

    0x696d8afd,// 79 PAY  50 

    0x4f4f6e5f,// 80 PAY  51 

    0x4396cbc1,// 81 PAY  52 

    0xef24f167,// 82 PAY  53 

    0x8991652e,// 83 PAY  54 

    0x65ceb360,// 84 PAY  55 

    0xa4a0770e,// 85 PAY  56 

    0xe50403f0,// 86 PAY  57 

    0xd4558315,// 87 PAY  58 

    0xc4583d3d,// 88 PAY  59 

    0x6ef38285,// 89 PAY  60 

    0xab2722b3,// 90 PAY  61 

    0xb29022ea,// 91 PAY  62 

    0xacebedbd,// 92 PAY  63 

    0x1aa7c2c1,// 93 PAY  64 

    0x8b4b55ee,// 94 PAY  65 

    0x4cfb8727,// 95 PAY  66 

    0x84da03cb,// 96 PAY  67 

    0xe5828565,// 97 PAY  68 

    0x831a7850,// 98 PAY  69 

    0x3b47a2a6,// 99 PAY  70 

    0x54766f96,// 100 PAY  71 

    0x5fd7898c,// 101 PAY  72 

    0x7ef58e24,// 102 PAY  73 

    0x5a2f1ed3,// 103 PAY  74 

    0x7386f35c,// 104 PAY  75 

    0x3dfcb22a,// 105 PAY  76 

    0x4986d726,// 106 PAY  77 

    0x92eafc60,// 107 PAY  78 

    0xdbafe7f4,// 108 PAY  79 

    0xd69c8066,// 109 PAY  80 

    0x67215cd5,// 110 PAY  81 

    0x798d6f58,// 111 PAY  82 

    0xbc472451,// 112 PAY  83 

    0x2c4a8bd6,// 113 PAY  84 

    0xc8d07247,// 114 PAY  85 

    0xe1d4acf8,// 115 PAY  86 

    0x53e41342,// 116 PAY  87 

    0x66918d03,// 117 PAY  88 

    0x9a3ed195,// 118 PAY  89 

    0x8e48faf8,// 119 PAY  90 

    0x69d4762a,// 120 PAY  91 

    0x422184da,// 121 PAY  92 

    0x8f1a3eb3,// 122 PAY  93 

    0x2722c683,// 123 PAY  94 

    0x61f01701,// 124 PAY  95 

    0x2100ba74,// 125 PAY  96 

    0x01f7ebfd,// 126 PAY  97 

    0x3e2f12af,// 127 PAY  98 

    0x7e048828,// 128 PAY  99 

    0x35b7935d,// 129 PAY 100 

    0x08b82bac,// 130 PAY 101 

    0xb49bb4d1,// 131 PAY 102 

    0x6379dfb8,// 132 PAY 103 

    0xfd55d600,// 133 PAY 104 

    0xc9d995cf,// 134 PAY 105 

    0x71d31730,// 135 PAY 106 

    0x7c848e1d,// 136 PAY 107 

    0x3b598b00,// 137 PAY 108 

/// STA is 1 words. 

/// STA num_pkts       : 14 

/// STA pkt_idx        : 249 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc8 

    0x03e4c80e // 138 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt27_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806528b1,// 4 SCX   2 

    0x000033c2,// 5 SCX   3 

    0x6d37041a,// 6 SCX   4 

    0x0fa72df2,// 7 SCX   5 

    0x5cf699eb,// 8 SCX   6 

    0x2d268707,// 9 SCX   7 

    0x06bd6d64,// 10 SCX   8 

    0xb319e891,// 11 SCX   9 

    0xe593196d,// 12 SCX  10 

    0x5a45ec5f,// 13 SCX  11 

    0xbafd7ce6,// 14 SCX  12 

    0x33400fe7,// 15 SCX  13 

    0xa948f2af,// 16 SCX  14 

    0xe2c0d4bd,// 17 SCX  15 

    0x87a426f2,// 18 SCX  16 

    0x23bc689e,// 19 SCX  17 

    0x681cda68,// 20 SCX  18 

    0x0f4dcef0,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1554 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1289 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1289 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 1160 

/// BFD (ofst+len)cry  : 1272 

/// BFD ofstiv         : 356 

/// BFD ofsticv        : 1488 

    0x00000509,// 22 BFD   1 

    0x04880070,// 23 BFD   2 

    0x05d00164,// 24 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 18 

    0x1800d5b3,// 25 MFM   1 

    0x6870e20f,// 26 MFM   2 

    0x03ed5c23,// 27 MFM   3 

    0x5a110000,// 28 MFM   4 

/// BDA is 390 words. 

/// BDA size     is 1554 (0x612) 

/// BDA id       is 0x601b 

    0x0612601b,// 29 BDA   1 

/// PAY Generic Data size   : 1554 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa57d737d,// 30 PAY   1 

    0x01302fe7,// 31 PAY   2 

    0xcc121e3b,// 32 PAY   3 

    0x87091841,// 33 PAY   4 

    0x7242d89f,// 34 PAY   5 

    0x5a288f0c,// 35 PAY   6 

    0xa47fdff5,// 36 PAY   7 

    0x56639dbe,// 37 PAY   8 

    0x1b357158,// 38 PAY   9 

    0x3ce07c3a,// 39 PAY  10 

    0x96e297f4,// 40 PAY  11 

    0xb9820cfd,// 41 PAY  12 

    0x3e01059d,// 42 PAY  13 

    0x53361fdc,// 43 PAY  14 

    0x67cb1a5f,// 44 PAY  15 

    0xb05a5d67,// 45 PAY  16 

    0x09405e9c,// 46 PAY  17 

    0x78192904,// 47 PAY  18 

    0x6b24762d,// 48 PAY  19 

    0x477ce8c9,// 49 PAY  20 

    0xe9dc6b6f,// 50 PAY  21 

    0xfbe18a6f,// 51 PAY  22 

    0xbaad6b80,// 52 PAY  23 

    0x185b715b,// 53 PAY  24 

    0x71807f30,// 54 PAY  25 

    0x89c42d3e,// 55 PAY  26 

    0xe3fb553a,// 56 PAY  27 

    0x7aca9c59,// 57 PAY  28 

    0xbc13885e,// 58 PAY  29 

    0x0dc7c515,// 59 PAY  30 

    0x330f1501,// 60 PAY  31 

    0x5a8f8dfc,// 61 PAY  32 

    0x0bfa3aed,// 62 PAY  33 

    0x2f311227,// 63 PAY  34 

    0x7d596f70,// 64 PAY  35 

    0xc110326c,// 65 PAY  36 

    0x589c933d,// 66 PAY  37 

    0xb41eb0a1,// 67 PAY  38 

    0x15a50847,// 68 PAY  39 

    0x7a6d776f,// 69 PAY  40 

    0xb9712836,// 70 PAY  41 

    0xc403ab5d,// 71 PAY  42 

    0x77310bbe,// 72 PAY  43 

    0x49257e3b,// 73 PAY  44 

    0xf80a5bc5,// 74 PAY  45 

    0xf5a8c967,// 75 PAY  46 

    0x8afcfd89,// 76 PAY  47 

    0xa4728d07,// 77 PAY  48 

    0x383d57f3,// 78 PAY  49 

    0x765946c3,// 79 PAY  50 

    0xbeb51b4f,// 80 PAY  51 

    0xc998ac49,// 81 PAY  52 

    0x172903b9,// 82 PAY  53 

    0x67dd3da8,// 83 PAY  54 

    0xa7542968,// 84 PAY  55 

    0x91aff946,// 85 PAY  56 

    0x88b0ae56,// 86 PAY  57 

    0x96ddaef9,// 87 PAY  58 

    0x9378d248,// 88 PAY  59 

    0xb91992a8,// 89 PAY  60 

    0x10b366b5,// 90 PAY  61 

    0xb4325802,// 91 PAY  62 

    0xe5348fa5,// 92 PAY  63 

    0x710ed7d0,// 93 PAY  64 

    0xb07ee624,// 94 PAY  65 

    0x4e46caf1,// 95 PAY  66 

    0x35452fdb,// 96 PAY  67 

    0xae2bc2dc,// 97 PAY  68 

    0xff4a493a,// 98 PAY  69 

    0xcb4678bb,// 99 PAY  70 

    0xf74e25fd,// 100 PAY  71 

    0x577b6633,// 101 PAY  72 

    0x5d405d3f,// 102 PAY  73 

    0xf47d5bb9,// 103 PAY  74 

    0x3152ef9a,// 104 PAY  75 

    0x768181b4,// 105 PAY  76 

    0x0bff2877,// 106 PAY  77 

    0x03478903,// 107 PAY  78 

    0xc75d15cf,// 108 PAY  79 

    0x24bad10c,// 109 PAY  80 

    0xd5d0ab45,// 110 PAY  81 

    0xb8ab37ff,// 111 PAY  82 

    0x49bd7ed0,// 112 PAY  83 

    0xb0f8e685,// 113 PAY  84 

    0x54099f91,// 114 PAY  85 

    0x65ada0d0,// 115 PAY  86 

    0x6b151460,// 116 PAY  87 

    0x88059661,// 117 PAY  88 

    0x733560d1,// 118 PAY  89 

    0xae67dc6f,// 119 PAY  90 

    0xf07c56a6,// 120 PAY  91 

    0xc08fc5a1,// 121 PAY  92 

    0x1417515e,// 122 PAY  93 

    0xb7feec1b,// 123 PAY  94 

    0xebbf2996,// 124 PAY  95 

    0x99c9ea6a,// 125 PAY  96 

    0x3188399c,// 126 PAY  97 

    0xc38d12dc,// 127 PAY  98 

    0xba485b91,// 128 PAY  99 

    0x0259d4a0,// 129 PAY 100 

    0x77eebae2,// 130 PAY 101 

    0xcb7b6316,// 131 PAY 102 

    0x2beac27e,// 132 PAY 103 

    0xad5d5ef6,// 133 PAY 104 

    0x59dc9588,// 134 PAY 105 

    0xd3206589,// 135 PAY 106 

    0x42a5ee23,// 136 PAY 107 

    0x8b2f5423,// 137 PAY 108 

    0x3d00d0d7,// 138 PAY 109 

    0x63bfcf39,// 139 PAY 110 

    0xb9d40d86,// 140 PAY 111 

    0x0b97dbe3,// 141 PAY 112 

    0x3775585d,// 142 PAY 113 

    0xd465d292,// 143 PAY 114 

    0x5fe82a12,// 144 PAY 115 

    0x057ece70,// 145 PAY 116 

    0x0f8ef99c,// 146 PAY 117 

    0x197ff913,// 147 PAY 118 

    0x48cdc151,// 148 PAY 119 

    0x88d01b9e,// 149 PAY 120 

    0x8a853f9e,// 150 PAY 121 

    0xe278d1ad,// 151 PAY 122 

    0xc2a7b8b4,// 152 PAY 123 

    0xb82d2b82,// 153 PAY 124 

    0x9e4b56e1,// 154 PAY 125 

    0x97841017,// 155 PAY 126 

    0x2081fe67,// 156 PAY 127 

    0xeac125a5,// 157 PAY 128 

    0xd102170a,// 158 PAY 129 

    0x79563095,// 159 PAY 130 

    0x7cd41db1,// 160 PAY 131 

    0x1f62e5e3,// 161 PAY 132 

    0xd272644d,// 162 PAY 133 

    0x3232000d,// 163 PAY 134 

    0xbd30db2b,// 164 PAY 135 

    0x89dbb70e,// 165 PAY 136 

    0x8950aa89,// 166 PAY 137 

    0xd564a8c9,// 167 PAY 138 

    0x3c01cc3b,// 168 PAY 139 

    0x5f271e3a,// 169 PAY 140 

    0x6a11cca9,// 170 PAY 141 

    0x2cd1fddc,// 171 PAY 142 

    0x2326774f,// 172 PAY 143 

    0x940b6a2a,// 173 PAY 144 

    0xbd848ee6,// 174 PAY 145 

    0x53f38aca,// 175 PAY 146 

    0x30e849ef,// 176 PAY 147 

    0x2541a435,// 177 PAY 148 

    0xd3b16b02,// 178 PAY 149 

    0xe66a512d,// 179 PAY 150 

    0x1150280a,// 180 PAY 151 

    0xb24a8bd0,// 181 PAY 152 

    0x552c9cea,// 182 PAY 153 

    0x0c15b879,// 183 PAY 154 

    0x744112bb,// 184 PAY 155 

    0x70dad1b9,// 185 PAY 156 

    0x8169dd62,// 186 PAY 157 

    0x9734f44a,// 187 PAY 158 

    0xc0b885de,// 188 PAY 159 

    0x89f7e2b8,// 189 PAY 160 

    0x14edc88d,// 190 PAY 161 

    0x4786ec3f,// 191 PAY 162 

    0xd2d8bb14,// 192 PAY 163 

    0xda1c82bc,// 193 PAY 164 

    0x3d16deb6,// 194 PAY 165 

    0xd177ae74,// 195 PAY 166 

    0x47db56c5,// 196 PAY 167 

    0x0ee470bc,// 197 PAY 168 

    0x4cf9a364,// 198 PAY 169 

    0xa8e39c34,// 199 PAY 170 

    0xea33485f,// 200 PAY 171 

    0x7ecd35b6,// 201 PAY 172 

    0xa6aaf191,// 202 PAY 173 

    0x05c6fba1,// 203 PAY 174 

    0x57bb6ce0,// 204 PAY 175 

    0x9a33be40,// 205 PAY 176 

    0xdd219c97,// 206 PAY 177 

    0x236308d8,// 207 PAY 178 

    0x09e5854b,// 208 PAY 179 

    0x81f895c4,// 209 PAY 180 

    0x46cf58c2,// 210 PAY 181 

    0x31a8440e,// 211 PAY 182 

    0x467be644,// 212 PAY 183 

    0xe0c4e5f9,// 213 PAY 184 

    0x725de6cd,// 214 PAY 185 

    0x570a6804,// 215 PAY 186 

    0x50c727ed,// 216 PAY 187 

    0xdf55edc3,// 217 PAY 188 

    0x5bc22aa2,// 218 PAY 189 

    0x46a7c7b8,// 219 PAY 190 

    0x9fc750e0,// 220 PAY 191 

    0xafac88d5,// 221 PAY 192 

    0x3bd6e73f,// 222 PAY 193 

    0xa6a171c9,// 223 PAY 194 

    0x69872811,// 224 PAY 195 

    0x8cdd8892,// 225 PAY 196 

    0xf878d851,// 226 PAY 197 

    0x777b0808,// 227 PAY 198 

    0x4719896e,// 228 PAY 199 

    0x5bda652b,// 229 PAY 200 

    0x30fd72cb,// 230 PAY 201 

    0xfc03431c,// 231 PAY 202 

    0xde6eafe3,// 232 PAY 203 

    0x3b914c6c,// 233 PAY 204 

    0xa3ffe7c3,// 234 PAY 205 

    0xfa74bf16,// 235 PAY 206 

    0x9a28d113,// 236 PAY 207 

    0xd8f72409,// 237 PAY 208 

    0x4e701c1b,// 238 PAY 209 

    0x895a330f,// 239 PAY 210 

    0xca135905,// 240 PAY 211 

    0x2e391d17,// 241 PAY 212 

    0x9ed43e10,// 242 PAY 213 

    0x90fe5a8e,// 243 PAY 214 

    0x90916b5b,// 244 PAY 215 

    0x27607a13,// 245 PAY 216 

    0x42b550c8,// 246 PAY 217 

    0x131276f6,// 247 PAY 218 

    0x915c7000,// 248 PAY 219 

    0xde716093,// 249 PAY 220 

    0x956c6486,// 250 PAY 221 

    0x7b5bb622,// 251 PAY 222 

    0x8dc8c867,// 252 PAY 223 

    0x622ca148,// 253 PAY 224 

    0x557a722f,// 254 PAY 225 

    0xf4ad73e4,// 255 PAY 226 

    0x2fbcc474,// 256 PAY 227 

    0x55cdf18a,// 257 PAY 228 

    0x40d3f621,// 258 PAY 229 

    0x83927759,// 259 PAY 230 

    0x84e34236,// 260 PAY 231 

    0xbbb44a59,// 261 PAY 232 

    0x34711730,// 262 PAY 233 

    0x1984e46f,// 263 PAY 234 

    0x875000fe,// 264 PAY 235 

    0x1f794ba6,// 265 PAY 236 

    0x9d9d8b4f,// 266 PAY 237 

    0x8f5b108b,// 267 PAY 238 

    0x2e186ae6,// 268 PAY 239 

    0x1f12a9c8,// 269 PAY 240 

    0x91a3304b,// 270 PAY 241 

    0xf1b89059,// 271 PAY 242 

    0x3b4576f2,// 272 PAY 243 

    0x16c60bb5,// 273 PAY 244 

    0xd7d9db3d,// 274 PAY 245 

    0x56cf73be,// 275 PAY 246 

    0x06056187,// 276 PAY 247 

    0x5d37b2ba,// 277 PAY 248 

    0xaa2093da,// 278 PAY 249 

    0xc61be865,// 279 PAY 250 

    0x1ffc1ffd,// 280 PAY 251 

    0x3c5b3490,// 281 PAY 252 

    0x2dd27c45,// 282 PAY 253 

    0x75a5a69a,// 283 PAY 254 

    0x3548a09f,// 284 PAY 255 

    0x4d6e6f1b,// 285 PAY 256 

    0x1bb5bfac,// 286 PAY 257 

    0xbeafa63d,// 287 PAY 258 

    0x08beddd1,// 288 PAY 259 

    0x329c5a65,// 289 PAY 260 

    0x802473f5,// 290 PAY 261 

    0x68490a6d,// 291 PAY 262 

    0xcfd04eac,// 292 PAY 263 

    0x19b85990,// 293 PAY 264 

    0x4f6d8089,// 294 PAY 265 

    0x80e288de,// 295 PAY 266 

    0xda0b3f9d,// 296 PAY 267 

    0xa08166e5,// 297 PAY 268 

    0x40ce50ac,// 298 PAY 269 

    0xb0c98a92,// 299 PAY 270 

    0xfc86fe57,// 300 PAY 271 

    0x6c5ae172,// 301 PAY 272 

    0xca639282,// 302 PAY 273 

    0xa2bdd619,// 303 PAY 274 

    0x9787d949,// 304 PAY 275 

    0x3dedde60,// 305 PAY 276 

    0x02da1947,// 306 PAY 277 

    0x4cf46865,// 307 PAY 278 

    0x6bc8c807,// 308 PAY 279 

    0xbbf4dedd,// 309 PAY 280 

    0x31046391,// 310 PAY 281 

    0x4b48e8d0,// 311 PAY 282 

    0x6588828a,// 312 PAY 283 

    0xdc565a15,// 313 PAY 284 

    0x92990dc5,// 314 PAY 285 

    0x3cb3f40b,// 315 PAY 286 

    0x41f66e05,// 316 PAY 287 

    0xe7171cc5,// 317 PAY 288 

    0x619a9d57,// 318 PAY 289 

    0x78fbe60d,// 319 PAY 290 

    0xb6d2be08,// 320 PAY 291 

    0x2b47b019,// 321 PAY 292 

    0x16be38c9,// 322 PAY 293 

    0xf03bc228,// 323 PAY 294 

    0x69a9db6f,// 324 PAY 295 

    0x2d315f76,// 325 PAY 296 

    0x01811750,// 326 PAY 297 

    0xfdf7a521,// 327 PAY 298 

    0xb75fa8a8,// 328 PAY 299 

    0x43c6fc54,// 329 PAY 300 

    0xd8181bb8,// 330 PAY 301 

    0x04795907,// 331 PAY 302 

    0xf5323184,// 332 PAY 303 

    0x77c13a93,// 333 PAY 304 

    0x914e1ad9,// 334 PAY 305 

    0xd44d4c39,// 335 PAY 306 

    0x01329270,// 336 PAY 307 

    0x48ec7b8c,// 337 PAY 308 

    0xdc64c716,// 338 PAY 309 

    0x9b6214c6,// 339 PAY 310 

    0xf177f12d,// 340 PAY 311 

    0xbf558953,// 341 PAY 312 

    0x100d56b1,// 342 PAY 313 

    0xbb13e77a,// 343 PAY 314 

    0xcc72a909,// 344 PAY 315 

    0xf3b6d850,// 345 PAY 316 

    0x10a19d10,// 346 PAY 317 

    0x850651dd,// 347 PAY 318 

    0xaa7686f9,// 348 PAY 319 

    0x1cb518e7,// 349 PAY 320 

    0x89455af8,// 350 PAY 321 

    0x8aa746d6,// 351 PAY 322 

    0x725d680e,// 352 PAY 323 

    0x978116d2,// 353 PAY 324 

    0x277f33ce,// 354 PAY 325 

    0x8ab42368,// 355 PAY 326 

    0x2f7b3014,// 356 PAY 327 

    0xde08fc9f,// 357 PAY 328 

    0x244cd3b5,// 358 PAY 329 

    0x354c4f12,// 359 PAY 330 

    0x7a5aff0f,// 360 PAY 331 

    0x2eb3b45e,// 361 PAY 332 

    0xac89c311,// 362 PAY 333 

    0xee2607ec,// 363 PAY 334 

    0x4d17101c,// 364 PAY 335 

    0x40cab3b6,// 365 PAY 336 

    0xb91cdb5a,// 366 PAY 337 

    0x98e7d4e5,// 367 PAY 338 

    0xc62fe91b,// 368 PAY 339 

    0x5591d25b,// 369 PAY 340 

    0xdff0564c,// 370 PAY 341 

    0xe9660d0e,// 371 PAY 342 

    0x82381b3a,// 372 PAY 343 

    0xc0cf0237,// 373 PAY 344 

    0x07ec3a74,// 374 PAY 345 

    0x445feb55,// 375 PAY 346 

    0xe2a0eb1d,// 376 PAY 347 

    0xdbd3ccf2,// 377 PAY 348 

    0x037385ed,// 378 PAY 349 

    0x934ee0dc,// 379 PAY 350 

    0x6991a2ca,// 380 PAY 351 

    0x006cc4e8,// 381 PAY 352 

    0x832d4fa6,// 382 PAY 353 

    0xf4748cea,// 383 PAY 354 

    0x69d6dc2b,// 384 PAY 355 

    0x653b4862,// 385 PAY 356 

    0x4bf70f13,// 386 PAY 357 

    0xc924dbdb,// 387 PAY 358 

    0xdc0c25e6,// 388 PAY 359 

    0x2a55cbcc,// 389 PAY 360 

    0x03a7b78e,// 390 PAY 361 

    0x50e9d0be,// 391 PAY 362 

    0x1a027991,// 392 PAY 363 

    0x1d917b5f,// 393 PAY 364 

    0xcf3f741c,// 394 PAY 365 

    0xc1fc9fc5,// 395 PAY 366 

    0x0eafe0b0,// 396 PAY 367 

    0x3a9c11f8,// 397 PAY 368 

    0x1e4170b3,// 398 PAY 369 

    0xda49db9a,// 399 PAY 370 

    0x28ce0f61,// 400 PAY 371 

    0xc68353d0,// 401 PAY 372 

    0x5e0daba7,// 402 PAY 373 

    0xd31a43ee,// 403 PAY 374 

    0x261becf9,// 404 PAY 375 

    0x649fe8f6,// 405 PAY 376 

    0x140aa172,// 406 PAY 377 

    0xcbb926da,// 407 PAY 378 

    0xd97a1927,// 408 PAY 379 

    0xca305cd4,// 409 PAY 380 

    0x13ece921,// 410 PAY 381 

    0x3ba55c2a,// 411 PAY 382 

    0xf6b27d73,// 412 PAY 383 

    0xdc82a765,// 413 PAY 384 

    0xd1300ed7,// 414 PAY 385 

    0xbcc133e1,// 415 PAY 386 

    0xc1c7a7e4,// 416 PAY 387 

    0x15480f00,// 417 PAY 388 

    0x80ba0000,// 418 PAY 389 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc1 

    0x03f8c1d6 // 419 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt28_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8060287b,// 4 SCX   2 

    0x00003400,// 5 SCX   3 

    0xa5af314d,// 6 SCX   4 

    0x2249d787,// 7 SCX   5 

    0x63298fd8,// 8 SCX   6 

    0xd8dc7a5b,// 9 SCX   7 

    0x27f1780c,// 10 SCX   8 

    0x70bfbfd8,// 11 SCX   9 

    0x45de8e14,// 12 SCX  10 

    0x724fc48f,// 13 SCX  11 

    0x6a1d731e,// 14 SCX  12 

    0x1a4e5cab,// 15 SCX  13 

    0x186b0353,// 16 SCX  14 

    0x4e7acf2b,// 17 SCX  15 

    0xaf3de64a,// 18 SCX  16 

    0x8e2aa9a1,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1021 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 578 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 578 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 192 

/// BFD (ofst+len)cry  : 304 

/// BFD ofstiv         : 168 

/// BFD ofsticv        : 848 

    0x00000242,// 20 BFD   1 

    0x00c00070,// 21 BFD   2 

    0x035000a8,// 22 BFD   3 

/// MFM is 15 words. 

/// MFM vldnibs        : 6e 

    0x6e007c8a,// 23 MFM   1 

    0x4779b0e9,// 24 MFM   2 

    0x657cfed4,// 25 MFM   3 

    0xfd1fe0b1,// 26 MFM   4 

    0x9b2dfbaf,// 27 MFM   5 

    0x0c343e15,// 28 MFM   6 

    0xf96a9b1b,// 29 MFM   7 

    0x7288844b,// 30 MFM   8 

    0xdff44671,// 31 MFM   9 

    0x082249ae,// 32 MFM  10 

    0x728ca4d8,// 33 MFM  11 

    0x9c1af03f,// 34 MFM  12 

    0xa1245f48,// 35 MFM  13 

    0x0330ee1b,// 36 MFM  14 

    0xd5000000,// 37 MFM  15 

/// BDA is 257 words. 

/// BDA size     is 1021 (0x3fd) 

/// BDA id       is 0x24a3 

    0x03fd24a3,// 38 BDA   1 

/// PAY Generic Data size   : 1021 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xc32ee435,// 39 PAY   1 

    0x8d2acb39,// 40 PAY   2 

    0x5692b5d9,// 41 PAY   3 

    0x8273505a,// 42 PAY   4 

    0x0aa4bf83,// 43 PAY   5 

    0x873264f7,// 44 PAY   6 

    0xeb1eecf2,// 45 PAY   7 

    0xcdb23c37,// 46 PAY   8 

    0xc2992c03,// 47 PAY   9 

    0x52037d28,// 48 PAY  10 

    0x25a07776,// 49 PAY  11 

    0xa028d155,// 50 PAY  12 

    0x1f82399d,// 51 PAY  13 

    0x982f342a,// 52 PAY  14 

    0xba992a9e,// 53 PAY  15 

    0x051cfec0,// 54 PAY  16 

    0xc878113b,// 55 PAY  17 

    0x49727d3b,// 56 PAY  18 

    0xe1785fa4,// 57 PAY  19 

    0x72e93368,// 58 PAY  20 

    0xbb7fa5f0,// 59 PAY  21 

    0x3f21ce41,// 60 PAY  22 

    0xa9a3dcab,// 61 PAY  23 

    0x506eb64a,// 62 PAY  24 

    0xa7aa0dd8,// 63 PAY  25 

    0xeab594bc,// 64 PAY  26 

    0x9160f567,// 65 PAY  27 

    0xfa8face6,// 66 PAY  28 

    0x1eea097b,// 67 PAY  29 

    0x7bbc1573,// 68 PAY  30 

    0xd64f9a75,// 69 PAY  31 

    0x191bb291,// 70 PAY  32 

    0xfd0bfb7b,// 71 PAY  33 

    0x17f556c9,// 72 PAY  34 

    0xc77013bd,// 73 PAY  35 

    0xb6ffa46c,// 74 PAY  36 

    0xcc5889d2,// 75 PAY  37 

    0x32d7ec71,// 76 PAY  38 

    0xdc7b166f,// 77 PAY  39 

    0x979eb0ea,// 78 PAY  40 

    0x6910db74,// 79 PAY  41 

    0xd2f3e2ed,// 80 PAY  42 

    0x53b1464e,// 81 PAY  43 

    0xa9856a6f,// 82 PAY  44 

    0xf746f743,// 83 PAY  45 

    0x3900880c,// 84 PAY  46 

    0x11415935,// 85 PAY  47 

    0xc0f746df,// 86 PAY  48 

    0x9b9355e3,// 87 PAY  49 

    0xa92add5d,// 88 PAY  50 

    0xc38ce652,// 89 PAY  51 

    0x109eb695,// 90 PAY  52 

    0x07799c33,// 91 PAY  53 

    0x10e486e5,// 92 PAY  54 

    0x42fc687d,// 93 PAY  55 

    0x831eaf7e,// 94 PAY  56 

    0xe0364b9d,// 95 PAY  57 

    0x744b1a08,// 96 PAY  58 

    0xc61eb5e2,// 97 PAY  59 

    0xb5012f17,// 98 PAY  60 

    0xe9663ff5,// 99 PAY  61 

    0xfb3dddaf,// 100 PAY  62 

    0xf1e6df96,// 101 PAY  63 

    0xaa9bed9f,// 102 PAY  64 

    0xcf3c73b9,// 103 PAY  65 

    0x45acea87,// 104 PAY  66 

    0xe9383fd8,// 105 PAY  67 

    0x05ee673d,// 106 PAY  68 

    0x0acefa3a,// 107 PAY  69 

    0xaf5f0ba7,// 108 PAY  70 

    0x7198e91a,// 109 PAY  71 

    0xa8b612c7,// 110 PAY  72 

    0x82dd8079,// 111 PAY  73 

    0xdd67cdd7,// 112 PAY  74 

    0xd3041840,// 113 PAY  75 

    0xb7803881,// 114 PAY  76 

    0xa5f5afe8,// 115 PAY  77 

    0xb34646cb,// 116 PAY  78 

    0xb7662c7e,// 117 PAY  79 

    0xaa3c5e34,// 118 PAY  80 

    0x7f6b4b40,// 119 PAY  81 

    0xdaec2fd3,// 120 PAY  82 

    0x6456a198,// 121 PAY  83 

    0x8198852b,// 122 PAY  84 

    0x443b5b3f,// 123 PAY  85 

    0x38b37d67,// 124 PAY  86 

    0xa0f6b846,// 125 PAY  87 

    0xa376cf1a,// 126 PAY  88 

    0xc5dd71fa,// 127 PAY  89 

    0x9daee8d2,// 128 PAY  90 

    0x8bb3709b,// 129 PAY  91 

    0xf0da03d5,// 130 PAY  92 

    0xef138c40,// 131 PAY  93 

    0x4311b42e,// 132 PAY  94 

    0xcf813c61,// 133 PAY  95 

    0x832313e9,// 134 PAY  96 

    0x63afab6d,// 135 PAY  97 

    0xf4c7f629,// 136 PAY  98 

    0xc4862d82,// 137 PAY  99 

    0xa7b3a0b4,// 138 PAY 100 

    0x048017e0,// 139 PAY 101 

    0x9914fc4c,// 140 PAY 102 

    0x1999d726,// 141 PAY 103 

    0x7b3e9432,// 142 PAY 104 

    0x78ccf98f,// 143 PAY 105 

    0x5281b683,// 144 PAY 106 

    0xe5e018f0,// 145 PAY 107 

    0x96ea5ef9,// 146 PAY 108 

    0xc65edbf0,// 147 PAY 109 

    0x4b17321e,// 148 PAY 110 

    0x456a680f,// 149 PAY 111 

    0xeb82e43e,// 150 PAY 112 

    0xa1886725,// 151 PAY 113 

    0x0d63daf6,// 152 PAY 114 

    0x876bcee6,// 153 PAY 115 

    0x24bc23d3,// 154 PAY 116 

    0xf7b059b4,// 155 PAY 117 

    0x34c241c7,// 156 PAY 118 

    0x3cbdf39f,// 157 PAY 119 

    0x1b46098b,// 158 PAY 120 

    0x764726bf,// 159 PAY 121 

    0xbd129e65,// 160 PAY 122 

    0x4f455fb6,// 161 PAY 123 

    0x4833cf59,// 162 PAY 124 

    0xa242e543,// 163 PAY 125 

    0xd4012e9a,// 164 PAY 126 

    0xe414be0a,// 165 PAY 127 

    0x1b32b674,// 166 PAY 128 

    0x555bdb71,// 167 PAY 129 

    0x26c48856,// 168 PAY 130 

    0x435821da,// 169 PAY 131 

    0xa2ff2e67,// 170 PAY 132 

    0xe4ba417c,// 171 PAY 133 

    0x50eb72c5,// 172 PAY 134 

    0x5fde15c7,// 173 PAY 135 

    0x3d4b1279,// 174 PAY 136 

    0x93cedc79,// 175 PAY 137 

    0x36210f83,// 176 PAY 138 

    0xb236c79a,// 177 PAY 139 

    0x444e4606,// 178 PAY 140 

    0x7b361b78,// 179 PAY 141 

    0x66f16b0b,// 180 PAY 142 

    0x3fa0e109,// 181 PAY 143 

    0xf06a4c75,// 182 PAY 144 

    0x23d652b1,// 183 PAY 145 

    0x8cad38c9,// 184 PAY 146 

    0xaaa5ac2a,// 185 PAY 147 

    0x693c049f,// 186 PAY 148 

    0x6bb0998f,// 187 PAY 149 

    0x2416a403,// 188 PAY 150 

    0xcc45d594,// 189 PAY 151 

    0x8800da2c,// 190 PAY 152 

    0x5d292a4e,// 191 PAY 153 

    0xb4bbb3e4,// 192 PAY 154 

    0x7bfbd9d3,// 193 PAY 155 

    0x491e13f5,// 194 PAY 156 

    0xf000faa6,// 195 PAY 157 

    0x748db314,// 196 PAY 158 

    0xb78aa874,// 197 PAY 159 

    0x5d54588b,// 198 PAY 160 

    0x9680279f,// 199 PAY 161 

    0x477be0eb,// 200 PAY 162 

    0xb850c16e,// 201 PAY 163 

    0x9c7c9af5,// 202 PAY 164 

    0xbda129e4,// 203 PAY 165 

    0x50cd9771,// 204 PAY 166 

    0x0016764d,// 205 PAY 167 

    0xc2472122,// 206 PAY 168 

    0x89621328,// 207 PAY 169 

    0x8e24aed4,// 208 PAY 170 

    0xca7c324c,// 209 PAY 171 

    0x7f189795,// 210 PAY 172 

    0x5f58b822,// 211 PAY 173 

    0xca54a471,// 212 PAY 174 

    0xf30c16a7,// 213 PAY 175 

    0x2e2a264a,// 214 PAY 176 

    0x7043b09f,// 215 PAY 177 

    0x618f8560,// 216 PAY 178 

    0xc677f045,// 217 PAY 179 

    0x5c04a204,// 218 PAY 180 

    0x2540381f,// 219 PAY 181 

    0x90b552af,// 220 PAY 182 

    0xd3e56bc8,// 221 PAY 183 

    0x68275515,// 222 PAY 184 

    0x7ba22af0,// 223 PAY 185 

    0x32fa4c9e,// 224 PAY 186 

    0x77bcfd12,// 225 PAY 187 

    0xe3ac6f6b,// 226 PAY 188 

    0x2ca92b8c,// 227 PAY 189 

    0x4aba183b,// 228 PAY 190 

    0x68f99bc5,// 229 PAY 191 

    0x89b66a18,// 230 PAY 192 

    0xf4c6d27f,// 231 PAY 193 

    0x7a6554fb,// 232 PAY 194 

    0xb50d9d83,// 233 PAY 195 

    0xebec3013,// 234 PAY 196 

    0xaf9cb832,// 235 PAY 197 

    0x4d23dfed,// 236 PAY 198 

    0x195272a4,// 237 PAY 199 

    0x3a281290,// 238 PAY 200 

    0x6d5d2b95,// 239 PAY 201 

    0x7967be10,// 240 PAY 202 

    0x3c454e76,// 241 PAY 203 

    0x92527cca,// 242 PAY 204 

    0xec992af8,// 243 PAY 205 

    0x43075d32,// 244 PAY 206 

    0x7cc59548,// 245 PAY 207 

    0x18735ead,// 246 PAY 208 

    0x798bab01,// 247 PAY 209 

    0x3bff890b,// 248 PAY 210 

    0x2a766b17,// 249 PAY 211 

    0x7126a85c,// 250 PAY 212 

    0x58c27b06,// 251 PAY 213 

    0xe81c5fca,// 252 PAY 214 

    0x9274d929,// 253 PAY 215 

    0xc801213a,// 254 PAY 216 

    0x2dcf0c58,// 255 PAY 217 

    0xd0dff559,// 256 PAY 218 

    0x697f297f,// 257 PAY 219 

    0x0a5232ee,// 258 PAY 220 

    0x6bc4aa66,// 259 PAY 221 

    0x478667c3,// 260 PAY 222 

    0x4955ebe4,// 261 PAY 223 

    0xf06231d9,// 262 PAY 224 

    0x4c5c8589,// 263 PAY 225 

    0x8a5761e2,// 264 PAY 226 

    0x8fee4efb,// 265 PAY 227 

    0x0b506283,// 266 PAY 228 

    0x8b01ff65,// 267 PAY 229 

    0x819d838f,// 268 PAY 230 

    0x73abe9d9,// 269 PAY 231 

    0xda52b2a7,// 270 PAY 232 

    0x17ca0ae7,// 271 PAY 233 

    0x4865d07b,// 272 PAY 234 

    0x24b53aff,// 273 PAY 235 

    0x003e76ab,// 274 PAY 236 

    0x2b89a2df,// 275 PAY 237 

    0x3618b470,// 276 PAY 238 

    0x7d1741af,// 277 PAY 239 

    0x5508f324,// 278 PAY 240 

    0x4d93b217,// 279 PAY 241 

    0x03126563,// 280 PAY 242 

    0x63d53c5c,// 281 PAY 243 

    0xd69faa27,// 282 PAY 244 

    0x535ff50a,// 283 PAY 245 

    0x1d0f5b3f,// 284 PAY 246 

    0x024943f7,// 285 PAY 247 

    0x75c2aa81,// 286 PAY 248 

    0x2ec15bef,// 287 PAY 249 

    0x82574ce5,// 288 PAY 250 

    0xc8655fce,// 289 PAY 251 

    0x7be5553d,// 290 PAY 252 

    0xcbf1d357,// 291 PAY 253 

    0xc400021b,// 292 PAY 254 

    0x86f8a3f6,// 293 PAY 255 

    0x59000000,// 294 PAY 256 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe5 

    0x01e8e580 // 295 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt29_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x80662802,// 4 SCX   2 

    0x00006282,// 5 SCX   3 

    0x6976fa41,// 6 SCX   4 

    0xade53cb2,// 7 SCX   5 

    0x68105704,// 8 SCX   6 

    0x0bf5d9d4,// 9 SCX   7 

    0x0c3c73f3,// 10 SCX   8 

    0x3a3f7a18,// 11 SCX   9 

    0x59945a01,// 12 SCX  10 

    0xe625d74f,// 13 SCX  11 

    0x1bd3bfba,// 14 SCX  12 

    0xf725afdf,// 15 SCX  13 

    0x73ed1d77,// 16 SCX  14 

    0x08230f0b,// 17 SCX  15 

    0xc50e0cd3,// 18 SCX  16 

    0x94e2ccc2,// 19 SCX  17 

    0x63e7647f,// 20 SCX  18 

    0xbea95b62,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1463 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 971 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 971 

/// BFD lencrypto      : 88 

/// BFD ofstcrypto     : 756 

/// BFD (ofst+len)cry  : 844 

/// BFD ofstiv         : 720 

/// BFD ofsticv        : 1420 

    0x000003cb,// 22 BFD   1 

    0x02f40058,// 23 BFD   2 

    0x058c02d0,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c004c8f,// 25 MFM   1 

    0xc6ad9aa0,// 26 MFM   2 

    0x3e31f1e9,// 27 MFM   3 

    0x5a6236ad,// 28 MFM   4 

    0x094d59ff,// 29 MFM   5 

    0x40722eb7,// 30 MFM   6 

    0xb2af56e3,// 31 MFM   7 

    0xc02dc356,// 32 MFM   8 

    0x97580e39,// 33 MFM   9 

    0x28efc91c,// 34 MFM  10 

    0x20bf83ca,// 35 MFM  11 

    0xe7dd4633,// 36 MFM  12 

    0xfd88ca89,// 37 MFM  13 

    0x0d2f4891,// 38 MFM  14 

    0x18b1dc95,// 39 MFM  15 

    0x9bbfcb59,// 40 MFM  16 

/// BDA is 367 words. 

/// BDA size     is 1463 (0x5b7) 

/// BDA id       is 0x31c5 

    0x05b731c5,// 41 BDA   1 

/// PAY Generic Data size   : 1463 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4f8b40e1,// 42 PAY   1 

    0x1d65da9e,// 43 PAY   2 

    0x5306fa45,// 44 PAY   3 

    0xd20c01d9,// 45 PAY   4 

    0x37b70c49,// 46 PAY   5 

    0xa6baf927,// 47 PAY   6 

    0xb74b0b15,// 48 PAY   7 

    0x7ed7f06a,// 49 PAY   8 

    0x104b4a9b,// 50 PAY   9 

    0xd02545ae,// 51 PAY  10 

    0xb3714988,// 52 PAY  11 

    0x39f0e5c9,// 53 PAY  12 

    0xdfe92a59,// 54 PAY  13 

    0x654af32a,// 55 PAY  14 

    0x9674f2f2,// 56 PAY  15 

    0x0393647c,// 57 PAY  16 

    0xb4523744,// 58 PAY  17 

    0x083183d5,// 59 PAY  18 

    0x34e423a4,// 60 PAY  19 

    0x933a3f1f,// 61 PAY  20 

    0xcc402871,// 62 PAY  21 

    0xb7b9c88a,// 63 PAY  22 

    0x3f614c14,// 64 PAY  23 

    0x8408fcb9,// 65 PAY  24 

    0xdb600bb3,// 66 PAY  25 

    0xd3c8bd16,// 67 PAY  26 

    0xe46be464,// 68 PAY  27 

    0xd6ea03d2,// 69 PAY  28 

    0x76b0ef48,// 70 PAY  29 

    0x6ddcc8e2,// 71 PAY  30 

    0x1d2461fe,// 72 PAY  31 

    0x30a97d17,// 73 PAY  32 

    0xfac16eff,// 74 PAY  33 

    0xa90527ff,// 75 PAY  34 

    0x33b7f059,// 76 PAY  35 

    0x11ca82ad,// 77 PAY  36 

    0x1eecf4b3,// 78 PAY  37 

    0x0f86f155,// 79 PAY  38 

    0x7f72a861,// 80 PAY  39 

    0x9a27e3f5,// 81 PAY  40 

    0xdae6e14e,// 82 PAY  41 

    0x4d8508da,// 83 PAY  42 

    0xe4ed2a7a,// 84 PAY  43 

    0x1cf55ec8,// 85 PAY  44 

    0x7fb2b258,// 86 PAY  45 

    0x11ae51e9,// 87 PAY  46 

    0xd0007996,// 88 PAY  47 

    0x02a7a5b9,// 89 PAY  48 

    0xc88e4207,// 90 PAY  49 

    0x3908bbc7,// 91 PAY  50 

    0xc4ca33d6,// 92 PAY  51 

    0x415d6933,// 93 PAY  52 

    0x47f9f655,// 94 PAY  53 

    0xb07bf970,// 95 PAY  54 

    0x4b1cc118,// 96 PAY  55 

    0x8f9d7488,// 97 PAY  56 

    0xc6885a50,// 98 PAY  57 

    0x71a0fc0d,// 99 PAY  58 

    0x4f155524,// 100 PAY  59 

    0x456ceff5,// 101 PAY  60 

    0x939cf0c3,// 102 PAY  61 

    0xaf30c985,// 103 PAY  62 

    0xc95eb642,// 104 PAY  63 

    0xde251884,// 105 PAY  64 

    0x92845f61,// 106 PAY  65 

    0xc35ca720,// 107 PAY  66 

    0x7c9ca7e8,// 108 PAY  67 

    0x1e34917a,// 109 PAY  68 

    0x4e77a3b7,// 110 PAY  69 

    0x62ee2278,// 111 PAY  70 

    0x096b8a69,// 112 PAY  71 

    0xcaa4e8f9,// 113 PAY  72 

    0xb2418186,// 114 PAY  73 

    0xd579b2f1,// 115 PAY  74 

    0x2c31851f,// 116 PAY  75 

    0x12d00c66,// 117 PAY  76 

    0x23319a97,// 118 PAY  77 

    0x7e432b03,// 119 PAY  78 

    0xbe604377,// 120 PAY  79 

    0x7ab510d7,// 121 PAY  80 

    0x3f74d11c,// 122 PAY  81 

    0x0097964c,// 123 PAY  82 

    0xd59da03f,// 124 PAY  83 

    0xe8e4bfa6,// 125 PAY  84 

    0x27b92579,// 126 PAY  85 

    0x018b1ea5,// 127 PAY  86 

    0x06916f8f,// 128 PAY  87 

    0xda537b42,// 129 PAY  88 

    0x28829413,// 130 PAY  89 

    0x33061b83,// 131 PAY  90 

    0xb0e6282a,// 132 PAY  91 

    0x41d0fc28,// 133 PAY  92 

    0x55ea3aff,// 134 PAY  93 

    0x469b0701,// 135 PAY  94 

    0x243b4370,// 136 PAY  95 

    0xbe811ff6,// 137 PAY  96 

    0x4d1d8a95,// 138 PAY  97 

    0x6a662ad9,// 139 PAY  98 

    0x93dd55eb,// 140 PAY  99 

    0x560107d5,// 141 PAY 100 

    0x20995800,// 142 PAY 101 

    0xe4b601fe,// 143 PAY 102 

    0x98175199,// 144 PAY 103 

    0xa4f209a4,// 145 PAY 104 

    0x614e847c,// 146 PAY 105 

    0x2294b9e2,// 147 PAY 106 

    0xb250dfd1,// 148 PAY 107 

    0x8fe2cd49,// 149 PAY 108 

    0xc63c4a90,// 150 PAY 109 

    0x9c5a89d7,// 151 PAY 110 

    0x994b7622,// 152 PAY 111 

    0xa63bac38,// 153 PAY 112 

    0xd9de9334,// 154 PAY 113 

    0xa904c0c3,// 155 PAY 114 

    0x2003ba24,// 156 PAY 115 

    0x72e452b2,// 157 PAY 116 

    0xc7ed71cd,// 158 PAY 117 

    0x3738017a,// 159 PAY 118 

    0x488c39eb,// 160 PAY 119 

    0x37c75334,// 161 PAY 120 

    0xab2f28d2,// 162 PAY 121 

    0x48fb48fb,// 163 PAY 122 

    0xe5e55632,// 164 PAY 123 

    0x82d23804,// 165 PAY 124 

    0xf6d9f558,// 166 PAY 125 

    0x4d02e0c8,// 167 PAY 126 

    0x1d469fd1,// 168 PAY 127 

    0xc472208c,// 169 PAY 128 

    0x132278ca,// 170 PAY 129 

    0xb05166ac,// 171 PAY 130 

    0x2ae0ecc1,// 172 PAY 131 

    0x7bf7ae33,// 173 PAY 132 

    0xa2cf8326,// 174 PAY 133 

    0xdcd7e261,// 175 PAY 134 

    0x242c2df0,// 176 PAY 135 

    0xa3c66e46,// 177 PAY 136 

    0x577e2f0c,// 178 PAY 137 

    0x2fc9c54e,// 179 PAY 138 

    0xf2f4925a,// 180 PAY 139 

    0x3dc8a830,// 181 PAY 140 

    0x16f8c985,// 182 PAY 141 

    0x12fb4d90,// 183 PAY 142 

    0x2adea9fd,// 184 PAY 143 

    0xe5c171d4,// 185 PAY 144 

    0x4ca933e6,// 186 PAY 145 

    0xbb8a729d,// 187 PAY 146 

    0x13346c49,// 188 PAY 147 

    0x16733b6a,// 189 PAY 148 

    0xfd9439c4,// 190 PAY 149 

    0x778cb88a,// 191 PAY 150 

    0x14623871,// 192 PAY 151 

    0x14c0daba,// 193 PAY 152 

    0xb72ef37a,// 194 PAY 153 

    0x24ae7de6,// 195 PAY 154 

    0x00382e34,// 196 PAY 155 

    0x6c475dbe,// 197 PAY 156 

    0xad267448,// 198 PAY 157 

    0x864f6e64,// 199 PAY 158 

    0x4938f51d,// 200 PAY 159 

    0x8951f9d9,// 201 PAY 160 

    0x08c36268,// 202 PAY 161 

    0x4d96ec72,// 203 PAY 162 

    0xa7fd8e54,// 204 PAY 163 

    0x38e0c1c7,// 205 PAY 164 

    0xa00af3a7,// 206 PAY 165 

    0x2254febf,// 207 PAY 166 

    0x72267066,// 208 PAY 167 

    0x53d29d78,// 209 PAY 168 

    0x3b228e73,// 210 PAY 169 

    0xdcccc8c5,// 211 PAY 170 

    0x9c3b3cd3,// 212 PAY 171 

    0xd0214db1,// 213 PAY 172 

    0x11994723,// 214 PAY 173 

    0x5bd3b5d6,// 215 PAY 174 

    0x3ec8b269,// 216 PAY 175 

    0xcbe16cda,// 217 PAY 176 

    0x4aa07623,// 218 PAY 177 

    0xcd4682fc,// 219 PAY 178 

    0x14721f55,// 220 PAY 179 

    0x61bbfb88,// 221 PAY 180 

    0x298c97e7,// 222 PAY 181 

    0xc2bb8a0b,// 223 PAY 182 

    0xb0986a58,// 224 PAY 183 

    0x422145f2,// 225 PAY 184 

    0x4433c358,// 226 PAY 185 

    0x1bcce3d5,// 227 PAY 186 

    0xefa74849,// 228 PAY 187 

    0xb323ed99,// 229 PAY 188 

    0x8d4ed436,// 230 PAY 189 

    0x5e495506,// 231 PAY 190 

    0x9c96fcd0,// 232 PAY 191 

    0x6baace47,// 233 PAY 192 

    0xbbb695f3,// 234 PAY 193 

    0xbc41105a,// 235 PAY 194 

    0xb8d481a7,// 236 PAY 195 

    0xbd56cac4,// 237 PAY 196 

    0x5862145a,// 238 PAY 197 

    0x2277e03f,// 239 PAY 198 

    0x56dc809d,// 240 PAY 199 

    0xdffe81d3,// 241 PAY 200 

    0x1b9c586c,// 242 PAY 201 

    0x9318c262,// 243 PAY 202 

    0x1902f6ad,// 244 PAY 203 

    0x8a60c0b7,// 245 PAY 204 

    0xe758ddff,// 246 PAY 205 

    0x32d728f6,// 247 PAY 206 

    0x6164b285,// 248 PAY 207 

    0x05132040,// 249 PAY 208 

    0xfa174ff4,// 250 PAY 209 

    0x91bde2de,// 251 PAY 210 

    0x4ee66edb,// 252 PAY 211 

    0x0e30aa13,// 253 PAY 212 

    0x542bb53f,// 254 PAY 213 

    0x1f874acc,// 255 PAY 214 

    0x98089caf,// 256 PAY 215 

    0x8ae6f424,// 257 PAY 216 

    0x2b3ad38f,// 258 PAY 217 

    0x8fd07439,// 259 PAY 218 

    0x91a4b6b5,// 260 PAY 219 

    0x46490b9b,// 261 PAY 220 

    0x6710e2d1,// 262 PAY 221 

    0x2b1203a7,// 263 PAY 222 

    0xeecf633a,// 264 PAY 223 

    0xfac1311a,// 265 PAY 224 

    0x03e452a4,// 266 PAY 225 

    0x6311561b,// 267 PAY 226 

    0x3f3aa77e,// 268 PAY 227 

    0xc09be41d,// 269 PAY 228 

    0x4e77992a,// 270 PAY 229 

    0x8ecde911,// 271 PAY 230 

    0x60be04b1,// 272 PAY 231 

    0xe2bd31a0,// 273 PAY 232 

    0x1c87e278,// 274 PAY 233 

    0xcfa6e3b9,// 275 PAY 234 

    0x7bc8bc72,// 276 PAY 235 

    0x0e038cc9,// 277 PAY 236 

    0x9294ca67,// 278 PAY 237 

    0x25419164,// 279 PAY 238 

    0x89babc96,// 280 PAY 239 

    0x20e662bf,// 281 PAY 240 

    0xfd79d9ab,// 282 PAY 241 

    0x8628c252,// 283 PAY 242 

    0x20916bf9,// 284 PAY 243 

    0xfe274369,// 285 PAY 244 

    0x2ad1dd1f,// 286 PAY 245 

    0x6178d11f,// 287 PAY 246 

    0x0b6d479f,// 288 PAY 247 

    0x312e92f3,// 289 PAY 248 

    0x90124922,// 290 PAY 249 

    0xbaf82b70,// 291 PAY 250 

    0xbfb14f64,// 292 PAY 251 

    0xc3eaf093,// 293 PAY 252 

    0x2e399875,// 294 PAY 253 

    0xd876feab,// 295 PAY 254 

    0xce4c79bd,// 296 PAY 255 

    0x6f503e4d,// 297 PAY 256 

    0x564b7b24,// 298 PAY 257 

    0x0baa53ce,// 299 PAY 258 

    0xadad0818,// 300 PAY 259 

    0x3b01feeb,// 301 PAY 260 

    0x1d0192b5,// 302 PAY 261 

    0xa10c6f49,// 303 PAY 262 

    0x3a67d05f,// 304 PAY 263 

    0x65b62b43,// 305 PAY 264 

    0xdebf5738,// 306 PAY 265 

    0x9e5285c5,// 307 PAY 266 

    0x73eb350d,// 308 PAY 267 

    0x33d5ae71,// 309 PAY 268 

    0x62d489eb,// 310 PAY 269 

    0xe873bb5b,// 311 PAY 270 

    0x8d84ba27,// 312 PAY 271 

    0xe72beab2,// 313 PAY 272 

    0xfd3fe1a6,// 314 PAY 273 

    0x63ffab63,// 315 PAY 274 

    0xc9fbca15,// 316 PAY 275 

    0x4d248eec,// 317 PAY 276 

    0xa9319df3,// 318 PAY 277 

    0x26b6b359,// 319 PAY 278 

    0xdefe6e9f,// 320 PAY 279 

    0x0fc344c4,// 321 PAY 280 

    0xefcb1f17,// 322 PAY 281 

    0x37d976ae,// 323 PAY 282 

    0xbf1bd335,// 324 PAY 283 

    0x24fb2e1c,// 325 PAY 284 

    0xc420993c,// 326 PAY 285 

    0x73421364,// 327 PAY 286 

    0xe5c4cbe2,// 328 PAY 287 

    0x5d448a3f,// 329 PAY 288 

    0xea48a347,// 330 PAY 289 

    0xee5f7557,// 331 PAY 290 

    0x859dc015,// 332 PAY 291 

    0x3c3701e0,// 333 PAY 292 

    0xa75ee144,// 334 PAY 293 

    0xfec1666f,// 335 PAY 294 

    0x8c97e0cb,// 336 PAY 295 

    0x41f179f3,// 337 PAY 296 

    0x31a3f847,// 338 PAY 297 

    0x81ac6f55,// 339 PAY 298 

    0xf66936b5,// 340 PAY 299 

    0xc9f11a37,// 341 PAY 300 

    0xe476ff76,// 342 PAY 301 

    0x5de2fd1d,// 343 PAY 302 

    0x9200cfd4,// 344 PAY 303 

    0x470cdc1a,// 345 PAY 304 

    0x96cd4e84,// 346 PAY 305 

    0x8b0dba15,// 347 PAY 306 

    0x9dab3a58,// 348 PAY 307 

    0x10fd2c0d,// 349 PAY 308 

    0xb1af086e,// 350 PAY 309 

    0xb5ac9d08,// 351 PAY 310 

    0x338e5229,// 352 PAY 311 

    0xc8a95715,// 353 PAY 312 

    0xc70bb72e,// 354 PAY 313 

    0x6137a0e5,// 355 PAY 314 

    0xf1d76e3f,// 356 PAY 315 

    0x3ff384d1,// 357 PAY 316 

    0xc4282a86,// 358 PAY 317 

    0xfa97a66e,// 359 PAY 318 

    0xc9e4d52f,// 360 PAY 319 

    0xcde2c7d6,// 361 PAY 320 

    0x3825aee1,// 362 PAY 321 

    0x44d8653c,// 363 PAY 322 

    0xcaaffb51,// 364 PAY 323 

    0x6d22e808,// 365 PAY 324 

    0x9937a653,// 366 PAY 325 

    0x8f259508,// 367 PAY 326 

    0xe4fb6351,// 368 PAY 327 

    0xbf9e05da,// 369 PAY 328 

    0x0f56a1ea,// 370 PAY 329 

    0x519ecc08,// 371 PAY 330 

    0x7906adea,// 372 PAY 331 

    0x3d12bc70,// 373 PAY 332 

    0xca58886d,// 374 PAY 333 

    0x36bd466c,// 375 PAY 334 

    0xea6842c8,// 376 PAY 335 

    0x23abb37c,// 377 PAY 336 

    0x83710f02,// 378 PAY 337 

    0xde8f91b8,// 379 PAY 338 

    0xae1f2391,// 380 PAY 339 

    0x8cb028b8,// 381 PAY 340 

    0xcbcfaca3,// 382 PAY 341 

    0x5902577d,// 383 PAY 342 

    0x1c200432,// 384 PAY 343 

    0x5a35d67c,// 385 PAY 344 

    0x2de067fe,// 386 PAY 345 

    0x963efeb6,// 387 PAY 346 

    0x5a491443,// 388 PAY 347 

    0x4ee22746,// 389 PAY 348 

    0xf12563be,// 390 PAY 349 

    0x5f21d50e,// 391 PAY 350 

    0x1a83697a,// 392 PAY 351 

    0x71772c43,// 393 PAY 352 

    0x222dac4e,// 394 PAY 353 

    0x29245153,// 395 PAY 354 

    0xdb27cec1,// 396 PAY 355 

    0x9e62644b,// 397 PAY 356 

    0x5b410829,// 398 PAY 357 

    0x4470650e,// 399 PAY 358 

    0x031481f0,// 400 PAY 359 

    0x1952c600,// 401 PAY 360 

    0xa59181ba,// 402 PAY 361 

    0x7d280840,// 403 PAY 362 

    0x7396fef7,// 404 PAY 363 

    0xfaca1bc6,// 405 PAY 364 

    0x80ff6115,// 406 PAY 365 

    0xfb901800,// 407 PAY 366 

/// STA is 1 words. 

/// STA num_pkts       : 28 

/// STA pkt_idx        : 43 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x00ac6e1c // 408 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt30_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8062283e,// 4 SCX   2 

    0x00005100,// 5 SCX   3 

    0xf1164af3,// 6 SCX   4 

    0xeac5db3c,// 7 SCX   5 

    0xbe39f96e,// 8 SCX   6 

    0xe65017a5,// 9 SCX   7 

    0xbc0c8951,// 10 SCX   8 

    0xa09b5ba0,// 11 SCX   9 

    0x7c7d20df,// 12 SCX  10 

    0xab729544,// 13 SCX  11 

    0xfa0a6498,// 14 SCX  12 

    0xac76feac,// 15 SCX  13 

    0x336c033d,// 16 SCX  14 

    0x6ade1c84,// 17 SCX  15 

    0x1e1a6e47,// 18 SCX  16 

    0x99e6b271,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 542 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 206 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 206 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 84 

/// BFD (ofst+len)cry  : 100 

/// BFD ofstiv         : 28 

/// BFD ofsticv        : 460 

    0x000000ce,// 20 BFD   1 

    0x00540010,// 21 BFD   2 

    0x01cc001c,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b00e957,// 23 MFM   1 

    0x32070530,// 24 MFM   2 

/// BDA is 137 words. 

/// BDA size     is 542 (0x21e) 

/// BDA id       is 0x15c 

    0x021e015c,// 25 BDA   1 

/// PAY Generic Data size   : 542 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xd2ceba4a,// 26 PAY   1 

    0xdd45d0a8,// 27 PAY   2 

    0x3ab5efa3,// 28 PAY   3 

    0x00b79393,// 29 PAY   4 

    0x2978ea9a,// 30 PAY   5 

    0xdb5d39e2,// 31 PAY   6 

    0x602e43bc,// 32 PAY   7 

    0x36e14a0e,// 33 PAY   8 

    0x3af18044,// 34 PAY   9 

    0x028efb78,// 35 PAY  10 

    0x1603eb35,// 36 PAY  11 

    0x0ceb9214,// 37 PAY  12 

    0x50705bad,// 38 PAY  13 

    0xd38244a4,// 39 PAY  14 

    0x12a1e0ef,// 40 PAY  15 

    0x84fa8a69,// 41 PAY  16 

    0xbd5af0a6,// 42 PAY  17 

    0x64535df4,// 43 PAY  18 

    0x8cae1410,// 44 PAY  19 

    0x8a8d5a7c,// 45 PAY  20 

    0x776df535,// 46 PAY  21 

    0x4d9d808a,// 47 PAY  22 

    0x887e0ffb,// 48 PAY  23 

    0x14673789,// 49 PAY  24 

    0xc2d42b9f,// 50 PAY  25 

    0x314a1492,// 51 PAY  26 

    0x2c00f38a,// 52 PAY  27 

    0x16a96fbf,// 53 PAY  28 

    0xed418395,// 54 PAY  29 

    0x1211d079,// 55 PAY  30 

    0x5bb441db,// 56 PAY  31 

    0xbd3cd183,// 57 PAY  32 

    0x8c4be505,// 58 PAY  33 

    0x5da33c7f,// 59 PAY  34 

    0x220c7b9f,// 60 PAY  35 

    0xeab0587a,// 61 PAY  36 

    0x448178a3,// 62 PAY  37 

    0xddb1f7cc,// 63 PAY  38 

    0x953e51e5,// 64 PAY  39 

    0xb8813fe8,// 65 PAY  40 

    0x3069ad6c,// 66 PAY  41 

    0x32ac74fe,// 67 PAY  42 

    0x659c8d07,// 68 PAY  43 

    0x1fb86ff7,// 69 PAY  44 

    0x5bed8df3,// 70 PAY  45 

    0x9c869d15,// 71 PAY  46 

    0x3a2bcea4,// 72 PAY  47 

    0xb9bf262c,// 73 PAY  48 

    0x72d3626f,// 74 PAY  49 

    0x38acc4cc,// 75 PAY  50 

    0xe02ceb22,// 76 PAY  51 

    0xb4c356ca,// 77 PAY  52 

    0xe1bfa310,// 78 PAY  53 

    0x312665ac,// 79 PAY  54 

    0xcfd1cf40,// 80 PAY  55 

    0x8685231a,// 81 PAY  56 

    0x2dae3dd3,// 82 PAY  57 

    0x9dcda84f,// 83 PAY  58 

    0xbdc83a90,// 84 PAY  59 

    0x74a77dc2,// 85 PAY  60 

    0x69c51ae4,// 86 PAY  61 

    0xcbed9743,// 87 PAY  62 

    0x2ef1ad4d,// 88 PAY  63 

    0xbecd01c9,// 89 PAY  64 

    0x5b15d28c,// 90 PAY  65 

    0x437606aa,// 91 PAY  66 

    0xad52e28a,// 92 PAY  67 

    0x68fecd51,// 93 PAY  68 

    0xbebe1aee,// 94 PAY  69 

    0x75c0cef3,// 95 PAY  70 

    0xe264427c,// 96 PAY  71 

    0x46eed095,// 97 PAY  72 

    0x66db09f6,// 98 PAY  73 

    0x56385851,// 99 PAY  74 

    0xd22f9f61,// 100 PAY  75 

    0x8a4ac323,// 101 PAY  76 

    0x7665aded,// 102 PAY  77 

    0x9fbfd3aa,// 103 PAY  78 

    0x84a84f36,// 104 PAY  79 

    0x48fc195c,// 105 PAY  80 

    0x90411d14,// 106 PAY  81 

    0x06526bc2,// 107 PAY  82 

    0x6462a488,// 108 PAY  83 

    0x1b504883,// 109 PAY  84 

    0x613b2680,// 110 PAY  85 

    0x0d571876,// 111 PAY  86 

    0x3dce694e,// 112 PAY  87 

    0xd185b54e,// 113 PAY  88 

    0x61ecfcf2,// 114 PAY  89 

    0xa0b9ef5a,// 115 PAY  90 

    0xcbaee0b7,// 116 PAY  91 

    0x6345bf0b,// 117 PAY  92 

    0xc7d42e9b,// 118 PAY  93 

    0xfe687fba,// 119 PAY  94 

    0xc78eeae2,// 120 PAY  95 

    0x78a49853,// 121 PAY  96 

    0x7e152387,// 122 PAY  97 

    0x0e4947ed,// 123 PAY  98 

    0x26e2da49,// 124 PAY  99 

    0x730cfe45,// 125 PAY 100 

    0xc0ff756f,// 126 PAY 101 

    0xda5188b8,// 127 PAY 102 

    0xce1d16cf,// 128 PAY 103 

    0xbd4c5857,// 129 PAY 104 

    0x9e237104,// 130 PAY 105 

    0x78113c41,// 131 PAY 106 

    0xc08da435,// 132 PAY 107 

    0xca4c81d4,// 133 PAY 108 

    0x6969d434,// 134 PAY 109 

    0x74b4a269,// 135 PAY 110 

    0x82c76e4d,// 136 PAY 111 

    0xa85e776f,// 137 PAY 112 

    0xef04a495,// 138 PAY 113 

    0x8a77163f,// 139 PAY 114 

    0x2e0614ef,// 140 PAY 115 

    0x11698dcb,// 141 PAY 116 

    0x96babb57,// 142 PAY 117 

    0x5b007cdd,// 143 PAY 118 

    0x82e548d3,// 144 PAY 119 

    0xb6a2d438,// 145 PAY 120 

    0xe04b5cc7,// 146 PAY 121 

    0x9687cea4,// 147 PAY 122 

    0x184eff9e,// 148 PAY 123 

    0xb5e58791,// 149 PAY 124 

    0xac5f05b8,// 150 PAY 125 

    0x1d173a6c,// 151 PAY 126 

    0x8254f645,// 152 PAY 127 

    0x65c293c2,// 153 PAY 128 

    0x5d7c314b,// 154 PAY 129 

    0x3f437bea,// 155 PAY 130 

    0x6b0bbcc4,// 156 PAY 131 

    0x694155a7,// 157 PAY 132 

    0x5b8dc653,// 158 PAY 133 

    0x7966a7c0,// 159 PAY 134 

    0x863f1b43,// 160 PAY 135 

    0xb86f0000,// 161 PAY 136 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 105 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x53 

    0x01a55306 // 162 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt31_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x80652870,// 4 SCX   2 

    0x000061c2,// 5 SCX   3 

    0xa2c93d46,// 6 SCX   4 

    0x461a0a91,// 7 SCX   5 

    0x965bc7b0,// 8 SCX   6 

    0xf936a766,// 9 SCX   7 

    0x414ab14f,// 10 SCX   8 

    0x48ac1645,// 11 SCX   9 

    0x300104e8,// 12 SCX  10 

    0x3d2d60a4,// 13 SCX  11 

    0xba60962c,// 14 SCX  12 

    0x407e0e3f,// 15 SCX  13 

    0x79e46655,// 16 SCX  14 

    0xd8fcccbe,// 17 SCX  15 

    0x8bc460ab,// 18 SCX  16 

    0xe6781985,// 19 SCX  17 

    0xa27b4bf0,// 20 SCX  18 

    0x2f913d52,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 217 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 127 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 127 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 36 

/// BFD (ofst+len)cry  : 76 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 200 

    0x0000007f,// 22 BFD   1 

    0x00240028,// 23 BFD   2 

    0x00c80004,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x0400e6af,// 25 MFM   1 

/// BDA is 56 words. 

/// BDA size     is 217 (0xd9) 

/// BDA id       is 0x2b67 

    0x00d92b67,// 26 BDA   1 

/// PAY Generic Data size   : 217 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x7c6e9ecc,// 27 PAY   1 

    0x0975d10e,// 28 PAY   2 

    0x05f00124,// 29 PAY   3 

    0x3dce1cc1,// 30 PAY   4 

    0xfc80c47f,// 31 PAY   5 

    0x173b72f4,// 32 PAY   6 

    0x6b1bfe98,// 33 PAY   7 

    0xa33d18c7,// 34 PAY   8 

    0x57d2d0a4,// 35 PAY   9 

    0xeb22da23,// 36 PAY  10 

    0x782bc42e,// 37 PAY  11 

    0x202710c3,// 38 PAY  12 

    0x4b4cd607,// 39 PAY  13 

    0xbcaddb98,// 40 PAY  14 

    0x0926326b,// 41 PAY  15 

    0xe0395be7,// 42 PAY  16 

    0xe519b1d6,// 43 PAY  17 

    0xd6d091e7,// 44 PAY  18 

    0x55087c13,// 45 PAY  19 

    0x2dad3a64,// 46 PAY  20 

    0x2f8073d6,// 47 PAY  21 

    0xb8b21c78,// 48 PAY  22 

    0x800bd08c,// 49 PAY  23 

    0x51e4f908,// 50 PAY  24 

    0x7765c2da,// 51 PAY  25 

    0x99b2b11a,// 52 PAY  26 

    0xd5cbb4b1,// 53 PAY  27 

    0x6c7e95cc,// 54 PAY  28 

    0x4e2c2c60,// 55 PAY  29 

    0xcf802244,// 56 PAY  30 

    0x5a817dbf,// 57 PAY  31 

    0xb0ee223f,// 58 PAY  32 

    0xcf53851b,// 59 PAY  33 

    0x00aaa4e6,// 60 PAY  34 

    0x6d332eb6,// 61 PAY  35 

    0x9f53cb6f,// 62 PAY  36 

    0x8817581c,// 63 PAY  37 

    0x13309474,// 64 PAY  38 

    0xc778e06b,// 65 PAY  39 

    0x47d71c26,// 66 PAY  40 

    0xb797ce4f,// 67 PAY  41 

    0x32c75569,// 68 PAY  42 

    0xc16eac66,// 69 PAY  43 

    0xccd825e6,// 70 PAY  44 

    0xcb435f09,// 71 PAY  45 

    0xf622e233,// 72 PAY  46 

    0x56a0f6cb,// 73 PAY  47 

    0x9db25123,// 74 PAY  48 

    0xf9925efd,// 75 PAY  49 

    0x03ceb460,// 76 PAY  50 

    0xf6a98542,// 77 PAY  51 

    0x5b6568eb,// 78 PAY  52 

    0xaca34ae7,// 79 PAY  53 

    0xefae466a,// 80 PAY  54 

    0xc8000000,// 81 PAY  55 

/// STA is 1 words. 

/// STA num_pkts       : 179 

/// STA pkt_idx        : 154 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb8 

    0x0269b8b3 // 82 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt32_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806528f5,// 4 SCX   2 

    0x000042c2,// 5 SCX   3 

    0x45755211,// 6 SCX   4 

    0xc8d42ec6,// 7 SCX   5 

    0xcbbed1b9,// 8 SCX   6 

    0xd1668e25,// 9 SCX   7 

    0x824765a2,// 10 SCX   8 

    0x42ca4286,// 11 SCX   9 

    0xf0e607c4,// 12 SCX  10 

    0x248eabac,// 13 SCX  11 

    0x9c9ae3c2,// 14 SCX  12 

    0x63d0ae65,// 15 SCX  13 

    0xe301e4b5,// 16 SCX  14 

    0x257520e6,// 17 SCX  15 

    0x9004011e,// 18 SCX  16 

    0xb29d66a3,// 19 SCX  17 

    0x3d584de7,// 20 SCX  18 

    0x7cbea924,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1180 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 288 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 288 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 276 

/// BFD (ofst+len)cry  : 284 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 352 

    0x00000120,// 22 BFD   1 

    0x01140008,// 23 BFD   2 

    0x01600080,// 24 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 28 

    0x2800d012,// 25 MFM   1 

    0x4f962e05,// 26 MFM   2 

    0x8fe6fb00,// 27 MFM   3 

    0x0c4766ac,// 28 MFM   4 

    0x60577e11,// 29 MFM   5 

    0x2c830000,// 30 MFM   6 

/// BDA is 296 words. 

/// BDA size     is 1180 (0x49c) 

/// BDA id       is 0x1659 

    0x049c1659,// 31 BDA   1 

/// PAY Generic Data size   : 1180 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x0981550a,// 32 PAY   1 

    0x97d28bfb,// 33 PAY   2 

    0x5421b0ba,// 34 PAY   3 

    0x9a985b00,// 35 PAY   4 

    0x92b6f676,// 36 PAY   5 

    0x7d201e87,// 37 PAY   6 

    0x68d94a9c,// 38 PAY   7 

    0x6a482faf,// 39 PAY   8 

    0xe7a04a31,// 40 PAY   9 

    0x7f60d6ac,// 41 PAY  10 

    0x7e58a854,// 42 PAY  11 

    0xf47e6927,// 43 PAY  12 

    0x55850a40,// 44 PAY  13 

    0xf911e6b2,// 45 PAY  14 

    0x7ceda1f2,// 46 PAY  15 

    0x83df8bad,// 47 PAY  16 

    0xe09eaeac,// 48 PAY  17 

    0x14fcc4b9,// 49 PAY  18 

    0xdb5d68ed,// 50 PAY  19 

    0x457270a5,// 51 PAY  20 

    0x289543cc,// 52 PAY  21 

    0xf0d68512,// 53 PAY  22 

    0xf8d70f96,// 54 PAY  23 

    0xcc0f7d53,// 55 PAY  24 

    0x4c42c4e0,// 56 PAY  25 

    0x68709158,// 57 PAY  26 

    0xa7faaa6f,// 58 PAY  27 

    0xe3e11682,// 59 PAY  28 

    0x6ce6f122,// 60 PAY  29 

    0x5fe448df,// 61 PAY  30 

    0x2ed558f0,// 62 PAY  31 

    0x1c582ac9,// 63 PAY  32 

    0x9b26337d,// 64 PAY  33 

    0x7ca6877c,// 65 PAY  34 

    0xeb519d8a,// 66 PAY  35 

    0xa98a6dcd,// 67 PAY  36 

    0x44546879,// 68 PAY  37 

    0x2b853595,// 69 PAY  38 

    0x62363c2d,// 70 PAY  39 

    0x662997dc,// 71 PAY  40 

    0x5d04c0bb,// 72 PAY  41 

    0xd15e1838,// 73 PAY  42 

    0xac2c6067,// 74 PAY  43 

    0xc860719a,// 75 PAY  44 

    0x94436586,// 76 PAY  45 

    0xe11eab69,// 77 PAY  46 

    0xa1736c83,// 78 PAY  47 

    0x6f543f8e,// 79 PAY  48 

    0xfe3b06b7,// 80 PAY  49 

    0x2753ccc9,// 81 PAY  50 

    0x1ed6260b,// 82 PAY  51 

    0xf3a059dd,// 83 PAY  52 

    0xbc51a405,// 84 PAY  53 

    0x316affc2,// 85 PAY  54 

    0x2d777d49,// 86 PAY  55 

    0x20219c21,// 87 PAY  56 

    0x8e48a16e,// 88 PAY  57 

    0xb8a1f739,// 89 PAY  58 

    0x63cfd480,// 90 PAY  59 

    0x2afdb21b,// 91 PAY  60 

    0x52770be1,// 92 PAY  61 

    0x55fe5403,// 93 PAY  62 

    0xf790fda9,// 94 PAY  63 

    0xc74d3b2d,// 95 PAY  64 

    0x5c6f829a,// 96 PAY  65 

    0x64eb4c61,// 97 PAY  66 

    0x1d0f38b5,// 98 PAY  67 

    0x7ab0523c,// 99 PAY  68 

    0xd4143530,// 100 PAY  69 

    0x600e370b,// 101 PAY  70 

    0x9b98ec9e,// 102 PAY  71 

    0xb139b0c1,// 103 PAY  72 

    0x70f1eb90,// 104 PAY  73 

    0x9956d31b,// 105 PAY  74 

    0x20e48e35,// 106 PAY  75 

    0xbb65d496,// 107 PAY  76 

    0x2f855c44,// 108 PAY  77 

    0x30f9e957,// 109 PAY  78 

    0x64c70319,// 110 PAY  79 

    0x9d309894,// 111 PAY  80 

    0x793fcd17,// 112 PAY  81 

    0x479b7857,// 113 PAY  82 

    0x9e6454e4,// 114 PAY  83 

    0x4bd08c98,// 115 PAY  84 

    0xee3d5558,// 116 PAY  85 

    0xc5e7058a,// 117 PAY  86 

    0x59d8425e,// 118 PAY  87 

    0x314ef0f5,// 119 PAY  88 

    0xa7542e38,// 120 PAY  89 

    0x71e98149,// 121 PAY  90 

    0x1158b5f6,// 122 PAY  91 

    0x9f4ad3f3,// 123 PAY  92 

    0x0592ad47,// 124 PAY  93 

    0x2540efee,// 125 PAY  94 

    0xbcb17a77,// 126 PAY  95 

    0x70fcc651,// 127 PAY  96 

    0x0946df42,// 128 PAY  97 

    0xb828a4d5,// 129 PAY  98 

    0xa94cc6b6,// 130 PAY  99 

    0xb5f2eaaa,// 131 PAY 100 

    0xeea47f98,// 132 PAY 101 

    0x1864447c,// 133 PAY 102 

    0x6c52202a,// 134 PAY 103 

    0xfa9774f1,// 135 PAY 104 

    0x306c6a6e,// 136 PAY 105 

    0x1d5c23c6,// 137 PAY 106 

    0x1b979186,// 138 PAY 107 

    0xf6af1ef0,// 139 PAY 108 

    0xfd839aa4,// 140 PAY 109 

    0xaf8c03b0,// 141 PAY 110 

    0xd66e3f74,// 142 PAY 111 

    0x59d96b20,// 143 PAY 112 

    0x8c815dae,// 144 PAY 113 

    0xb652bd56,// 145 PAY 114 

    0xace4fb2c,// 146 PAY 115 

    0xaf92bdab,// 147 PAY 116 

    0x92949cd8,// 148 PAY 117 

    0xffe5b3d6,// 149 PAY 118 

    0xc81fdba3,// 150 PAY 119 

    0xa72fef16,// 151 PAY 120 

    0x301a2011,// 152 PAY 121 

    0xdf157854,// 153 PAY 122 

    0x72f7c331,// 154 PAY 123 

    0xc220ff8a,// 155 PAY 124 

    0xc0f9d67e,// 156 PAY 125 

    0xd572ce5f,// 157 PAY 126 

    0x8b22933d,// 158 PAY 127 

    0x8c930082,// 159 PAY 128 

    0xbcaa9a51,// 160 PAY 129 

    0x31859a70,// 161 PAY 130 

    0x6eaf6b87,// 162 PAY 131 

    0x73ab0652,// 163 PAY 132 

    0xce0eb0ba,// 164 PAY 133 

    0x5b3f81fb,// 165 PAY 134 

    0x5b3d3c77,// 166 PAY 135 

    0xbe206c8a,// 167 PAY 136 

    0x9392fe18,// 168 PAY 137 

    0xbdd66538,// 169 PAY 138 

    0xb3a50421,// 170 PAY 139 

    0xadb34218,// 171 PAY 140 

    0x82947629,// 172 PAY 141 

    0xa2a58b03,// 173 PAY 142 

    0x9f86a174,// 174 PAY 143 

    0xff7e249d,// 175 PAY 144 

    0x5bca5076,// 176 PAY 145 

    0x8acc21ce,// 177 PAY 146 

    0xe246c692,// 178 PAY 147 

    0x3cb04808,// 179 PAY 148 

    0xb27b474e,// 180 PAY 149 

    0xd10e2c71,// 181 PAY 150 

    0x2b963a6f,// 182 PAY 151 

    0xbeb985e1,// 183 PAY 152 

    0x667b76ca,// 184 PAY 153 

    0x952a090c,// 185 PAY 154 

    0x88b44bcc,// 186 PAY 155 

    0x6a705571,// 187 PAY 156 

    0x0b2b27df,// 188 PAY 157 

    0xcacfad69,// 189 PAY 158 

    0xda9fb245,// 190 PAY 159 

    0x14fa8cd8,// 191 PAY 160 

    0x39927342,// 192 PAY 161 

    0x0f054867,// 193 PAY 162 

    0x79b9e119,// 194 PAY 163 

    0x4cd66fd6,// 195 PAY 164 

    0x11839461,// 196 PAY 165 

    0xe480b3c4,// 197 PAY 166 

    0x2f792723,// 198 PAY 167 

    0x9f478d4d,// 199 PAY 168 

    0x24770dff,// 200 PAY 169 

    0xeb37641b,// 201 PAY 170 

    0xca0326e9,// 202 PAY 171 

    0x096113ca,// 203 PAY 172 

    0x046aa317,// 204 PAY 173 

    0x16714986,// 205 PAY 174 

    0x9eb79df3,// 206 PAY 175 

    0x351a163a,// 207 PAY 176 

    0x4fca6f16,// 208 PAY 177 

    0x76381202,// 209 PAY 178 

    0xf59a1712,// 210 PAY 179 

    0x48184c41,// 211 PAY 180 

    0x7c8736a0,// 212 PAY 181 

    0x2122c969,// 213 PAY 182 

    0xe46132fd,// 214 PAY 183 

    0xa9f7b8b4,// 215 PAY 184 

    0xfffb6202,// 216 PAY 185 

    0x5b81096d,// 217 PAY 186 

    0x5e9aae75,// 218 PAY 187 

    0x904cfefb,// 219 PAY 188 

    0x4a85e84f,// 220 PAY 189 

    0xd90c31af,// 221 PAY 190 

    0x7d59eca0,// 222 PAY 191 

    0x1af9bb89,// 223 PAY 192 

    0xa4901c73,// 224 PAY 193 

    0x59838242,// 225 PAY 194 

    0xe984f97f,// 226 PAY 195 

    0x79c39adb,// 227 PAY 196 

    0x5ce6f846,// 228 PAY 197 

    0x2229b824,// 229 PAY 198 

    0xa34dab44,// 230 PAY 199 

    0x8bdd32e6,// 231 PAY 200 

    0x4083171a,// 232 PAY 201 

    0x8ce54246,// 233 PAY 202 

    0x39fc4077,// 234 PAY 203 

    0x4957fd95,// 235 PAY 204 

    0x54960afe,// 236 PAY 205 

    0x9c200f7a,// 237 PAY 206 

    0x00f04868,// 238 PAY 207 

    0x1c0ee7c8,// 239 PAY 208 

    0xa83efb9d,// 240 PAY 209 

    0xed8322d9,// 241 PAY 210 

    0x8b601365,// 242 PAY 211 

    0x282e85d9,// 243 PAY 212 

    0x9589278a,// 244 PAY 213 

    0x297701ec,// 245 PAY 214 

    0xcc25c0e4,// 246 PAY 215 

    0xbc7ab40d,// 247 PAY 216 

    0x8273a98e,// 248 PAY 217 

    0xa55f6ee4,// 249 PAY 218 

    0x9f9d3563,// 250 PAY 219 

    0x6fc4c702,// 251 PAY 220 

    0x11eb9d7b,// 252 PAY 221 

    0xfe7b8d90,// 253 PAY 222 

    0xe5ba815f,// 254 PAY 223 

    0x1e490633,// 255 PAY 224 

    0x19b7b733,// 256 PAY 225 

    0xd6c43348,// 257 PAY 226 

    0x8da1a1a9,// 258 PAY 227 

    0x17d55d71,// 259 PAY 228 

    0x1cf9753c,// 260 PAY 229 

    0x4ab2bba2,// 261 PAY 230 

    0xb9aecef0,// 262 PAY 231 

    0x089c6abe,// 263 PAY 232 

    0xfe07dfe1,// 264 PAY 233 

    0x3b9eb742,// 265 PAY 234 

    0xfb9ef00b,// 266 PAY 235 

    0x6b31548a,// 267 PAY 236 

    0x7e576bf3,// 268 PAY 237 

    0x190728bb,// 269 PAY 238 

    0x9ab4f73c,// 270 PAY 239 

    0x8a3a4aae,// 271 PAY 240 

    0x32519a85,// 272 PAY 241 

    0x5ec8d2d1,// 273 PAY 242 

    0x6e3cc4f9,// 274 PAY 243 

    0x9fc1c1b4,// 275 PAY 244 

    0xbf1e6964,// 276 PAY 245 

    0x46e629f5,// 277 PAY 246 

    0xe318d596,// 278 PAY 247 

    0xaafc62b3,// 279 PAY 248 

    0xb7ea6b44,// 280 PAY 249 

    0x107d8ea5,// 281 PAY 250 

    0x3ec3e886,// 282 PAY 251 

    0x7a81af13,// 283 PAY 252 

    0x76b195ea,// 284 PAY 253 

    0x39cdc935,// 285 PAY 254 

    0xda6b6144,// 286 PAY 255 

    0x0465f66a,// 287 PAY 256 

    0x4954bbd2,// 288 PAY 257 

    0x4a691c43,// 289 PAY 258 

    0xc1a65885,// 290 PAY 259 

    0xe0ffa591,// 291 PAY 260 

    0xfc96f0e2,// 292 PAY 261 

    0xef1a29f0,// 293 PAY 262 

    0x743ab6ee,// 294 PAY 263 

    0xfd84f9a7,// 295 PAY 264 

    0xb7cd35e4,// 296 PAY 265 

    0x0b0e91a6,// 297 PAY 266 

    0x00ac369f,// 298 PAY 267 

    0x3b28f1cf,// 299 PAY 268 

    0x3b47c8a8,// 300 PAY 269 

    0x889110e2,// 301 PAY 270 

    0xcbda37ab,// 302 PAY 271 

    0xf5b1f0d0,// 303 PAY 272 

    0x6badef20,// 304 PAY 273 

    0x2886f89a,// 305 PAY 274 

    0xa5221ecc,// 306 PAY 275 

    0xaed93499,// 307 PAY 276 

    0x8c380e4b,// 308 PAY 277 

    0x076e5b06,// 309 PAY 278 

    0xf4cba67d,// 310 PAY 279 

    0xb84cd1cc,// 311 PAY 280 

    0xa118ca56,// 312 PAY 281 

    0x7a5ac668,// 313 PAY 282 

    0x6087176e,// 314 PAY 283 

    0xb5d52a78,// 315 PAY 284 

    0x24fb1116,// 316 PAY 285 

    0x83edeb4a,// 317 PAY 286 

    0xf85eaa16,// 318 PAY 287 

    0x440224e4,// 319 PAY 288 

    0xef605a7d,// 320 PAY 289 

    0x61dfe84d,// 321 PAY 290 

    0xc0da5f83,// 322 PAY 291 

    0x7493ef05,// 323 PAY 292 

    0xb2e5da4f,// 324 PAY 293 

    0x0a3f8904,// 325 PAY 294 

    0xd05b1459,// 326 PAY 295 

/// STA is 1 words. 

/// STA num_pkts       : 75 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x28 

    0x0111284b // 327 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt33_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8061285f,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x35f37f50,// 6 SCX   4 

    0xc0b3d5e5,// 7 SCX   5 

    0x38bd79e6,// 8 SCX   6 

    0xa25f8216,// 9 SCX   7 

    0xec9804c1,// 10 SCX   8 

    0xdceeb8b8,// 11 SCX   9 

    0xfc389fa8,// 12 SCX  10 

    0x94cac2e3,// 13 SCX  11 

    0x7dead477,// 14 SCX  12 

    0xbd714fce,// 15 SCX  13 

    0xb39b2a4c,// 16 SCX  14 

    0xeb23ed19,// 17 SCX  15 

    0xf112447b,// 18 SCX  16 

    0x1dbe92b7,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1621 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1556 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1556 

/// BFD lencrypto      : 96 

/// BFD ofstcrypto     : 920 

/// BFD (ofst+len)cry  : 1016 

/// BFD ofstiv         : 680 

/// BFD ofsticv        : 1556 

    0x00000614,// 20 BFD   1 

    0x03980060,// 21 BFD   2 

    0x061402a8,// 22 BFD   3 

/// MFM is 12 words. 

/// MFM vldnibs        : 56 

    0x5600cd83,// 23 MFM   1 

    0xefcbe2bc,// 24 MFM   2 

    0x243a179d,// 25 MFM   3 

    0xa57e70ef,// 26 MFM   4 

    0xd23eb48e,// 27 MFM   5 

    0x61557dc5,// 28 MFM   6 

    0x2b9c7871,// 29 MFM   7 

    0x625f7a56,// 30 MFM   8 

    0x154f2943,// 31 MFM   9 

    0x864708a4,// 32 MFM  10 

    0x38c8db42,// 33 MFM  11 

    0x46000000,// 34 MFM  12 

/// BDA is 407 words. 

/// BDA size     is 1621 (0x655) 

/// BDA id       is 0x8db2 

    0x06558db2,// 35 BDA   1 

/// PAY Generic Data size   : 1621 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xe90c381d,// 36 PAY   1 

    0x21253887,// 37 PAY   2 

    0x83521b44,// 38 PAY   3 

    0x83ba30c3,// 39 PAY   4 

    0x96ae08b5,// 40 PAY   5 

    0xf2ce9e74,// 41 PAY   6 

    0xf602cf3c,// 42 PAY   7 

    0xbc87a4aa,// 43 PAY   8 

    0xa0e4f1f7,// 44 PAY   9 

    0xaa48762c,// 45 PAY  10 

    0xb7b3900a,// 46 PAY  11 

    0x839854d1,// 47 PAY  12 

    0xbf9a27d2,// 48 PAY  13 

    0x4009b783,// 49 PAY  14 

    0xc90f14b0,// 50 PAY  15 

    0x4d7408b7,// 51 PAY  16 

    0x420eead1,// 52 PAY  17 

    0x6900c8dd,// 53 PAY  18 

    0x7b3d59bd,// 54 PAY  19 

    0x9ee15267,// 55 PAY  20 

    0xdc172585,// 56 PAY  21 

    0xc7613b08,// 57 PAY  22 

    0x61c31ca0,// 58 PAY  23 

    0x0e0a8a9f,// 59 PAY  24 

    0xd7172dc6,// 60 PAY  25 

    0x3b93cddb,// 61 PAY  26 

    0x1ef6ed4f,// 62 PAY  27 

    0x6e7c3a61,// 63 PAY  28 

    0x15349a13,// 64 PAY  29 

    0x613006ed,// 65 PAY  30 

    0xce29c284,// 66 PAY  31 

    0xf2c8a447,// 67 PAY  32 

    0xf6f06e9b,// 68 PAY  33 

    0xa26b1531,// 69 PAY  34 

    0x50537162,// 70 PAY  35 

    0x9ea65629,// 71 PAY  36 

    0xa8844f83,// 72 PAY  37 

    0x2aebe292,// 73 PAY  38 

    0xd3ee7c39,// 74 PAY  39 

    0x6b94f80d,// 75 PAY  40 

    0xbedfe334,// 76 PAY  41 

    0x278c36c8,// 77 PAY  42 

    0x963041b3,// 78 PAY  43 

    0x5e929bf7,// 79 PAY  44 

    0x9561fd77,// 80 PAY  45 

    0xcb388331,// 81 PAY  46 

    0x80e66b5a,// 82 PAY  47 

    0x70957cc3,// 83 PAY  48 

    0xd59a704b,// 84 PAY  49 

    0xc52b25cc,// 85 PAY  50 

    0x98b85508,// 86 PAY  51 

    0xfd00c1ec,// 87 PAY  52 

    0xe2820b1e,// 88 PAY  53 

    0x58920b9a,// 89 PAY  54 

    0x555ec779,// 90 PAY  55 

    0xddbcf506,// 91 PAY  56 

    0x12f849e0,// 92 PAY  57 

    0xc528711d,// 93 PAY  58 

    0x2c13cf87,// 94 PAY  59 

    0xd165b0d0,// 95 PAY  60 

    0x7b88587b,// 96 PAY  61 

    0xd519e896,// 97 PAY  62 

    0xa4638ea7,// 98 PAY  63 

    0x3e523fd6,// 99 PAY  64 

    0xa25693c0,// 100 PAY  65 

    0x5e97527c,// 101 PAY  66 

    0x78e2aa1b,// 102 PAY  67 

    0xcab75821,// 103 PAY  68 

    0x7e07a93d,// 104 PAY  69 

    0xd2ee6fbf,// 105 PAY  70 

    0xf81f72e0,// 106 PAY  71 

    0xa88e752f,// 107 PAY  72 

    0x25de4a22,// 108 PAY  73 

    0xb3a38224,// 109 PAY  74 

    0x718599a7,// 110 PAY  75 

    0x770fafd1,// 111 PAY  76 

    0x15d3cba9,// 112 PAY  77 

    0x04be3598,// 113 PAY  78 

    0x55ed6c06,// 114 PAY  79 

    0x61a6a77b,// 115 PAY  80 

    0xd4dce8a2,// 116 PAY  81 

    0x0169d013,// 117 PAY  82 

    0x309a3039,// 118 PAY  83 

    0x13f62cf5,// 119 PAY  84 

    0x6b694ef1,// 120 PAY  85 

    0x2e94b632,// 121 PAY  86 

    0xb09a2e78,// 122 PAY  87 

    0xc6e5243f,// 123 PAY  88 

    0x581f9cec,// 124 PAY  89 

    0x72e28cf8,// 125 PAY  90 

    0xbc3531e3,// 126 PAY  91 

    0xa3841a06,// 127 PAY  92 

    0xce355f7a,// 128 PAY  93 

    0x04585036,// 129 PAY  94 

    0x69433980,// 130 PAY  95 

    0x0f6f2ff7,// 131 PAY  96 

    0x98ff57cd,// 132 PAY  97 

    0x1a435129,// 133 PAY  98 

    0x7efff22e,// 134 PAY  99 

    0xf60640c9,// 135 PAY 100 

    0x1860c115,// 136 PAY 101 

    0x65c894a7,// 137 PAY 102 

    0xbd0feb8a,// 138 PAY 103 

    0x7684d49e,// 139 PAY 104 

    0x0e127fe6,// 140 PAY 105 

    0x1a7230b1,// 141 PAY 106 

    0x8fb6deda,// 142 PAY 107 

    0x937df72b,// 143 PAY 108 

    0x6f6b90a3,// 144 PAY 109 

    0xbad6632d,// 145 PAY 110 

    0x4751b736,// 146 PAY 111 

    0x0c1b7b87,// 147 PAY 112 

    0xfdce8b08,// 148 PAY 113 

    0x0157dafd,// 149 PAY 114 

    0x24cc714f,// 150 PAY 115 

    0xc96d64cd,// 151 PAY 116 

    0x8ae9eb60,// 152 PAY 117 

    0x7a178864,// 153 PAY 118 

    0xca2411ac,// 154 PAY 119 

    0x8ae76eb7,// 155 PAY 120 

    0x8c5f4653,// 156 PAY 121 

    0xdecba7b8,// 157 PAY 122 

    0xdb400265,// 158 PAY 123 

    0x961ea054,// 159 PAY 124 

    0xb1ab37a8,// 160 PAY 125 

    0x07f2565d,// 161 PAY 126 

    0xe49e6b04,// 162 PAY 127 

    0xf78c51ba,// 163 PAY 128 

    0x18ef07ae,// 164 PAY 129 

    0x36931b1b,// 165 PAY 130 

    0x47780ad6,// 166 PAY 131 

    0x1f3ca8e8,// 167 PAY 132 

    0x1ed896b1,// 168 PAY 133 

    0x0931f2e7,// 169 PAY 134 

    0xd3f1d907,// 170 PAY 135 

    0xb381a2ae,// 171 PAY 136 

    0x427716c7,// 172 PAY 137 

    0x4bceddc4,// 173 PAY 138 

    0x9bfdb80a,// 174 PAY 139 

    0x10689d23,// 175 PAY 140 

    0x144e3b02,// 176 PAY 141 

    0x66108c8f,// 177 PAY 142 

    0x85e58975,// 178 PAY 143 

    0x83d7ead5,// 179 PAY 144 

    0x8a2f73cf,// 180 PAY 145 

    0x1ba7ef5d,// 181 PAY 146 

    0x496f7266,// 182 PAY 147 

    0x2c558ad1,// 183 PAY 148 

    0xec00d638,// 184 PAY 149 

    0x2e5b410d,// 185 PAY 150 

    0x829ddd1a,// 186 PAY 151 

    0x4d4a8f62,// 187 PAY 152 

    0xdcf98780,// 188 PAY 153 

    0x1c29789f,// 189 PAY 154 

    0xcd0e9f6a,// 190 PAY 155 

    0x7a4c7717,// 191 PAY 156 

    0xcb6f7e7f,// 192 PAY 157 

    0xf3888f4f,// 193 PAY 158 

    0x554faecb,// 194 PAY 159 

    0x128705d0,// 195 PAY 160 

    0x13ba3ade,// 196 PAY 161 

    0xda232b3e,// 197 PAY 162 

    0xd1d6f636,// 198 PAY 163 

    0x14b433cb,// 199 PAY 164 

    0x1d9a9841,// 200 PAY 165 

    0x331ef720,// 201 PAY 166 

    0x4b3819bb,// 202 PAY 167 

    0x953dfb18,// 203 PAY 168 

    0x9d1aa90e,// 204 PAY 169 

    0xa7338743,// 205 PAY 170 

    0xc6a7fa6f,// 206 PAY 171 

    0x1f7e0aeb,// 207 PAY 172 

    0x651f4ac5,// 208 PAY 173 

    0x6b0d3f93,// 209 PAY 174 

    0xf790f411,// 210 PAY 175 

    0x1a45c3d4,// 211 PAY 176 

    0xed745e3e,// 212 PAY 177 

    0x694ed9be,// 213 PAY 178 

    0xae92141b,// 214 PAY 179 

    0xa4d4c325,// 215 PAY 180 

    0x77b561e3,// 216 PAY 181 

    0xc371b1e6,// 217 PAY 182 

    0x316af308,// 218 PAY 183 

    0x6c08a8a0,// 219 PAY 184 

    0x73bbd37a,// 220 PAY 185 

    0x0c477a45,// 221 PAY 186 

    0xdd784d0d,// 222 PAY 187 

    0xba7e5a55,// 223 PAY 188 

    0x85dea188,// 224 PAY 189 

    0x8a1f5ef7,// 225 PAY 190 

    0x99c25d80,// 226 PAY 191 

    0x324c4890,// 227 PAY 192 

    0xb6433015,// 228 PAY 193 

    0xcfa00e15,// 229 PAY 194 

    0x14eb1953,// 230 PAY 195 

    0xa42c4d76,// 231 PAY 196 

    0x4ce2a4d4,// 232 PAY 197 

    0x9b4cd1ae,// 233 PAY 198 

    0xad2c6dc0,// 234 PAY 199 

    0x81614f17,// 235 PAY 200 

    0x558ee608,// 236 PAY 201 

    0xf229a065,// 237 PAY 202 

    0x3c93a8f4,// 238 PAY 203 

    0x63caea84,// 239 PAY 204 

    0xe6a60939,// 240 PAY 205 

    0x724439f1,// 241 PAY 206 

    0x46d94ba7,// 242 PAY 207 

    0x3e125262,// 243 PAY 208 

    0x171bad54,// 244 PAY 209 

    0x56601712,// 245 PAY 210 

    0x4f7f1327,// 246 PAY 211 

    0xe08f9896,// 247 PAY 212 

    0xd9deaa61,// 248 PAY 213 

    0x9333b225,// 249 PAY 214 

    0x4f6bacd1,// 250 PAY 215 

    0xb34a2bbd,// 251 PAY 216 

    0xf5bf880d,// 252 PAY 217 

    0x8181d765,// 253 PAY 218 

    0xecb3b7de,// 254 PAY 219 

    0xb8499907,// 255 PAY 220 

    0xc96e28b6,// 256 PAY 221 

    0x219b31b0,// 257 PAY 222 

    0x2d596cb5,// 258 PAY 223 

    0xe825ca38,// 259 PAY 224 

    0x8bba4790,// 260 PAY 225 

    0x2beacfe7,// 261 PAY 226 

    0x27cc33ea,// 262 PAY 227 

    0x7b8f71d4,// 263 PAY 228 

    0xac42e979,// 264 PAY 229 

    0x85dc5db8,// 265 PAY 230 

    0x750708ea,// 266 PAY 231 

    0xcbc1e5a4,// 267 PAY 232 

    0xf8c12c03,// 268 PAY 233 

    0x8e2fbd22,// 269 PAY 234 

    0x7230798d,// 270 PAY 235 

    0x7f4bd9fd,// 271 PAY 236 

    0xd8493c9e,// 272 PAY 237 

    0x010bad47,// 273 PAY 238 

    0x1e7b0d07,// 274 PAY 239 

    0x84be5c57,// 275 PAY 240 

    0xb5a46086,// 276 PAY 241 

    0xfa1b45ab,// 277 PAY 242 

    0x0074db37,// 278 PAY 243 

    0x40b89555,// 279 PAY 244 

    0x09e34c80,// 280 PAY 245 

    0xb381a5b1,// 281 PAY 246 

    0x0374622b,// 282 PAY 247 

    0x5d4e98e0,// 283 PAY 248 

    0xfb8c7793,// 284 PAY 249 

    0xb02d9a44,// 285 PAY 250 

    0x310e2172,// 286 PAY 251 

    0x1a42c7c9,// 287 PAY 252 

    0x4beb54d9,// 288 PAY 253 

    0x2df7fc8f,// 289 PAY 254 

    0xc959bd49,// 290 PAY 255 

    0xdec68cba,// 291 PAY 256 

    0x13848c41,// 292 PAY 257 

    0xb726fa04,// 293 PAY 258 

    0x0929aea0,// 294 PAY 259 

    0x8deb2bc0,// 295 PAY 260 

    0x7e93a834,// 296 PAY 261 

    0x50f2dd78,// 297 PAY 262 

    0x8017f19f,// 298 PAY 263 

    0xee7539ec,// 299 PAY 264 

    0xbd91d663,// 300 PAY 265 

    0xbe04b1a6,// 301 PAY 266 

    0xe3f01bb2,// 302 PAY 267 

    0x2f5e1a6b,// 303 PAY 268 

    0xa1e27727,// 304 PAY 269 

    0x79549205,// 305 PAY 270 

    0x6cc0093a,// 306 PAY 271 

    0xbb083943,// 307 PAY 272 

    0xa1bf595a,// 308 PAY 273 

    0xed7b3a9f,// 309 PAY 274 

    0x732d7f59,// 310 PAY 275 

    0x7259a81c,// 311 PAY 276 

    0xadddfebd,// 312 PAY 277 

    0x3e954a97,// 313 PAY 278 

    0x54769ac1,// 314 PAY 279 

    0xa5c3777f,// 315 PAY 280 

    0x2bc7cd36,// 316 PAY 281 

    0x2dcb4226,// 317 PAY 282 

    0x963ff68d,// 318 PAY 283 

    0xfe924176,// 319 PAY 284 

    0x347f45db,// 320 PAY 285 

    0x0232b214,// 321 PAY 286 

    0xf9d9b90c,// 322 PAY 287 

    0xa3f82095,// 323 PAY 288 

    0xd0eb2cb3,// 324 PAY 289 

    0x3cccfa16,// 325 PAY 290 

    0x206c1497,// 326 PAY 291 

    0xb171c348,// 327 PAY 292 

    0x1ccb9e82,// 328 PAY 293 

    0x53ad6d24,// 329 PAY 294 

    0x84bc47bb,// 330 PAY 295 

    0xc99b2f9e,// 331 PAY 296 

    0x5c5e5c4d,// 332 PAY 297 

    0x9df5151a,// 333 PAY 298 

    0x2e3eaa04,// 334 PAY 299 

    0x0a00c275,// 335 PAY 300 

    0x00ed4b48,// 336 PAY 301 

    0xd4548018,// 337 PAY 302 

    0x39fb96c6,// 338 PAY 303 

    0xc923242f,// 339 PAY 304 

    0xc1bcd72c,// 340 PAY 305 

    0x38745d9e,// 341 PAY 306 

    0x80fdc648,// 342 PAY 307 

    0x8417df21,// 343 PAY 308 

    0xfc07279e,// 344 PAY 309 

    0xd91713e8,// 345 PAY 310 

    0x78e6cacd,// 346 PAY 311 

    0xc0faebbe,// 347 PAY 312 

    0xfbc5b8e0,// 348 PAY 313 

    0x89136ae3,// 349 PAY 314 

    0x434dd055,// 350 PAY 315 

    0xea99b5d3,// 351 PAY 316 

    0x230ad611,// 352 PAY 317 

    0xea53093e,// 353 PAY 318 

    0xd743d417,// 354 PAY 319 

    0x34c8a5f6,// 355 PAY 320 

    0xfec531d1,// 356 PAY 321 

    0x2bd1c66c,// 357 PAY 322 

    0xef9a1bd4,// 358 PAY 323 

    0x74c3e167,// 359 PAY 324 

    0xce6565d1,// 360 PAY 325 

    0x31f7bc01,// 361 PAY 326 

    0xa531187c,// 362 PAY 327 

    0x6667ff70,// 363 PAY 328 

    0xae480537,// 364 PAY 329 

    0x629d1f1b,// 365 PAY 330 

    0x4b11648b,// 366 PAY 331 

    0xd3daec35,// 367 PAY 332 

    0x09effa22,// 368 PAY 333 

    0x9ae0f85e,// 369 PAY 334 

    0x029a873a,// 370 PAY 335 

    0x80be1ad0,// 371 PAY 336 

    0x8ba248e1,// 372 PAY 337 

    0x4c62929a,// 373 PAY 338 

    0x2510a4ad,// 374 PAY 339 

    0x31b7b1e5,// 375 PAY 340 

    0x7d65e72f,// 376 PAY 341 

    0x4bcd178e,// 377 PAY 342 

    0x6f4866ed,// 378 PAY 343 

    0x535c4dc5,// 379 PAY 344 

    0x81dbbcd7,// 380 PAY 345 

    0x138db0ca,// 381 PAY 346 

    0x34e8183f,// 382 PAY 347 

    0x1c1b9a4c,// 383 PAY 348 

    0x3d5f9f61,// 384 PAY 349 

    0x7a3e58f7,// 385 PAY 350 

    0x6a9b4112,// 386 PAY 351 

    0x0e7dd904,// 387 PAY 352 

    0x82bd861b,// 388 PAY 353 

    0xf6eba995,// 389 PAY 354 

    0xa7eb7828,// 390 PAY 355 

    0x708cc61f,// 391 PAY 356 

    0xf2451b82,// 392 PAY 357 

    0x3e4fca35,// 393 PAY 358 

    0x2e5e70d4,// 394 PAY 359 

    0x8bb3655d,// 395 PAY 360 

    0xdb3528bf,// 396 PAY 361 

    0x4ef9ca4e,// 397 PAY 362 

    0x980e9360,// 398 PAY 363 

    0x472d7135,// 399 PAY 364 

    0xf45f6707,// 400 PAY 365 

    0x3b7ad946,// 401 PAY 366 

    0xde3075fc,// 402 PAY 367 

    0x39636fd6,// 403 PAY 368 

    0xf8c29558,// 404 PAY 369 

    0x1e690ba5,// 405 PAY 370 

    0xcc484d99,// 406 PAY 371 

    0x3608b1ba,// 407 PAY 372 

    0xd3653680,// 408 PAY 373 

    0xc4fb00d8,// 409 PAY 374 

    0x00ed547b,// 410 PAY 375 

    0x9d9a6e6f,// 411 PAY 376 

    0xfe96de8f,// 412 PAY 377 

    0xc168cb30,// 413 PAY 378 

    0x7847d2d9,// 414 PAY 379 

    0x4a95fa56,// 415 PAY 380 

    0xf5d636a1,// 416 PAY 381 

    0x9fa6b8b3,// 417 PAY 382 

    0x2e72b2e8,// 418 PAY 383 

    0x84c42893,// 419 PAY 384 

    0xfc9890df,// 420 PAY 385 

    0xa9bdc6d2,// 421 PAY 386 

    0x111f32ac,// 422 PAY 387 

    0x05dea20b,// 423 PAY 388 

    0x1dab9347,// 424 PAY 389 

    0xcdaba66d,// 425 PAY 390 

    0xf68b7782,// 426 PAY 391 

    0x5329bb33,// 427 PAY 392 

    0x64b73fc2,// 428 PAY 393 

    0xa3f0c605,// 429 PAY 394 

    0x437b78b6,// 430 PAY 395 

    0xc58b7f86,// 431 PAY 396 

    0x0ded6940,// 432 PAY 397 

    0xd2b13150,// 433 PAY 398 

    0x8b08e36f,// 434 PAY 399 

    0x18ea4785,// 435 PAY 400 

    0x20bc6b1b,// 436 PAY 401 

    0x68f4b9c6,// 437 PAY 402 

    0xa331d34c,// 438 PAY 403 

    0xae72b2f3,// 439 PAY 404 

    0x1deede18,// 440 PAY 405 

    0xbe000000,// 441 PAY 406 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 141 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb2 

    0x0234b237 // 442 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt34_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x8062284a,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xa4864581,// 6 SCX   4 

    0xf74f0404,// 7 SCX   5 

    0x3ec0667e,// 8 SCX   6 

    0xd468d66d,// 9 SCX   7 

    0xea048b29,// 10 SCX   8 

    0xd5a588b8,// 11 SCX   9 

    0xa2d318be,// 12 SCX  10 

    0x3ba8139d,// 13 SCX  11 

    0xa91a681a,// 14 SCX  12 

    0x354c1267,// 15 SCX  13 

    0x45138a3c,// 16 SCX  14 

    0x62f524d8,// 17 SCX  15 

    0xdcbe5e26,// 18 SCX  16 

    0xb2532cf4,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1751 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1627 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1627 

/// BFD lencrypto      : 936 

/// BFD ofstcrypto     : 192 

/// BFD (ofst+len)cry  : 1128 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 1732 

    0x0000065b,// 20 BFD   1 

    0x00c003a8,// 21 BFD   2 

    0x06c400ac,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00e74f,// 23 MFM   1 

    0xa8f48d0a,// 24 MFM   2 

    0xd9fe9328,// 25 MFM   3 

    0x2f828502,// 26 MFM   4 

    0x4b35efa8,// 27 MFM   5 

    0xf90b0970,// 28 MFM   6 

    0x55e6f652,// 29 MFM   7 

    0x4b0b1c92,// 30 MFM   8 

    0x30f1b394,// 31 MFM   9 

    0x112406f0,// 32 MFM  10 

    0xfbcde2e3,// 33 MFM  11 

    0x50532645,// 34 MFM  12 

    0xbc16ae2d,// 35 MFM  13 

    0x7a1c62fa,// 36 MFM  14 

    0xe01724ae,// 37 MFM  15 

    0xce30f367,// 38 MFM  16 

/// BDA is 439 words. 

/// BDA size     is 1751 (0x6d7) 

/// BDA id       is 0xaed0 

    0x06d7aed0,// 39 BDA   1 

/// PAY Generic Data size   : 1751 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xbf5d63f4,// 40 PAY   1 

    0xd8a26cea,// 41 PAY   2 

    0x224630bd,// 42 PAY   3 

    0xb9bc71c1,// 43 PAY   4 

    0x8b284107,// 44 PAY   5 

    0x90713570,// 45 PAY   6 

    0x969afc99,// 46 PAY   7 

    0x1dca7df7,// 47 PAY   8 

    0xc5204b46,// 48 PAY   9 

    0x285632af,// 49 PAY  10 

    0x1c8fbcf6,// 50 PAY  11 

    0xe36aea93,// 51 PAY  12 

    0x3b6b8eb6,// 52 PAY  13 

    0x27958877,// 53 PAY  14 

    0xb7ca9c97,// 54 PAY  15 

    0x630cc3e8,// 55 PAY  16 

    0xd467bb4a,// 56 PAY  17 

    0xd639a5f0,// 57 PAY  18 

    0xa5f2f909,// 58 PAY  19 

    0xf7d15f70,// 59 PAY  20 

    0x727d44f0,// 60 PAY  21 

    0xfb2b9e55,// 61 PAY  22 

    0xbb9b2d45,// 62 PAY  23 

    0x5ae8008b,// 63 PAY  24 

    0x0785d2b3,// 64 PAY  25 

    0x16452d8f,// 65 PAY  26 

    0xd8e67bb9,// 66 PAY  27 

    0x37314b27,// 67 PAY  28 

    0x96e1334a,// 68 PAY  29 

    0x45699698,// 69 PAY  30 

    0x9b8cbdf8,// 70 PAY  31 

    0xc63418c4,// 71 PAY  32 

    0xd92b1331,// 72 PAY  33 

    0x3cccb362,// 73 PAY  34 

    0x76688afa,// 74 PAY  35 

    0xa7eca16c,// 75 PAY  36 

    0x73b127af,// 76 PAY  37 

    0x38047244,// 77 PAY  38 

    0xe4c80ed9,// 78 PAY  39 

    0x33986ab5,// 79 PAY  40 

    0x363692d5,// 80 PAY  41 

    0xaf74a572,// 81 PAY  42 

    0x9c7a20f8,// 82 PAY  43 

    0x98eaa150,// 83 PAY  44 

    0x0262cb53,// 84 PAY  45 

    0xe409b369,// 85 PAY  46 

    0x03632373,// 86 PAY  47 

    0x9eeaef2c,// 87 PAY  48 

    0x8d119e5b,// 88 PAY  49 

    0x3f4f3418,// 89 PAY  50 

    0x4dd63769,// 90 PAY  51 

    0x07a81b53,// 91 PAY  52 

    0x5d31982a,// 92 PAY  53 

    0x0e2dce15,// 93 PAY  54 

    0x21803b50,// 94 PAY  55 

    0x9c31f707,// 95 PAY  56 

    0xde10b234,// 96 PAY  57 

    0xe7711372,// 97 PAY  58 

    0x479756a0,// 98 PAY  59 

    0x3774c70d,// 99 PAY  60 

    0x019acf45,// 100 PAY  61 

    0xa01507fb,// 101 PAY  62 

    0x5fafa77b,// 102 PAY  63 

    0xeb3aac31,// 103 PAY  64 

    0x41cb8d01,// 104 PAY  65 

    0x502b54fc,// 105 PAY  66 

    0xea405416,// 106 PAY  67 

    0x94ded3a4,// 107 PAY  68 

    0x312ffed0,// 108 PAY  69 

    0xb8078bbf,// 109 PAY  70 

    0x5ac8760a,// 110 PAY  71 

    0xd61fc41f,// 111 PAY  72 

    0x6bc0a832,// 112 PAY  73 

    0x01553093,// 113 PAY  74 

    0x67cad6bc,// 114 PAY  75 

    0xfd2a48f3,// 115 PAY  76 

    0x324b18d6,// 116 PAY  77 

    0x8faf79d4,// 117 PAY  78 

    0x3bbc0c6a,// 118 PAY  79 

    0xe25014f9,// 119 PAY  80 

    0xd0d47a81,// 120 PAY  81 

    0xedc535e5,// 121 PAY  82 

    0x60945bef,// 122 PAY  83 

    0x57a190a9,// 123 PAY  84 

    0xa66e609e,// 124 PAY  85 

    0x7e857321,// 125 PAY  86 

    0xa0562ca7,// 126 PAY  87 

    0xd3c23746,// 127 PAY  88 

    0x0bd12ba0,// 128 PAY  89 

    0x1dd6ef6a,// 129 PAY  90 

    0x3597e91c,// 130 PAY  91 

    0xb478c7ca,// 131 PAY  92 

    0x3ed3327b,// 132 PAY  93 

    0x6067be47,// 133 PAY  94 

    0x61355aee,// 134 PAY  95 

    0x1c11680d,// 135 PAY  96 

    0x49d8fe5c,// 136 PAY  97 

    0xd8a15644,// 137 PAY  98 

    0x50231eb2,// 138 PAY  99 

    0x8c713ba6,// 139 PAY 100 

    0xfd7d89d6,// 140 PAY 101 

    0xf1087e53,// 141 PAY 102 

    0x6ccf5ed2,// 142 PAY 103 

    0x600ba747,// 143 PAY 104 

    0xf1463362,// 144 PAY 105 

    0xb8a796dd,// 145 PAY 106 

    0x47b89bc3,// 146 PAY 107 

    0x59da1a3a,// 147 PAY 108 

    0x30a4327f,// 148 PAY 109 

    0x9693313b,// 149 PAY 110 

    0xc79bdf6f,// 150 PAY 111 

    0x6d9d8d76,// 151 PAY 112 

    0x27429f41,// 152 PAY 113 

    0xdfe23ef5,// 153 PAY 114 

    0x68500b42,// 154 PAY 115 

    0xe160ab5c,// 155 PAY 116 

    0x38afeba1,// 156 PAY 117 

    0xa739f3b1,// 157 PAY 118 

    0x2acf31e1,// 158 PAY 119 

    0xe3815e03,// 159 PAY 120 

    0x6605da3f,// 160 PAY 121 

    0x7f46e63f,// 161 PAY 122 

    0xa3036108,// 162 PAY 123 

    0xb6b5cae9,// 163 PAY 124 

    0x9753a74e,// 164 PAY 125 

    0xfc2635c3,// 165 PAY 126 

    0x961ab3b9,// 166 PAY 127 

    0x1b8495d4,// 167 PAY 128 

    0x8f00f636,// 168 PAY 129 

    0x594b4133,// 169 PAY 130 

    0x192b8fa0,// 170 PAY 131 

    0xab1d1921,// 171 PAY 132 

    0x7bfd7a2c,// 172 PAY 133 

    0x593217ad,// 173 PAY 134 

    0xa02a5cc1,// 174 PAY 135 

    0x61602903,// 175 PAY 136 

    0x0e61cb76,// 176 PAY 137 

    0xc393c97a,// 177 PAY 138 

    0x74b15189,// 178 PAY 139 

    0x3b47f3d2,// 179 PAY 140 

    0x0e6c18e5,// 180 PAY 141 

    0xb413008d,// 181 PAY 142 

    0x669664e5,// 182 PAY 143 

    0xe8f7d084,// 183 PAY 144 

    0xca14e39d,// 184 PAY 145 

    0x7ea48bcb,// 185 PAY 146 

    0x89119639,// 186 PAY 147 

    0x6a91d607,// 187 PAY 148 

    0xe7e9881f,// 188 PAY 149 

    0x9969189f,// 189 PAY 150 

    0x74017cd3,// 190 PAY 151 

    0xbfc5fb54,// 191 PAY 152 

    0x7ed85268,// 192 PAY 153 

    0xef963141,// 193 PAY 154 

    0x56f29fe7,// 194 PAY 155 

    0x9bb7fd73,// 195 PAY 156 

    0x4dabeaed,// 196 PAY 157 

    0x573fb17b,// 197 PAY 158 

    0xcaa4da98,// 198 PAY 159 

    0xb848d1d0,// 199 PAY 160 

    0x094f18af,// 200 PAY 161 

    0xf7a9150a,// 201 PAY 162 

    0x1b712d30,// 202 PAY 163 

    0x351ef666,// 203 PAY 164 

    0x1a84543d,// 204 PAY 165 

    0xd4e022d5,// 205 PAY 166 

    0xab45d599,// 206 PAY 167 

    0xf1107110,// 207 PAY 168 

    0xae7dbaa6,// 208 PAY 169 

    0x4ea8a106,// 209 PAY 170 

    0x59b5576d,// 210 PAY 171 

    0x167764a6,// 211 PAY 172 

    0x58e03611,// 212 PAY 173 

    0xda3c810a,// 213 PAY 174 

    0x0725a426,// 214 PAY 175 

    0xc047b093,// 215 PAY 176 

    0x219a0f41,// 216 PAY 177 

    0x06f49368,// 217 PAY 178 

    0x19cd130d,// 218 PAY 179 

    0x5dc17453,// 219 PAY 180 

    0x1d8c4481,// 220 PAY 181 

    0xced16a26,// 221 PAY 182 

    0x233a649f,// 222 PAY 183 

    0x37a58dc3,// 223 PAY 184 

    0x3596b77d,// 224 PAY 185 

    0x27b99629,// 225 PAY 186 

    0xf2ac1ff6,// 226 PAY 187 

    0x641d34fe,// 227 PAY 188 

    0xbb2f595e,// 228 PAY 189 

    0xa37b3fc4,// 229 PAY 190 

    0x73a49d1d,// 230 PAY 191 

    0x16b1a42a,// 231 PAY 192 

    0xbd2ca81b,// 232 PAY 193 

    0xbe6d379e,// 233 PAY 194 

    0xe2869a5b,// 234 PAY 195 

    0xac591731,// 235 PAY 196 

    0xb0d68892,// 236 PAY 197 

    0xf1a09b80,// 237 PAY 198 

    0xe8334fbd,// 238 PAY 199 

    0xafee3d52,// 239 PAY 200 

    0x6ba1fe2f,// 240 PAY 201 

    0x2caef68b,// 241 PAY 202 

    0xf23298db,// 242 PAY 203 

    0x97bcc876,// 243 PAY 204 

    0xbd1b0802,// 244 PAY 205 

    0x7a87e203,// 245 PAY 206 

    0x4172929d,// 246 PAY 207 

    0x7683531c,// 247 PAY 208 

    0xdb43784d,// 248 PAY 209 

    0xd675c241,// 249 PAY 210 

    0x107b1733,// 250 PAY 211 

    0x2834f03d,// 251 PAY 212 

    0xc3e6e986,// 252 PAY 213 

    0x2a9ee8d8,// 253 PAY 214 

    0x7aea7a9e,// 254 PAY 215 

    0x74dd0a4c,// 255 PAY 216 

    0xa10f45ea,// 256 PAY 217 

    0xbd96ecd2,// 257 PAY 218 

    0x3cd36dde,// 258 PAY 219 

    0xb7b2faf2,// 259 PAY 220 

    0xf6d123e4,// 260 PAY 221 

    0x0bdf8d54,// 261 PAY 222 

    0x1506c8de,// 262 PAY 223 

    0xa0142660,// 263 PAY 224 

    0x9557e6d5,// 264 PAY 225 

    0x351d89ac,// 265 PAY 226 

    0x56f11291,// 266 PAY 227 

    0x30fa6493,// 267 PAY 228 

    0xae1dba51,// 268 PAY 229 

    0x312670e8,// 269 PAY 230 

    0x3328f8ac,// 270 PAY 231 

    0x21e419c7,// 271 PAY 232 

    0x579c0301,// 272 PAY 233 

    0xb46e4295,// 273 PAY 234 

    0xf02546b1,// 274 PAY 235 

    0xcc680946,// 275 PAY 236 

    0xe49f9d9e,// 276 PAY 237 

    0x27e0680e,// 277 PAY 238 

    0x735deb4f,// 278 PAY 239 

    0x496e79dc,// 279 PAY 240 

    0x42268678,// 280 PAY 241 

    0x8ed153fa,// 281 PAY 242 

    0xe1ee1cd9,// 282 PAY 243 

    0x27fc0df6,// 283 PAY 244 

    0xaa4501a3,// 284 PAY 245 

    0xf692ce81,// 285 PAY 246 

    0x06df4c73,// 286 PAY 247 

    0xfa2af7dd,// 287 PAY 248 

    0xbaa4f1e6,// 288 PAY 249 

    0xdb0e3d58,// 289 PAY 250 

    0xd6d2da1b,// 290 PAY 251 

    0xdc6c227a,// 291 PAY 252 

    0x14b4682f,// 292 PAY 253 

    0xed3f7239,// 293 PAY 254 

    0xe4802970,// 294 PAY 255 

    0x45855630,// 295 PAY 256 

    0xcceeab73,// 296 PAY 257 

    0x7c1f89ae,// 297 PAY 258 

    0xa0ae7d78,// 298 PAY 259 

    0x0005c90b,// 299 PAY 260 

    0xfdedfa80,// 300 PAY 261 

    0x708d9234,// 301 PAY 262 

    0xab02c632,// 302 PAY 263 

    0x08caa9cc,// 303 PAY 264 

    0xcae71abf,// 304 PAY 265 

    0xfd84d0c7,// 305 PAY 266 

    0x98437185,// 306 PAY 267 

    0x9bc3c7dd,// 307 PAY 268 

    0x774be6e2,// 308 PAY 269 

    0x800f55e0,// 309 PAY 270 

    0x999f5d8b,// 310 PAY 271 

    0x2ef42423,// 311 PAY 272 

    0xb5573bb6,// 312 PAY 273 

    0x3e8c49a5,// 313 PAY 274 

    0x8d029511,// 314 PAY 275 

    0xe9e94935,// 315 PAY 276 

    0xabce36bb,// 316 PAY 277 

    0xc0befcf7,// 317 PAY 278 

    0x95281d45,// 318 PAY 279 

    0xa47a00b3,// 319 PAY 280 

    0xbcc917e8,// 320 PAY 281 

    0x7d9f4176,// 321 PAY 282 

    0x6d74db25,// 322 PAY 283 

    0x2087dcb5,// 323 PAY 284 

    0xcbd87c15,// 324 PAY 285 

    0x30311473,// 325 PAY 286 

    0x49d723ce,// 326 PAY 287 

    0xddcc1723,// 327 PAY 288 

    0x391b5636,// 328 PAY 289 

    0xb2bdee3f,// 329 PAY 290 

    0x2d7fbc9d,// 330 PAY 291 

    0xae8c8fa1,// 331 PAY 292 

    0x8b353883,// 332 PAY 293 

    0x6ee0dc02,// 333 PAY 294 

    0x4b7f16e5,// 334 PAY 295 

    0x2d8f014c,// 335 PAY 296 

    0x609e3e79,// 336 PAY 297 

    0xf1a7405c,// 337 PAY 298 

    0x193b8f5f,// 338 PAY 299 

    0x64bd5ca0,// 339 PAY 300 

    0xe50938e2,// 340 PAY 301 

    0xcfc5b8e5,// 341 PAY 302 

    0xd8959317,// 342 PAY 303 

    0x2ed36dc3,// 343 PAY 304 

    0x7cfa32f3,// 344 PAY 305 

    0x60adc777,// 345 PAY 306 

    0x598eb1a3,// 346 PAY 307 

    0xaf49a61e,// 347 PAY 308 

    0x041193e7,// 348 PAY 309 

    0x11385dd0,// 349 PAY 310 

    0x4d6921b3,// 350 PAY 311 

    0xa0e68ddc,// 351 PAY 312 

    0x799e7c8f,// 352 PAY 313 

    0x2fd75c97,// 353 PAY 314 

    0x344253c6,// 354 PAY 315 

    0x45a9f4ae,// 355 PAY 316 

    0x8d669b85,// 356 PAY 317 

    0xac032eac,// 357 PAY 318 

    0x4482366b,// 358 PAY 319 

    0x6dfd82c6,// 359 PAY 320 

    0xbe39fdd8,// 360 PAY 321 

    0x8c5beff2,// 361 PAY 322 

    0x7ce14dc5,// 362 PAY 323 

    0x7b3b8f59,// 363 PAY 324 

    0x289e9d7e,// 364 PAY 325 

    0x6a5bf21e,// 365 PAY 326 

    0x5fcff832,// 366 PAY 327 

    0xa7af6f3a,// 367 PAY 328 

    0xf6be0584,// 368 PAY 329 

    0x456616a2,// 369 PAY 330 

    0x086744cb,// 370 PAY 331 

    0x7eeab153,// 371 PAY 332 

    0x39e32d65,// 372 PAY 333 

    0xd046cbcd,// 373 PAY 334 

    0xa7fed317,// 374 PAY 335 

    0x48f8101e,// 375 PAY 336 

    0x10bc5bb3,// 376 PAY 337 

    0xd3453575,// 377 PAY 338 

    0xae9e03c1,// 378 PAY 339 

    0x562d155b,// 379 PAY 340 

    0x85ce7503,// 380 PAY 341 

    0x9f2e65a9,// 381 PAY 342 

    0xf42d5c15,// 382 PAY 343 

    0x8b602445,// 383 PAY 344 

    0xa7cd6983,// 384 PAY 345 

    0x22c9988b,// 385 PAY 346 

    0x12765876,// 386 PAY 347 

    0x38784a36,// 387 PAY 348 

    0x89de0dfa,// 388 PAY 349 

    0x889fafe2,// 389 PAY 350 

    0x827188fb,// 390 PAY 351 

    0x3675cb2f,// 391 PAY 352 

    0x57f2af32,// 392 PAY 353 

    0x3cc0d9a1,// 393 PAY 354 

    0xa0d39adf,// 394 PAY 355 

    0x3b5fbbf3,// 395 PAY 356 

    0xd31c4544,// 396 PAY 357 

    0x0b236ed4,// 397 PAY 358 

    0xddeaea33,// 398 PAY 359 

    0x62f0fbff,// 399 PAY 360 

    0x5296a89b,// 400 PAY 361 

    0x9cb418f0,// 401 PAY 362 

    0xc4148163,// 402 PAY 363 

    0x2f105c27,// 403 PAY 364 

    0x660b7c07,// 404 PAY 365 

    0x01643565,// 405 PAY 366 

    0x9c9413d5,// 406 PAY 367 

    0xdc99ac87,// 407 PAY 368 

    0xb582ef6e,// 408 PAY 369 

    0xac083e08,// 409 PAY 370 

    0xed721e13,// 410 PAY 371 

    0xaad280a9,// 411 PAY 372 

    0xa90c1b96,// 412 PAY 373 

    0x36e107b3,// 413 PAY 374 

    0xac74e8cc,// 414 PAY 375 

    0x3c971f62,// 415 PAY 376 

    0x73bb0ff2,// 416 PAY 377 

    0xc368fe1a,// 417 PAY 378 

    0x89aacac6,// 418 PAY 379 

    0x818263ec,// 419 PAY 380 

    0xc770234f,// 420 PAY 381 

    0x8d15136c,// 421 PAY 382 

    0x37b995ff,// 422 PAY 383 

    0xd3f8f764,// 423 PAY 384 

    0x261ade06,// 424 PAY 385 

    0xf8868496,// 425 PAY 386 

    0x71e65046,// 426 PAY 387 

    0x6c1bd15c,// 427 PAY 388 

    0xd74da15c,// 428 PAY 389 

    0x3d4812ba,// 429 PAY 390 

    0x276a0159,// 430 PAY 391 

    0x4f676751,// 431 PAY 392 

    0x065e26da,// 432 PAY 393 

    0xd8260b87,// 433 PAY 394 

    0x89bd941f,// 434 PAY 395 

    0x50f97e4d,// 435 PAY 396 

    0x8d428774,// 436 PAY 397 

    0xbc55ea8a,// 437 PAY 398 

    0x94ccb5b2,// 438 PAY 399 

    0x1e82ad1a,// 439 PAY 400 

    0x26f42cad,// 440 PAY 401 

    0x16bb4f67,// 441 PAY 402 

    0x71bcb186,// 442 PAY 403 

    0x75e59f9a,// 443 PAY 404 

    0xd165d466,// 444 PAY 405 

    0x56b7e8f2,// 445 PAY 406 

    0x46838d6d,// 446 PAY 407 

    0xc17766d1,// 447 PAY 408 

    0xde366c32,// 448 PAY 409 

    0x74d6a101,// 449 PAY 410 

    0x11fc4b16,// 450 PAY 411 

    0xaec89687,// 451 PAY 412 

    0x2ae94e41,// 452 PAY 413 

    0x1144fb49,// 453 PAY 414 

    0xd90fb5a8,// 454 PAY 415 

    0x40374c84,// 455 PAY 416 

    0x023912bc,// 456 PAY 417 

    0xe07566b3,// 457 PAY 418 

    0x5ed3097b,// 458 PAY 419 

    0x5a442524,// 459 PAY 420 

    0x116836ae,// 460 PAY 421 

    0xd2dbedbd,// 461 PAY 422 

    0x4285933c,// 462 PAY 423 

    0x7c1662f0,// 463 PAY 424 

    0x3c8b1b40,// 464 PAY 425 

    0x95545f22,// 465 PAY 426 

    0x8480aa38,// 466 PAY 427 

    0xfd219bbd,// 467 PAY 428 

    0x05bc3d82,// 468 PAY 429 

    0xc5e04016,// 469 PAY 430 

    0x21260e1f,// 470 PAY 431 

    0x728828e6,// 471 PAY 432 

    0x573a5d94,// 472 PAY 433 

    0xd822bf2c,// 473 PAY 434 

    0xd8f3d7ff,// 474 PAY 435 

    0xb086f60f,// 475 PAY 436 

    0x4b452f37,// 476 PAY 437 

    0x47adec00,// 477 PAY 438 

/// STA is 1 words. 

/// STA num_pkts       : 84 

/// STA pkt_idx        : 173 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3d 

    0x02b53d54 // 478 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt35_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80612840,// 4 SCX   2 

    0x00002200,// 5 SCX   3 

    0x39f4431d,// 6 SCX   4 

    0x3663c1bd,// 7 SCX   5 

    0x891d902c,// 8 SCX   6 

    0x6f9cdec4,// 9 SCX   7 

    0x3fca4df5,// 10 SCX   8 

    0x73d12d8c,// 11 SCX   9 

    0x0da1626e,// 12 SCX  10 

    0x8228806b,// 13 SCX  11 

    0xe8e32fd7,// 14 SCX  12 

    0x91b64d07,// 15 SCX  13 

    0x0d8b5ce2,// 16 SCX  14 

    0x381f44d7,// 17 SCX  15 

    0xebb111de,// 18 SCX  16 

    0xccf843a0,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1142 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1070 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1070 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 676 

/// BFD (ofst+len)cry  : 828 

/// BFD ofstiv         : 232 

/// BFD ofsticv        : 1100 

    0x0000042e,// 20 BFD   1 

    0x02a40098,// 21 BFD   2 

    0x044c00e8,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00bf35,// 23 MFM   1 

    0x934eb421,// 24 MFM   2 

    0x0cd14b00,// 25 MFM   3 

    0xd45b82bb,// 26 MFM   4 

    0xa5629213,// 27 MFM   5 

    0x1ef5b0f1,// 28 MFM   6 

    0x58254ee8,// 29 MFM   7 

    0x6010b019,// 30 MFM   8 

    0xdab5ce5b,// 31 MFM   9 

    0x997c476a,// 32 MFM  10 

    0xecd151a7,// 33 MFM  11 

    0x2160811f,// 34 MFM  12 

    0x75f3ef53,// 35 MFM  13 

    0x5cd42931,// 36 MFM  14 

    0x7cc1f50a,// 37 MFM  15 

    0x3106f8af,// 38 MFM  16 

/// BDA is 287 words. 

/// BDA size     is 1142 (0x476) 

/// BDA id       is 0x41dc 

    0x047641dc,// 39 BDA   1 

/// PAY Generic Data size   : 1142 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x12d3e180,// 40 PAY   1 

    0x4e27fea8,// 41 PAY   2 

    0x9c2a3f82,// 42 PAY   3 

    0x21665265,// 43 PAY   4 

    0xec1b3d84,// 44 PAY   5 

    0x409e2e81,// 45 PAY   6 

    0xc4924d39,// 46 PAY   7 

    0x6d10b6be,// 47 PAY   8 

    0xc3706033,// 48 PAY   9 

    0x7d6106e7,// 49 PAY  10 

    0x7e13c48f,// 50 PAY  11 

    0x6a86327c,// 51 PAY  12 

    0x672ac703,// 52 PAY  13 

    0xa2fe3488,// 53 PAY  14 

    0xf407aa95,// 54 PAY  15 

    0xc1dbfa38,// 55 PAY  16 

    0xadc0c315,// 56 PAY  17 

    0xa862de1d,// 57 PAY  18 

    0x822b27db,// 58 PAY  19 

    0x92d09a8f,// 59 PAY  20 

    0xb7cdc9c6,// 60 PAY  21 

    0xb95886a4,// 61 PAY  22 

    0x5e226bc8,// 62 PAY  23 

    0x344dc815,// 63 PAY  24 

    0xfd3d44a2,// 64 PAY  25 

    0x5cd7294c,// 65 PAY  26 

    0x91a5d416,// 66 PAY  27 

    0x2bfc53b7,// 67 PAY  28 

    0x195fb51e,// 68 PAY  29 

    0x615fd2df,// 69 PAY  30 

    0x75e63acf,// 70 PAY  31 

    0x60031149,// 71 PAY  32 

    0x39952cd2,// 72 PAY  33 

    0x1b65623f,// 73 PAY  34 

    0xe049387c,// 74 PAY  35 

    0x8b2e10f5,// 75 PAY  36 

    0x6049e618,// 76 PAY  37 

    0x6814296a,// 77 PAY  38 

    0x24ffc449,// 78 PAY  39 

    0x402b73c5,// 79 PAY  40 

    0x5340ed6f,// 80 PAY  41 

    0x0ee34b4d,// 81 PAY  42 

    0x29891d4a,// 82 PAY  43 

    0x05e8d25b,// 83 PAY  44 

    0x03e1693f,// 84 PAY  45 

    0xaf82688e,// 85 PAY  46 

    0xdf7b720a,// 86 PAY  47 

    0xdd7ce800,// 87 PAY  48 

    0xee213ab1,// 88 PAY  49 

    0x9435a69f,// 89 PAY  50 

    0x2859006e,// 90 PAY  51 

    0x247e3b91,// 91 PAY  52 

    0x7cea0222,// 92 PAY  53 

    0x158e89f8,// 93 PAY  54 

    0x2a52e8a0,// 94 PAY  55 

    0x53fd072c,// 95 PAY  56 

    0x16a15d56,// 96 PAY  57 

    0xaf15821e,// 97 PAY  58 

    0x5e319ef7,// 98 PAY  59 

    0xa70bf509,// 99 PAY  60 

    0xac55bcdc,// 100 PAY  61 

    0x2e4719e8,// 101 PAY  62 

    0x39f09d1e,// 102 PAY  63 

    0xf204d219,// 103 PAY  64 

    0x283c3659,// 104 PAY  65 

    0x456232e1,// 105 PAY  66 

    0x7291d62f,// 106 PAY  67 

    0x78c5d141,// 107 PAY  68 

    0xb98066ca,// 108 PAY  69 

    0xb2abd9fa,// 109 PAY  70 

    0xe650da46,// 110 PAY  71 

    0x0d6fae8f,// 111 PAY  72 

    0xb27665e1,// 112 PAY  73 

    0x6c691e42,// 113 PAY  74 

    0xb923d113,// 114 PAY  75 

    0x34d8eeff,// 115 PAY  76 

    0x41d971f1,// 116 PAY  77 

    0x86da9294,// 117 PAY  78 

    0xd02db701,// 118 PAY  79 

    0xc2a5e2b3,// 119 PAY  80 

    0xeb0d0690,// 120 PAY  81 

    0x7c6b8230,// 121 PAY  82 

    0x2d8e3c4f,// 122 PAY  83 

    0xab634c74,// 123 PAY  84 

    0x17d92658,// 124 PAY  85 

    0x50fa97a8,// 125 PAY  86 

    0x4cd94115,// 126 PAY  87 

    0xd20d4a8f,// 127 PAY  88 

    0xd5c403f1,// 128 PAY  89 

    0xd4613fe0,// 129 PAY  90 

    0x087423f8,// 130 PAY  91 

    0x10ee0277,// 131 PAY  92 

    0x2939f281,// 132 PAY  93 

    0x63a0d281,// 133 PAY  94 

    0x652d26ca,// 134 PAY  95 

    0xee564647,// 135 PAY  96 

    0xbe7c7e48,// 136 PAY  97 

    0xd8999ffe,// 137 PAY  98 

    0x818ef1ad,// 138 PAY  99 

    0x54758579,// 139 PAY 100 

    0x2f282e65,// 140 PAY 101 

    0x78aa780d,// 141 PAY 102 

    0xc5aeb73e,// 142 PAY 103 

    0x9be63c2c,// 143 PAY 104 

    0x7ea28529,// 144 PAY 105 

    0x21754c0d,// 145 PAY 106 

    0xe51da996,// 146 PAY 107 

    0xd186ab37,// 147 PAY 108 

    0x2122efd8,// 148 PAY 109 

    0xa7138d5a,// 149 PAY 110 

    0xdb3ced60,// 150 PAY 111 

    0x631de8ab,// 151 PAY 112 

    0x2eb553f2,// 152 PAY 113 

    0x79bd7633,// 153 PAY 114 

    0x504d6db0,// 154 PAY 115 

    0xbe43468c,// 155 PAY 116 

    0xe3a10c20,// 156 PAY 117 

    0x627e413d,// 157 PAY 118 

    0x3dfafce2,// 158 PAY 119 

    0xe5e078b1,// 159 PAY 120 

    0x3086cff4,// 160 PAY 121 

    0x181e5c0b,// 161 PAY 122 

    0xb034153c,// 162 PAY 123 

    0xa351e57f,// 163 PAY 124 

    0x88b19a8d,// 164 PAY 125 

    0xe6052ce4,// 165 PAY 126 

    0xf7eb5bd2,// 166 PAY 127 

    0x0c2eb0d7,// 167 PAY 128 

    0x5b358782,// 168 PAY 129 

    0x70356020,// 169 PAY 130 

    0x0d67189d,// 170 PAY 131 

    0xba77e307,// 171 PAY 132 

    0x3364b670,// 172 PAY 133 

    0xe29b4715,// 173 PAY 134 

    0xd7a164c5,// 174 PAY 135 

    0x62eedb86,// 175 PAY 136 

    0x4df96995,// 176 PAY 137 

    0xf71e28ee,// 177 PAY 138 

    0x0cf7e972,// 178 PAY 139 

    0x0378e741,// 179 PAY 140 

    0xf744cf38,// 180 PAY 141 

    0xd564f15b,// 181 PAY 142 

    0x9367033c,// 182 PAY 143 

    0xa801024b,// 183 PAY 144 

    0xc96d5c7a,// 184 PAY 145 

    0x9c372d55,// 185 PAY 146 

    0xfb4093d4,// 186 PAY 147 

    0x2c3b6208,// 187 PAY 148 

    0x81d9dae2,// 188 PAY 149 

    0x3778083d,// 189 PAY 150 

    0x47faf431,// 190 PAY 151 

    0x17d48cc5,// 191 PAY 152 

    0x97308ed6,// 192 PAY 153 

    0xe7cfdb89,// 193 PAY 154 

    0x18c7c712,// 194 PAY 155 

    0x0b01db2c,// 195 PAY 156 

    0xe2c17c57,// 196 PAY 157 

    0xa491e6b1,// 197 PAY 158 

    0x892cd6fa,// 198 PAY 159 

    0xba168a8b,// 199 PAY 160 

    0x8d07f44b,// 200 PAY 161 

    0xaee747b3,// 201 PAY 162 

    0x37439622,// 202 PAY 163 

    0x831def61,// 203 PAY 164 

    0xd23fe6a6,// 204 PAY 165 

    0x3587bf2e,// 205 PAY 166 

    0xea9f9089,// 206 PAY 167 

    0xd1bdfe66,// 207 PAY 168 

    0xa3efe0d2,// 208 PAY 169 

    0xd75638b7,// 209 PAY 170 

    0x5d5f80e7,// 210 PAY 171 

    0xb348748f,// 211 PAY 172 

    0x51eb1568,// 212 PAY 173 

    0xff7b0272,// 213 PAY 174 

    0x196b1fa0,// 214 PAY 175 

    0xf1ab6459,// 215 PAY 176 

    0x8ca8ef61,// 216 PAY 177 

    0xb4b033d9,// 217 PAY 178 

    0x9cd0cd7f,// 218 PAY 179 

    0x5fa8cb67,// 219 PAY 180 

    0xd930b141,// 220 PAY 181 

    0xd04021ed,// 221 PAY 182 

    0x58f464fb,// 222 PAY 183 

    0x36b816ad,// 223 PAY 184 

    0x591c83d8,// 224 PAY 185 

    0x7681033a,// 225 PAY 186 

    0xe1a9d352,// 226 PAY 187 

    0xcbc1219b,// 227 PAY 188 

    0x63144d30,// 228 PAY 189 

    0xf62b6458,// 229 PAY 190 

    0x8d64e8b7,// 230 PAY 191 

    0x2ad6fc29,// 231 PAY 192 

    0xc5cf54da,// 232 PAY 193 

    0xae4ebdc5,// 233 PAY 194 

    0xe003d924,// 234 PAY 195 

    0x512a7565,// 235 PAY 196 

    0x6eebd7e1,// 236 PAY 197 

    0xdefd448b,// 237 PAY 198 

    0x9645cae9,// 238 PAY 199 

    0x28fb41b6,// 239 PAY 200 

    0x3fea330b,// 240 PAY 201 

    0x4774c588,// 241 PAY 202 

    0x45db5e2f,// 242 PAY 203 

    0x22b06024,// 243 PAY 204 

    0x1cf1479e,// 244 PAY 205 

    0xb3bba31e,// 245 PAY 206 

    0xa49ea42b,// 246 PAY 207 

    0xead4f973,// 247 PAY 208 

    0xedb75cc0,// 248 PAY 209 

    0xfe658c61,// 249 PAY 210 

    0xa2da90e5,// 250 PAY 211 

    0xeb4fe64b,// 251 PAY 212 

    0x16a41172,// 252 PAY 213 

    0x537c5d2d,// 253 PAY 214 

    0x25577f96,// 254 PAY 215 

    0x4d2f45de,// 255 PAY 216 

    0x378ea79a,// 256 PAY 217 

    0x659aec35,// 257 PAY 218 

    0x62cd576d,// 258 PAY 219 

    0xa7dadaaf,// 259 PAY 220 

    0xbdd95317,// 260 PAY 221 

    0x6c0036db,// 261 PAY 222 

    0x83461faf,// 262 PAY 223 

    0x8aebd39d,// 263 PAY 224 

    0xb41d758b,// 264 PAY 225 

    0x22feb7b8,// 265 PAY 226 

    0x35cfb5d0,// 266 PAY 227 

    0x2e02a379,// 267 PAY 228 

    0x399ff76c,// 268 PAY 229 

    0xb7f79c05,// 269 PAY 230 

    0x151d00f6,// 270 PAY 231 

    0x1d748789,// 271 PAY 232 

    0xb47fb179,// 272 PAY 233 

    0xc165ee72,// 273 PAY 234 

    0x2c3a19c4,// 274 PAY 235 

    0xc39f36e6,// 275 PAY 236 

    0x283d77b7,// 276 PAY 237 

    0x9a6d6463,// 277 PAY 238 

    0x02d9002b,// 278 PAY 239 

    0x562d07a6,// 279 PAY 240 

    0x0b9cb7cf,// 280 PAY 241 

    0xbae2f6be,// 281 PAY 242 

    0x1e5eb07d,// 282 PAY 243 

    0x34b6a1ac,// 283 PAY 244 

    0x62ac86fd,// 284 PAY 245 

    0xc6b6ed34,// 285 PAY 246 

    0xa50751ff,// 286 PAY 247 

    0xc84142f3,// 287 PAY 248 

    0xa3a25d6a,// 288 PAY 249 

    0xf41280f1,// 289 PAY 250 

    0x23b94d5f,// 290 PAY 251 

    0x16358dc3,// 291 PAY 252 

    0x74cc3a77,// 292 PAY 253 

    0x42988ca4,// 293 PAY 254 

    0x36d3e27f,// 294 PAY 255 

    0x9a8cd1a3,// 295 PAY 256 

    0xe71d26cf,// 296 PAY 257 

    0x5109591d,// 297 PAY 258 

    0x7de66e6e,// 298 PAY 259 

    0xabdf2061,// 299 PAY 260 

    0x7b8999f4,// 300 PAY 261 

    0xa0e716e8,// 301 PAY 262 

    0x73b93e9f,// 302 PAY 263 

    0x68163a4b,// 303 PAY 264 

    0x732b3373,// 304 PAY 265 

    0x314e631c,// 305 PAY 266 

    0x0a704cc3,// 306 PAY 267 

    0xd4b94b3c,// 307 PAY 268 

    0xe58310d1,// 308 PAY 269 

    0xfc0e46b0,// 309 PAY 270 

    0xf5e0c104,// 310 PAY 271 

    0x2e7697a9,// 311 PAY 272 

    0xd63a495b,// 312 PAY 273 

    0xa8fd770f,// 313 PAY 274 

    0x3f780201,// 314 PAY 275 

    0xe0032b81,// 315 PAY 276 

    0x5c869332,// 316 PAY 277 

    0xf453fae4,// 317 PAY 278 

    0x83d6de1d,// 318 PAY 279 

    0x00c1ea8f,// 319 PAY 280 

    0xd1f6fc07,// 320 PAY 281 

    0x0852b756,// 321 PAY 282 

    0xe10e5a04,// 322 PAY 283 

    0x268f8199,// 323 PAY 284 

    0x64c5374a,// 324 PAY 285 

    0x08cf0000,// 325 PAY 286 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 7 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xfa 

    0x001cfad6 // 326 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt36_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80652879,// 4 SCX   2 

    0x00005342,// 5 SCX   3 

    0xe6009d69,// 6 SCX   4 

    0x2efd22ce,// 7 SCX   5 

    0x46ed1c19,// 8 SCX   6 

    0x38150954,// 9 SCX   7 

    0xc9e2ae96,// 10 SCX   8 

    0xfe07e242,// 11 SCX   9 

    0x125f9b8e,// 12 SCX  10 

    0x2e335692,// 13 SCX  11 

    0xd3ef644e,// 14 SCX  12 

    0x8481f719,// 15 SCX  13 

    0xadfa66d7,// 16 SCX  14 

    0x4b6797c5,// 17 SCX  15 

    0x0238487a,// 18 SCX  16 

    0x3e0acbfc,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 2018 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1001 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1001 

/// BFD lencrypto      : 224 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 316 

/// BFD ofstiv         : 84 

/// BFD ofsticv        : 1908 

    0x000003e9,// 20 BFD   1 

    0x005c00e0,// 21 BFD   2 

    0x07740054,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00bc95,// 23 MFM   1 

    0x3f3bf411,// 24 MFM   2 

    0x3d66b62b,// 25 MFM   3 

    0xf3edf822,// 26 MFM   4 

    0xdbfad767,// 27 MFM   5 

    0x031bdf36,// 28 MFM   6 

    0xe7c21d4f,// 29 MFM   7 

    0x487f0dec,// 30 MFM   8 

    0xc953f18e,// 31 MFM   9 

    0x5287a7fd,// 32 MFM  10 

    0x2a9bc24e,// 33 MFM  11 

    0x2f94bd95,// 34 MFM  12 

    0x447b5456,// 35 MFM  13 

    0x1b2b9bb2,// 36 MFM  14 

    0x9f2fc8c7,// 37 MFM  15 

    0xec39e767,// 38 MFM  16 

/// BDA is 506 words. 

/// BDA size     is 2018 (0x7e2) 

/// BDA id       is 0xda48 

    0x07e2da48,// 39 BDA   1 

/// PAY Generic Data size   : 2018 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa99a9fc3,// 40 PAY   1 

    0x2d793b24,// 41 PAY   2 

    0xcc4e0838,// 42 PAY   3 

    0xacfc823c,// 43 PAY   4 

    0xf85c8b99,// 44 PAY   5 

    0xc5c35769,// 45 PAY   6 

    0xfd49b5c9,// 46 PAY   7 

    0xa15161ed,// 47 PAY   8 

    0x60056d3d,// 48 PAY   9 

    0x2378f733,// 49 PAY  10 

    0x4b542ee2,// 50 PAY  11 

    0x26f81d2a,// 51 PAY  12 

    0x95778f69,// 52 PAY  13 

    0x1ace4d7d,// 53 PAY  14 

    0x780527be,// 54 PAY  15 

    0x79f979c4,// 55 PAY  16 

    0xc2c52ec6,// 56 PAY  17 

    0xe8b61cde,// 57 PAY  18 

    0x37f5daaf,// 58 PAY  19 

    0xc9efd3c5,// 59 PAY  20 

    0xdf0b4a6a,// 60 PAY  21 

    0x888dcd57,// 61 PAY  22 

    0x314a70b9,// 62 PAY  23 

    0xc4b73058,// 63 PAY  24 

    0xba8431e0,// 64 PAY  25 

    0x843cc341,// 65 PAY  26 

    0xda9df3a5,// 66 PAY  27 

    0x9d99152a,// 67 PAY  28 

    0xa837c4cb,// 68 PAY  29 

    0xcb6cb308,// 69 PAY  30 

    0xe0a0be5d,// 70 PAY  31 

    0xb993b4fb,// 71 PAY  32 

    0x73cf640d,// 72 PAY  33 

    0x974b42ac,// 73 PAY  34 

    0xaa51b658,// 74 PAY  35 

    0xf9c1675b,// 75 PAY  36 

    0x4120d698,// 76 PAY  37 

    0x05dc213c,// 77 PAY  38 

    0x235249d0,// 78 PAY  39 

    0xb751a95d,// 79 PAY  40 

    0x4ca7690e,// 80 PAY  41 

    0x0bc8713c,// 81 PAY  42 

    0xa279982a,// 82 PAY  43 

    0xe294b809,// 83 PAY  44 

    0x4c23c5ba,// 84 PAY  45 

    0xb1e3fa0e,// 85 PAY  46 

    0xe50be557,// 86 PAY  47 

    0xfa1fcbdd,// 87 PAY  48 

    0x8ac49ae8,// 88 PAY  49 

    0xde2a4109,// 89 PAY  50 

    0xa0eca0c3,// 90 PAY  51 

    0x1b6b1399,// 91 PAY  52 

    0x2500128c,// 92 PAY  53 

    0xd6227990,// 93 PAY  54 

    0x17450e37,// 94 PAY  55 

    0x25b24926,// 95 PAY  56 

    0x9be52bf4,// 96 PAY  57 

    0x38093ddf,// 97 PAY  58 

    0x3ee9e757,// 98 PAY  59 

    0x06df1b82,// 99 PAY  60 

    0x61a6b09a,// 100 PAY  61 

    0x49043de5,// 101 PAY  62 

    0xd2350010,// 102 PAY  63 

    0x44330bfa,// 103 PAY  64 

    0x7e3c5a6b,// 104 PAY  65 

    0xf834b11e,// 105 PAY  66 

    0x776b53a5,// 106 PAY  67 

    0xf405bd8e,// 107 PAY  68 

    0xd3bc4fb1,// 108 PAY  69 

    0x1a522c8d,// 109 PAY  70 

    0x26e00415,// 110 PAY  71 

    0x98c3f10b,// 111 PAY  72 

    0x672f649f,// 112 PAY  73 

    0x15ecae93,// 113 PAY  74 

    0x290541d1,// 114 PAY  75 

    0x4583bf7a,// 115 PAY  76 

    0x6055cc25,// 116 PAY  77 

    0x5e75fdcc,// 117 PAY  78 

    0x0fe33ebd,// 118 PAY  79 

    0xee13c9d8,// 119 PAY  80 

    0x015b72a4,// 120 PAY  81 

    0x75368370,// 121 PAY  82 

    0x06bd1442,// 122 PAY  83 

    0x04ad5142,// 123 PAY  84 

    0xef211270,// 124 PAY  85 

    0x5207aa28,// 125 PAY  86 

    0x37ed3e1d,// 126 PAY  87 

    0x4b5cf2b9,// 127 PAY  88 

    0x870b2af2,// 128 PAY  89 

    0x4a3c9a55,// 129 PAY  90 

    0x9acd9659,// 130 PAY  91 

    0xdf7c9829,// 131 PAY  92 

    0xc20c84fa,// 132 PAY  93 

    0x34a94eb8,// 133 PAY  94 

    0x8b19d8b2,// 134 PAY  95 

    0x59b454c8,// 135 PAY  96 

    0x9cc82386,// 136 PAY  97 

    0xf637c6b2,// 137 PAY  98 

    0xa4fb8512,// 138 PAY  99 

    0x12e9e44c,// 139 PAY 100 

    0xcaf02f19,// 140 PAY 101 

    0x8a8754b0,// 141 PAY 102 

    0x302c32c5,// 142 PAY 103 

    0x2d7e9efe,// 143 PAY 104 

    0x868d5c01,// 144 PAY 105 

    0xc6031c90,// 145 PAY 106 

    0x2749fed5,// 146 PAY 107 

    0xa404911c,// 147 PAY 108 

    0x2596d519,// 148 PAY 109 

    0xf9c37ba7,// 149 PAY 110 

    0x492430f1,// 150 PAY 111 

    0xe85075aa,// 151 PAY 112 

    0x4df9d25a,// 152 PAY 113 

    0xe7dbb4d2,// 153 PAY 114 

    0x2dc33677,// 154 PAY 115 

    0xd0778dc7,// 155 PAY 116 

    0x7e7ba748,// 156 PAY 117 

    0x66888604,// 157 PAY 118 

    0x44beba7c,// 158 PAY 119 

    0x1566b695,// 159 PAY 120 

    0x72c369c8,// 160 PAY 121 

    0x10c267d7,// 161 PAY 122 

    0x18adea9c,// 162 PAY 123 

    0x88420930,// 163 PAY 124 

    0x5bdc912c,// 164 PAY 125 

    0x0c8663da,// 165 PAY 126 

    0x02427f8b,// 166 PAY 127 

    0xa8ae4598,// 167 PAY 128 

    0x9fd77510,// 168 PAY 129 

    0xdc33d748,// 169 PAY 130 

    0x0b7cd491,// 170 PAY 131 

    0xddbd3201,// 171 PAY 132 

    0x349f76d1,// 172 PAY 133 

    0xa4bf0f54,// 173 PAY 134 

    0x86450c88,// 174 PAY 135 

    0x331135ee,// 175 PAY 136 

    0x092f0aaa,// 176 PAY 137 

    0xc08b19f3,// 177 PAY 138 

    0xe4ea32c3,// 178 PAY 139 

    0xdf0597ac,// 179 PAY 140 

    0x9332fa23,// 180 PAY 141 

    0x9f682c16,// 181 PAY 142 

    0x12e6bd2a,// 182 PAY 143 

    0x83eeeb7f,// 183 PAY 144 

    0x013d6cee,// 184 PAY 145 

    0xed077720,// 185 PAY 146 

    0x286fd9d1,// 186 PAY 147 

    0x373d3e18,// 187 PAY 148 

    0x05507c46,// 188 PAY 149 

    0xdee1eb01,// 189 PAY 150 

    0xe524699e,// 190 PAY 151 

    0xb9ed988a,// 191 PAY 152 

    0xecffe644,// 192 PAY 153 

    0xba382615,// 193 PAY 154 

    0x674a20b8,// 194 PAY 155 

    0x34b7e0ba,// 195 PAY 156 

    0x4a4238ac,// 196 PAY 157 

    0x80f7aad4,// 197 PAY 158 

    0x33ec42f2,// 198 PAY 159 

    0x246953fa,// 199 PAY 160 

    0x42dc9453,// 200 PAY 161 

    0xbd4593ba,// 201 PAY 162 

    0x2eafb682,// 202 PAY 163 

    0x994f83b0,// 203 PAY 164 

    0x68fca5b4,// 204 PAY 165 

    0x1e51dd88,// 205 PAY 166 

    0x7d158fff,// 206 PAY 167 

    0x3e3c66b4,// 207 PAY 168 

    0xb4e89601,// 208 PAY 169 

    0xe50a873a,// 209 PAY 170 

    0x56b51668,// 210 PAY 171 

    0x82a949b9,// 211 PAY 172 

    0xcf85cf6e,// 212 PAY 173 

    0x8483a78c,// 213 PAY 174 

    0xf77005ce,// 214 PAY 175 

    0x89453741,// 215 PAY 176 

    0x35a6212d,// 216 PAY 177 

    0x4188ae53,// 217 PAY 178 

    0x53109139,// 218 PAY 179 

    0x688b60de,// 219 PAY 180 

    0xb26d5207,// 220 PAY 181 

    0xd979cbe0,// 221 PAY 182 

    0x877ffa18,// 222 PAY 183 

    0x289aa95d,// 223 PAY 184 

    0xaa489736,// 224 PAY 185 

    0x457bd882,// 225 PAY 186 

    0x5f9e83ee,// 226 PAY 187 

    0xc0fbfe3f,// 227 PAY 188 

    0x5614cc74,// 228 PAY 189 

    0xc1954565,// 229 PAY 190 

    0x2dc693a9,// 230 PAY 191 

    0xf9057d40,// 231 PAY 192 

    0xdf5bda80,// 232 PAY 193 

    0x8b232273,// 233 PAY 194 

    0xa7e088d8,// 234 PAY 195 

    0x22b92393,// 235 PAY 196 

    0x90b118fe,// 236 PAY 197 

    0xfc8113de,// 237 PAY 198 

    0x9a557a81,// 238 PAY 199 

    0xd4591149,// 239 PAY 200 

    0xd76b35a1,// 240 PAY 201 

    0x14ffb0f3,// 241 PAY 202 

    0x8ded7388,// 242 PAY 203 

    0x43df54c5,// 243 PAY 204 

    0xa28a8787,// 244 PAY 205 

    0x5e191b76,// 245 PAY 206 

    0xb5e462b3,// 246 PAY 207 

    0xe66ddd28,// 247 PAY 208 

    0xae2489a1,// 248 PAY 209 

    0xa7366bd5,// 249 PAY 210 

    0xd0ab396e,// 250 PAY 211 

    0x83c12459,// 251 PAY 212 

    0x93514a95,// 252 PAY 213 

    0x53f441c4,// 253 PAY 214 

    0x4bbbab34,// 254 PAY 215 

    0x42c145c1,// 255 PAY 216 

    0xeb529e17,// 256 PAY 217 

    0x73ad364b,// 257 PAY 218 

    0xa4287dd9,// 258 PAY 219 

    0xff0b1a86,// 259 PAY 220 

    0xd6edc392,// 260 PAY 221 

    0xc523fa07,// 261 PAY 222 

    0x02c7d024,// 262 PAY 223 

    0xa2e98ab6,// 263 PAY 224 

    0x3404c55e,// 264 PAY 225 

    0xed8c3379,// 265 PAY 226 

    0x043bf689,// 266 PAY 227 

    0x8a2d9ed2,// 267 PAY 228 

    0xab52c933,// 268 PAY 229 

    0x3576fef7,// 269 PAY 230 

    0x3de63b26,// 270 PAY 231 

    0xc8907638,// 271 PAY 232 

    0x4d47370a,// 272 PAY 233 

    0xea8c6ef3,// 273 PAY 234 

    0xdd237b07,// 274 PAY 235 

    0xcc9e318d,// 275 PAY 236 

    0xd2e00c73,// 276 PAY 237 

    0x6d7d18ba,// 277 PAY 238 

    0x78ef0c89,// 278 PAY 239 

    0xe6a93253,// 279 PAY 240 

    0x742dc0d7,// 280 PAY 241 

    0x163e9cd9,// 281 PAY 242 

    0x85138daa,// 282 PAY 243 

    0x11c5a6c9,// 283 PAY 244 

    0x1ff947ba,// 284 PAY 245 

    0xe2cb008f,// 285 PAY 246 

    0x9ac3cbd3,// 286 PAY 247 

    0xcf96ff4e,// 287 PAY 248 

    0x5cde7d9e,// 288 PAY 249 

    0xa041242f,// 289 PAY 250 

    0xce91deb6,// 290 PAY 251 

    0xf7a075df,// 291 PAY 252 

    0x8bfc4dc5,// 292 PAY 253 

    0x09743f8b,// 293 PAY 254 

    0x9ca1f7af,// 294 PAY 255 

    0x07c95f32,// 295 PAY 256 

    0x941a742c,// 296 PAY 257 

    0x52f2c505,// 297 PAY 258 

    0x8c717513,// 298 PAY 259 

    0x7d114fd5,// 299 PAY 260 

    0x04193995,// 300 PAY 261 

    0x1bb58c9c,// 301 PAY 262 

    0xcfbeb79e,// 302 PAY 263 

    0xa3a777c7,// 303 PAY 264 

    0x37d1d3c5,// 304 PAY 265 

    0xf5ac4b3a,// 305 PAY 266 

    0x7fc9549e,// 306 PAY 267 

    0xc0028a41,// 307 PAY 268 

    0x318caebd,// 308 PAY 269 

    0xf33194de,// 309 PAY 270 

    0xf8070721,// 310 PAY 271 

    0xba9e9fb9,// 311 PAY 272 

    0x340e1c88,// 312 PAY 273 

    0xeefb0350,// 313 PAY 274 

    0x6de9555d,// 314 PAY 275 

    0x99dff289,// 315 PAY 276 

    0x5a65e188,// 316 PAY 277 

    0x81624a9d,// 317 PAY 278 

    0xd23d4dd0,// 318 PAY 279 

    0x7f27a065,// 319 PAY 280 

    0x3eb63a8f,// 320 PAY 281 

    0x5e47e6ff,// 321 PAY 282 

    0x8b6575ae,// 322 PAY 283 

    0x439428a8,// 323 PAY 284 

    0xdc3f413c,// 324 PAY 285 

    0xb02aa103,// 325 PAY 286 

    0xa87d40ea,// 326 PAY 287 

    0x7f665465,// 327 PAY 288 

    0xe4922c2c,// 328 PAY 289 

    0x009cdd3a,// 329 PAY 290 

    0x3c6d14bd,// 330 PAY 291 

    0x49bf5e78,// 331 PAY 292 

    0xcc53e25f,// 332 PAY 293 

    0xe4d9c1cf,// 333 PAY 294 

    0xef256d9f,// 334 PAY 295 

    0x981af0b0,// 335 PAY 296 

    0xc39104be,// 336 PAY 297 

    0xa3c705db,// 337 PAY 298 

    0x4639a7d1,// 338 PAY 299 

    0x8ea8355f,// 339 PAY 300 

    0x642f54bc,// 340 PAY 301 

    0x070c33ab,// 341 PAY 302 

    0xeac31928,// 342 PAY 303 

    0x742c1f25,// 343 PAY 304 

    0x0075466a,// 344 PAY 305 

    0xef8421cc,// 345 PAY 306 

    0x5837074b,// 346 PAY 307 

    0x8fd347a6,// 347 PAY 308 

    0xf847658e,// 348 PAY 309 

    0x24ff00b7,// 349 PAY 310 

    0x3a024f73,// 350 PAY 311 

    0x39dac282,// 351 PAY 312 

    0x454fb5b1,// 352 PAY 313 

    0xd5a7a97b,// 353 PAY 314 

    0xdb488102,// 354 PAY 315 

    0x2b257695,// 355 PAY 316 

    0x094dbb3f,// 356 PAY 317 

    0x111111de,// 357 PAY 318 

    0xb69bb39f,// 358 PAY 319 

    0x2c200f0b,// 359 PAY 320 

    0xc34b42e1,// 360 PAY 321 

    0xdb707342,// 361 PAY 322 

    0x202fe9e2,// 362 PAY 323 

    0xe6239ba8,// 363 PAY 324 

    0x48980e12,// 364 PAY 325 

    0xdff5b057,// 365 PAY 326 

    0xac345ced,// 366 PAY 327 

    0xd0c5d626,// 367 PAY 328 

    0xa9abb0ec,// 368 PAY 329 

    0x7aaffd01,// 369 PAY 330 

    0x78ff7fed,// 370 PAY 331 

    0x9abe8881,// 371 PAY 332 

    0xf4e2125d,// 372 PAY 333 

    0xd891f4de,// 373 PAY 334 

    0xd56a8174,// 374 PAY 335 

    0x0df4bb4d,// 375 PAY 336 

    0xb4d6a385,// 376 PAY 337 

    0xfed43e67,// 377 PAY 338 

    0x58587096,// 378 PAY 339 

    0x4f82db3f,// 379 PAY 340 

    0xb801c09c,// 380 PAY 341 

    0xc0b9b0aa,// 381 PAY 342 

    0xfa822306,// 382 PAY 343 

    0xa08906e2,// 383 PAY 344 

    0x8c8325df,// 384 PAY 345 

    0x08eeb756,// 385 PAY 346 

    0x7483e803,// 386 PAY 347 

    0x0736acef,// 387 PAY 348 

    0xcc2135bb,// 388 PAY 349 

    0x7d3f31ff,// 389 PAY 350 

    0xb37f9211,// 390 PAY 351 

    0xf1c88eeb,// 391 PAY 352 

    0xe800f012,// 392 PAY 353 

    0xb291de34,// 393 PAY 354 

    0x686734d7,// 394 PAY 355 

    0x83b8cc25,// 395 PAY 356 

    0x98f95149,// 396 PAY 357 

    0x2d775dee,// 397 PAY 358 

    0x3cde4ba5,// 398 PAY 359 

    0x9959d9fe,// 399 PAY 360 

    0xc1b711e6,// 400 PAY 361 

    0x2e02d654,// 401 PAY 362 

    0x01be395d,// 402 PAY 363 

    0xebbbf3c2,// 403 PAY 364 

    0x8506a3f5,// 404 PAY 365 

    0x3cfdd87e,// 405 PAY 366 

    0x510891a1,// 406 PAY 367 

    0x04d29623,// 407 PAY 368 

    0x97ec115f,// 408 PAY 369 

    0xd3649ae5,// 409 PAY 370 

    0x4fb7a429,// 410 PAY 371 

    0x28f4d97a,// 411 PAY 372 

    0x09a43eb5,// 412 PAY 373 

    0xac609d6c,// 413 PAY 374 

    0x31e37f16,// 414 PAY 375 

    0x1f86829d,// 415 PAY 376 

    0x0cc21463,// 416 PAY 377 

    0xe50d48a5,// 417 PAY 378 

    0x2503d36e,// 418 PAY 379 

    0x313d7d5b,// 419 PAY 380 

    0x485e1ae1,// 420 PAY 381 

    0xf560ab64,// 421 PAY 382 

    0xcedd1ca2,// 422 PAY 383 

    0x2df9702a,// 423 PAY 384 

    0x90c8f06d,// 424 PAY 385 

    0xc312828d,// 425 PAY 386 

    0x1597ec15,// 426 PAY 387 

    0x212013ba,// 427 PAY 388 

    0x4eb2dea2,// 428 PAY 389 

    0x707674e0,// 429 PAY 390 

    0xce3b5cf1,// 430 PAY 391 

    0x09400d9c,// 431 PAY 392 

    0xf96d329d,// 432 PAY 393 

    0xbd1dc68b,// 433 PAY 394 

    0x692d9f99,// 434 PAY 395 

    0x6da97b0e,// 435 PAY 396 

    0xfda48aca,// 436 PAY 397 

    0xe8a059a2,// 437 PAY 398 

    0x7f3d9221,// 438 PAY 399 

    0x92016f3d,// 439 PAY 400 

    0x20ef65a9,// 440 PAY 401 

    0xe7faf5fc,// 441 PAY 402 

    0x617cb335,// 442 PAY 403 

    0x0b9baa6b,// 443 PAY 404 

    0x78107619,// 444 PAY 405 

    0x27911ee8,// 445 PAY 406 

    0x51f8f823,// 446 PAY 407 

    0xa98e5aee,// 447 PAY 408 

    0x06121f9d,// 448 PAY 409 

    0x45e01e5c,// 449 PAY 410 

    0x3a7cac98,// 450 PAY 411 

    0x24cc67c8,// 451 PAY 412 

    0x7c53579d,// 452 PAY 413 

    0xb729f9a7,// 453 PAY 414 

    0xc7650f23,// 454 PAY 415 

    0x64d5a972,// 455 PAY 416 

    0xad3e53c6,// 456 PAY 417 

    0x6184caea,// 457 PAY 418 

    0x6ae7912b,// 458 PAY 419 

    0x88423ceb,// 459 PAY 420 

    0x969def02,// 460 PAY 421 

    0x810c71bd,// 461 PAY 422 

    0xfd7e6d8b,// 462 PAY 423 

    0x6e33e05e,// 463 PAY 424 

    0xd2a5827a,// 464 PAY 425 

    0xb8943cb7,// 465 PAY 426 

    0xd623c823,// 466 PAY 427 

    0x81f7aeaa,// 467 PAY 428 

    0x006fcb2a,// 468 PAY 429 

    0xca73b8d1,// 469 PAY 430 

    0x45258ad8,// 470 PAY 431 

    0x5d0242c4,// 471 PAY 432 

    0xd9180b63,// 472 PAY 433 

    0xe2ac5c9f,// 473 PAY 434 

    0x74f83b9a,// 474 PAY 435 

    0xcbd52057,// 475 PAY 436 

    0x77cb2dfc,// 476 PAY 437 

    0x0a1dabde,// 477 PAY 438 

    0x0330328a,// 478 PAY 439 

    0xb928330d,// 479 PAY 440 

    0x048f83f9,// 480 PAY 441 

    0xa90fc135,// 481 PAY 442 

    0x01139ee0,// 482 PAY 443 

    0x0463bede,// 483 PAY 444 

    0x3308d0a2,// 484 PAY 445 

    0x00cb7bb7,// 485 PAY 446 

    0xc2c1d325,// 486 PAY 447 

    0x70a56cdf,// 487 PAY 448 

    0x35a26485,// 488 PAY 449 

    0x3ed70dd2,// 489 PAY 450 

    0xa8830d11,// 490 PAY 451 

    0x60fc214c,// 491 PAY 452 

    0xe74a7ac2,// 492 PAY 453 

    0xba26baff,// 493 PAY 454 

    0x9629dcb9,// 494 PAY 455 

    0xeb943f2b,// 495 PAY 456 

    0x719f3e71,// 496 PAY 457 

    0x063df3fe,// 497 PAY 458 

    0xdc6920ad,// 498 PAY 459 

    0xbd096e5d,// 499 PAY 460 

    0x1837bda2,// 500 PAY 461 

    0x4d5c0771,// 501 PAY 462 

    0x450c0c15,// 502 PAY 463 

    0xad50db61,// 503 PAY 464 

    0xe30b1739,// 504 PAY 465 

    0x2aae2ab0,// 505 PAY 466 

    0x080cd3c0,// 506 PAY 467 

    0x50ccd98c,// 507 PAY 468 

    0xf59bcfc9,// 508 PAY 469 

    0xa6a29821,// 509 PAY 470 

    0xf72e28e3,// 510 PAY 471 

    0x12411e9b,// 511 PAY 472 

    0x67f63079,// 512 PAY 473 

    0x6ff2ee0c,// 513 PAY 474 

    0x338a9c54,// 514 PAY 475 

    0x2b9675c2,// 515 PAY 476 

    0xf449cf15,// 516 PAY 477 

    0xc8fd608f,// 517 PAY 478 

    0xc6799468,// 518 PAY 479 

    0x900ddcfb,// 519 PAY 480 

    0xd5be6c18,// 520 PAY 481 

    0x67069072,// 521 PAY 482 

    0xcdb8902a,// 522 PAY 483 

    0x7a9a32de,// 523 PAY 484 

    0x6dc0204d,// 524 PAY 485 

    0x2cb331a6,// 525 PAY 486 

    0x111a02cb,// 526 PAY 487 

    0xa000773c,// 527 PAY 488 

    0xea937fb6,// 528 PAY 489 

    0xdbffe4e1,// 529 PAY 490 

    0x85d49d20,// 530 PAY 491 

    0x3b7be657,// 531 PAY 492 

    0xc800a305,// 532 PAY 493 

    0x5343717f,// 533 PAY 494 

    0xbdebf321,// 534 PAY 495 

    0x761c3464,// 535 PAY 496 

    0x0b2b9626,// 536 PAY 497 

    0x3ffa9ddd,// 537 PAY 498 

    0x91ca9822,// 538 PAY 499 

    0x762e0cb6,// 539 PAY 500 

    0x965bfdc3,// 540 PAY 501 

    0x4d63d4a5,// 541 PAY 502 

    0x0227d28d,// 542 PAY 503 

    0x91f0ce97,// 543 PAY 504 

    0x58ed0000,// 544 PAY 505 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x32 

    0x03f932b2 // 545 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt37_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806128cd,// 4 SCX   2 

    0x00004100,// 5 SCX   3 

    0xe66fc8c8,// 6 SCX   4 

    0xcaf8e88b,// 7 SCX   5 

    0x7fa6cc30,// 8 SCX   6 

    0xa951ec99,// 9 SCX   7 

    0x55f2d818,// 10 SCX   8 

    0xd4826d8d,// 11 SCX   9 

    0x28e554c1,// 12 SCX  10 

    0x922e3602,// 13 SCX  11 

    0xf8367c96,// 14 SCX  12 

    0xe04e6973,// 15 SCX  13 

    0xb00cf875,// 16 SCX  14 

    0x15093b5b,// 17 SCX  15 

    0xfac28223,// 18 SCX  16 

    0x1963de71,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1994 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1507 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1507 

/// BFD lencrypto      : 952 

/// BFD ofstcrypto     : 244 

/// BFD (ofst+len)cry  : 1196 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 1820 

    0x000005e3,// 20 BFD   1 

    0x00f403b8,// 21 BFD   2 

    0x071c0004,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c007e77,// 23 MFM   1 

    0xc09f58b7,// 24 MFM   2 

    0x112e0376,// 25 MFM   3 

    0x340d1075,// 26 MFM   4 

    0x3c7f706e,// 27 MFM   5 

    0x8c95303a,// 28 MFM   6 

    0xf8573eb9,// 29 MFM   7 

    0x639b52fe,// 30 MFM   8 

    0x927cc7e5,// 31 MFM   9 

    0x035e9a88,// 32 MFM  10 

    0xcc2fa51c,// 33 MFM  11 

    0x31e524d4,// 34 MFM  12 

    0x4bfab0a0,// 35 MFM  13 

    0xf0e14f12,// 36 MFM  14 

    0xae6e1439,// 37 MFM  15 

    0xe52552b0,// 38 MFM  16 

/// BDA is 500 words. 

/// BDA size     is 1994 (0x7ca) 

/// BDA id       is 0x1608 

    0x07ca1608,// 39 BDA   1 

/// PAY Generic Data size   : 1994 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa9049b54,// 40 PAY   1 

    0xf10eb311,// 41 PAY   2 

    0x258a24f4,// 42 PAY   3 

    0x01aca27a,// 43 PAY   4 

    0x91864d1a,// 44 PAY   5 

    0xba83aee2,// 45 PAY   6 

    0x6fc71baf,// 46 PAY   7 

    0x42e99a96,// 47 PAY   8 

    0x4726736a,// 48 PAY   9 

    0xbb2e5108,// 49 PAY  10 

    0xda13aaac,// 50 PAY  11 

    0x6fce0a3e,// 51 PAY  12 

    0x2886eb68,// 52 PAY  13 

    0x82da17f7,// 53 PAY  14 

    0x48beb3cd,// 54 PAY  15 

    0x5eea6033,// 55 PAY  16 

    0x365521f5,// 56 PAY  17 

    0x015dd40a,// 57 PAY  18 

    0x0eea7dc6,// 58 PAY  19 

    0x7fa3949d,// 59 PAY  20 

    0xde551d52,// 60 PAY  21 

    0x739c5ca4,// 61 PAY  22 

    0x7df26ef2,// 62 PAY  23 

    0x74ffa896,// 63 PAY  24 

    0x4331d89a,// 64 PAY  25 

    0x7dbc09a0,// 65 PAY  26 

    0xc28fa981,// 66 PAY  27 

    0x42e8f73d,// 67 PAY  28 

    0x43cb69b4,// 68 PAY  29 

    0xc0b7421b,// 69 PAY  30 

    0x2eb5fe59,// 70 PAY  31 

    0x56590717,// 71 PAY  32 

    0x0a7ef424,// 72 PAY  33 

    0xe01dfc8d,// 73 PAY  34 

    0x13d4e9f7,// 74 PAY  35 

    0xc7394764,// 75 PAY  36 

    0xed7c8f6a,// 76 PAY  37 

    0x0996a4cd,// 77 PAY  38 

    0x11f3b0f0,// 78 PAY  39 

    0x2a6720ed,// 79 PAY  40 

    0x6f3ce026,// 80 PAY  41 

    0xbeaca972,// 81 PAY  42 

    0xaa3bce02,// 82 PAY  43 

    0x00c54c9c,// 83 PAY  44 

    0xd7b39983,// 84 PAY  45 

    0xfeafb6f4,// 85 PAY  46 

    0xb7224df8,// 86 PAY  47 

    0xb2a01604,// 87 PAY  48 

    0x1abae8eb,// 88 PAY  49 

    0x8e6f4512,// 89 PAY  50 

    0xc576693b,// 90 PAY  51 

    0x028468a2,// 91 PAY  52 

    0x00733a41,// 92 PAY  53 

    0xe612a0b4,// 93 PAY  54 

    0x592bfa14,// 94 PAY  55 

    0x3f312c6a,// 95 PAY  56 

    0xb0819426,// 96 PAY  57 

    0x01551127,// 97 PAY  58 

    0xd88252b2,// 98 PAY  59 

    0xa89c2afd,// 99 PAY  60 

    0xf327ae9e,// 100 PAY  61 

    0xc0a244be,// 101 PAY  62 

    0xf8e0cadc,// 102 PAY  63 

    0xaaf8bf69,// 103 PAY  64 

    0xb665ce6b,// 104 PAY  65 

    0x4602456b,// 105 PAY  66 

    0x8191da33,// 106 PAY  67 

    0x6488b5ac,// 107 PAY  68 

    0x7cc3e269,// 108 PAY  69 

    0x3868443e,// 109 PAY  70 

    0x43b60dd7,// 110 PAY  71 

    0x1042b445,// 111 PAY  72 

    0x4cc9bb4a,// 112 PAY  73 

    0x6fb2d83a,// 113 PAY  74 

    0x4c3f623d,// 114 PAY  75 

    0xbf37e4be,// 115 PAY  76 

    0x96141243,// 116 PAY  77 

    0xb32b9ebb,// 117 PAY  78 

    0xbf67e551,// 118 PAY  79 

    0xd672ac93,// 119 PAY  80 

    0x87babb96,// 120 PAY  81 

    0x67da2a20,// 121 PAY  82 

    0xc519f75a,// 122 PAY  83 

    0x8d510ac1,// 123 PAY  84 

    0xcb4673dd,// 124 PAY  85 

    0xad4246e1,// 125 PAY  86 

    0xa63c8e9a,// 126 PAY  87 

    0x8d774951,// 127 PAY  88 

    0x5b67cacb,// 128 PAY  89 

    0x111f44b2,// 129 PAY  90 

    0x157345bb,// 130 PAY  91 

    0x373ef9b9,// 131 PAY  92 

    0x3cbd852b,// 132 PAY  93 

    0x8ad96981,// 133 PAY  94 

    0x9a292857,// 134 PAY  95 

    0x782c8d64,// 135 PAY  96 

    0x00b9c8cf,// 136 PAY  97 

    0xdc223b0b,// 137 PAY  98 

    0x545a5993,// 138 PAY  99 

    0xe8231be4,// 139 PAY 100 

    0x11fe46ec,// 140 PAY 101 

    0x5265a879,// 141 PAY 102 

    0x0ef92109,// 142 PAY 103 

    0x728f61bd,// 143 PAY 104 

    0x8d752c81,// 144 PAY 105 

    0x8b6c365b,// 145 PAY 106 

    0x2f4d7d67,// 146 PAY 107 

    0x01fd1bc7,// 147 PAY 108 

    0xf5a14447,// 148 PAY 109 

    0x5cbc177a,// 149 PAY 110 

    0xc40547d9,// 150 PAY 111 

    0x907bdb8d,// 151 PAY 112 

    0x4828eab0,// 152 PAY 113 

    0xb62669f0,// 153 PAY 114 

    0x5f61dd02,// 154 PAY 115 

    0x459e8a0a,// 155 PAY 116 

    0xb1ba2bd0,// 156 PAY 117 

    0xeb769ced,// 157 PAY 118 

    0x36c52c45,// 158 PAY 119 

    0x2d3290a0,// 159 PAY 120 

    0x898e73ed,// 160 PAY 121 

    0xf4b13524,// 161 PAY 122 

    0xe4577c9d,// 162 PAY 123 

    0xde48f223,// 163 PAY 124 

    0x9f11e02d,// 164 PAY 125 

    0x061d81e1,// 165 PAY 126 

    0x8a3929de,// 166 PAY 127 

    0x1fb24d48,// 167 PAY 128 

    0xc7504d3c,// 168 PAY 129 

    0x22db6cc1,// 169 PAY 130 

    0x8ef4e11b,// 170 PAY 131 

    0x8b498bfd,// 171 PAY 132 

    0x4af48890,// 172 PAY 133 

    0x00ab247e,// 173 PAY 134 

    0xca2fa6bf,// 174 PAY 135 

    0x6c909397,// 175 PAY 136 

    0x0c9e04ad,// 176 PAY 137 

    0x6dc975e9,// 177 PAY 138 

    0xc50b0830,// 178 PAY 139 

    0xfb81941b,// 179 PAY 140 

    0x281b05b1,// 180 PAY 141 

    0x3b6760c5,// 181 PAY 142 

    0x263c1015,// 182 PAY 143 

    0x39ee7650,// 183 PAY 144 

    0x36b306a7,// 184 PAY 145 

    0xac896425,// 185 PAY 146 

    0x06826d93,// 186 PAY 147 

    0xd379ec61,// 187 PAY 148 

    0xee089794,// 188 PAY 149 

    0xf9d40f18,// 189 PAY 150 

    0x26387a66,// 190 PAY 151 

    0x57efafc2,// 191 PAY 152 

    0x3f3c0c82,// 192 PAY 153 

    0x549e825e,// 193 PAY 154 

    0x34116ab8,// 194 PAY 155 

    0x1e6d4d38,// 195 PAY 156 

    0xbddefcb6,// 196 PAY 157 

    0x0d1d343f,// 197 PAY 158 

    0xfc2901d1,// 198 PAY 159 

    0x67bbb0ef,// 199 PAY 160 

    0x3bce533e,// 200 PAY 161 

    0x7bf6076a,// 201 PAY 162 

    0xa045b51f,// 202 PAY 163 

    0x46d850ac,// 203 PAY 164 

    0x51025f27,// 204 PAY 165 

    0xc282100d,// 205 PAY 166 

    0x29774ba7,// 206 PAY 167 

    0x3f089ab6,// 207 PAY 168 

    0x696c7107,// 208 PAY 169 

    0x46dee3d0,// 209 PAY 170 

    0x8903906d,// 210 PAY 171 

    0x7373e6b4,// 211 PAY 172 

    0x8933aecd,// 212 PAY 173 

    0x0453545f,// 213 PAY 174 

    0x3706ba93,// 214 PAY 175 

    0xff99f88b,// 215 PAY 176 

    0x16d73499,// 216 PAY 177 

    0xf2c4d709,// 217 PAY 178 

    0x696cc5f5,// 218 PAY 179 

    0x138b5d81,// 219 PAY 180 

    0xdd0fafb9,// 220 PAY 181 

    0x26c4d289,// 221 PAY 182 

    0x508d7808,// 222 PAY 183 

    0x9b1d2caa,// 223 PAY 184 

    0xa7c3df5c,// 224 PAY 185 

    0xdc68c0fd,// 225 PAY 186 

    0x778dad88,// 226 PAY 187 

    0x567e0852,// 227 PAY 188 

    0x6aa33c8d,// 228 PAY 189 

    0xc9bc4cfa,// 229 PAY 190 

    0x001236c8,// 230 PAY 191 

    0xdacb4c85,// 231 PAY 192 

    0xa7beaf09,// 232 PAY 193 

    0x2cd7ab5f,// 233 PAY 194 

    0xfeea0c28,// 234 PAY 195 

    0x9a481c21,// 235 PAY 196 

    0x0e480fed,// 236 PAY 197 

    0xdbcd68c0,// 237 PAY 198 

    0xa83bf275,// 238 PAY 199 

    0x87437545,// 239 PAY 200 

    0x551d09e8,// 240 PAY 201 

    0x4fbd4a06,// 241 PAY 202 

    0xd5dad94b,// 242 PAY 203 

    0xae91f458,// 243 PAY 204 

    0x03ce3a91,// 244 PAY 205 

    0x53117b9b,// 245 PAY 206 

    0x6602aac4,// 246 PAY 207 

    0x222d2dc1,// 247 PAY 208 

    0xf40d16d5,// 248 PAY 209 

    0x899fff67,// 249 PAY 210 

    0xf1228bb9,// 250 PAY 211 

    0xe3984c7a,// 251 PAY 212 

    0xd689fe38,// 252 PAY 213 

    0x539e4596,// 253 PAY 214 

    0x5ad8feb8,// 254 PAY 215 

    0xb0717c84,// 255 PAY 216 

    0x3092383f,// 256 PAY 217 

    0xf0b5f3f0,// 257 PAY 218 

    0xa06b29e8,// 258 PAY 219 

    0xb39b448c,// 259 PAY 220 

    0x8a795d0e,// 260 PAY 221 

    0x904bad9f,// 261 PAY 222 

    0x8cfb10f4,// 262 PAY 223 

    0x4a277ec1,// 263 PAY 224 

    0xc907107a,// 264 PAY 225 

    0xcb975592,// 265 PAY 226 

    0x0e7b6fe2,// 266 PAY 227 

    0x4493f18c,// 267 PAY 228 

    0x1bf4a76b,// 268 PAY 229 

    0xa2fa015e,// 269 PAY 230 

    0x35175d85,// 270 PAY 231 

    0x620ec9c7,// 271 PAY 232 

    0x51f2cb2f,// 272 PAY 233 

    0x9ba0a984,// 273 PAY 234 

    0x3a8d3dca,// 274 PAY 235 

    0xb5fea01e,// 275 PAY 236 

    0x742086f2,// 276 PAY 237 

    0x33b9fb13,// 277 PAY 238 

    0x66f0eb14,// 278 PAY 239 

    0xf72a7cea,// 279 PAY 240 

    0x13dcef58,// 280 PAY 241 

    0x0a831a9f,// 281 PAY 242 

    0xa0135ae0,// 282 PAY 243 

    0x2d38bfd9,// 283 PAY 244 

    0x544b6c25,// 284 PAY 245 

    0x79838368,// 285 PAY 246 

    0x35815eb1,// 286 PAY 247 

    0xce46ded5,// 287 PAY 248 

    0xd1749e92,// 288 PAY 249 

    0xb45fb153,// 289 PAY 250 

    0x54a1b3ed,// 290 PAY 251 

    0xbb64ca7b,// 291 PAY 252 

    0xc34fb434,// 292 PAY 253 

    0x05f51488,// 293 PAY 254 

    0xcf336394,// 294 PAY 255 

    0x8da2c621,// 295 PAY 256 

    0x37e2e3c8,// 296 PAY 257 

    0x18981ee7,// 297 PAY 258 

    0x9c729045,// 298 PAY 259 

    0x53eab28f,// 299 PAY 260 

    0xa4d19a86,// 300 PAY 261 

    0xa035b080,// 301 PAY 262 

    0x5b28f76a,// 302 PAY 263 

    0x5d8ac576,// 303 PAY 264 

    0xf533b60d,// 304 PAY 265 

    0xcc0dd0da,// 305 PAY 266 

    0x9c93f562,// 306 PAY 267 

    0x3e145123,// 307 PAY 268 

    0x0c9752c4,// 308 PAY 269 

    0x642ee815,// 309 PAY 270 

    0xaf306408,// 310 PAY 271 

    0x91c09689,// 311 PAY 272 

    0x1a1a18bb,// 312 PAY 273 

    0x2d2f2e03,// 313 PAY 274 

    0x31d93455,// 314 PAY 275 

    0xde19cc5f,// 315 PAY 276 

    0x30fb2b15,// 316 PAY 277 

    0x5198816d,// 317 PAY 278 

    0xfbfcebc7,// 318 PAY 279 

    0x5062c66c,// 319 PAY 280 

    0x8a583bb7,// 320 PAY 281 

    0xe8256364,// 321 PAY 282 

    0xa7edbbbf,// 322 PAY 283 

    0x4bf9eebc,// 323 PAY 284 

    0xf9815a9e,// 324 PAY 285 

    0x423a8536,// 325 PAY 286 

    0x28cd6179,// 326 PAY 287 

    0x72feb9a8,// 327 PAY 288 

    0xbe3bf635,// 328 PAY 289 

    0x3b66c9ae,// 329 PAY 290 

    0x2432475c,// 330 PAY 291 

    0xa0710c21,// 331 PAY 292 

    0x093dfa69,// 332 PAY 293 

    0xc3b61165,// 333 PAY 294 

    0xeddcd915,// 334 PAY 295 

    0xf37068ef,// 335 PAY 296 

    0x86999c46,// 336 PAY 297 

    0xbf1caae1,// 337 PAY 298 

    0x255f8c86,// 338 PAY 299 

    0xf9c96831,// 339 PAY 300 

    0x71b91ece,// 340 PAY 301 

    0x3aa59136,// 341 PAY 302 

    0x6941647c,// 342 PAY 303 

    0x55e7a115,// 343 PAY 304 

    0x95ceb8eb,// 344 PAY 305 

    0xd1e9db8d,// 345 PAY 306 

    0x5949a5cd,// 346 PAY 307 

    0x723b2094,// 347 PAY 308 

    0xeff2abdf,// 348 PAY 309 

    0x65c04c8c,// 349 PAY 310 

    0x595e6b90,// 350 PAY 311 

    0xf9edab8c,// 351 PAY 312 

    0x0bf30441,// 352 PAY 313 

    0x3cb3ea35,// 353 PAY 314 

    0xcf4f59ed,// 354 PAY 315 

    0x5a9a0b75,// 355 PAY 316 

    0x4e3a5fe6,// 356 PAY 317 

    0x50a8309d,// 357 PAY 318 

    0x177b23ab,// 358 PAY 319 

    0xc25c3456,// 359 PAY 320 

    0xfe445a1d,// 360 PAY 321 

    0xecf49b39,// 361 PAY 322 

    0x46f7db3b,// 362 PAY 323 

    0xf3216f6d,// 363 PAY 324 

    0xfca6a228,// 364 PAY 325 

    0x37eb7a0c,// 365 PAY 326 

    0x87bbba57,// 366 PAY 327 

    0xb7ef432e,// 367 PAY 328 

    0x9d2fbd28,// 368 PAY 329 

    0x42571dee,// 369 PAY 330 

    0x0e3fa8a6,// 370 PAY 331 

    0xd056e47f,// 371 PAY 332 

    0x2b4d6f53,// 372 PAY 333 

    0xf4f9a600,// 373 PAY 334 

    0x7c9a71b0,// 374 PAY 335 

    0xf05f5c9d,// 375 PAY 336 

    0x986df09d,// 376 PAY 337 

    0x9612070a,// 377 PAY 338 

    0x846d9e03,// 378 PAY 339 

    0x3d3189d2,// 379 PAY 340 

    0xd69113c6,// 380 PAY 341 

    0x46e96321,// 381 PAY 342 

    0xcd77c506,// 382 PAY 343 

    0xeace73bb,// 383 PAY 344 

    0xc23db1a8,// 384 PAY 345 

    0x2d19c117,// 385 PAY 346 

    0xd2fbd9cf,// 386 PAY 347 

    0x7d002c60,// 387 PAY 348 

    0x5ef12e92,// 388 PAY 349 

    0x8f724ecb,// 389 PAY 350 

    0xd9cc35c3,// 390 PAY 351 

    0x98f028ed,// 391 PAY 352 

    0x416b4b00,// 392 PAY 353 

    0x7b657cd2,// 393 PAY 354 

    0x4eb42f55,// 394 PAY 355 

    0x42fd467f,// 395 PAY 356 

    0xf354fb0b,// 396 PAY 357 

    0x6f67871b,// 397 PAY 358 

    0x50fd03ca,// 398 PAY 359 

    0xf4c545fb,// 399 PAY 360 

    0x21f5ba41,// 400 PAY 361 

    0xb8912662,// 401 PAY 362 

    0x5c43b598,// 402 PAY 363 

    0x7db326d9,// 403 PAY 364 

    0xbd5d831d,// 404 PAY 365 

    0xbe47e475,// 405 PAY 366 

    0x9651b6a1,// 406 PAY 367 

    0x13d56bcb,// 407 PAY 368 

    0xb83c5db9,// 408 PAY 369 

    0xc4ba4013,// 409 PAY 370 

    0xbdf91fc5,// 410 PAY 371 

    0x04e975ae,// 411 PAY 372 

    0xa715f342,// 412 PAY 373 

    0x58fb5c59,// 413 PAY 374 

    0xb4a94ef4,// 414 PAY 375 

    0xb57808db,// 415 PAY 376 

    0xb9f0954f,// 416 PAY 377 

    0x7f0b1982,// 417 PAY 378 

    0xa51e715b,// 418 PAY 379 

    0x863b5a91,// 419 PAY 380 

    0x2a36e648,// 420 PAY 381 

    0xb8f3b5ae,// 421 PAY 382 

    0xd712b213,// 422 PAY 383 

    0x8897dbad,// 423 PAY 384 

    0xa6704e48,// 424 PAY 385 

    0xc180bca4,// 425 PAY 386 

    0xe42515e6,// 426 PAY 387 

    0x3b35331d,// 427 PAY 388 

    0x02ddc18d,// 428 PAY 389 

    0x72421405,// 429 PAY 390 

    0xaeeae95f,// 430 PAY 391 

    0x106a572a,// 431 PAY 392 

    0x1db52d42,// 432 PAY 393 

    0x9985c3e0,// 433 PAY 394 

    0xa1d7289f,// 434 PAY 395 

    0x9ff2ba5f,// 435 PAY 396 

    0x2e6b8845,// 436 PAY 397 

    0x402fa060,// 437 PAY 398 

    0x6539fdf1,// 438 PAY 399 

    0x6d371090,// 439 PAY 400 

    0xf62ca997,// 440 PAY 401 

    0xefbb6f81,// 441 PAY 402 

    0x1ac35c89,// 442 PAY 403 

    0xcbcff5c7,// 443 PAY 404 

    0xf8551b6e,// 444 PAY 405 

    0x01a54f62,// 445 PAY 406 

    0xa4df2dc3,// 446 PAY 407 

    0xa4ec7f89,// 447 PAY 408 

    0x128321e4,// 448 PAY 409 

    0x2f54cd4d,// 449 PAY 410 

    0xfba3329e,// 450 PAY 411 

    0x31ba9861,// 451 PAY 412 

    0xd2c08dd3,// 452 PAY 413 

    0x9a8633ff,// 453 PAY 414 

    0xc15ce407,// 454 PAY 415 

    0x751763c9,// 455 PAY 416 

    0xceefcd67,// 456 PAY 417 

    0xc1b030f9,// 457 PAY 418 

    0x671bb721,// 458 PAY 419 

    0x90461d18,// 459 PAY 420 

    0xd48b59e0,// 460 PAY 421 

    0xc982cf49,// 461 PAY 422 

    0x31a3af60,// 462 PAY 423 

    0xaf69cf47,// 463 PAY 424 

    0xbffd78a6,// 464 PAY 425 

    0x320646a9,// 465 PAY 426 

    0x90227be8,// 466 PAY 427 

    0xb985c8f7,// 467 PAY 428 

    0xe883fd4b,// 468 PAY 429 

    0x63946c94,// 469 PAY 430 

    0x3e375400,// 470 PAY 431 

    0xf47218ca,// 471 PAY 432 

    0x510daf7f,// 472 PAY 433 

    0x6842311b,// 473 PAY 434 

    0xb8e0fb23,// 474 PAY 435 

    0xa33f8bb9,// 475 PAY 436 

    0x52522ac6,// 476 PAY 437 

    0x78286c9c,// 477 PAY 438 

    0x0c30da94,// 478 PAY 439 

    0xc371708b,// 479 PAY 440 

    0xbee2106c,// 480 PAY 441 

    0x4b549321,// 481 PAY 442 

    0x65cc8007,// 482 PAY 443 

    0x27239179,// 483 PAY 444 

    0x941fe5bf,// 484 PAY 445 

    0xc54d0cfe,// 485 PAY 446 

    0x7c3b82cc,// 486 PAY 447 

    0xba01751d,// 487 PAY 448 

    0x845f9860,// 488 PAY 449 

    0x8aae209e,// 489 PAY 450 

    0x552c50f2,// 490 PAY 451 

    0x5f9fa005,// 491 PAY 452 

    0x89cb7401,// 492 PAY 453 

    0xa9259a39,// 493 PAY 454 

    0x4184ab5c,// 494 PAY 455 

    0xff55486b,// 495 PAY 456 

    0x647c26fd,// 496 PAY 457 

    0x82b51a97,// 497 PAY 458 

    0x626e9faf,// 498 PAY 459 

    0xa205824d,// 499 PAY 460 

    0xb36377ae,// 500 PAY 461 

    0x4dc38c26,// 501 PAY 462 

    0x841db16d,// 502 PAY 463 

    0xe1f3d655,// 503 PAY 464 

    0xe69224a0,// 504 PAY 465 

    0xa56a69c8,// 505 PAY 466 

    0x19b66163,// 506 PAY 467 

    0x99b430d0,// 507 PAY 468 

    0x10eedaa7,// 508 PAY 469 

    0x4a8378db,// 509 PAY 470 

    0xe2a5077b,// 510 PAY 471 

    0xd21d4b2a,// 511 PAY 472 

    0xd81e38d0,// 512 PAY 473 

    0xbc12a989,// 513 PAY 474 

    0xb9a868c3,// 514 PAY 475 

    0x635bb610,// 515 PAY 476 

    0x5b7dd459,// 516 PAY 477 

    0x134beba6,// 517 PAY 478 

    0xfbef10be,// 518 PAY 479 

    0x6792b7ce,// 519 PAY 480 

    0x457b9c67,// 520 PAY 481 

    0xb4eb98ea,// 521 PAY 482 

    0xd93ad498,// 522 PAY 483 

    0x0ed7aa63,// 523 PAY 484 

    0x378af3e3,// 524 PAY 485 

    0x246da7e8,// 525 PAY 486 

    0x60c3bf9c,// 526 PAY 487 

    0xed8fc041,// 527 PAY 488 

    0x1cb6eea2,// 528 PAY 489 

    0x8ff67d24,// 529 PAY 490 

    0xa749f975,// 530 PAY 491 

    0x7e1ab472,// 531 PAY 492 

    0x452f26a5,// 532 PAY 493 

    0x8580144f,// 533 PAY 494 

    0xa2f8fdd6,// 534 PAY 495 

    0xb4b9e9fa,// 535 PAY 496 

    0xe9f02e92,// 536 PAY 497 

    0x40ebe005,// 537 PAY 498 

    0x657f0000,// 538 PAY 499 

/// STA is 1 words. 

/// STA num_pkts       : 164 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x0161bea4 // 539 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt38_tmpl[] = {
    0xa8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x8064280c,// 4 SCX   2 

    0x000024c2,// 5 SCX   3 

    0xbbc07892,// 6 SCX   4 

    0x9dbd9995,// 7 SCX   5 

    0x2ed286ca,// 8 SCX   6 

    0xa68a93ea,// 9 SCX   7 

    0x350037b3,// 10 SCX   8 

    0xc000b8ed,// 11 SCX   9 

    0x434c09d6,// 12 SCX  10 

    0x1b3818ec,// 13 SCX  11 

    0xc9cdbd01,// 14 SCX  12 

    0x0e909342,// 15 SCX  13 

    0x3fc2572f,// 16 SCX  14 

    0xf4ed84bf,// 17 SCX  15 

    0x6a304b12,// 18 SCX  16 

    0xb1b029d5,// 19 SCX  17 

    0x36fae823,// 20 SCX  18 

    0xa4f8fff3,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1427 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 955 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 955 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 460 

/// BFD (ofst+len)cry  : 604 

/// BFD ofstiv         : 24 

/// BFD ofsticv        : 1192 

    0x000003bb,// 22 BFD   1 

    0x01cc0090,// 23 BFD   2 

    0x04a80018,// 24 BFD   3 

/// BDA is 358 words. 

/// BDA size     is 1427 (0x593) 

/// BDA id       is 0x1528 

    0x05931528,// 25 BDA   1 

/// PAY Generic Data size   : 1427 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x9788ad68,// 26 PAY   1 

    0x2e1d5e26,// 27 PAY   2 

    0x1305b129,// 28 PAY   3 

    0x249200e2,// 29 PAY   4 

    0xb0c90a63,// 30 PAY   5 

    0xc8573ea7,// 31 PAY   6 

    0x3bea80b8,// 32 PAY   7 

    0xf39e3f07,// 33 PAY   8 

    0x70b8639e,// 34 PAY   9 

    0xbced92b5,// 35 PAY  10 

    0x07586b7b,// 36 PAY  11 

    0x984a84c1,// 37 PAY  12 

    0x36dc5b0d,// 38 PAY  13 

    0x49209399,// 39 PAY  14 

    0x8b496b13,// 40 PAY  15 

    0x6c6a3647,// 41 PAY  16 

    0x707414ec,// 42 PAY  17 

    0x1498f614,// 43 PAY  18 

    0xea09dc3d,// 44 PAY  19 

    0xaebdd35e,// 45 PAY  20 

    0x2434f17e,// 46 PAY  21 

    0x3b06fc1d,// 47 PAY  22 

    0xba83ea8f,// 48 PAY  23 

    0x80725474,// 49 PAY  24 

    0x52c8eb1e,// 50 PAY  25 

    0xec44336a,// 51 PAY  26 

    0x51de0b6a,// 52 PAY  27 

    0xd669d18f,// 53 PAY  28 

    0x8746c3fc,// 54 PAY  29 

    0xd0fb43da,// 55 PAY  30 

    0x8fe2cb8c,// 56 PAY  31 

    0xeb74c195,// 57 PAY  32 

    0xe2340d85,// 58 PAY  33 

    0x4ac72f3e,// 59 PAY  34 

    0xa1a8d21e,// 60 PAY  35 

    0xb77303ac,// 61 PAY  36 

    0x0a2393c3,// 62 PAY  37 

    0x76684404,// 63 PAY  38 

    0x6d465ff8,// 64 PAY  39 

    0x2f37ab40,// 65 PAY  40 

    0xb27d6656,// 66 PAY  41 

    0xeda8b298,// 67 PAY  42 

    0xd9408b6a,// 68 PAY  43 

    0x12c6f246,// 69 PAY  44 

    0x282fc62e,// 70 PAY  45 

    0x33a19277,// 71 PAY  46 

    0x8b13ebac,// 72 PAY  47 

    0xe5008528,// 73 PAY  48 

    0x4a88ef0a,// 74 PAY  49 

    0xc22bbbaf,// 75 PAY  50 

    0xce83b8cc,// 76 PAY  51 

    0x0eb2a9c3,// 77 PAY  52 

    0x1a2b1427,// 78 PAY  53 

    0xc4698244,// 79 PAY  54 

    0x43f95134,// 80 PAY  55 

    0x4995db6e,// 81 PAY  56 

    0xe713f84e,// 82 PAY  57 

    0xc2480380,// 83 PAY  58 

    0x948e5775,// 84 PAY  59 

    0xf9de4f3a,// 85 PAY  60 

    0x2deabb35,// 86 PAY  61 

    0x74b253c3,// 87 PAY  62 

    0x4fdd1fab,// 88 PAY  63 

    0x13e210b2,// 89 PAY  64 

    0x3e3255a8,// 90 PAY  65 

    0xa1a0b588,// 91 PAY  66 

    0x984394f0,// 92 PAY  67 

    0x52eac021,// 93 PAY  68 

    0x3afd3e26,// 94 PAY  69 

    0x32fad573,// 95 PAY  70 

    0x28ccc01b,// 96 PAY  71 

    0x7604b53b,// 97 PAY  72 

    0x4c75f5b7,// 98 PAY  73 

    0xb4b5a56f,// 99 PAY  74 

    0x5c1ca95e,// 100 PAY  75 

    0xa99544d2,// 101 PAY  76 

    0xf9d7f2d3,// 102 PAY  77 

    0xb8419a59,// 103 PAY  78 

    0x2798a1c4,// 104 PAY  79 

    0x0f9c03a5,// 105 PAY  80 

    0x82819284,// 106 PAY  81 

    0x1394d3c2,// 107 PAY  82 

    0x9ea415a9,// 108 PAY  83 

    0x0c2fbbf6,// 109 PAY  84 

    0x2694ec9d,// 110 PAY  85 

    0x4a73140e,// 111 PAY  86 

    0xf0363881,// 112 PAY  87 

    0x862f760b,// 113 PAY  88 

    0x03dbcd6d,// 114 PAY  89 

    0x38874249,// 115 PAY  90 

    0xf29d0e95,// 116 PAY  91 

    0x0065ee4e,// 117 PAY  92 

    0xfb8b3595,// 118 PAY  93 

    0x7840c152,// 119 PAY  94 

    0xa6339256,// 120 PAY  95 

    0x7f4568d0,// 121 PAY  96 

    0x0e25b3fd,// 122 PAY  97 

    0x256bf599,// 123 PAY  98 

    0xfb70fa50,// 124 PAY  99 

    0x4fe18938,// 125 PAY 100 

    0x20cd9e0e,// 126 PAY 101 

    0x9ef30fab,// 127 PAY 102 

    0x56af4ede,// 128 PAY 103 

    0x842b200f,// 129 PAY 104 

    0x1fd5c673,// 130 PAY 105 

    0x66546dcd,// 131 PAY 106 

    0x449dc8fc,// 132 PAY 107 

    0xfa1eceaf,// 133 PAY 108 

    0x9304b60a,// 134 PAY 109 

    0x968abe46,// 135 PAY 110 

    0xbe5c587a,// 136 PAY 111 

    0xaef73359,// 137 PAY 112 

    0xcf41b2a4,// 138 PAY 113 

    0x1ba2b45e,// 139 PAY 114 

    0xa64321a8,// 140 PAY 115 

    0x6f3732ce,// 141 PAY 116 

    0xaf55d636,// 142 PAY 117 

    0xbd514d7e,// 143 PAY 118 

    0x81e81b46,// 144 PAY 119 

    0x75e84dfb,// 145 PAY 120 

    0x5f490468,// 146 PAY 121 

    0x7b8b8a7f,// 147 PAY 122 

    0xce3da080,// 148 PAY 123 

    0xc8ab1e65,// 149 PAY 124 

    0xc2a39d63,// 150 PAY 125 

    0x65293a52,// 151 PAY 126 

    0xe418097f,// 152 PAY 127 

    0xb015a359,// 153 PAY 128 

    0x8a174bd2,// 154 PAY 129 

    0x2d988b22,// 155 PAY 130 

    0xf8aea194,// 156 PAY 131 

    0xdadb7014,// 157 PAY 132 

    0x0fe223f0,// 158 PAY 133 

    0x9ee23f3c,// 159 PAY 134 

    0xc996c719,// 160 PAY 135 

    0xb87bf3ba,// 161 PAY 136 

    0xc96ad9f7,// 162 PAY 137 

    0xb5592c52,// 163 PAY 138 

    0x97135b53,// 164 PAY 139 

    0x9d27f821,// 165 PAY 140 

    0xfbd8f68b,// 166 PAY 141 

    0xab606fb7,// 167 PAY 142 

    0xca921e85,// 168 PAY 143 

    0x19992edb,// 169 PAY 144 

    0x9efe556d,// 170 PAY 145 

    0x076d2145,// 171 PAY 146 

    0x387167ad,// 172 PAY 147 

    0xfd61374d,// 173 PAY 148 

    0xd2e01d58,// 174 PAY 149 

    0xd5bb2100,// 175 PAY 150 

    0x8ab63c83,// 176 PAY 151 

    0xceea63be,// 177 PAY 152 

    0x28c94448,// 178 PAY 153 

    0x1e5b7086,// 179 PAY 154 

    0x290fdced,// 180 PAY 155 

    0x9aa7b247,// 181 PAY 156 

    0x77f35b72,// 182 PAY 157 

    0xd7f9fab1,// 183 PAY 158 

    0x08e54ad6,// 184 PAY 159 

    0x7c8eede5,// 185 PAY 160 

    0x68879360,// 186 PAY 161 

    0x13636bf4,// 187 PAY 162 

    0xcd1fdf42,// 188 PAY 163 

    0x9a18cd6b,// 189 PAY 164 

    0xf0837d3d,// 190 PAY 165 

    0xcf269b53,// 191 PAY 166 

    0xdf519cbc,// 192 PAY 167 

    0xc81d75ae,// 193 PAY 168 

    0x911d5911,// 194 PAY 169 

    0x3a9d10a6,// 195 PAY 170 

    0x8ac6f809,// 196 PAY 171 

    0x0b77ba97,// 197 PAY 172 

    0x87249662,// 198 PAY 173 

    0xe1d056d9,// 199 PAY 174 

    0x0733ebcc,// 200 PAY 175 

    0x021f1250,// 201 PAY 176 

    0x939a3c25,// 202 PAY 177 

    0x553010cf,// 203 PAY 178 

    0x8d880bee,// 204 PAY 179 

    0x8364d7fe,// 205 PAY 180 

    0x8cda57bd,// 206 PAY 181 

    0x2903399c,// 207 PAY 182 

    0x68616a36,// 208 PAY 183 

    0x1e5274d4,// 209 PAY 184 

    0x1cd8c648,// 210 PAY 185 

    0xff970ecf,// 211 PAY 186 

    0x1503c3e0,// 212 PAY 187 

    0x8909974a,// 213 PAY 188 

    0x18e57b67,// 214 PAY 189 

    0x38b6e932,// 215 PAY 190 

    0x9eb5ae25,// 216 PAY 191 

    0xa857920b,// 217 PAY 192 

    0x5877eca0,// 218 PAY 193 

    0x08034fd4,// 219 PAY 194 

    0x5ee0dae2,// 220 PAY 195 

    0x01f09b59,// 221 PAY 196 

    0x8a208e24,// 222 PAY 197 

    0x31012f8d,// 223 PAY 198 

    0xcc419c18,// 224 PAY 199 

    0xbe0ad11b,// 225 PAY 200 

    0x4fbcf60d,// 226 PAY 201 

    0x2b2ad5d7,// 227 PAY 202 

    0x7d863660,// 228 PAY 203 

    0x0ddf820c,// 229 PAY 204 

    0x1c2a4a5a,// 230 PAY 205 

    0x2e2e0c7e,// 231 PAY 206 

    0xb45d9a7a,// 232 PAY 207 

    0xb53075e1,// 233 PAY 208 

    0x68a877d2,// 234 PAY 209 

    0x49819a62,// 235 PAY 210 

    0xc4a3ae72,// 236 PAY 211 

    0x6473d0e4,// 237 PAY 212 

    0x87c41ce1,// 238 PAY 213 

    0x1a600b7e,// 239 PAY 214 

    0xfdf83f69,// 240 PAY 215 

    0x3d6cd45f,// 241 PAY 216 

    0xee4596ed,// 242 PAY 217 

    0x1ff2550c,// 243 PAY 218 

    0x1ef91081,// 244 PAY 219 

    0x786193b7,// 245 PAY 220 

    0xc4739a56,// 246 PAY 221 

    0x81ea406f,// 247 PAY 222 

    0xca3bda60,// 248 PAY 223 

    0x6442f4bd,// 249 PAY 224 

    0x82c5c169,// 250 PAY 225 

    0xd399a424,// 251 PAY 226 

    0x35d2fe2a,// 252 PAY 227 

    0xe6584487,// 253 PAY 228 

    0xfec28b8e,// 254 PAY 229 

    0x8f84ec58,// 255 PAY 230 

    0xc1ae6aad,// 256 PAY 231 

    0x5b757014,// 257 PAY 232 

    0x70f8f8fc,// 258 PAY 233 

    0x62aefdf8,// 259 PAY 234 

    0xf88932ed,// 260 PAY 235 

    0x17fbb662,// 261 PAY 236 

    0x170f202e,// 262 PAY 237 

    0xeb63a80f,// 263 PAY 238 

    0x7ccb85e5,// 264 PAY 239 

    0x3d7678bb,// 265 PAY 240 

    0x0d7fe475,// 266 PAY 241 

    0xfb2de9ba,// 267 PAY 242 

    0xa84cf98e,// 268 PAY 243 

    0x2a0e482a,// 269 PAY 244 

    0xebd23e3d,// 270 PAY 245 

    0x476af6dd,// 271 PAY 246 

    0xd0c8c36e,// 272 PAY 247 

    0x56891f95,// 273 PAY 248 

    0x575c721a,// 274 PAY 249 

    0x394e4823,// 275 PAY 250 

    0xa4db1fd5,// 276 PAY 251 

    0xb3ca050c,// 277 PAY 252 

    0x27e32e6d,// 278 PAY 253 

    0x91bebb05,// 279 PAY 254 

    0x9e763796,// 280 PAY 255 

    0x27aa399a,// 281 PAY 256 

    0x9fd5eb88,// 282 PAY 257 

    0xd3eacebe,// 283 PAY 258 

    0x475f0227,// 284 PAY 259 

    0xb3c6de82,// 285 PAY 260 

    0x1e51a928,// 286 PAY 261 

    0xe7b2011a,// 287 PAY 262 

    0x3043357e,// 288 PAY 263 

    0xbf4c1fd3,// 289 PAY 264 

    0x499f86a3,// 290 PAY 265 

    0x6e08c696,// 291 PAY 266 

    0xf30dfca0,// 292 PAY 267 

    0x781fe9d9,// 293 PAY 268 

    0x7cafb9b8,// 294 PAY 269 

    0x52ea5654,// 295 PAY 270 

    0xb52cd75c,// 296 PAY 271 

    0x52264780,// 297 PAY 272 

    0x989cef0b,// 298 PAY 273 

    0xe5c9fb83,// 299 PAY 274 

    0x32218a65,// 300 PAY 275 

    0x75117005,// 301 PAY 276 

    0x2ec9b5d8,// 302 PAY 277 

    0x3221f0ca,// 303 PAY 278 

    0xb13d4974,// 304 PAY 279 

    0xb4c2462f,// 305 PAY 280 

    0xea38adbf,// 306 PAY 281 

    0xaab0a148,// 307 PAY 282 

    0x52517f79,// 308 PAY 283 

    0xe9c17560,// 309 PAY 284 

    0xa5276903,// 310 PAY 285 

    0xc7015fe8,// 311 PAY 286 

    0xf972c97a,// 312 PAY 287 

    0x769451ab,// 313 PAY 288 

    0x85c36282,// 314 PAY 289 

    0x8c548149,// 315 PAY 290 

    0xe908e25c,// 316 PAY 291 

    0x6be75308,// 317 PAY 292 

    0xf9db1a77,// 318 PAY 293 

    0x6df91d9b,// 319 PAY 294 

    0x82f6442a,// 320 PAY 295 

    0x51273ac2,// 321 PAY 296 

    0xeb522d4d,// 322 PAY 297 

    0x13b3741d,// 323 PAY 298 

    0xe8f591ea,// 324 PAY 299 

    0x843250cd,// 325 PAY 300 

    0x22d65e94,// 326 PAY 301 

    0x78aee0fc,// 327 PAY 302 

    0x670dc729,// 328 PAY 303 

    0xb2142cc5,// 329 PAY 304 

    0x7104e452,// 330 PAY 305 

    0xf6fafdc4,// 331 PAY 306 

    0x587b8834,// 332 PAY 307 

    0x44da409e,// 333 PAY 308 

    0x8a18896d,// 334 PAY 309 

    0x172349c8,// 335 PAY 310 

    0x9371c64a,// 336 PAY 311 

    0xf740d9a0,// 337 PAY 312 

    0x9d7067f5,// 338 PAY 313 

    0x5b827ea6,// 339 PAY 314 

    0x7396d303,// 340 PAY 315 

    0xb8f68958,// 341 PAY 316 

    0xac744741,// 342 PAY 317 

    0x1e8840c8,// 343 PAY 318 

    0x91a63868,// 344 PAY 319 

    0x352ffcb3,// 345 PAY 320 

    0xfd54120f,// 346 PAY 321 

    0x4be509fc,// 347 PAY 322 

    0x2d704d5f,// 348 PAY 323 

    0xf84f1d73,// 349 PAY 324 

    0x535d3c9d,// 350 PAY 325 

    0x92ca4375,// 351 PAY 326 

    0xcf9c9b6c,// 352 PAY 327 

    0x6727275e,// 353 PAY 328 

    0x1d5a0615,// 354 PAY 329 

    0x523cd9b3,// 355 PAY 330 

    0x18916f1a,// 356 PAY 331 

    0x2eff32b1,// 357 PAY 332 

    0x43005e33,// 358 PAY 333 

    0x89140258,// 359 PAY 334 

    0xf8561bd0,// 360 PAY 335 

    0x4a5c5e5b,// 361 PAY 336 

    0x4ed4144c,// 362 PAY 337 

    0xb381a3da,// 363 PAY 338 

    0xdb4fc1e9,// 364 PAY 339 

    0x392d3367,// 365 PAY 340 

    0x2dd52ee5,// 366 PAY 341 

    0xf748af2d,// 367 PAY 342 

    0xd90b2ec8,// 368 PAY 343 

    0x38bff693,// 369 PAY 344 

    0x17accc2e,// 370 PAY 345 

    0xf95bf509,// 371 PAY 346 

    0x3b247a25,// 372 PAY 347 

    0x1628f6a3,// 373 PAY 348 

    0x6d3dd74b,// 374 PAY 349 

    0x52319573,// 375 PAY 350 

    0x5e52e979,// 376 PAY 351 

    0xff89ade6,// 377 PAY 352 

    0xb5e7322f,// 378 PAY 353 

    0x0beabe33,// 379 PAY 354 

    0x65942361,// 380 PAY 355 

    0xbed9d74a,// 381 PAY 356 

    0x0990e000,// 382 PAY 357 

/// STA is 1 words. 

/// STA num_pkts       : 229 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4f 

    0x01314fe5 // 383 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt39_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806228fb,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0x22980b94,// 6 SCX   4 

    0x1e72eadb,// 7 SCX   5 

    0xec6c6536,// 8 SCX   6 

    0x749ab9b9,// 9 SCX   7 

    0xfbeeefff,// 10 SCX   8 

    0x71b8f0c6,// 11 SCX   9 

    0x5d61c124,// 12 SCX  10 

    0xfbf23f22,// 13 SCX  11 

    0xd0749611,// 14 SCX  12 

    0xfa122952,// 15 SCX  13 

    0xe6fbcc99,// 16 SCX  14 

    0xbda1ddde,// 17 SCX  15 

    0x02585e88,// 18 SCX  16 

    0x603add16,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 970 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 181 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 181 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 72 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 380 

    0x000000b5,// 20 BFD   1 

    0x00180030,// 21 BFD   2 

    0x017c0004,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600220e,// 23 MFM   1 

    0xcf000000,// 24 MFM   2 

/// BDA is 244 words. 

/// BDA size     is 970 (0x3ca) 

/// BDA id       is 0xc25c 

    0x03cac25c,// 25 BDA   1 

/// PAY Generic Data size   : 970 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0ac17073,// 26 PAY   1 

    0x8f344251,// 27 PAY   2 

    0x92ea17db,// 28 PAY   3 

    0x570626e7,// 29 PAY   4 

    0xe18f1349,// 30 PAY   5 

    0x97e9bdb5,// 31 PAY   6 

    0xe031807e,// 32 PAY   7 

    0x0394ecde,// 33 PAY   8 

    0xd631ebb7,// 34 PAY   9 

    0xa251da5b,// 35 PAY  10 

    0x1245e2a1,// 36 PAY  11 

    0xfaaa7394,// 37 PAY  12 

    0x56570511,// 38 PAY  13 

    0x19280a71,// 39 PAY  14 

    0x2caf5458,// 40 PAY  15 

    0xd38b25b7,// 41 PAY  16 

    0x3ab51fed,// 42 PAY  17 

    0xd19a999a,// 43 PAY  18 

    0x195ef3b2,// 44 PAY  19 

    0xefd6b432,// 45 PAY  20 

    0xcf0272e3,// 46 PAY  21 

    0x12050d33,// 47 PAY  22 

    0x7eb2f17f,// 48 PAY  23 

    0x8fa5807d,// 49 PAY  24 

    0x5662fe9c,// 50 PAY  25 

    0xd260ed24,// 51 PAY  26 

    0x2ff5c54c,// 52 PAY  27 

    0x34bcb9b3,// 53 PAY  28 

    0x7fbf654a,// 54 PAY  29 

    0x86c39f2b,// 55 PAY  30 

    0x50e0d09f,// 56 PAY  31 

    0x59b91cf0,// 57 PAY  32 

    0xbb98dbca,// 58 PAY  33 

    0x10c78bfb,// 59 PAY  34 

    0x4f5f5ad7,// 60 PAY  35 

    0x1a630a41,// 61 PAY  36 

    0x9b436584,// 62 PAY  37 

    0x0b11baf0,// 63 PAY  38 

    0x89c0567b,// 64 PAY  39 

    0xc67ff12d,// 65 PAY  40 

    0x4deac532,// 66 PAY  41 

    0x3125f449,// 67 PAY  42 

    0xca802ed2,// 68 PAY  43 

    0x899370ad,// 69 PAY  44 

    0x7da62f5a,// 70 PAY  45 

    0xd2c32578,// 71 PAY  46 

    0xca9f298d,// 72 PAY  47 

    0x620b3482,// 73 PAY  48 

    0x0ac6fffd,// 74 PAY  49 

    0x8f49ac0f,// 75 PAY  50 

    0xe758d635,// 76 PAY  51 

    0x10143b95,// 77 PAY  52 

    0x4ca9bac1,// 78 PAY  53 

    0x48000f5f,// 79 PAY  54 

    0xffd5daae,// 80 PAY  55 

    0x8709c6ce,// 81 PAY  56 

    0x6eb21726,// 82 PAY  57 

    0x2e1b1cd0,// 83 PAY  58 

    0x255622b3,// 84 PAY  59 

    0xd5337d63,// 85 PAY  60 

    0xbc6b50c2,// 86 PAY  61 

    0xafd419e6,// 87 PAY  62 

    0x296263d0,// 88 PAY  63 

    0xb983a236,// 89 PAY  64 

    0x098d6ffb,// 90 PAY  65 

    0x117e7290,// 91 PAY  66 

    0x255aa2ee,// 92 PAY  67 

    0x12c933c6,// 93 PAY  68 

    0x17369bb1,// 94 PAY  69 

    0x907c2703,// 95 PAY  70 

    0xaf2c303c,// 96 PAY  71 

    0x7a054634,// 97 PAY  72 

    0x266527ce,// 98 PAY  73 

    0x2e9df8c0,// 99 PAY  74 

    0x32be48e1,// 100 PAY  75 

    0x6ab81d72,// 101 PAY  76 

    0xe57bc43e,// 102 PAY  77 

    0x6c9dc230,// 103 PAY  78 

    0x3d517666,// 104 PAY  79 

    0x2b86f9c9,// 105 PAY  80 

    0xd7003c82,// 106 PAY  81 

    0xaec7eb5a,// 107 PAY  82 

    0x7d10c7fc,// 108 PAY  83 

    0xd8a41b8f,// 109 PAY  84 

    0xb02e4a12,// 110 PAY  85 

    0x8729e90a,// 111 PAY  86 

    0xd1bbcc03,// 112 PAY  87 

    0x8d12cb2d,// 113 PAY  88 

    0x44c86448,// 114 PAY  89 

    0x1ceb5188,// 115 PAY  90 

    0xb46af00b,// 116 PAY  91 

    0xdac4d154,// 117 PAY  92 

    0xfe8807b1,// 118 PAY  93 

    0x5652d5cb,// 119 PAY  94 

    0x54653747,// 120 PAY  95 

    0xf28f1967,// 121 PAY  96 

    0x0d6695c1,// 122 PAY  97 

    0xdfc7356b,// 123 PAY  98 

    0x7bf49db2,// 124 PAY  99 

    0x2ce27eb5,// 125 PAY 100 

    0x33d98ce0,// 126 PAY 101 

    0x9d937e94,// 127 PAY 102 

    0x35c7e93a,// 128 PAY 103 

    0x5ee9c649,// 129 PAY 104 

    0xa9fde6c9,// 130 PAY 105 

    0xf631a9f7,// 131 PAY 106 

    0x159bfc6e,// 132 PAY 107 

    0x1f876e22,// 133 PAY 108 

    0xa8c285cc,// 134 PAY 109 

    0x55c51885,// 135 PAY 110 

    0x0e9696c5,// 136 PAY 111 

    0xee261ee8,// 137 PAY 112 

    0xa3ab7e0e,// 138 PAY 113 

    0xa81a6f5b,// 139 PAY 114 

    0x234c36dc,// 140 PAY 115 

    0x078f8b8d,// 141 PAY 116 

    0x4c43f3d0,// 142 PAY 117 

    0x6aa85151,// 143 PAY 118 

    0x7ba95c68,// 144 PAY 119 

    0xa111589e,// 145 PAY 120 

    0x92cf21dc,// 146 PAY 121 

    0xf095b5e0,// 147 PAY 122 

    0x0de62d31,// 148 PAY 123 

    0xbfb95a6e,// 149 PAY 124 

    0x3bc80bc0,// 150 PAY 125 

    0xef1de1c2,// 151 PAY 126 

    0x12fef8aa,// 152 PAY 127 

    0xd9846b10,// 153 PAY 128 

    0x6c0ac73d,// 154 PAY 129 

    0x3c741fe1,// 155 PAY 130 

    0xcd59a566,// 156 PAY 131 

    0x65fd391d,// 157 PAY 132 

    0x698f737c,// 158 PAY 133 

    0xfafe0d99,// 159 PAY 134 

    0x84a7ec14,// 160 PAY 135 

    0xbdda690c,// 161 PAY 136 

    0x897de9c5,// 162 PAY 137 

    0xf97ef816,// 163 PAY 138 

    0xd6a05aa5,// 164 PAY 139 

    0x251d90b6,// 165 PAY 140 

    0xf60b187b,// 166 PAY 141 

    0xf876c50f,// 167 PAY 142 

    0xf409f440,// 168 PAY 143 

    0x686cf081,// 169 PAY 144 

    0x6f28fa86,// 170 PAY 145 

    0x06480495,// 171 PAY 146 

    0x6f816019,// 172 PAY 147 

    0x74a4012d,// 173 PAY 148 

    0x10729cf3,// 174 PAY 149 

    0x9322beac,// 175 PAY 150 

    0x4a8e57bf,// 176 PAY 151 

    0x3d28e42e,// 177 PAY 152 

    0x694fce94,// 178 PAY 153 

    0xe040dcdf,// 179 PAY 154 

    0xa0d2ea77,// 180 PAY 155 

    0x5b701f92,// 181 PAY 156 

    0xcaa4e845,// 182 PAY 157 

    0x8786877c,// 183 PAY 158 

    0xa4d36a2c,// 184 PAY 159 

    0x966c6ec4,// 185 PAY 160 

    0x0b667895,// 186 PAY 161 

    0x026812da,// 187 PAY 162 

    0xc8ba5d5c,// 188 PAY 163 

    0x95b48993,// 189 PAY 164 

    0xd5407aef,// 190 PAY 165 

    0x410f120e,// 191 PAY 166 

    0xf40cb684,// 192 PAY 167 

    0x021fbe27,// 193 PAY 168 

    0x5046aa47,// 194 PAY 169 

    0x708193b1,// 195 PAY 170 

    0x218d466e,// 196 PAY 171 

    0xeb429e10,// 197 PAY 172 

    0x07f54f07,// 198 PAY 173 

    0x0c84063a,// 199 PAY 174 

    0xb327b89f,// 200 PAY 175 

    0xeb80e09e,// 201 PAY 176 

    0x02b7bae2,// 202 PAY 177 

    0xc89538fe,// 203 PAY 178 

    0x03403985,// 204 PAY 179 

    0xb39f18c9,// 205 PAY 180 

    0xd6be776b,// 206 PAY 181 

    0x92f385b3,// 207 PAY 182 

    0x6fc9d463,// 208 PAY 183 

    0xe6e51a0d,// 209 PAY 184 

    0x6ec53185,// 210 PAY 185 

    0xb1d9293a,// 211 PAY 186 

    0x85172c49,// 212 PAY 187 

    0x34a8c526,// 213 PAY 188 

    0x31795f2d,// 214 PAY 189 

    0x449c70e3,// 215 PAY 190 

    0x53e62ee3,// 216 PAY 191 

    0xcc215c08,// 217 PAY 192 

    0x4def5a52,// 218 PAY 193 

    0x9c26341f,// 219 PAY 194 

    0x69a7064a,// 220 PAY 195 

    0xc55add1c,// 221 PAY 196 

    0x5162f901,// 222 PAY 197 

    0xb5c3cf6f,// 223 PAY 198 

    0x431c5dc1,// 224 PAY 199 

    0x9100c190,// 225 PAY 200 

    0xd7be1437,// 226 PAY 201 

    0x3ef6bcdb,// 227 PAY 202 

    0xae8d61b5,// 228 PAY 203 

    0xbeb0f366,// 229 PAY 204 

    0xbf9b13d0,// 230 PAY 205 

    0x69ffdd24,// 231 PAY 206 

    0xf7f49327,// 232 PAY 207 

    0x8519a10b,// 233 PAY 208 

    0x7de29e30,// 234 PAY 209 

    0x08eaf029,// 235 PAY 210 

    0x47b25136,// 236 PAY 211 

    0x59ade212,// 237 PAY 212 

    0xf32cf4c4,// 238 PAY 213 

    0x188045dd,// 239 PAY 214 

    0x9c775ab1,// 240 PAY 215 

    0x06ea68f2,// 241 PAY 216 

    0xbe1c3e73,// 242 PAY 217 

    0x50e17235,// 243 PAY 218 

    0x1bd32b44,// 244 PAY 219 

    0x52391438,// 245 PAY 220 

    0x976fe308,// 246 PAY 221 

    0xc2966f20,// 247 PAY 222 

    0x9e81b877,// 248 PAY 223 

    0xd8816621,// 249 PAY 224 

    0x6239410b,// 250 PAY 225 

    0xcb92a969,// 251 PAY 226 

    0x79f10f0a,// 252 PAY 227 

    0xc51b5ea4,// 253 PAY 228 

    0xfcabb8ba,// 254 PAY 229 

    0xf5ff6fa0,// 255 PAY 230 

    0x4589ebb2,// 256 PAY 231 

    0xdf75fb10,// 257 PAY 232 

    0xe9a13d87,// 258 PAY 233 

    0xb174ebad,// 259 PAY 234 

    0xcf5d5445,// 260 PAY 235 

    0x25fec0cf,// 261 PAY 236 

    0xc622d8ea,// 262 PAY 237 

    0xf135c042,// 263 PAY 238 

    0xe2d2bd4a,// 264 PAY 239 

    0xd8973053,// 265 PAY 240 

    0xf90e8fa4,// 266 PAY 241 

    0x9dacedda,// 267 PAY 242 

    0xbe620000,// 268 PAY 243 

/// STA is 1 words. 

/// STA num_pkts       : 208 

/// STA pkt_idx        : 48 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5f 

    0x00c05fd0 // 269 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt40_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x80662891,// 4 SCX   2 

    0x00006482,// 5 SCX   3 

    0xe87b637d,// 6 SCX   4 

    0x3ce26d9f,// 7 SCX   5 

    0x07bd12f1,// 8 SCX   6 

    0x641af403,// 9 SCX   7 

    0xe9c10c4e,// 10 SCX   8 

    0x786fc2e2,// 11 SCX   9 

    0xccf6c305,// 12 SCX  10 

    0x4c510960,// 13 SCX  11 

    0x42034bc5,// 14 SCX  12 

    0x36292485,// 15 SCX  13 

    0x80b60d15,// 16 SCX  14 

    0xf4bc0576,// 17 SCX  15 

    0x80f1b551,// 18 SCX  16 

    0x36c1972c,// 19 SCX  17 

    0x8453c348,// 20 SCX  18 

    0x25ca5954,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1358 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 173 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 173 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 128 

/// BFD (ofst+len)cry  : 160 

/// BFD ofstiv         : 100 

/// BFD ofsticv        : 780 

    0x000000ad,// 22 BFD   1 

    0x00800020,// 23 BFD   2 

    0x030c0064,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : d 

    0x0d00f4d7,// 25 MFM   1 

    0x900c1454,// 26 MFM   2 

    0xc0000000,// 27 MFM   3 

/// BDA is 341 words. 

/// BDA size     is 1358 (0x54e) 

/// BDA id       is 0xd94d 

    0x054ed94d,// 28 BDA   1 

/// PAY Generic Data size   : 1358 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x80a85c9f,// 29 PAY   1 

    0x276f5b84,// 30 PAY   2 

    0x878e20fc,// 31 PAY   3 

    0xf550e6a4,// 32 PAY   4 

    0xf5257d67,// 33 PAY   5 

    0xee3cb45c,// 34 PAY   6 

    0x45556dfe,// 35 PAY   7 

    0xeaab626f,// 36 PAY   8 

    0xe71d6952,// 37 PAY   9 

    0x64cd800f,// 38 PAY  10 

    0x6f073dd9,// 39 PAY  11 

    0x26bea21c,// 40 PAY  12 

    0x1d4f85f5,// 41 PAY  13 

    0x5cc9c378,// 42 PAY  14 

    0x361e6303,// 43 PAY  15 

    0x7b06e1b6,// 44 PAY  16 

    0x68b7a622,// 45 PAY  17 

    0xe8dd9874,// 46 PAY  18 

    0x0d48613f,// 47 PAY  19 

    0x9e66f609,// 48 PAY  20 

    0x85b97fbb,// 49 PAY  21 

    0x2480578c,// 50 PAY  22 

    0xf6400d34,// 51 PAY  23 

    0x2c907c46,// 52 PAY  24 

    0x5ae590a0,// 53 PAY  25 

    0x56f9d37c,// 54 PAY  26 

    0x44eab228,// 55 PAY  27 

    0x96146c02,// 56 PAY  28 

    0xd2d9bb7f,// 57 PAY  29 

    0xe4b7ff48,// 58 PAY  30 

    0x30a1fa43,// 59 PAY  31 

    0x68be9e23,// 60 PAY  32 

    0x8a5d2b17,// 61 PAY  33 

    0xd6c404ca,// 62 PAY  34 

    0xec0f8acd,// 63 PAY  35 

    0x2ae9b445,// 64 PAY  36 

    0x2d277aaf,// 65 PAY  37 

    0x621c6788,// 66 PAY  38 

    0xffc46277,// 67 PAY  39 

    0x53a0940c,// 68 PAY  40 

    0x61d86d24,// 69 PAY  41 

    0x2c4b4609,// 70 PAY  42 

    0x606cef7b,// 71 PAY  43 

    0xb7555e55,// 72 PAY  44 

    0x49d4960f,// 73 PAY  45 

    0xbc96e1e8,// 74 PAY  46 

    0x0e04a4af,// 75 PAY  47 

    0xc3ad5710,// 76 PAY  48 

    0x98ba79f2,// 77 PAY  49 

    0x2871d6ab,// 78 PAY  50 

    0x5f61e958,// 79 PAY  51 

    0x97123220,// 80 PAY  52 

    0xbc289ad2,// 81 PAY  53 

    0x9a7f319c,// 82 PAY  54 

    0xc1334e87,// 83 PAY  55 

    0xd9ac9db1,// 84 PAY  56 

    0xc92ff2fd,// 85 PAY  57 

    0xa83c6885,// 86 PAY  58 

    0x9ac3bfff,// 87 PAY  59 

    0x8e59430e,// 88 PAY  60 

    0xbf6408c0,// 89 PAY  61 

    0x6d72f92c,// 90 PAY  62 

    0x0258c877,// 91 PAY  63 

    0x3c86d01b,// 92 PAY  64 

    0x08a37ea7,// 93 PAY  65 

    0x139a9a8e,// 94 PAY  66 

    0x2cc8d53f,// 95 PAY  67 

    0xda5a8977,// 96 PAY  68 

    0xcc8d8541,// 97 PAY  69 

    0x3ce4f134,// 98 PAY  70 

    0x7bd61429,// 99 PAY  71 

    0xe8b196a3,// 100 PAY  72 

    0x05686c4b,// 101 PAY  73 

    0x2c001687,// 102 PAY  74 

    0xd0127aed,// 103 PAY  75 

    0xffc91b7d,// 104 PAY  76 

    0xdcbebf86,// 105 PAY  77 

    0x778bf474,// 106 PAY  78 

    0x77e20314,// 107 PAY  79 

    0x57a0682d,// 108 PAY  80 

    0x2c2a633b,// 109 PAY  81 

    0x0d724f8a,// 110 PAY  82 

    0x954138f9,// 111 PAY  83 

    0x93f3919e,// 112 PAY  84 

    0x17664908,// 113 PAY  85 

    0x50ade8fc,// 114 PAY  86 

    0xbeb58501,// 115 PAY  87 

    0x6bb2dd6b,// 116 PAY  88 

    0x95f0bf98,// 117 PAY  89 

    0x44a3fb4e,// 118 PAY  90 

    0x84743fc3,// 119 PAY  91 

    0x33ac4318,// 120 PAY  92 

    0xa412d80e,// 121 PAY  93 

    0x1eeb149f,// 122 PAY  94 

    0x23d08d65,// 123 PAY  95 

    0xf999a8da,// 124 PAY  96 

    0x2219b6f9,// 125 PAY  97 

    0x5bdf5f04,// 126 PAY  98 

    0xb142fc9e,// 127 PAY  99 

    0x2c2ab981,// 128 PAY 100 

    0xbb249404,// 129 PAY 101 

    0x9ce7e52e,// 130 PAY 102 

    0xe97d0d52,// 131 PAY 103 

    0x0d2898b6,// 132 PAY 104 

    0xecb8f9cd,// 133 PAY 105 

    0x0b663c3d,// 134 PAY 106 

    0x96914e2d,// 135 PAY 107 

    0xd99eb864,// 136 PAY 108 

    0x6130f5b9,// 137 PAY 109 

    0xa8acd5ba,// 138 PAY 110 

    0xe2494725,// 139 PAY 111 

    0xebdd7988,// 140 PAY 112 

    0x21e7c24f,// 141 PAY 113 

    0x9d33c5b5,// 142 PAY 114 

    0x7af37487,// 143 PAY 115 

    0x33fdf9b4,// 144 PAY 116 

    0x7bd71a48,// 145 PAY 117 

    0xa175e1f9,// 146 PAY 118 

    0x2f3361b0,// 147 PAY 119 

    0x93805458,// 148 PAY 120 

    0xcef1aefa,// 149 PAY 121 

    0x3fe6c7a5,// 150 PAY 122 

    0xd1bc3b43,// 151 PAY 123 

    0xb4f5f17b,// 152 PAY 124 

    0xac121215,// 153 PAY 125 

    0x455525d2,// 154 PAY 126 

    0x60e86639,// 155 PAY 127 

    0x85eb36fd,// 156 PAY 128 

    0x0d18e706,// 157 PAY 129 

    0xe5a275df,// 158 PAY 130 

    0xa17cb3e4,// 159 PAY 131 

    0xdfa50618,// 160 PAY 132 

    0x6874b355,// 161 PAY 133 

    0x50b7d0e6,// 162 PAY 134 

    0xb4eaabd0,// 163 PAY 135 

    0xc323d384,// 164 PAY 136 

    0x5fc83bce,// 165 PAY 137 

    0xd4601b12,// 166 PAY 138 

    0x0aeb64ce,// 167 PAY 139 

    0xb88eb5b7,// 168 PAY 140 

    0xa1783972,// 169 PAY 141 

    0x7d0d5e31,// 170 PAY 142 

    0x13aec0d5,// 171 PAY 143 

    0xc0c45f37,// 172 PAY 144 

    0x42fc91c1,// 173 PAY 145 

    0x9089f60e,// 174 PAY 146 

    0x9fc4c98e,// 175 PAY 147 

    0x15ad4bf6,// 176 PAY 148 

    0x8e387833,// 177 PAY 149 

    0x634524e3,// 178 PAY 150 

    0x77b63bc8,// 179 PAY 151 

    0xc9689410,// 180 PAY 152 

    0x0819ae99,// 181 PAY 153 

    0x61b3f705,// 182 PAY 154 

    0x5ead1dee,// 183 PAY 155 

    0xa81d655b,// 184 PAY 156 

    0x5ab07438,// 185 PAY 157 

    0x3bca28ec,// 186 PAY 158 

    0xefe62751,// 187 PAY 159 

    0x786ac5f1,// 188 PAY 160 

    0x35a4134c,// 189 PAY 161 

    0xc6d6885a,// 190 PAY 162 

    0x417b00eb,// 191 PAY 163 

    0x711d8e3b,// 192 PAY 164 

    0xda803046,// 193 PAY 165 

    0xd8d70f14,// 194 PAY 166 

    0x8944503e,// 195 PAY 167 

    0xedeb06d8,// 196 PAY 168 

    0x752fb065,// 197 PAY 169 

    0xf1604427,// 198 PAY 170 

    0xe07e9773,// 199 PAY 171 

    0xf6f4a6a3,// 200 PAY 172 

    0x42da0b66,// 201 PAY 173 

    0xe3eecccd,// 202 PAY 174 

    0x1d65b8fe,// 203 PAY 175 

    0xe531be64,// 204 PAY 176 

    0x894adbdc,// 205 PAY 177 

    0x4bf587d0,// 206 PAY 178 

    0xb47b96ce,// 207 PAY 179 

    0x3f15dc76,// 208 PAY 180 

    0x2a91d866,// 209 PAY 181 

    0x9718c26e,// 210 PAY 182 

    0xdd9e1597,// 211 PAY 183 

    0x794d43f4,// 212 PAY 184 

    0xbc255614,// 213 PAY 185 

    0x4b20fc5f,// 214 PAY 186 

    0x6e8bb1b0,// 215 PAY 187 

    0x2a54ee6e,// 216 PAY 188 

    0x8c856024,// 217 PAY 189 

    0x739dcfd4,// 218 PAY 190 

    0xb883fe63,// 219 PAY 191 

    0x5414d02c,// 220 PAY 192 

    0x28b6c3b5,// 221 PAY 193 

    0xccf4a145,// 222 PAY 194 

    0x8a807be1,// 223 PAY 195 

    0xe92e154d,// 224 PAY 196 

    0x31ca2c41,// 225 PAY 197 

    0x4290d6b9,// 226 PAY 198 

    0xbd114d2f,// 227 PAY 199 

    0x84c57073,// 228 PAY 200 

    0xc0169233,// 229 PAY 201 

    0x9b1e6a15,// 230 PAY 202 

    0x87e83ed3,// 231 PAY 203 

    0xc510b5aa,// 232 PAY 204 

    0x258cfa2b,// 233 PAY 205 

    0xe0ac7429,// 234 PAY 206 

    0xe582231f,// 235 PAY 207 

    0x21a8f96e,// 236 PAY 208 

    0xf710f9e0,// 237 PAY 209 

    0x2451fcda,// 238 PAY 210 

    0x6babaae4,// 239 PAY 211 

    0x3e17c61b,// 240 PAY 212 

    0xc7e6e73b,// 241 PAY 213 

    0x258050c5,// 242 PAY 214 

    0x3eba078b,// 243 PAY 215 

    0x442d29ac,// 244 PAY 216 

    0x40fd5aaa,// 245 PAY 217 

    0xc4ffd7d5,// 246 PAY 218 

    0x8eeb4283,// 247 PAY 219 

    0x6e6397f1,// 248 PAY 220 

    0x10a7eead,// 249 PAY 221 

    0x643b100f,// 250 PAY 222 

    0xbb0ca9de,// 251 PAY 223 

    0x26bf9408,// 252 PAY 224 

    0xc230a81f,// 253 PAY 225 

    0xaccb0c79,// 254 PAY 226 

    0x657c9da7,// 255 PAY 227 

    0x22063d5b,// 256 PAY 228 

    0x520e5883,// 257 PAY 229 

    0xad68e984,// 258 PAY 230 

    0x40addc26,// 259 PAY 231 

    0xb77e5eeb,// 260 PAY 232 

    0x5653b835,// 261 PAY 233 

    0x3236d9d1,// 262 PAY 234 

    0xf67c250f,// 263 PAY 235 

    0xc03e3174,// 264 PAY 236 

    0x7fe5682b,// 265 PAY 237 

    0x24aa60cf,// 266 PAY 238 

    0x16106015,// 267 PAY 239 

    0xf3d3aeb6,// 268 PAY 240 

    0x8296357c,// 269 PAY 241 

    0xa54a07cb,// 270 PAY 242 

    0xb48a67b1,// 271 PAY 243 

    0x592e8bf1,// 272 PAY 244 

    0x8de5591b,// 273 PAY 245 

    0xb89c45e9,// 274 PAY 246 

    0xfa2a37c1,// 275 PAY 247 

    0x046b441d,// 276 PAY 248 

    0xc91d51ba,// 277 PAY 249 

    0x4c6a3a32,// 278 PAY 250 

    0x8bf6432d,// 279 PAY 251 

    0xe29bdc69,// 280 PAY 252 

    0x9b562369,// 281 PAY 253 

    0x9d7d96c5,// 282 PAY 254 

    0x3a94451e,// 283 PAY 255 

    0xec0e535b,// 284 PAY 256 

    0x87d4b167,// 285 PAY 257 

    0xd4aae65e,// 286 PAY 258 

    0x94605967,// 287 PAY 259 

    0x04caf13b,// 288 PAY 260 

    0x778fef62,// 289 PAY 261 

    0xe3875647,// 290 PAY 262 

    0x601cb81a,// 291 PAY 263 

    0x0e008442,// 292 PAY 264 

    0x532174ef,// 293 PAY 265 

    0x25f68b42,// 294 PAY 266 

    0x15a5bb1d,// 295 PAY 267 

    0xde3806c2,// 296 PAY 268 

    0x006b702c,// 297 PAY 269 

    0x4b95939e,// 298 PAY 270 

    0x77306e7d,// 299 PAY 271 

    0x6048872a,// 300 PAY 272 

    0x7b3da8a2,// 301 PAY 273 

    0x0fd27c68,// 302 PAY 274 

    0xf39d5249,// 303 PAY 275 

    0xf9806140,// 304 PAY 276 

    0x7be36b32,// 305 PAY 277 

    0x77648582,// 306 PAY 278 

    0xf093f0a8,// 307 PAY 279 

    0xb0052b90,// 308 PAY 280 

    0x6eab97a4,// 309 PAY 281 

    0x57213c9f,// 310 PAY 282 

    0x2e1e806a,// 311 PAY 283 

    0xecc717ea,// 312 PAY 284 

    0x90298046,// 313 PAY 285 

    0x532ead0f,// 314 PAY 286 

    0x0fe6785d,// 315 PAY 287 

    0x4727adf3,// 316 PAY 288 

    0xf019705d,// 317 PAY 289 

    0x971497e3,// 318 PAY 290 

    0x26cf341e,// 319 PAY 291 

    0xbac109c5,// 320 PAY 292 

    0x161660bb,// 321 PAY 293 

    0xed38a1c0,// 322 PAY 294 

    0xb1c055aa,// 323 PAY 295 

    0x642697e6,// 324 PAY 296 

    0x9b554def,// 325 PAY 297 

    0x24b87d70,// 326 PAY 298 

    0xa5342618,// 327 PAY 299 

    0xa4ddd5dd,// 328 PAY 300 

    0xb03500eb,// 329 PAY 301 

    0xd56d8ace,// 330 PAY 302 

    0x5a6f5f31,// 331 PAY 303 

    0xf80398dc,// 332 PAY 304 

    0xf9bedcdb,// 333 PAY 305 

    0x9913ea38,// 334 PAY 306 

    0xb643aa99,// 335 PAY 307 

    0xe142ff5a,// 336 PAY 308 

    0x5e1327b1,// 337 PAY 309 

    0xc63d8793,// 338 PAY 310 

    0x19d5b5ec,// 339 PAY 311 

    0xe30ecdd2,// 340 PAY 312 

    0x33bff272,// 341 PAY 313 

    0xd8adc24c,// 342 PAY 314 

    0x9cc12443,// 343 PAY 315 

    0xbc6cd675,// 344 PAY 316 

    0x07367a13,// 345 PAY 317 

    0x33019e29,// 346 PAY 318 

    0x0e77280b,// 347 PAY 319 

    0xd5aae949,// 348 PAY 320 

    0x6f3f4dae,// 349 PAY 321 

    0x7e303100,// 350 PAY 322 

    0x2a210080,// 351 PAY 323 

    0x9e82dac0,// 352 PAY 324 

    0x6543a507,// 353 PAY 325 

    0x726e6ebe,// 354 PAY 326 

    0xf9367437,// 355 PAY 327 

    0x3e840883,// 356 PAY 328 

    0x059e5d36,// 357 PAY 329 

    0xe54f0633,// 358 PAY 330 

    0xe8ebc922,// 359 PAY 331 

    0x9687bbdd,// 360 PAY 332 

    0x68906bd0,// 361 PAY 333 

    0x5a008c76,// 362 PAY 334 

    0x642f0c3a,// 363 PAY 335 

    0x63e2837c,// 364 PAY 336 

    0xbf4cbc90,// 365 PAY 337 

    0x64a0b67c,// 366 PAY 338 

    0xebb7c844,// 367 PAY 339 

    0x604c0000,// 368 PAY 340 

/// STA is 1 words. 

/// STA num_pkts       : 120 

/// STA pkt_idx        : 243 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdb 

    0x03ccdb78 // 369 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt41_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8061282a,// 4 SCX   2 

    0x00001300,// 5 SCX   3 

    0x2b8e01eb,// 6 SCX   4 

    0x57f924df,// 7 SCX   5 

    0x531721f3,// 8 SCX   6 

    0x1f4f65b8,// 9 SCX   7 

    0x4db8129a,// 10 SCX   8 

    0x61c4bca0,// 11 SCX   9 

    0x956c95b8,// 12 SCX  10 

    0xc27a4c66,// 13 SCX  11 

    0x4b8d0706,// 14 SCX  12 

    0xafbb46d9,// 15 SCX  13 

    0x2ae3ff27,// 16 SCX  14 

    0x0a80948d,// 17 SCX  15 

    0x2cd594fe,// 18 SCX  16 

    0x03ff6b17,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1223 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 841 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 841 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 688 

/// BFD (ofst+len)cry  : 696 

/// BFD ofstiv         : 108 

/// BFD ofsticv        : 884 

    0x00000349,// 20 BFD   1 

    0x02b00008,// 21 BFD   2 

    0x0374006c,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c009d12,// 23 MFM   1 

    0x57f1d6dd,// 24 MFM   2 

    0xc08e49e8,// 25 MFM   3 

    0x272da5d4,// 26 MFM   4 

    0xa84e22ea,// 27 MFM   5 

    0x065550b9,// 28 MFM   6 

    0x75e753cb,// 29 MFM   7 

    0x36f4e373,// 30 MFM   8 

    0x1124e102,// 31 MFM   9 

    0x6ae4c7cd,// 32 MFM  10 

    0x3038746c,// 33 MFM  11 

    0x01480e7e,// 34 MFM  12 

    0x4dbfedc2,// 35 MFM  13 

    0x7204b24c,// 36 MFM  14 

    0x5d77e21a,// 37 MFM  15 

    0x448d6514,// 38 MFM  16 

/// BDA is 307 words. 

/// BDA size     is 1223 (0x4c7) 

/// BDA id       is 0x4f88 

    0x04c74f88,// 39 BDA   1 

/// PAY Generic Data size   : 1223 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x18dd9747,// 40 PAY   1 

    0xbbb55591,// 41 PAY   2 

    0xa877095b,// 42 PAY   3 

    0xd99efd4b,// 43 PAY   4 

    0xb723de79,// 44 PAY   5 

    0x6bbe2c38,// 45 PAY   6 

    0xa2795b6e,// 46 PAY   7 

    0x54268456,// 47 PAY   8 

    0x3bbeeec4,// 48 PAY   9 

    0x576dc187,// 49 PAY  10 

    0xbec1b33b,// 50 PAY  11 

    0xfc60deb5,// 51 PAY  12 

    0x10db9cea,// 52 PAY  13 

    0xb051ffb4,// 53 PAY  14 

    0xf92ad2ba,// 54 PAY  15 

    0x0ba322bc,// 55 PAY  16 

    0xc09c8efa,// 56 PAY  17 

    0x26dfdb4f,// 57 PAY  18 

    0x511ca646,// 58 PAY  19 

    0x02682a50,// 59 PAY  20 

    0xdf384225,// 60 PAY  21 

    0xe023ad83,// 61 PAY  22 

    0xc074e05a,// 62 PAY  23 

    0xe44ce629,// 63 PAY  24 

    0xec93c8c6,// 64 PAY  25 

    0x3652071d,// 65 PAY  26 

    0xc716787d,// 66 PAY  27 

    0xf23dc50c,// 67 PAY  28 

    0x689e6019,// 68 PAY  29 

    0xd72f5cb2,// 69 PAY  30 

    0xa50a6d26,// 70 PAY  31 

    0xee061c66,// 71 PAY  32 

    0x3c8ca92b,// 72 PAY  33 

    0x4d3dd43e,// 73 PAY  34 

    0x002986f7,// 74 PAY  35 

    0xa6b1aede,// 75 PAY  36 

    0xe5f6d7c2,// 76 PAY  37 

    0xea4f5462,// 77 PAY  38 

    0xcf72396b,// 78 PAY  39 

    0x37f93601,// 79 PAY  40 

    0x41b2403f,// 80 PAY  41 

    0xe0c46ca7,// 81 PAY  42 

    0x152dca13,// 82 PAY  43 

    0x923f5607,// 83 PAY  44 

    0xd0788c64,// 84 PAY  45 

    0xb7c1abd5,// 85 PAY  46 

    0x260a0120,// 86 PAY  47 

    0x456ea3bc,// 87 PAY  48 

    0x4a75e76c,// 88 PAY  49 

    0x0160d1ef,// 89 PAY  50 

    0xe1760fd6,// 90 PAY  51 

    0x438f2e77,// 91 PAY  52 

    0x7c4f0b9e,// 92 PAY  53 

    0x07f9b000,// 93 PAY  54 

    0xa9e900d9,// 94 PAY  55 

    0xff0adaa0,// 95 PAY  56 

    0xee2462bd,// 96 PAY  57 

    0x01670ba3,// 97 PAY  58 

    0xd808ddf0,// 98 PAY  59 

    0x8cc747b1,// 99 PAY  60 

    0xd62a5ad9,// 100 PAY  61 

    0x65f48e10,// 101 PAY  62 

    0x8cda0f69,// 102 PAY  63 

    0x8394438d,// 103 PAY  64 

    0x167e8748,// 104 PAY  65 

    0x9e143d38,// 105 PAY  66 

    0x44320874,// 106 PAY  67 

    0xc4989101,// 107 PAY  68 

    0x80407274,// 108 PAY  69 

    0xfa275d21,// 109 PAY  70 

    0x1d34adb4,// 110 PAY  71 

    0x5e3c1f5a,// 111 PAY  72 

    0x09a78aa2,// 112 PAY  73 

    0x8b2b94e6,// 113 PAY  74 

    0x782cf788,// 114 PAY  75 

    0xe19dc1ff,// 115 PAY  76 

    0xeed6ae23,// 116 PAY  77 

    0x1d9ee1c0,// 117 PAY  78 

    0xb43afe3f,// 118 PAY  79 

    0x113c3716,// 119 PAY  80 

    0xafc947a5,// 120 PAY  81 

    0x710d8838,// 121 PAY  82 

    0x64627509,// 122 PAY  83 

    0x182bc904,// 123 PAY  84 

    0xbcf7789a,// 124 PAY  85 

    0x1fcaa353,// 125 PAY  86 

    0xc7e99fa1,// 126 PAY  87 

    0x4682ae95,// 127 PAY  88 

    0xbddc1d83,// 128 PAY  89 

    0x59be55f8,// 129 PAY  90 

    0xbf660c88,// 130 PAY  91 

    0x8652171b,// 131 PAY  92 

    0x52786486,// 132 PAY  93 

    0x2a9560fa,// 133 PAY  94 

    0xa1434cdc,// 134 PAY  95 

    0x05bfae01,// 135 PAY  96 

    0xb3214906,// 136 PAY  97 

    0x8e693628,// 137 PAY  98 

    0xe81a03a2,// 138 PAY  99 

    0xc92664b0,// 139 PAY 100 

    0x676c52d2,// 140 PAY 101 

    0x8d49e115,// 141 PAY 102 

    0x66d34b27,// 142 PAY 103 

    0x850bfc93,// 143 PAY 104 

    0x22456a6f,// 144 PAY 105 

    0xbf08056c,// 145 PAY 106 

    0xcb5ce283,// 146 PAY 107 

    0xb558911d,// 147 PAY 108 

    0x544d3bc9,// 148 PAY 109 

    0x3798aebd,// 149 PAY 110 

    0x716ea3e0,// 150 PAY 111 

    0x6eb71ce6,// 151 PAY 112 

    0x36e2fab2,// 152 PAY 113 

    0x9c3df7c2,// 153 PAY 114 

    0x6b0f0c73,// 154 PAY 115 

    0xdb8482c1,// 155 PAY 116 

    0x92f0e42b,// 156 PAY 117 

    0x612b4140,// 157 PAY 118 

    0x53919512,// 158 PAY 119 

    0x4e9c7af2,// 159 PAY 120 

    0x9a2f0cd0,// 160 PAY 121 

    0x2526884f,// 161 PAY 122 

    0x9d81a662,// 162 PAY 123 

    0x47c27c75,// 163 PAY 124 

    0x3fc5d88a,// 164 PAY 125 

    0xa250a548,// 165 PAY 126 

    0xa787ed20,// 166 PAY 127 

    0x1165426f,// 167 PAY 128 

    0x4f5ba9a4,// 168 PAY 129 

    0xb3ee680b,// 169 PAY 130 

    0x2e0e75ac,// 170 PAY 131 

    0x5d25aa18,// 171 PAY 132 

    0xcac41a9b,// 172 PAY 133 

    0xff17bd83,// 173 PAY 134 

    0x192ab16c,// 174 PAY 135 

    0x8a8a2ab4,// 175 PAY 136 

    0xe6403783,// 176 PAY 137 

    0x307ed9da,// 177 PAY 138 

    0xb764bdff,// 178 PAY 139 

    0x1ec88503,// 179 PAY 140 

    0xc738c475,// 180 PAY 141 

    0x4844556e,// 181 PAY 142 

    0x267ec033,// 182 PAY 143 

    0xc71bde43,// 183 PAY 144 

    0x0792e9be,// 184 PAY 145 

    0x8d79096c,// 185 PAY 146 

    0xa1177137,// 186 PAY 147 

    0x51eb8046,// 187 PAY 148 

    0x2e799601,// 188 PAY 149 

    0x8a364460,// 189 PAY 150 

    0x1a0c46a7,// 190 PAY 151 

    0x865d48ae,// 191 PAY 152 

    0xca0c963f,// 192 PAY 153 

    0x33dd778a,// 193 PAY 154 

    0x56814bb0,// 194 PAY 155 

    0xe5d7d9fb,// 195 PAY 156 

    0x9e76a00d,// 196 PAY 157 

    0x296dbe70,// 197 PAY 158 

    0xd666750b,// 198 PAY 159 

    0x339d7dda,// 199 PAY 160 

    0x0c6d0388,// 200 PAY 161 

    0x2342bda5,// 201 PAY 162 

    0x84fdf05e,// 202 PAY 163 

    0x5af58c5e,// 203 PAY 164 

    0x527623c6,// 204 PAY 165 

    0xfa3ba4b3,// 205 PAY 166 

    0x1cb3ee1a,// 206 PAY 167 

    0x9427d11c,// 207 PAY 168 

    0x0369f18f,// 208 PAY 169 

    0xc11b13f1,// 209 PAY 170 

    0x11463383,// 210 PAY 171 

    0x7a8c1ec0,// 211 PAY 172 

    0x9bc12f7d,// 212 PAY 173 

    0x1d36745a,// 213 PAY 174 

    0xca8ee35a,// 214 PAY 175 

    0x2b403e3d,// 215 PAY 176 

    0xc04cbad2,// 216 PAY 177 

    0xddf2f23a,// 217 PAY 178 

    0xc8c6b509,// 218 PAY 179 

    0x584cf5a9,// 219 PAY 180 

    0x62d5ff31,// 220 PAY 181 

    0x902b7107,// 221 PAY 182 

    0x725c00a8,// 222 PAY 183 

    0x2caebb34,// 223 PAY 184 

    0xba885d71,// 224 PAY 185 

    0xc518ab1e,// 225 PAY 186 

    0x5bfda206,// 226 PAY 187 

    0xac37a2f3,// 227 PAY 188 

    0x9e6bfdac,// 228 PAY 189 

    0xeede11e1,// 229 PAY 190 

    0x9ffbe096,// 230 PAY 191 

    0x7e341510,// 231 PAY 192 

    0x432d5683,// 232 PAY 193 

    0xb1412b20,// 233 PAY 194 

    0xeae47077,// 234 PAY 195 

    0x8d758ae6,// 235 PAY 196 

    0x621fe272,// 236 PAY 197 

    0x0130a2c6,// 237 PAY 198 

    0x960519f0,// 238 PAY 199 

    0x0d2ec61d,// 239 PAY 200 

    0x541f3c45,// 240 PAY 201 

    0x481bea88,// 241 PAY 202 

    0x3ce1d5e8,// 242 PAY 203 

    0x6eb1dac2,// 243 PAY 204 

    0x0fc8acdd,// 244 PAY 205 

    0x0173dfb4,// 245 PAY 206 

    0xbeb2626e,// 246 PAY 207 

    0x137d3321,// 247 PAY 208 

    0xaec03736,// 248 PAY 209 

    0xc36f94d9,// 249 PAY 210 

    0x38d6fa83,// 250 PAY 211 

    0x25edc17d,// 251 PAY 212 

    0x0c71472c,// 252 PAY 213 

    0x2c5b5995,// 253 PAY 214 

    0xd3a466a9,// 254 PAY 215 

    0x4f6f4f35,// 255 PAY 216 

    0xf407e4ff,// 256 PAY 217 

    0x74885182,// 257 PAY 218 

    0xf0f1551f,// 258 PAY 219 

    0x72623b4c,// 259 PAY 220 

    0xa78316bc,// 260 PAY 221 

    0xefe78f5d,// 261 PAY 222 

    0xf906c10b,// 262 PAY 223 

    0x3ff91405,// 263 PAY 224 

    0x53c1f32d,// 264 PAY 225 

    0x5545eec6,// 265 PAY 226 

    0x413356dd,// 266 PAY 227 

    0xc34df7d2,// 267 PAY 228 

    0x37549441,// 268 PAY 229 

    0xf2ca6dd4,// 269 PAY 230 

    0xcecf9a2e,// 270 PAY 231 

    0xb9ea6a9f,// 271 PAY 232 

    0x7baa87d0,// 272 PAY 233 

    0x1f4500ca,// 273 PAY 234 

    0xac825ab6,// 274 PAY 235 

    0xe3ce1d67,// 275 PAY 236 

    0x0d2de97b,// 276 PAY 237 

    0xecc03175,// 277 PAY 238 

    0xe8f23816,// 278 PAY 239 

    0x77df86e0,// 279 PAY 240 

    0x29a07199,// 280 PAY 241 

    0xcf901a4d,// 281 PAY 242 

    0x64c9ea17,// 282 PAY 243 

    0x3463a083,// 283 PAY 244 

    0x2cc21879,// 284 PAY 245 

    0x75e392c0,// 285 PAY 246 

    0x7bd3f041,// 286 PAY 247 

    0x8dae4966,// 287 PAY 248 

    0x525cfa05,// 288 PAY 249 

    0xdde32ba2,// 289 PAY 250 

    0x45ddfb82,// 290 PAY 251 

    0x43887a02,// 291 PAY 252 

    0xb7c1c724,// 292 PAY 253 

    0x06c00c5e,// 293 PAY 254 

    0xc64b1476,// 294 PAY 255 

    0xcd67882c,// 295 PAY 256 

    0xe8615459,// 296 PAY 257 

    0x9d02dfa6,// 297 PAY 258 

    0x74312cd3,// 298 PAY 259 

    0x5bf9beca,// 299 PAY 260 

    0x88f3eb1b,// 300 PAY 261 

    0x5f3715e1,// 301 PAY 262 

    0xd8ab66c5,// 302 PAY 263 

    0xed2a6673,// 303 PAY 264 

    0xe9675c73,// 304 PAY 265 

    0x4556907f,// 305 PAY 266 

    0xa7a3e3c5,// 306 PAY 267 

    0xa9972339,// 307 PAY 268 

    0xc27018cf,// 308 PAY 269 

    0x5833f310,// 309 PAY 270 

    0x20b38052,// 310 PAY 271 

    0xab6e0a03,// 311 PAY 272 

    0x693e52bb,// 312 PAY 273 

    0x5fc633df,// 313 PAY 274 

    0xfcb98661,// 314 PAY 275 

    0x7401c29a,// 315 PAY 276 

    0xfbd51c17,// 316 PAY 277 

    0x27afdda9,// 317 PAY 278 

    0x414f1e14,// 318 PAY 279 

    0xc604ab4c,// 319 PAY 280 

    0x2027d280,// 320 PAY 281 

    0x0d3a5ed2,// 321 PAY 282 

    0xf7b34487,// 322 PAY 283 

    0x245942f2,// 323 PAY 284 

    0x4bd1eb86,// 324 PAY 285 

    0x7ac9d62c,// 325 PAY 286 

    0x12690717,// 326 PAY 287 

    0x0e36cc46,// 327 PAY 288 

    0xdaeb51d0,// 328 PAY 289 

    0x4c7c4191,// 329 PAY 290 

    0xb5bd8564,// 330 PAY 291 

    0x15235b5b,// 331 PAY 292 

    0x609cea6f,// 332 PAY 293 

    0xf0d5142f,// 333 PAY 294 

    0x3c4b79fb,// 334 PAY 295 

    0x4154c94f,// 335 PAY 296 

    0x8d057954,// 336 PAY 297 

    0x620d3c16,// 337 PAY 298 

    0x2cd13d33,// 338 PAY 299 

    0x86c54522,// 339 PAY 300 

    0x00d1df9d,// 340 PAY 301 

    0x68fd9ca0,// 341 PAY 302 

    0x32c8461f,// 342 PAY 303 

    0xdde4e27c,// 343 PAY 304 

    0x42303e6e,// 344 PAY 305 

    0x4e16ab00,// 345 PAY 306 

/// STA is 1 words. 

/// STA num_pkts       : 154 

/// STA pkt_idx        : 101 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4a 

    0x01954a9a // 346 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt42_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80602883,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0x0b429396,// 6 SCX   4 

    0x1eb6f1c6,// 7 SCX   5 

    0xf8995703,// 8 SCX   6 

    0x105da53f,// 9 SCX   7 

    0xdbc817a6,// 10 SCX   8 

    0x7abd2758,// 11 SCX   9 

    0xfa634ba9,// 12 SCX  10 

    0xdb5fd7e6,// 13 SCX  11 

    0xcdeacdc5,// 14 SCX  12 

    0xc7431e89,// 15 SCX  13 

    0xd9abb869,// 16 SCX  14 

    0x4b924788,// 17 SCX  15 

    0x1009641d,// 18 SCX  16 

    0x22be8efe,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 975 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 771 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 771 

/// BFD lencrypto      : 80 

/// BFD ofstcrypto     : 396 

/// BFD (ofst+len)cry  : 476 

/// BFD ofstiv         : 192 

/// BFD ofsticv        : 892 

    0x00000303,// 20 BFD   1 

    0x018c0050,// 21 BFD   2 

    0x037c00c0,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00ccc4,// 23 MFM   1 

    0x34be412e,// 24 MFM   2 

    0xff58662e,// 25 MFM   3 

    0x6880ec3d,// 26 MFM   4 

    0x8b7ef5d0,// 27 MFM   5 

    0xa4c8f0a5,// 28 MFM   6 

    0x9dbe9bf8,// 29 MFM   7 

    0x0c41efd4,// 30 MFM   8 

    0x2e1d3499,// 31 MFM   9 

    0x88f0aa58,// 32 MFM  10 

    0x78749c96,// 33 MFM  11 

    0xccbc67de,// 34 MFM  12 

    0xd48e7f1d,// 35 MFM  13 

    0x3c594d5c,// 36 MFM  14 

    0x5048ff53,// 37 MFM  15 

    0xcc80bade,// 38 MFM  16 

/// BDA is 245 words. 

/// BDA size     is 975 (0x3cf) 

/// BDA id       is 0x80ec 

    0x03cf80ec,// 39 BDA   1 

/// PAY Generic Data size   : 975 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x17e87c65,// 40 PAY   1 

    0xca51282b,// 41 PAY   2 

    0x3361ddd2,// 42 PAY   3 

    0xb6d9d6a1,// 43 PAY   4 

    0x5af49c0c,// 44 PAY   5 

    0xe2085d19,// 45 PAY   6 

    0xb744a765,// 46 PAY   7 

    0xbb243209,// 47 PAY   8 

    0x17cd9707,// 48 PAY   9 

    0x881b1090,// 49 PAY  10 

    0x3d3f5fbf,// 50 PAY  11 

    0x6dfe0fcd,// 51 PAY  12 

    0xe186b723,// 52 PAY  13 

    0xd2629e1d,// 53 PAY  14 

    0x2c5b7403,// 54 PAY  15 

    0x1b36ab32,// 55 PAY  16 

    0x4b1ad987,// 56 PAY  17 

    0x61d56fdf,// 57 PAY  18 

    0xf1655abb,// 58 PAY  19 

    0x469f91c7,// 59 PAY  20 

    0x6c97f9f7,// 60 PAY  21 

    0x65a06773,// 61 PAY  22 

    0xa65bea29,// 62 PAY  23 

    0x5d0db645,// 63 PAY  24 

    0x710d01c1,// 64 PAY  25 

    0x34e0f726,// 65 PAY  26 

    0x5413c8a3,// 66 PAY  27 

    0x6373edf8,// 67 PAY  28 

    0x9652512b,// 68 PAY  29 

    0xb7a13f8c,// 69 PAY  30 

    0xd0ba224f,// 70 PAY  31 

    0x083f1b04,// 71 PAY  32 

    0xdff404bf,// 72 PAY  33 

    0x4a9e939f,// 73 PAY  34 

    0x5f433221,// 74 PAY  35 

    0x3c75908b,// 75 PAY  36 

    0x1fac658a,// 76 PAY  37 

    0x86a9eb14,// 77 PAY  38 

    0xdebec7d1,// 78 PAY  39 

    0x9f6544d9,// 79 PAY  40 

    0x1abd1a67,// 80 PAY  41 

    0xc44cc2b5,// 81 PAY  42 

    0xa4f43d7b,// 82 PAY  43 

    0x58796bb1,// 83 PAY  44 

    0x7867703e,// 84 PAY  45 

    0x7c9daa41,// 85 PAY  46 

    0x049e1416,// 86 PAY  47 

    0xf96519ba,// 87 PAY  48 

    0xc94e14a4,// 88 PAY  49 

    0xe576a265,// 89 PAY  50 

    0x09b2f528,// 90 PAY  51 

    0xceeb7491,// 91 PAY  52 

    0x4a3b7b65,// 92 PAY  53 

    0xb6d6d46c,// 93 PAY  54 

    0x7e1dc3df,// 94 PAY  55 

    0x25533576,// 95 PAY  56 

    0xafb062dd,// 96 PAY  57 

    0xbb3c19d7,// 97 PAY  58 

    0x2cff5cc1,// 98 PAY  59 

    0x202bde3e,// 99 PAY  60 

    0x40d73925,// 100 PAY  61 

    0xff283d53,// 101 PAY  62 

    0xdb243e67,// 102 PAY  63 

    0x9f06267c,// 103 PAY  64 

    0x4ccc3fc8,// 104 PAY  65 

    0x326ab19b,// 105 PAY  66 

    0x209bea7b,// 106 PAY  67 

    0x7bec463d,// 107 PAY  68 

    0x3227de10,// 108 PAY  69 

    0xef216294,// 109 PAY  70 

    0xd02d44c8,// 110 PAY  71 

    0x5d4cc0be,// 111 PAY  72 

    0x0e11e5e0,// 112 PAY  73 

    0xccedc806,// 113 PAY  74 

    0xa4d0fa38,// 114 PAY  75 

    0x72461ac1,// 115 PAY  76 

    0xede0952e,// 116 PAY  77 

    0x7c275b7a,// 117 PAY  78 

    0xbb90f259,// 118 PAY  79 

    0x4fd48fb6,// 119 PAY  80 

    0xd29c2766,// 120 PAY  81 

    0x9e96c62c,// 121 PAY  82 

    0x883f79fc,// 122 PAY  83 

    0xa1d23c3d,// 123 PAY  84 

    0x817cbfde,// 124 PAY  85 

    0x1c845d54,// 125 PAY  86 

    0xbecce8d0,// 126 PAY  87 

    0xdb5fbf8e,// 127 PAY  88 

    0x5f63e806,// 128 PAY  89 

    0xe49eb55e,// 129 PAY  90 

    0x2cc57413,// 130 PAY  91 

    0x10581d3e,// 131 PAY  92 

    0x3849b402,// 132 PAY  93 

    0x3af647c1,// 133 PAY  94 

    0x3c096653,// 134 PAY  95 

    0x16037a93,// 135 PAY  96 

    0xe149ad74,// 136 PAY  97 

    0xbad2f089,// 137 PAY  98 

    0x962fe0ad,// 138 PAY  99 

    0xb890c889,// 139 PAY 100 

    0xd7a11649,// 140 PAY 101 

    0x1a228d3b,// 141 PAY 102 

    0x90cf9395,// 142 PAY 103 

    0xc143fb50,// 143 PAY 104 

    0x4fbc1917,// 144 PAY 105 

    0x82197f5b,// 145 PAY 106 

    0x11107889,// 146 PAY 107 

    0x4540b8ce,// 147 PAY 108 

    0xa41412da,// 148 PAY 109 

    0x440b8536,// 149 PAY 110 

    0xa1697f90,// 150 PAY 111 

    0xee46d6e7,// 151 PAY 112 

    0x49ad2589,// 152 PAY 113 

    0x354c64fd,// 153 PAY 114 

    0x348071c5,// 154 PAY 115 

    0x5fa136e7,// 155 PAY 116 

    0x11b4b579,// 156 PAY 117 

    0xd94e2e62,// 157 PAY 118 

    0x15647ff1,// 158 PAY 119 

    0x5be789c0,// 159 PAY 120 

    0xb30594ee,// 160 PAY 121 

    0x20af2fe2,// 161 PAY 122 

    0xde8d91df,// 162 PAY 123 

    0xea6f91d3,// 163 PAY 124 

    0xbed7c7df,// 164 PAY 125 

    0x43866352,// 165 PAY 126 

    0xf167b441,// 166 PAY 127 

    0xa40beed0,// 167 PAY 128 

    0xfa188060,// 168 PAY 129 

    0x12a8836d,// 169 PAY 130 

    0x72b18ea7,// 170 PAY 131 

    0x63a1cc8c,// 171 PAY 132 

    0x44956b7b,// 172 PAY 133 

    0x7f61cfa2,// 173 PAY 134 

    0x6e55d117,// 174 PAY 135 

    0xa670e24e,// 175 PAY 136 

    0xb88f52e7,// 176 PAY 137 

    0xc64b5157,// 177 PAY 138 

    0x8a741c27,// 178 PAY 139 

    0x43e2ab2c,// 179 PAY 140 

    0x4a1e7c7b,// 180 PAY 141 

    0xbb975636,// 181 PAY 142 

    0xe6157ef9,// 182 PAY 143 

    0x52601b8b,// 183 PAY 144 

    0x3d3d2152,// 184 PAY 145 

    0xdbb36e79,// 185 PAY 146 

    0x9a15e2cf,// 186 PAY 147 

    0xa1924d24,// 187 PAY 148 

    0xbc38f421,// 188 PAY 149 

    0xe1bda536,// 189 PAY 150 

    0x37a4635b,// 190 PAY 151 

    0x9ac26209,// 191 PAY 152 

    0x0acfcd17,// 192 PAY 153 

    0x72b0e244,// 193 PAY 154 

    0x247bd9f8,// 194 PAY 155 

    0x02046fb1,// 195 PAY 156 

    0x3e7f4e3a,// 196 PAY 157 

    0x04b4ff1a,// 197 PAY 158 

    0xaec2ad58,// 198 PAY 159 

    0x019a6502,// 199 PAY 160 

    0x47da2f72,// 200 PAY 161 

    0xbe2f094a,// 201 PAY 162 

    0xe8884679,// 202 PAY 163 

    0xb1add602,// 203 PAY 164 

    0xe3d4e7f2,// 204 PAY 165 

    0xfad9c254,// 205 PAY 166 

    0xe694fa0a,// 206 PAY 167 

    0x9718f5f1,// 207 PAY 168 

    0xfa088205,// 208 PAY 169 

    0xe728b4a5,// 209 PAY 170 

    0xc2fa6277,// 210 PAY 171 

    0xe23a7801,// 211 PAY 172 

    0x5fd9c1d3,// 212 PAY 173 

    0xfec01d65,// 213 PAY 174 

    0x61ac968b,// 214 PAY 175 

    0xbd3b7124,// 215 PAY 176 

    0xbc3ca63b,// 216 PAY 177 

    0x1cde94a2,// 217 PAY 178 

    0x1e6cc1af,// 218 PAY 179 

    0xaa9f83ef,// 219 PAY 180 

    0x84870518,// 220 PAY 181 

    0xdad722ea,// 221 PAY 182 

    0xbdcb82ea,// 222 PAY 183 

    0x3e4e8520,// 223 PAY 184 

    0x0a745ccf,// 224 PAY 185 

    0xf99c8dc2,// 225 PAY 186 

    0x674ff198,// 226 PAY 187 

    0xd59988b2,// 227 PAY 188 

    0x25edd6d4,// 228 PAY 189 

    0x6838c614,// 229 PAY 190 

    0x46bcd362,// 230 PAY 191 

    0x93107eb4,// 231 PAY 192 

    0x7e4b4fb3,// 232 PAY 193 

    0x799b764f,// 233 PAY 194 

    0xb0f62e5c,// 234 PAY 195 

    0xff24a02a,// 235 PAY 196 

    0xf2cbdd45,// 236 PAY 197 

    0xdc045633,// 237 PAY 198 

    0x88cb5392,// 238 PAY 199 

    0x381966d8,// 239 PAY 200 

    0xc574bbfe,// 240 PAY 201 

    0x8316d412,// 241 PAY 202 

    0xfaa37800,// 242 PAY 203 

    0x6e13d476,// 243 PAY 204 

    0x42f1faba,// 244 PAY 205 

    0x300dd771,// 245 PAY 206 

    0xd6ed5a4a,// 246 PAY 207 

    0xa5264275,// 247 PAY 208 

    0x908772db,// 248 PAY 209 

    0x9f8a2c49,// 249 PAY 210 

    0x4c8ffbe3,// 250 PAY 211 

    0x04fc8531,// 251 PAY 212 

    0x7f98fa2c,// 252 PAY 213 

    0x4e6721ca,// 253 PAY 214 

    0x5177aa72,// 254 PAY 215 

    0x6d43639e,// 255 PAY 216 

    0x6d65d5b7,// 256 PAY 217 

    0x60f9d37d,// 257 PAY 218 

    0x5dffbb15,// 258 PAY 219 

    0x8f3ed038,// 259 PAY 220 

    0x2aecb1b8,// 260 PAY 221 

    0xc8491a07,// 261 PAY 222 

    0x9cd241cd,// 262 PAY 223 

    0xf511f535,// 263 PAY 224 

    0xe1296f44,// 264 PAY 225 

    0x05db55e2,// 265 PAY 226 

    0x7da70dcb,// 266 PAY 227 

    0x1ba2ec9d,// 267 PAY 228 

    0x09a013f9,// 268 PAY 229 

    0x542abb8a,// 269 PAY 230 

    0x214241fd,// 270 PAY 231 

    0x48693cd8,// 271 PAY 232 

    0x0b504da2,// 272 PAY 233 

    0xd21b4ec0,// 273 PAY 234 

    0xd0d50ae0,// 274 PAY 235 

    0xac183eba,// 275 PAY 236 

    0x54c014fc,// 276 PAY 237 

    0x3c6b374a,// 277 PAY 238 

    0x13fd6b32,// 278 PAY 239 

    0x9a38635c,// 279 PAY 240 

    0x095a7532,// 280 PAY 241 

    0x017b595d,// 281 PAY 242 

    0x3b4691ea,// 282 PAY 243 

    0x619a2800,// 283 PAY 244 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 54 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x8b 

    0x00d98b2d // 284 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt43_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8062280d,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0x24d51bdd,// 6 SCX   4 

    0x23dbed44,// 7 SCX   5 

    0x913200e3,// 8 SCX   6 

    0x2f194679,// 9 SCX   7 

    0xa82a581d,// 10 SCX   8 

    0x0957b925,// 11 SCX   9 

    0x0df77eda,// 12 SCX  10 

    0xfc1e2cfb,// 13 SCX  11 

    0xab26b0f5,// 14 SCX  12 

    0xc58219d4,// 15 SCX  13 

    0xd45a95fb,// 16 SCX  14 

    0x567ac70c,// 17 SCX  15 

    0x1f514848,// 18 SCX  16 

    0x8b4eb0f5,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 501 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 407 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 407 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 320 

/// BFD (ofst+len)cry  : 344 

/// BFD ofstiv         : 28 

/// BFD ofsticv        : 456 

    0x00000197,// 20 BFD   1 

    0x01400018,// 21 BFD   2 

    0x01c8001c,// 22 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 21 

    0x2100c39a,// 23 MFM   1 

    0x90fb7b3c,// 24 MFM   2 

    0xd81bc22c,// 25 MFM   3 

    0x40093911,// 26 MFM   4 

    0x8b9ae000,// 27 MFM   5 

/// BDA is 127 words. 

/// BDA size     is 501 (0x1f5) 

/// BDA id       is 0x6967 

    0x01f56967,// 28 BDA   1 

/// PAY Generic Data size   : 501 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2d849fd4,// 29 PAY   1 

    0xc7e01521,// 30 PAY   2 

    0xd10239d9,// 31 PAY   3 

    0x3160419a,// 32 PAY   4 

    0x0297ddec,// 33 PAY   5 

    0xb87ba183,// 34 PAY   6 

    0x40a1465c,// 35 PAY   7 

    0x27ad28df,// 36 PAY   8 

    0x2ab27ecc,// 37 PAY   9 

    0xa408956f,// 38 PAY  10 

    0x428cd883,// 39 PAY  11 

    0x479e7175,// 40 PAY  12 

    0x35899e3d,// 41 PAY  13 

    0x37768a0e,// 42 PAY  14 

    0x7cb0e53b,// 43 PAY  15 

    0x12cc6ff5,// 44 PAY  16 

    0xe1bbd635,// 45 PAY  17 

    0xbd88de36,// 46 PAY  18 

    0x4f54d585,// 47 PAY  19 

    0x270d4dc7,// 48 PAY  20 

    0x0fb295dd,// 49 PAY  21 

    0x266ef1ab,// 50 PAY  22 

    0xb4eed800,// 51 PAY  23 

    0xcaadb61a,// 52 PAY  24 

    0x45be5225,// 53 PAY  25 

    0x99a73398,// 54 PAY  26 

    0x196ed03a,// 55 PAY  27 

    0xfd7f23b6,// 56 PAY  28 

    0x589a9b37,// 57 PAY  29 

    0x6c430a78,// 58 PAY  30 

    0x43061ea9,// 59 PAY  31 

    0x7b739cb2,// 60 PAY  32 

    0x96992abb,// 61 PAY  33 

    0x65002627,// 62 PAY  34 

    0xef2039f9,// 63 PAY  35 

    0x7703fbee,// 64 PAY  36 

    0x7fcfa321,// 65 PAY  37 

    0x978d8222,// 66 PAY  38 

    0x4399d677,// 67 PAY  39 

    0x64539cf9,// 68 PAY  40 

    0x654634cb,// 69 PAY  41 

    0x3f38ce25,// 70 PAY  42 

    0x95c877a5,// 71 PAY  43 

    0x59703ce9,// 72 PAY  44 

    0xf722668f,// 73 PAY  45 

    0xbab23149,// 74 PAY  46 

    0xe77a46d4,// 75 PAY  47 

    0xc4c13441,// 76 PAY  48 

    0x5e850648,// 77 PAY  49 

    0x05df9b12,// 78 PAY  50 

    0xb109823c,// 79 PAY  51 

    0x33def586,// 80 PAY  52 

    0x4af8f8e4,// 81 PAY  53 

    0xa4fabcc1,// 82 PAY  54 

    0xa968949c,// 83 PAY  55 

    0x8b8f8443,// 84 PAY  56 

    0x8a6b4933,// 85 PAY  57 

    0xa95d84f7,// 86 PAY  58 

    0x35abfb52,// 87 PAY  59 

    0xe4ed1f03,// 88 PAY  60 

    0xecb9dad4,// 89 PAY  61 

    0xce1db557,// 90 PAY  62 

    0xf6fff7d3,// 91 PAY  63 

    0xdbf8dc80,// 92 PAY  64 

    0xc6c7883f,// 93 PAY  65 

    0xe9e5ea18,// 94 PAY  66 

    0x14205f28,// 95 PAY  67 

    0x0d6e806c,// 96 PAY  68 

    0x29f4d671,// 97 PAY  69 

    0x6c97d8b9,// 98 PAY  70 

    0xc9043cfd,// 99 PAY  71 

    0xb2c63235,// 100 PAY  72 

    0xd882f1fb,// 101 PAY  73 

    0x43995437,// 102 PAY  74 

    0x7589fb0a,// 103 PAY  75 

    0x0c299c47,// 104 PAY  76 

    0xa9a98801,// 105 PAY  77 

    0x5daaa565,// 106 PAY  78 

    0x3269121f,// 107 PAY  79 

    0xc04b6afc,// 108 PAY  80 

    0x9078a53f,// 109 PAY  81 

    0x28131eac,// 110 PAY  82 

    0x00cea4e0,// 111 PAY  83 

    0x900da053,// 112 PAY  84 

    0xc3d737bc,// 113 PAY  85 

    0xdb6f2495,// 114 PAY  86 

    0x0302fc82,// 115 PAY  87 

    0x295fc49f,// 116 PAY  88 

    0xef2d6b35,// 117 PAY  89 

    0x8a94f163,// 118 PAY  90 

    0xf3c4f1b7,// 119 PAY  91 

    0x1cfa812f,// 120 PAY  92 

    0x1c7caafb,// 121 PAY  93 

    0xd9c60e22,// 122 PAY  94 

    0xc53d5526,// 123 PAY  95 

    0x35a12ebd,// 124 PAY  96 

    0x98d6a0dc,// 125 PAY  97 

    0x7c26ad3a,// 126 PAY  98 

    0xf7a31d39,// 127 PAY  99 

    0x8ab07f0a,// 128 PAY 100 

    0xa8d38cb2,// 129 PAY 101 

    0xd44456e6,// 130 PAY 102 

    0x1478cb9f,// 131 PAY 103 

    0xf1b4e491,// 132 PAY 104 

    0xa170a484,// 133 PAY 105 

    0xd6a1bfb8,// 134 PAY 106 

    0xe9f1efe4,// 135 PAY 107 

    0x5ed7e966,// 136 PAY 108 

    0x06e51c2b,// 137 PAY 109 

    0xcb807729,// 138 PAY 110 

    0x9da68b95,// 139 PAY 111 

    0x5f28659b,// 140 PAY 112 

    0xca21740a,// 141 PAY 113 

    0xf9fc624d,// 142 PAY 114 

    0x74c470c2,// 143 PAY 115 

    0x0bcdbffb,// 144 PAY 116 

    0xb2c80166,// 145 PAY 117 

    0xc7a905fc,// 146 PAY 118 

    0x38196ee2,// 147 PAY 119 

    0x6c606c0f,// 148 PAY 120 

    0xe29136d6,// 149 PAY 121 

    0x18ced30c,// 150 PAY 122 

    0xb319beab,// 151 PAY 123 

    0xe9b48597,// 152 PAY 124 

    0x25638b81,// 153 PAY 125 

    0x76000000,// 154 PAY 126 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 232 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x79 

    0x03a07985 // 155 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt44_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x806628dc,// 4 SCX   2 

    0x00001182,// 5 SCX   3 

    0xcc81fa91,// 6 SCX   4 

    0xa45d9808,// 7 SCX   5 

    0x2e871ba5,// 8 SCX   6 

    0x5d3466e3,// 9 SCX   7 

    0x8ac5eb98,// 10 SCX   8 

    0x231ae11a,// 11 SCX   9 

    0xd532d90f,// 12 SCX  10 

    0xff690d8a,// 13 SCX  11 

    0x0df7e6ec,// 14 SCX  12 

    0x4112bcf2,// 15 SCX  13 

    0x01048a4c,// 16 SCX  14 

    0xbee8d199,// 17 SCX  15 

    0x88e50cce,// 18 SCX  16 

    0x573dcc32,// 19 SCX  17 

    0xeef26255,// 20 SCX  18 

    0x42b151c5,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1499 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 164 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 164 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 92 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 560 

    0x000000a4,// 22 BFD   1 

    0x004c0010,// 23 BFD   2 

    0x0230000c,// 24 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 24 

    0x24004480,// 25 MFM   1 

    0xe2cdb8a4,// 26 MFM   2 

    0x2d89e63f,// 27 MFM   3 

    0x8f67315b,// 28 MFM   4 

    0xa0c91808,// 29 MFM   5 

/// BDA is 376 words. 

/// BDA size     is 1499 (0x5db) 

/// BDA id       is 0x4bfd 

    0x05db4bfd,// 30 BDA   1 

/// PAY Generic Data size   : 1499 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x21bb0df0,// 31 PAY   1 

    0xea141529,// 32 PAY   2 

    0x42f7284a,// 33 PAY   3 

    0x3ebcf7fd,// 34 PAY   4 

    0xe00bcbe2,// 35 PAY   5 

    0x302aea4b,// 36 PAY   6 

    0x4668000b,// 37 PAY   7 

    0xc1bbdad3,// 38 PAY   8 

    0xa01763a4,// 39 PAY   9 

    0x17cb745f,// 40 PAY  10 

    0x4599fefe,// 41 PAY  11 

    0xca472bc0,// 42 PAY  12 

    0x0df09fd4,// 43 PAY  13 

    0x9a20e16c,// 44 PAY  14 

    0xba5b95e1,// 45 PAY  15 

    0x38bb8733,// 46 PAY  16 

    0x5311f613,// 47 PAY  17 

    0x0723b45e,// 48 PAY  18 

    0x1814788d,// 49 PAY  19 

    0x36215c30,// 50 PAY  20 

    0xa69872fe,// 51 PAY  21 

    0xcdd41a25,// 52 PAY  22 

    0x6c5a112f,// 53 PAY  23 

    0x26919160,// 54 PAY  24 

    0x750811d2,// 55 PAY  25 

    0x53b9c83f,// 56 PAY  26 

    0x742b1718,// 57 PAY  27 

    0xe38bef83,// 58 PAY  28 

    0x3287fe1f,// 59 PAY  29 

    0x681270bf,// 60 PAY  30 

    0x994d5a1a,// 61 PAY  31 

    0xfc258e25,// 62 PAY  32 

    0x48ba298a,// 63 PAY  33 

    0x63374049,// 64 PAY  34 

    0xa529e83c,// 65 PAY  35 

    0x381b1d05,// 66 PAY  36 

    0x5fe36c0d,// 67 PAY  37 

    0x8f8691fb,// 68 PAY  38 

    0x0b392e2a,// 69 PAY  39 

    0x136b45a1,// 70 PAY  40 

    0xec65e1a6,// 71 PAY  41 

    0xf587bce4,// 72 PAY  42 

    0x57215e56,// 73 PAY  43 

    0x90e577a6,// 74 PAY  44 

    0x7d53e58b,// 75 PAY  45 

    0x9e44ea38,// 76 PAY  46 

    0x4163ab41,// 77 PAY  47 

    0xd39507fe,// 78 PAY  48 

    0xb167b545,// 79 PAY  49 

    0x1eb7822f,// 80 PAY  50 

    0x08613286,// 81 PAY  51 

    0x62dbb3e2,// 82 PAY  52 

    0x9895f31b,// 83 PAY  53 

    0x5bff0f6a,// 84 PAY  54 

    0x3237822e,// 85 PAY  55 

    0xf6ad8234,// 86 PAY  56 

    0xf9390c0e,// 87 PAY  57 

    0x2e5929c7,// 88 PAY  58 

    0x0b132c26,// 89 PAY  59 

    0x15fa5976,// 90 PAY  60 

    0x5752610a,// 91 PAY  61 

    0xd2cd57fe,// 92 PAY  62 

    0xb738e330,// 93 PAY  63 

    0xe3f1c510,// 94 PAY  64 

    0xb09b8c53,// 95 PAY  65 

    0x6989f0c2,// 96 PAY  66 

    0x42ed2841,// 97 PAY  67 

    0x9513d725,// 98 PAY  68 

    0x8f079ebb,// 99 PAY  69 

    0x70c18484,// 100 PAY  70 

    0xe3a4f221,// 101 PAY  71 

    0xcc7b35fd,// 102 PAY  72 

    0xdfa4be44,// 103 PAY  73 

    0xf2e2ef8b,// 104 PAY  74 

    0xd01a7da5,// 105 PAY  75 

    0x9f863055,// 106 PAY  76 

    0x27974d79,// 107 PAY  77 

    0xe39d03ba,// 108 PAY  78 

    0xadd08424,// 109 PAY  79 

    0x3eb74235,// 110 PAY  80 

    0x94931db9,// 111 PAY  81 

    0xebe1fb9c,// 112 PAY  82 

    0x51564a33,// 113 PAY  83 

    0x4f1e8f10,// 114 PAY  84 

    0x9adb6729,// 115 PAY  85 

    0x2c1855a0,// 116 PAY  86 

    0x4dd16a2f,// 117 PAY  87 

    0xc0cf4c01,// 118 PAY  88 

    0x6402f952,// 119 PAY  89 

    0x2d340626,// 120 PAY  90 

    0x2be55ce9,// 121 PAY  91 

    0x1d5fc871,// 122 PAY  92 

    0x6726291a,// 123 PAY  93 

    0x35d575db,// 124 PAY  94 

    0xf21c329e,// 125 PAY  95 

    0x9eef0a64,// 126 PAY  96 

    0x97ad4b69,// 127 PAY  97 

    0xa1b98fad,// 128 PAY  98 

    0xf5df7cbf,// 129 PAY  99 

    0x5db329b8,// 130 PAY 100 

    0x8a747a86,// 131 PAY 101 

    0xb89bec9c,// 132 PAY 102 

    0x8a8bb98c,// 133 PAY 103 

    0xc125cfff,// 134 PAY 104 

    0x294a8136,// 135 PAY 105 

    0x7acdc088,// 136 PAY 106 

    0x8b9661e9,// 137 PAY 107 

    0x156417a2,// 138 PAY 108 

    0x40d0cd7c,// 139 PAY 109 

    0x8189e0fb,// 140 PAY 110 

    0xb1899ef9,// 141 PAY 111 

    0xa5932e72,// 142 PAY 112 

    0xe7752aff,// 143 PAY 113 

    0x25c40b05,// 144 PAY 114 

    0xa63ea391,// 145 PAY 115 

    0x1b3c79a0,// 146 PAY 116 

    0x932e3725,// 147 PAY 117 

    0x8685bf70,// 148 PAY 118 

    0x3731ebad,// 149 PAY 119 

    0x2936c00d,// 150 PAY 120 

    0x84b0093c,// 151 PAY 121 

    0xc8b1bc37,// 152 PAY 122 

    0x110f6eab,// 153 PAY 123 

    0x4d412888,// 154 PAY 124 

    0x5975b42f,// 155 PAY 125 

    0x1cdee017,// 156 PAY 126 

    0x1a5dcb44,// 157 PAY 127 

    0x2bd76c9c,// 158 PAY 128 

    0x495bdf76,// 159 PAY 129 

    0x0b149227,// 160 PAY 130 

    0xae77aa36,// 161 PAY 131 

    0x882c0131,// 162 PAY 132 

    0x126a121c,// 163 PAY 133 

    0xa70b694e,// 164 PAY 134 

    0x6301bca2,// 165 PAY 135 

    0xf6f9a14f,// 166 PAY 136 

    0x2e0ab08b,// 167 PAY 137 

    0x1b641bb8,// 168 PAY 138 

    0x01fbc37a,// 169 PAY 139 

    0xb33d3c71,// 170 PAY 140 

    0xd205f558,// 171 PAY 141 

    0xce209f72,// 172 PAY 142 

    0x147a4422,// 173 PAY 143 

    0xd1b39622,// 174 PAY 144 

    0xc2997742,// 175 PAY 145 

    0x7deaeaea,// 176 PAY 146 

    0x4fbdcad0,// 177 PAY 147 

    0xf24f8dd2,// 178 PAY 148 

    0x5f573eda,// 179 PAY 149 

    0x24c41e45,// 180 PAY 150 

    0x3343fdd1,// 181 PAY 151 

    0x43216072,// 182 PAY 152 

    0x7473ffa2,// 183 PAY 153 

    0x02f778f5,// 184 PAY 154 

    0x39668b08,// 185 PAY 155 

    0x129c82de,// 186 PAY 156 

    0x429d2373,// 187 PAY 157 

    0xd9b2a84d,// 188 PAY 158 

    0x30d3147d,// 189 PAY 159 

    0x3b4fbba4,// 190 PAY 160 

    0x08df8703,// 191 PAY 161 

    0xd41f69ff,// 192 PAY 162 

    0xe851f8f9,// 193 PAY 163 

    0x6324a3a6,// 194 PAY 164 

    0x10f4a04b,// 195 PAY 165 

    0xd362e932,// 196 PAY 166 

    0x3e701a4c,// 197 PAY 167 

    0x2e054279,// 198 PAY 168 

    0xbde66965,// 199 PAY 169 

    0xfe189f92,// 200 PAY 170 

    0x10374f3e,// 201 PAY 171 

    0xd37c0295,// 202 PAY 172 

    0xe8cde467,// 203 PAY 173 

    0xb2f16f0b,// 204 PAY 174 

    0x5c472bbd,// 205 PAY 175 

    0x75dab419,// 206 PAY 176 

    0x1f6be4db,// 207 PAY 177 

    0x4c4d435e,// 208 PAY 178 

    0xce797b2a,// 209 PAY 179 

    0xcf0835b6,// 210 PAY 180 

    0x408b4db0,// 211 PAY 181 

    0x65476bc0,// 212 PAY 182 

    0xca9617d4,// 213 PAY 183 

    0xb2fdf489,// 214 PAY 184 

    0x974b4e70,// 215 PAY 185 

    0x9f9871f6,// 216 PAY 186 

    0xe530fcf2,// 217 PAY 187 

    0x2b6d3af8,// 218 PAY 188 

    0x71615d53,// 219 PAY 189 

    0x3ebddce5,// 220 PAY 190 

    0x3db1272f,// 221 PAY 191 

    0x980e882a,// 222 PAY 192 

    0xce3e0a55,// 223 PAY 193 

    0xbbb8c9ab,// 224 PAY 194 

    0xe753984a,// 225 PAY 195 

    0x44caae51,// 226 PAY 196 

    0x1ce02ffd,// 227 PAY 197 

    0x276402d3,// 228 PAY 198 

    0x5c7602f6,// 229 PAY 199 

    0x4cac57a9,// 230 PAY 200 

    0x76e956d8,// 231 PAY 201 

    0xcebe5135,// 232 PAY 202 

    0xe6bc8ad9,// 233 PAY 203 

    0xddecfb90,// 234 PAY 204 

    0x4e277179,// 235 PAY 205 

    0x4eeb03e6,// 236 PAY 206 

    0xbebc5caa,// 237 PAY 207 

    0x2de4b81c,// 238 PAY 208 

    0xc04315c5,// 239 PAY 209 

    0x05354e84,// 240 PAY 210 

    0x4aaca03b,// 241 PAY 211 

    0xdda241af,// 242 PAY 212 

    0x51a8705c,// 243 PAY 213 

    0x2ffecc7b,// 244 PAY 214 

    0xf6fdcda1,// 245 PAY 215 

    0x7fe34360,// 246 PAY 216 

    0x056dda1b,// 247 PAY 217 

    0x716e3c4a,// 248 PAY 218 

    0x9bf03720,// 249 PAY 219 

    0xea017123,// 250 PAY 220 

    0x03f2040e,// 251 PAY 221 

    0x3783f20e,// 252 PAY 222 

    0x9366163d,// 253 PAY 223 

    0x04f01d41,// 254 PAY 224 

    0xfe8e08f0,// 255 PAY 225 

    0xc4119f23,// 256 PAY 226 

    0x9e2323e7,// 257 PAY 227 

    0x5e58fb55,// 258 PAY 228 

    0x7d4b75e9,// 259 PAY 229 

    0xa1251a3c,// 260 PAY 230 

    0x9dfee953,// 261 PAY 231 

    0x42a49201,// 262 PAY 232 

    0x04b23a44,// 263 PAY 233 

    0xac4a07e0,// 264 PAY 234 

    0xaa4f21af,// 265 PAY 235 

    0xf1f5097e,// 266 PAY 236 

    0xf1f19628,// 267 PAY 237 

    0xc82972a6,// 268 PAY 238 

    0x254e3d8a,// 269 PAY 239 

    0x4ae46028,// 270 PAY 240 

    0x0f207f4c,// 271 PAY 241 

    0xa83b89cc,// 272 PAY 242 

    0x29b95e5d,// 273 PAY 243 

    0x301794cb,// 274 PAY 244 

    0x84d54998,// 275 PAY 245 

    0x57c52853,// 276 PAY 246 

    0xd131dd7d,// 277 PAY 247 

    0x83ec2fb2,// 278 PAY 248 

    0x385766f3,// 279 PAY 249 

    0x02e666da,// 280 PAY 250 

    0x49731dc7,// 281 PAY 251 

    0x2e97864f,// 282 PAY 252 

    0x920ad66e,// 283 PAY 253 

    0x65642591,// 284 PAY 254 

    0xa8527b1a,// 285 PAY 255 

    0x47a25d76,// 286 PAY 256 

    0x07907655,// 287 PAY 257 

    0x855a23b6,// 288 PAY 258 

    0x50730fb7,// 289 PAY 259 

    0x1e8d1e96,// 290 PAY 260 

    0xf0dec46b,// 291 PAY 261 

    0xe294fd7b,// 292 PAY 262 

    0x39a2bf57,// 293 PAY 263 

    0x94de0d45,// 294 PAY 264 

    0xadb1152b,// 295 PAY 265 

    0x01481dae,// 296 PAY 266 

    0x3041ec42,// 297 PAY 267 

    0x7c3b4ce3,// 298 PAY 268 

    0xa7e4f484,// 299 PAY 269 

    0xcc36eaa0,// 300 PAY 270 

    0x8481b99d,// 301 PAY 271 

    0x731b74c2,// 302 PAY 272 

    0x1f2675e5,// 303 PAY 273 

    0x460c2e61,// 304 PAY 274 

    0xe9c16e51,// 305 PAY 275 

    0x7c730b32,// 306 PAY 276 

    0xd72621cf,// 307 PAY 277 

    0x0bc47414,// 308 PAY 278 

    0x60978440,// 309 PAY 279 

    0xb6e5a368,// 310 PAY 280 

    0x595232f8,// 311 PAY 281 

    0xd55b5e82,// 312 PAY 282 

    0x46667045,// 313 PAY 283 

    0x17151309,// 314 PAY 284 

    0x52f94d6f,// 315 PAY 285 

    0xf1728936,// 316 PAY 286 

    0x2f4d7943,// 317 PAY 287 

    0x4b5188d7,// 318 PAY 288 

    0x68b4eb9b,// 319 PAY 289 

    0x8a45e948,// 320 PAY 290 

    0xec2a7400,// 321 PAY 291 

    0x92d5aca9,// 322 PAY 292 

    0x7ca3b642,// 323 PAY 293 

    0xfcf8352a,// 324 PAY 294 

    0x432c1e37,// 325 PAY 295 

    0xb58358f2,// 326 PAY 296 

    0x17f35a00,// 327 PAY 297 

    0x0ded7f2e,// 328 PAY 298 

    0xb71a4020,// 329 PAY 299 

    0x5c393370,// 330 PAY 300 

    0xed06343d,// 331 PAY 301 

    0xd3741901,// 332 PAY 302 

    0x3cf8dd80,// 333 PAY 303 

    0x350f900c,// 334 PAY 304 

    0x321fb5c2,// 335 PAY 305 

    0xee83bb94,// 336 PAY 306 

    0x2685ebdc,// 337 PAY 307 

    0x31d7f6c7,// 338 PAY 308 

    0x8c2d5b2a,// 339 PAY 309 

    0x62f1a843,// 340 PAY 310 

    0x6ba8297a,// 341 PAY 311 

    0x2ed49060,// 342 PAY 312 

    0x4f38675b,// 343 PAY 313 

    0x8795a9fa,// 344 PAY 314 

    0x46b9c08b,// 345 PAY 315 

    0xa83a873e,// 346 PAY 316 

    0xd9acf3d3,// 347 PAY 317 

    0x400d34ec,// 348 PAY 318 

    0x2a059c1c,// 349 PAY 319 

    0x022d0f89,// 350 PAY 320 

    0xf6650390,// 351 PAY 321 

    0x9b2d98ec,// 352 PAY 322 

    0xcda10488,// 353 PAY 323 

    0xf22e50cd,// 354 PAY 324 

    0x19a7dd6b,// 355 PAY 325 

    0xc988a04f,// 356 PAY 326 

    0xd46db5d5,// 357 PAY 327 

    0x7b6a0882,// 358 PAY 328 

    0xa1c64a84,// 359 PAY 329 

    0x1c244e06,// 360 PAY 330 

    0x1e845345,// 361 PAY 331 

    0xefadf28d,// 362 PAY 332 

    0xc8b20def,// 363 PAY 333 

    0xc3affeef,// 364 PAY 334 

    0x0f36b879,// 365 PAY 335 

    0xf7275e36,// 366 PAY 336 

    0x6325b9c0,// 367 PAY 337 

    0x3986845a,// 368 PAY 338 

    0xd01f43f8,// 369 PAY 339 

    0x8a5ac832,// 370 PAY 340 

    0x78952ead,// 371 PAY 341 

    0x862b075d,// 372 PAY 342 

    0x4fb6941d,// 373 PAY 343 

    0xf5054872,// 374 PAY 344 

    0x742e8f9f,// 375 PAY 345 

    0xd30d52a7,// 376 PAY 346 

    0x3dfa95a6,// 377 PAY 347 

    0x5b1918d2,// 378 PAY 348 

    0x632d6b7f,// 379 PAY 349 

    0x1867ae34,// 380 PAY 350 

    0x62e0eb60,// 381 PAY 351 

    0x54832774,// 382 PAY 352 

    0x723f007a,// 383 PAY 353 

    0x4a291b7d,// 384 PAY 354 

    0xb18e3a0d,// 385 PAY 355 

    0x0e18628c,// 386 PAY 356 

    0x15efb77c,// 387 PAY 357 

    0xb6f850f1,// 388 PAY 358 

    0x1a494bb1,// 389 PAY 359 

    0x10285c1b,// 390 PAY 360 

    0x3b55d23f,// 391 PAY 361 

    0x77763c81,// 392 PAY 362 

    0xa94a418a,// 393 PAY 363 

    0x051087d8,// 394 PAY 364 

    0x791fd616,// 395 PAY 365 

    0xcc051808,// 396 PAY 366 

    0xfe2cf169,// 397 PAY 367 

    0x9a955c31,// 398 PAY 368 

    0x1b67283f,// 399 PAY 369 

    0xf15c78fe,// 400 PAY 370 

    0x92ebeb70,// 401 PAY 371 

    0x7480f49d,// 402 PAY 372 

    0x80370a37,// 403 PAY 373 

    0xae2b9984,// 404 PAY 374 

    0x010c8900,// 405 PAY 375 

/// STA is 1 words. 

/// STA num_pkts       : 13 

/// STA pkt_idx        : 80 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9a 

    0x01419a0d // 406 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt45_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806528fc,// 4 SCX   2 

    0x00003342,// 5 SCX   3 

    0x47181913,// 6 SCX   4 

    0x554e1187,// 7 SCX   5 

    0x4052547a,// 8 SCX   6 

    0x867b9492,// 9 SCX   7 

    0x3d8a6fee,// 10 SCX   8 

    0x387601e1,// 11 SCX   9 

    0xed32d5a9,// 12 SCX  10 

    0xace4b536,// 13 SCX  11 

    0xb97aeecb,// 14 SCX  12 

    0x45bddfe9,// 15 SCX  13 

    0xe717416e,// 16 SCX  14 

    0x58599e30,// 17 SCX  15 

    0xd21565d4,// 18 SCX  16 

    0x384bc718,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 838 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 129 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 129 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 104 

/// BFD (ofst+len)cry  : 112 

/// BFD ofstiv         : 60 

/// BFD ofsticv        : 724 

    0x00000081,// 20 BFD   1 

    0x00680008,// 21 BFD   2 

    0x02d4003c,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x0700a592,// 23 MFM   1 

    0x4bc00000,// 24 MFM   2 

/// BDA is 211 words. 

/// BDA size     is 838 (0x346) 

/// BDA id       is 0xae4b 

    0x0346ae4b,// 25 BDA   1 

/// PAY Generic Data size   : 838 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x288f7b31,// 26 PAY   1 

    0xdec5b5ab,// 27 PAY   2 

    0x70542d20,// 28 PAY   3 

    0x29d06881,// 29 PAY   4 

    0x1734f7c1,// 30 PAY   5 

    0xfaa08535,// 31 PAY   6 

    0xca9345e1,// 32 PAY   7 

    0xfff691a2,// 33 PAY   8 

    0xe4c78df8,// 34 PAY   9 

    0x1f447709,// 35 PAY  10 

    0x5e938c9c,// 36 PAY  11 

    0xf8107fef,// 37 PAY  12 

    0x9a6a0ac2,// 38 PAY  13 

    0x9fe0c207,// 39 PAY  14 

    0xd7b35a65,// 40 PAY  15 

    0xfd6301df,// 41 PAY  16 

    0xc0b32da3,// 42 PAY  17 

    0x60964545,// 43 PAY  18 

    0x1948dbda,// 44 PAY  19 

    0x7b716c47,// 45 PAY  20 

    0x32a3eb97,// 46 PAY  21 

    0x7f0f46f6,// 47 PAY  22 

    0xfb6e53e7,// 48 PAY  23 

    0xeb426bc1,// 49 PAY  24 

    0xde8ae597,// 50 PAY  25 

    0x05531453,// 51 PAY  26 

    0x9111be2f,// 52 PAY  27 

    0x52bb1651,// 53 PAY  28 

    0x19068d00,// 54 PAY  29 

    0xc917ccc7,// 55 PAY  30 

    0x3d291894,// 56 PAY  31 

    0x91bd823d,// 57 PAY  32 

    0xf58b968b,// 58 PAY  33 

    0xce978ab3,// 59 PAY  34 

    0xa8d77d05,// 60 PAY  35 

    0xb9c0a016,// 61 PAY  36 

    0xa6a5fd63,// 62 PAY  37 

    0x93f0057d,// 63 PAY  38 

    0xd846882e,// 64 PAY  39 

    0xc926adb5,// 65 PAY  40 

    0x10ca82ca,// 66 PAY  41 

    0x49061f28,// 67 PAY  42 

    0x68c75ae2,// 68 PAY  43 

    0x5441c969,// 69 PAY  44 

    0x1c649dc8,// 70 PAY  45 

    0x7d99a73b,// 71 PAY  46 

    0x30b379cc,// 72 PAY  47 

    0xdbf77a7c,// 73 PAY  48 

    0x6c6f3bf1,// 74 PAY  49 

    0x4809dcbc,// 75 PAY  50 

    0x4bca84ff,// 76 PAY  51 

    0xbf5d1685,// 77 PAY  52 

    0xc3baa784,// 78 PAY  53 

    0x9ce4da13,// 79 PAY  54 

    0xa42b7eac,// 80 PAY  55 

    0xf7aea91f,// 81 PAY  56 

    0xbb7f6d1c,// 82 PAY  57 

    0xfa1cb82e,// 83 PAY  58 

    0x747988b5,// 84 PAY  59 

    0x2e2c688d,// 85 PAY  60 

    0xcba33a85,// 86 PAY  61 

    0xa44a2f73,// 87 PAY  62 

    0xcd217896,// 88 PAY  63 

    0x86349007,// 89 PAY  64 

    0xc4c3e7b2,// 90 PAY  65 

    0x0fd85f98,// 91 PAY  66 

    0x615a65c1,// 92 PAY  67 

    0xdc7e12f6,// 93 PAY  68 

    0xa6e3c618,// 94 PAY  69 

    0x64a2f546,// 95 PAY  70 

    0xfe779dca,// 96 PAY  71 

    0x8641e2e2,// 97 PAY  72 

    0xbbb65b9c,// 98 PAY  73 

    0x1b573d7d,// 99 PAY  74 

    0xd4c24ac8,// 100 PAY  75 

    0x9747b2ef,// 101 PAY  76 

    0xf5a7371c,// 102 PAY  77 

    0x3ef77425,// 103 PAY  78 

    0x8f9f3dd4,// 104 PAY  79 

    0x7687aee4,// 105 PAY  80 

    0x1bdb27fe,// 106 PAY  81 

    0x06014166,// 107 PAY  82 

    0xadec45b4,// 108 PAY  83 

    0x6a3973c6,// 109 PAY  84 

    0x41df9d10,// 110 PAY  85 

    0xf2268e6e,// 111 PAY  86 

    0x784893b1,// 112 PAY  87 

    0x8242c4b3,// 113 PAY  88 

    0xb171fd22,// 114 PAY  89 

    0x38ee964f,// 115 PAY  90 

    0x838479e7,// 116 PAY  91 

    0xd65f0cf1,// 117 PAY  92 

    0x47c896ef,// 118 PAY  93 

    0x5e41fd91,// 119 PAY  94 

    0xea4cb478,// 120 PAY  95 

    0xf3924d2f,// 121 PAY  96 

    0xb63fe9ce,// 122 PAY  97 

    0xfdca432e,// 123 PAY  98 

    0x0f326439,// 124 PAY  99 

    0x1143c356,// 125 PAY 100 

    0xaae994a6,// 126 PAY 101 

    0x1d3447e0,// 127 PAY 102 

    0x0b1a9a9c,// 128 PAY 103 

    0x53781d9e,// 129 PAY 104 

    0xf59f7fe0,// 130 PAY 105 

    0x9042a27b,// 131 PAY 106 

    0xf0e0737f,// 132 PAY 107 

    0x62d6d57f,// 133 PAY 108 

    0x24c6930f,// 134 PAY 109 

    0x726c6bf4,// 135 PAY 110 

    0xc8586970,// 136 PAY 111 

    0xe1992a2c,// 137 PAY 112 

    0x6f31a3cf,// 138 PAY 113 

    0xa9f2831b,// 139 PAY 114 

    0x1c1b8a89,// 140 PAY 115 

    0xd059bf35,// 141 PAY 116 

    0x8b269a02,// 142 PAY 117 

    0xd987e778,// 143 PAY 118 

    0xaf4ae694,// 144 PAY 119 

    0x1db17da6,// 145 PAY 120 

    0xf1c4dc01,// 146 PAY 121 

    0xe581f391,// 147 PAY 122 

    0x7d5a4e26,// 148 PAY 123 

    0x5af036f5,// 149 PAY 124 

    0xede7022b,// 150 PAY 125 

    0x0297c64c,// 151 PAY 126 

    0x1c7d3e76,// 152 PAY 127 

    0x7520d912,// 153 PAY 128 

    0xdd094c07,// 154 PAY 129 

    0xfd01914e,// 155 PAY 130 

    0x6c0e65c2,// 156 PAY 131 

    0x6de7e500,// 157 PAY 132 

    0x16afdfac,// 158 PAY 133 

    0xe428d327,// 159 PAY 134 

    0x76514834,// 160 PAY 135 

    0x15dc13b1,// 161 PAY 136 

    0xba0a1b1f,// 162 PAY 137 

    0xa2b5b1e8,// 163 PAY 138 

    0x452e3a3a,// 164 PAY 139 

    0x20fa34b5,// 165 PAY 140 

    0x67be082e,// 166 PAY 141 

    0x87c530e4,// 167 PAY 142 

    0x7302ec7c,// 168 PAY 143 

    0xbc79ad67,// 169 PAY 144 

    0x7c097852,// 170 PAY 145 

    0xa608a0ca,// 171 PAY 146 

    0xf2543939,// 172 PAY 147 

    0x71e42b03,// 173 PAY 148 

    0xf6b82f2a,// 174 PAY 149 

    0x75651669,// 175 PAY 150 

    0x6dff3192,// 176 PAY 151 

    0xba146e65,// 177 PAY 152 

    0xa7bc81fa,// 178 PAY 153 

    0x999169fe,// 179 PAY 154 

    0xf86d28c9,// 180 PAY 155 

    0xb4de706a,// 181 PAY 156 

    0xbc6fe474,// 182 PAY 157 

    0xf2186d3f,// 183 PAY 158 

    0x184751af,// 184 PAY 159 

    0x87a50325,// 185 PAY 160 

    0x9396527d,// 186 PAY 161 

    0x20384bb7,// 187 PAY 162 

    0x758a955f,// 188 PAY 163 

    0x6f3a0678,// 189 PAY 164 

    0x843c0543,// 190 PAY 165 

    0xb4b4976f,// 191 PAY 166 

    0x1300db5f,// 192 PAY 167 

    0x8adea50e,// 193 PAY 168 

    0x35330ec4,// 194 PAY 169 

    0x252c05f0,// 195 PAY 170 

    0x5e7a3ae7,// 196 PAY 171 

    0x8ed78b73,// 197 PAY 172 

    0x35783b62,// 198 PAY 173 

    0x1532d9a1,// 199 PAY 174 

    0xd621620b,// 200 PAY 175 

    0x3512e33c,// 201 PAY 176 

    0xc31ec95f,// 202 PAY 177 

    0xc58e79a5,// 203 PAY 178 

    0x07d314cc,// 204 PAY 179 

    0xf0a4b6e9,// 205 PAY 180 

    0xd348ef19,// 206 PAY 181 

    0xca3defd4,// 207 PAY 182 

    0x4823e08e,// 208 PAY 183 

    0x569d45af,// 209 PAY 184 

    0x7ff48c28,// 210 PAY 185 

    0xb8c1d978,// 211 PAY 186 

    0x1e313802,// 212 PAY 187 

    0x19792c7a,// 213 PAY 188 

    0xc4bf66e0,// 214 PAY 189 

    0x9a63390f,// 215 PAY 190 

    0xfc83d88d,// 216 PAY 191 

    0x7c8a6b21,// 217 PAY 192 

    0x8d0b929e,// 218 PAY 193 

    0xebcaa76c,// 219 PAY 194 

    0x1b9002f4,// 220 PAY 195 

    0xc0c2716b,// 221 PAY 196 

    0x93ed1e7d,// 222 PAY 197 

    0xfb5cece0,// 223 PAY 198 

    0xb855c227,// 224 PAY 199 

    0x1bfade2f,// 225 PAY 200 

    0x588dd5c7,// 226 PAY 201 

    0x14f43e88,// 227 PAY 202 

    0x26a87efc,// 228 PAY 203 

    0x47a768a8,// 229 PAY 204 

    0xb16b2e0b,// 230 PAY 205 

    0x85fd3bf2,// 231 PAY 206 

    0xad86df72,// 232 PAY 207 

    0xb9754d6b,// 233 PAY 208 

    0x2d39465e,// 234 PAY 209 

    0x69030000,// 235 PAY 210 

/// STA is 1 words. 

/// STA num_pkts       : 173 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3f 

    0x02cd3fad // 236 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt46_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x806628c9,// 4 SCX   2 

    0x000074c2,// 5 SCX   3 

    0x7de5e8d4,// 6 SCX   4 

    0x41b77082,// 7 SCX   5 

    0xcb31e795,// 8 SCX   6 

    0x6b93df1c,// 9 SCX   7 

    0xa850d0e7,// 10 SCX   8 

    0x4abff44a,// 11 SCX   9 

    0xc3b173ad,// 12 SCX  10 

    0xd0b9281d,// 13 SCX  11 

    0x20ab3632,// 14 SCX  12 

    0x41b6cb11,// 15 SCX  13 

    0x3400d9b4,// 16 SCX  14 

    0x4a2435f9,// 17 SCX  15 

    0x21221ef4,// 18 SCX  16 

    0x45fce53c,// 19 SCX  17 

    0x0ddff8fa,// 20 SCX  18 

    0x9103c6f5,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 206 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 178 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 178 

/// BFD lencrypto      : 88 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 96 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 184 

    0x000000b2,// 22 BFD   1 

    0x00080058,// 23 BFD   2 

    0x00b80000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x0400a3e0,// 25 MFM   1 

/// BDA is 53 words. 

/// BDA size     is 206 (0xce) 

/// BDA id       is 0x3c4b 

    0x00ce3c4b,// 26 BDA   1 

/// PAY Generic Data size   : 206 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x01e780a6,// 27 PAY   1 

    0xfaffb14a,// 28 PAY   2 

    0x9ec56a4c,// 29 PAY   3 

    0xb497a698,// 30 PAY   4 

    0xad64216a,// 31 PAY   5 

    0xeffbe6fe,// 32 PAY   6 

    0x26be7b41,// 33 PAY   7 

    0x11fca838,// 34 PAY   8 

    0x3a3261b1,// 35 PAY   9 

    0xd0baa81e,// 36 PAY  10 

    0x33c881c2,// 37 PAY  11 

    0x5a6fe178,// 38 PAY  12 

    0xd189aeff,// 39 PAY  13 

    0xde35f04b,// 40 PAY  14 

    0xa7ea6ecb,// 41 PAY  15 

    0x686dd44e,// 42 PAY  16 

    0x109450aa,// 43 PAY  17 

    0xac260e1f,// 44 PAY  18 

    0x863c70ae,// 45 PAY  19 

    0x973c7727,// 46 PAY  20 

    0x79737441,// 47 PAY  21 

    0x59919cd2,// 48 PAY  22 

    0xa4c21d6a,// 49 PAY  23 

    0x3db3f07a,// 50 PAY  24 

    0x4d7d2c2a,// 51 PAY  25 

    0xacf4b999,// 52 PAY  26 

    0xe18415e4,// 53 PAY  27 

    0x257347b2,// 54 PAY  28 

    0xc86440c2,// 55 PAY  29 

    0xf57ce579,// 56 PAY  30 

    0x46fbe708,// 57 PAY  31 

    0x509ffb2c,// 58 PAY  32 

    0xeedb660e,// 59 PAY  33 

    0x077245bd,// 60 PAY  34 

    0x377da5a3,// 61 PAY  35 

    0x1d31d942,// 62 PAY  36 

    0x1dd2adf2,// 63 PAY  37 

    0xfd2ca583,// 64 PAY  38 

    0xe9f21f34,// 65 PAY  39 

    0xfeed6db3,// 66 PAY  40 

    0x58c266cf,// 67 PAY  41 

    0xc1a8c9a3,// 68 PAY  42 

    0xcec93382,// 69 PAY  43 

    0x71f5ac9f,// 70 PAY  44 

    0xec050809,// 71 PAY  45 

    0xb24ec47e,// 72 PAY  46 

    0x44e7fbda,// 73 PAY  47 

    0x2e53ccbc,// 74 PAY  48 

    0xa12006b3,// 75 PAY  49 

    0x80978dba,// 76 PAY  50 

    0x584b0689,// 77 PAY  51 

    0x83fe0000,// 78 PAY  52 

/// STA is 1 words. 

/// STA num_pkts       : 100 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6f 

    0x02616f64 // 79 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt47_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x8060286b,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0x9380015e,// 6 SCX   4 

    0x08e675f8,// 7 SCX   5 

    0x749cccc6,// 8 SCX   6 

    0x0f1109d5,// 9 SCX   7 

    0x9da7ca85,// 10 SCX   8 

    0xe5b3826f,// 11 SCX   9 

    0x4a946acb,// 12 SCX  10 

    0x60c4961b,// 13 SCX  11 

    0x79afeff3,// 14 SCX  12 

    0xc4cbd564,// 15 SCX  13 

    0x2e2cd072,// 16 SCX  14 

    0x501fa74c,// 17 SCX  15 

    0x1ec9992e,// 18 SCX  16 

    0x5b547c48,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 500 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 295 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 295 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 232 

/// BFD (ofst+len)cry  : 288 

/// BFD ofstiv         : 204 

/// BFD ofsticv        : 456 

    0x00000127,// 20 BFD   1 

    0x00e80038,// 21 BFD   2 

    0x01c800cc,// 22 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 1d 

    0x1d003f8b,// 23 MFM   1 

    0xbcc152de,// 24 MFM   2 

    0x66eb2022,// 25 MFM   3 

    0x8f906983,// 26 MFM   4 

    0xb0000000,// 27 MFM   5 

/// BDA is 126 words. 

/// BDA size     is 500 (0x1f4) 

/// BDA id       is 0x4ac8 

    0x01f44ac8,// 28 BDA   1 

/// PAY Generic Data size   : 500 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x136ed125,// 29 PAY   1 

    0x56fcd3e0,// 30 PAY   2 

    0x31373b65,// 31 PAY   3 

    0x81158e9d,// 32 PAY   4 

    0x16b804e8,// 33 PAY   5 

    0x1e69b082,// 34 PAY   6 

    0x0219396b,// 35 PAY   7 

    0x4fbd6baa,// 36 PAY   8 

    0x3e73afcb,// 37 PAY   9 

    0xfac5232c,// 38 PAY  10 

    0x77f7475c,// 39 PAY  11 

    0xbc19e89d,// 40 PAY  12 

    0xf8ee272a,// 41 PAY  13 

    0x682055c7,// 42 PAY  14 

    0xe68176a2,// 43 PAY  15 

    0xf4d01bc1,// 44 PAY  16 

    0x4e5bfabe,// 45 PAY  17 

    0xe65d1d4f,// 46 PAY  18 

    0xd39e1228,// 47 PAY  19 

    0x331ab2cd,// 48 PAY  20 

    0xc026e07e,// 49 PAY  21 

    0x51421361,// 50 PAY  22 

    0x519c3f57,// 51 PAY  23 

    0x2156279a,// 52 PAY  24 

    0xfc36c453,// 53 PAY  25 

    0x117a9f7b,// 54 PAY  26 

    0xbdbadc8a,// 55 PAY  27 

    0xd25c7d68,// 56 PAY  28 

    0x8183e766,// 57 PAY  29 

    0x03498543,// 58 PAY  30 

    0x459625c4,// 59 PAY  31 

    0x2d3ca0f7,// 60 PAY  32 

    0x5c1cb74e,// 61 PAY  33 

    0x8619d470,// 62 PAY  34 

    0x183f44b1,// 63 PAY  35 

    0x2bb71447,// 64 PAY  36 

    0x508d796b,// 65 PAY  37 

    0x05eb898c,// 66 PAY  38 

    0xda8018bc,// 67 PAY  39 

    0x403069e5,// 68 PAY  40 

    0x1d204d59,// 69 PAY  41 

    0x7aea32df,// 70 PAY  42 

    0xdff04c9c,// 71 PAY  43 

    0x357f175b,// 72 PAY  44 

    0x8c5f49c4,// 73 PAY  45 

    0xbdec73c1,// 74 PAY  46 

    0x2c2287d8,// 75 PAY  47 

    0xafd20cc3,// 76 PAY  48 

    0x7825bcba,// 77 PAY  49 

    0x6d08ed48,// 78 PAY  50 

    0x15f2ffaf,// 79 PAY  51 

    0xc7ba385d,// 80 PAY  52 

    0x04d96c0b,// 81 PAY  53 

    0xf8a1326c,// 82 PAY  54 

    0x1397dd3e,// 83 PAY  55 

    0xf823964b,// 84 PAY  56 

    0xe5e7f1ec,// 85 PAY  57 

    0xda4ef7a5,// 86 PAY  58 

    0x02206b66,// 87 PAY  59 

    0xfd788249,// 88 PAY  60 

    0xd9623814,// 89 PAY  61 

    0x20dbdbd6,// 90 PAY  62 

    0x07283637,// 91 PAY  63 

    0x7b9c8306,// 92 PAY  64 

    0xd8b62ac4,// 93 PAY  65 

    0xb94bfe54,// 94 PAY  66 

    0x543ea9e0,// 95 PAY  67 

    0xa4a41bfe,// 96 PAY  68 

    0x99d515fb,// 97 PAY  69 

    0x8088ea77,// 98 PAY  70 

    0xd7bf3e14,// 99 PAY  71 

    0x9bd9a2ec,// 100 PAY  72 

    0xa3d34888,// 101 PAY  73 

    0xe893f427,// 102 PAY  74 

    0x2965f725,// 103 PAY  75 

    0x0e08ade4,// 104 PAY  76 

    0xaaa4b3e0,// 105 PAY  77 

    0xf0cacb90,// 106 PAY  78 

    0xf908edea,// 107 PAY  79 

    0xa29bd78f,// 108 PAY  80 

    0xa9927758,// 109 PAY  81 

    0xd0d11602,// 110 PAY  82 

    0x4a96bb51,// 111 PAY  83 

    0x94995db6,// 112 PAY  84 

    0xab4828aa,// 113 PAY  85 

    0xd91a2ed6,// 114 PAY  86 

    0xdf1fb2e6,// 115 PAY  87 

    0x5132436b,// 116 PAY  88 

    0x96e4a02a,// 117 PAY  89 

    0x84bd1c79,// 118 PAY  90 

    0xf0f3dae9,// 119 PAY  91 

    0xaa38be25,// 120 PAY  92 

    0x129775b5,// 121 PAY  93 

    0xf232c85f,// 122 PAY  94 

    0xc5e6708e,// 123 PAY  95 

    0x4bf5b509,// 124 PAY  96 

    0x97a054fa,// 125 PAY  97 

    0xc336c95c,// 126 PAY  98 

    0x423cb91e,// 127 PAY  99 

    0xf05b44f9,// 128 PAY 100 

    0x9310654b,// 129 PAY 101 

    0x9a9a6c52,// 130 PAY 102 

    0x70129684,// 131 PAY 103 

    0x16ee126c,// 132 PAY 104 

    0x236e2d3b,// 133 PAY 105 

    0x0a7b90da,// 134 PAY 106 

    0x20fcb7c1,// 135 PAY 107 

    0x0c2751e3,// 136 PAY 108 

    0x462c63da,// 137 PAY 109 

    0xcada1409,// 138 PAY 110 

    0x883a5535,// 139 PAY 111 

    0x3b895881,// 140 PAY 112 

    0x70e7a42e,// 141 PAY 113 

    0xfb5c698d,// 142 PAY 114 

    0xd792fcc0,// 143 PAY 115 

    0xe01d6a01,// 144 PAY 116 

    0xe7970597,// 145 PAY 117 

    0x3df78665,// 146 PAY 118 

    0x1f3833c7,// 147 PAY 119 

    0x3096515f,// 148 PAY 120 

    0xbf78ca5c,// 149 PAY 121 

    0x5cd89299,// 150 PAY 122 

    0xa8574a6a,// 151 PAY 123 

    0x61d97897,// 152 PAY 124 

    0x7eae8f48,// 153 PAY 125 

/// STA is 1 words. 

/// STA num_pkts       : 35 

/// STA pkt_idx        : 128 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xac 

    0x0200ac23 // 154 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt48_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x80642814,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0x5ed902d6,// 6 SCX   4 

    0xbf712b1c,// 7 SCX   5 

    0x463d3859,// 8 SCX   6 

    0x8d95d9df,// 9 SCX   7 

    0x876de853,// 10 SCX   8 

    0x7f3e195d,// 11 SCX   9 

    0x0fb5681f,// 12 SCX  10 

    0xf0add512,// 13 SCX  11 

    0x29af302f,// 14 SCX  12 

    0x3073bc12,// 15 SCX  13 

    0xf38c448f,// 16 SCX  14 

    0xe0f9f081,// 17 SCX  15 

    0xbd635aa9,// 18 SCX  16 

    0x0ff8776c,// 19 SCX  17 

    0xee0c3c99,// 20 SCX  18 

    0xd6b67d1b,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 720 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 690 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 690 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 316 

/// BFD (ofst+len)cry  : 372 

/// BFD ofstiv         : 220 

/// BFD ofsticv        : 704 

    0x000002b2,// 22 BFD   1 

    0x013c0038,// 23 BFD   2 

    0x02c000dc,// 24 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 37 

    0x37003745,// 25 MFM   1 

    0x80ca6be0,// 26 MFM   2 

    0xfb800316,// 27 MFM   3 

    0x9ebf8a5c,// 28 MFM   4 

    0x206c13f2,// 29 MFM   5 

    0xcc7b04d4,// 30 MFM   6 

    0x850abb65,// 31 MFM   7 

    0x68d00000,// 32 MFM   8 

/// BDA is 181 words. 

/// BDA size     is 720 (0x2d0) 

/// BDA id       is 0x267c 

    0x02d0267c,// 33 BDA   1 

/// PAY Generic Data size   : 720 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x632b4d7a,// 34 PAY   1 

    0x167d721c,// 35 PAY   2 

    0x29a7505e,// 36 PAY   3 

    0x36dba929,// 37 PAY   4 

    0x87e8a29a,// 38 PAY   5 

    0xaded9bc1,// 39 PAY   6 

    0xffb9c6d7,// 40 PAY   7 

    0x42120664,// 41 PAY   8 

    0x6a105d33,// 42 PAY   9 

    0xcbaf4725,// 43 PAY  10 

    0xf34d1b74,// 44 PAY  11 

    0x8cae55eb,// 45 PAY  12 

    0xd89f5e64,// 46 PAY  13 

    0x6a197444,// 47 PAY  14 

    0x5a66c906,// 48 PAY  15 

    0xab7029a6,// 49 PAY  16 

    0xcdf6fb6c,// 50 PAY  17 

    0xf839d287,// 51 PAY  18 

    0x43c1f3b3,// 52 PAY  19 

    0x9c88fe14,// 53 PAY  20 

    0x8addc7fd,// 54 PAY  21 

    0x8a6d05b7,// 55 PAY  22 

    0xf7937f90,// 56 PAY  23 

    0x44353cbd,// 57 PAY  24 

    0x0063ee9b,// 58 PAY  25 

    0x77f7c902,// 59 PAY  26 

    0x691ac262,// 60 PAY  27 

    0x2059946c,// 61 PAY  28 

    0x9615c410,// 62 PAY  29 

    0x632f23eb,// 63 PAY  30 

    0xa6508cdd,// 64 PAY  31 

    0x0f2b7721,// 65 PAY  32 

    0x36d884cf,// 66 PAY  33 

    0x5474259c,// 67 PAY  34 

    0x51664c76,// 68 PAY  35 

    0x52fb6b06,// 69 PAY  36 

    0x463ea431,// 70 PAY  37 

    0x774c40e3,// 71 PAY  38 

    0xbd320673,// 72 PAY  39 

    0x1f357a9e,// 73 PAY  40 

    0x26b5d3ef,// 74 PAY  41 

    0xbdfec7a8,// 75 PAY  42 

    0x9d4c5a97,// 76 PAY  43 

    0x7a205d43,// 77 PAY  44 

    0xf4288d7e,// 78 PAY  45 

    0x3283aa2e,// 79 PAY  46 

    0x9dbf839b,// 80 PAY  47 

    0x254f1b38,// 81 PAY  48 

    0x3866425f,// 82 PAY  49 

    0x08fe9ebf,// 83 PAY  50 

    0xc1f3a6d1,// 84 PAY  51 

    0x1850248b,// 85 PAY  52 

    0xfaa05b3d,// 86 PAY  53 

    0xa33c954e,// 87 PAY  54 

    0xdebd12a5,// 88 PAY  55 

    0x30da2489,// 89 PAY  56 

    0x862e6bf6,// 90 PAY  57 

    0x13f69b24,// 91 PAY  58 

    0xdeab0636,// 92 PAY  59 

    0x1ed05ebd,// 93 PAY  60 

    0x59102003,// 94 PAY  61 

    0xa4fe2e45,// 95 PAY  62 

    0x07e98575,// 96 PAY  63 

    0x702a5d31,// 97 PAY  64 

    0x1d8d49d0,// 98 PAY  65 

    0x9d1a423a,// 99 PAY  66 

    0x7d83496c,// 100 PAY  67 

    0x6412f2f3,// 101 PAY  68 

    0x8c5ec5b0,// 102 PAY  69 

    0x88fdef2b,// 103 PAY  70 

    0x8d67e242,// 104 PAY  71 

    0x0e98b4d5,// 105 PAY  72 

    0x60d1834e,// 106 PAY  73 

    0x7739e47e,// 107 PAY  74 

    0x0a989367,// 108 PAY  75 

    0xba2a950c,// 109 PAY  76 

    0xf989d254,// 110 PAY  77 

    0x2f8ed635,// 111 PAY  78 

    0xc5e8b28d,// 112 PAY  79 

    0x5f0e8d41,// 113 PAY  80 

    0xcaa5c5cf,// 114 PAY  81 

    0x3bc93cd5,// 115 PAY  82 

    0xb4f4f112,// 116 PAY  83 

    0x087267af,// 117 PAY  84 

    0x46686a92,// 118 PAY  85 

    0xb92aac5e,// 119 PAY  86 

    0x5fcfc0ae,// 120 PAY  87 

    0x29a23bd1,// 121 PAY  88 

    0xf8408014,// 122 PAY  89 

    0x39ca14c2,// 123 PAY  90 

    0x5770a978,// 124 PAY  91 

    0xd9cbd6bc,// 125 PAY  92 

    0x5d755479,// 126 PAY  93 

    0x7fdeb78d,// 127 PAY  94 

    0xe72f785c,// 128 PAY  95 

    0x4c4619fb,// 129 PAY  96 

    0xe3e0fa01,// 130 PAY  97 

    0x26c2b8b3,// 131 PAY  98 

    0xe39b7409,// 132 PAY  99 

    0x04992b44,// 133 PAY 100 

    0xc54f580e,// 134 PAY 101 

    0x0870a3c5,// 135 PAY 102 

    0x04360548,// 136 PAY 103 

    0x9fc72a4f,// 137 PAY 104 

    0xe1245961,// 138 PAY 105 

    0xb2a10b69,// 139 PAY 106 

    0xdd00cd11,// 140 PAY 107 

    0x73cf58ea,// 141 PAY 108 

    0xc9da33f3,// 142 PAY 109 

    0x7558d72c,// 143 PAY 110 

    0xa5f6e513,// 144 PAY 111 

    0x76a8f8cd,// 145 PAY 112 

    0xf9133e13,// 146 PAY 113 

    0x4360c566,// 147 PAY 114 

    0x105a3406,// 148 PAY 115 

    0xd6fafa42,// 149 PAY 116 

    0x07d9ed92,// 150 PAY 117 

    0xdb5f1dc8,// 151 PAY 118 

    0x7d3b483e,// 152 PAY 119 

    0x26501db5,// 153 PAY 120 

    0xbe4a1ebb,// 154 PAY 121 

    0xd9804ff9,// 155 PAY 122 

    0x2b461d90,// 156 PAY 123 

    0x9ba3253c,// 157 PAY 124 

    0x3c1759f8,// 158 PAY 125 

    0x25f4828d,// 159 PAY 126 

    0x461936c9,// 160 PAY 127 

    0x959efe8d,// 161 PAY 128 

    0x15949aef,// 162 PAY 129 

    0x6a90a4ab,// 163 PAY 130 

    0x0822f8c9,// 164 PAY 131 

    0x696fdef4,// 165 PAY 132 

    0x0e1d40aa,// 166 PAY 133 

    0x72935012,// 167 PAY 134 

    0x140b8866,// 168 PAY 135 

    0x4051f424,// 169 PAY 136 

    0x880281d9,// 170 PAY 137 

    0x023e990c,// 171 PAY 138 

    0x30139d7e,// 172 PAY 139 

    0xb2d9c125,// 173 PAY 140 

    0x7b7c0592,// 174 PAY 141 

    0x8f63ce5c,// 175 PAY 142 

    0x9d0533b4,// 176 PAY 143 

    0x830a2066,// 177 PAY 144 

    0x50b993fc,// 178 PAY 145 

    0x6bb893f3,// 179 PAY 146 

    0x02b9658d,// 180 PAY 147 

    0xc0a0dddc,// 181 PAY 148 

    0xba2c3b40,// 182 PAY 149 

    0xe697f0b1,// 183 PAY 150 

    0xb2c02809,// 184 PAY 151 

    0x8939cb4d,// 185 PAY 152 

    0x5685f3e4,// 186 PAY 153 

    0xf3cfb174,// 187 PAY 154 

    0x071fd2cd,// 188 PAY 155 

    0x664d61c9,// 189 PAY 156 

    0x19ea4afc,// 190 PAY 157 

    0x5d944686,// 191 PAY 158 

    0x8b99b4cc,// 192 PAY 159 

    0x07bcd8d7,// 193 PAY 160 

    0x6d2abd59,// 194 PAY 161 

    0xa045412c,// 195 PAY 162 

    0x13805e11,// 196 PAY 163 

    0xc0a8d771,// 197 PAY 164 

    0xf3cd3ab5,// 198 PAY 165 

    0x6fd72cb2,// 199 PAY 166 

    0x926990cd,// 200 PAY 167 

    0x4c5acbcb,// 201 PAY 168 

    0xf620fb3b,// 202 PAY 169 

    0x4cbd7f48,// 203 PAY 170 

    0xd728c5c7,// 204 PAY 171 

    0x6a5cd9ad,// 205 PAY 172 

    0x4f15226f,// 206 PAY 173 

    0xb67422d0,// 207 PAY 174 

    0xb719b89a,// 208 PAY 175 

    0x15fba93d,// 209 PAY 176 

    0xbfa61634,// 210 PAY 177 

    0x2f2e5b08,// 211 PAY 178 

    0x909f4c49,// 212 PAY 179 

    0x1db17aa4,// 213 PAY 180 

/// STA is 1 words. 

/// STA num_pkts       : 144 

/// STA pkt_idx        : 108 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x01b11c90 // 214 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt49_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806428d6,// 4 SCX   2 

    0x000023c2,// 5 SCX   3 

    0x18ad2666,// 6 SCX   4 

    0x2ec4efcf,// 7 SCX   5 

    0x565fbd67,// 8 SCX   6 

    0x15fcc80a,// 9 SCX   7 

    0xd480f6b7,// 10 SCX   8 

    0x913bcc84,// 11 SCX   9 

    0xe0400970,// 12 SCX  10 

    0x8e39f613,// 13 SCX  11 

    0xa21d2a33,// 14 SCX  12 

    0x4870b6d3,// 15 SCX  13 

    0x0067d754,// 16 SCX  14 

    0x7fbdbaaf,// 17 SCX  15 

    0x791502bf,// 18 SCX  16 

    0xd1a2b21b,// 19 SCX  17 

    0x829ae20d,// 20 SCX  18 

    0xf53ecc5c,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 692 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 390 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 390 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 116 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 512 

    0x00000186,// 22 BFD   1 

    0x00440030,// 23 BFD   2 

    0x02000008,// 24 BFD   3 

/// MFM is 9 words. 

/// MFM vldnibs        : 40 

    0x4000039f,// 25 MFM   1 

    0xeae7a6d2,// 26 MFM   2 

    0x7873dc07,// 27 MFM   3 

    0x4a4adc9c,// 28 MFM   4 

    0xbe58f655,// 29 MFM   5 

    0x0131464a,// 30 MFM   6 

    0x173da3b0,// 31 MFM   7 

    0x562fdf1f,// 32 MFM   8 

    0x8cf40000,// 33 MFM   9 

/// BDA is 174 words. 

/// BDA size     is 692 (0x2b4) 

/// BDA id       is 0x5630 

    0x02b45630,// 34 BDA   1 

/// PAY Generic Data size   : 692 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xd92236da,// 35 PAY   1 

    0xce76df13,// 36 PAY   2 

    0x45b20dbf,// 37 PAY   3 

    0x5b3dee02,// 38 PAY   4 

    0xbab89e65,// 39 PAY   5 

    0xa2f70930,// 40 PAY   6 

    0x7173fb15,// 41 PAY   7 

    0xe4e06806,// 42 PAY   8 

    0x2d5f19aa,// 43 PAY   9 

    0x972d0dcf,// 44 PAY  10 

    0x41dcadfc,// 45 PAY  11 

    0x9fc33d68,// 46 PAY  12 

    0x57cfb668,// 47 PAY  13 

    0x0e9f0d29,// 48 PAY  14 

    0xa7feb6b0,// 49 PAY  15 

    0xaffdbaf1,// 50 PAY  16 

    0xe3494e5c,// 51 PAY  17 

    0x760a59b4,// 52 PAY  18 

    0xf9d72fdc,// 53 PAY  19 

    0xd769766c,// 54 PAY  20 

    0x8ade0151,// 55 PAY  21 

    0x1e45b2b0,// 56 PAY  22 

    0x51f965f8,// 57 PAY  23 

    0x1b71ecba,// 58 PAY  24 

    0xf7954e21,// 59 PAY  25 

    0x6e2d9b26,// 60 PAY  26 

    0x94179d90,// 61 PAY  27 

    0xefacd29b,// 62 PAY  28 

    0xa43c571f,// 63 PAY  29 

    0xf12c0b3b,// 64 PAY  30 

    0xd1deac02,// 65 PAY  31 

    0x3ef399a2,// 66 PAY  32 

    0x591db88a,// 67 PAY  33 

    0xea289ade,// 68 PAY  34 

    0xabb01c13,// 69 PAY  35 

    0x8f8db3d7,// 70 PAY  36 

    0x18af4d53,// 71 PAY  37 

    0x31e828c5,// 72 PAY  38 

    0xfa65a372,// 73 PAY  39 

    0xc3255a62,// 74 PAY  40 

    0x63ad0f99,// 75 PAY  41 

    0x163e6dc1,// 76 PAY  42 

    0x0def7639,// 77 PAY  43 

    0x87949b27,// 78 PAY  44 

    0x0b7d3f42,// 79 PAY  45 

    0xd68ed374,// 80 PAY  46 

    0x4ec78953,// 81 PAY  47 

    0x710a0e7b,// 82 PAY  48 

    0xfdaf65f2,// 83 PAY  49 

    0x01afb583,// 84 PAY  50 

    0xdec7be8a,// 85 PAY  51 

    0xa133785c,// 86 PAY  52 

    0x9cff372b,// 87 PAY  53 

    0x68713539,// 88 PAY  54 

    0xa61e4ce3,// 89 PAY  55 

    0x29ee9a5d,// 90 PAY  56 

    0xb3980e48,// 91 PAY  57 

    0xabe22456,// 92 PAY  58 

    0x87bece1f,// 93 PAY  59 

    0xf15dd089,// 94 PAY  60 

    0x546cb973,// 95 PAY  61 

    0x0f9e1b34,// 96 PAY  62 

    0x3d36c800,// 97 PAY  63 

    0xc15bd3ea,// 98 PAY  64 

    0x9de0fbd7,// 99 PAY  65 

    0xa42f8b75,// 100 PAY  66 

    0xfb41fb7c,// 101 PAY  67 

    0x8d90b78c,// 102 PAY  68 

    0x131de8b5,// 103 PAY  69 

    0x8efb3156,// 104 PAY  70 

    0x1b4cf41f,// 105 PAY  71 

    0xaff9971a,// 106 PAY  72 

    0xf74934bd,// 107 PAY  73 

    0xf6f8b23e,// 108 PAY  74 

    0xda512d55,// 109 PAY  75 

    0x6bc832c7,// 110 PAY  76 

    0xe3ff4ddd,// 111 PAY  77 

    0xb3a4993b,// 112 PAY  78 

    0x8680b63c,// 113 PAY  79 

    0x470931ce,// 114 PAY  80 

    0x7931b88d,// 115 PAY  81 

    0xa4cd98f4,// 116 PAY  82 

    0xef9b5dde,// 117 PAY  83 

    0xcf63e614,// 118 PAY  84 

    0x2c5386c6,// 119 PAY  85 

    0x32228271,// 120 PAY  86 

    0x32b57d4c,// 121 PAY  87 

    0x53cb6ba2,// 122 PAY  88 

    0x7c80c3b7,// 123 PAY  89 

    0x4cc8c930,// 124 PAY  90 

    0x82cbad94,// 125 PAY  91 

    0x61a10d43,// 126 PAY  92 

    0xe94dd699,// 127 PAY  93 

    0x332a8019,// 128 PAY  94 

    0x3bd32e2f,// 129 PAY  95 

    0xe3d8c8d2,// 130 PAY  96 

    0x33e9aeeb,// 131 PAY  97 

    0x88ec039a,// 132 PAY  98 

    0x0f4e1ec1,// 133 PAY  99 

    0x5cab9dd9,// 134 PAY 100 

    0xe432c94f,// 135 PAY 101 

    0x86740380,// 136 PAY 102 

    0x8618490a,// 137 PAY 103 

    0x20baffce,// 138 PAY 104 

    0xe243a9d8,// 139 PAY 105 

    0x15e0fe57,// 140 PAY 106 

    0xd871e182,// 141 PAY 107 

    0x6c82cbdf,// 142 PAY 108 

    0x6c4195fa,// 143 PAY 109 

    0xf05922f0,// 144 PAY 110 

    0x6ad5796d,// 145 PAY 111 

    0xba96cfff,// 146 PAY 112 

    0xbeb76c20,// 147 PAY 113 

    0x6e639bb7,// 148 PAY 114 

    0xfe607789,// 149 PAY 115 

    0xa6c4faea,// 150 PAY 116 

    0x8cb3e423,// 151 PAY 117 

    0x92cc5b87,// 152 PAY 118 

    0xe9b253ed,// 153 PAY 119 

    0xde08263f,// 154 PAY 120 

    0x41c3deaf,// 155 PAY 121 

    0xc8d926e5,// 156 PAY 122 

    0x26c0f063,// 157 PAY 123 

    0x924bd413,// 158 PAY 124 

    0x053fa3ad,// 159 PAY 125 

    0x8615eb62,// 160 PAY 126 

    0x8b5fbcac,// 161 PAY 127 

    0xf7fe7a90,// 162 PAY 128 

    0xba1ef38c,// 163 PAY 129 

    0x63a11908,// 164 PAY 130 

    0xc108a4b4,// 165 PAY 131 

    0x573ddc06,// 166 PAY 132 

    0x51d00126,// 167 PAY 133 

    0x7bcf4a41,// 168 PAY 134 

    0x6639cbdd,// 169 PAY 135 

    0x60a969cd,// 170 PAY 136 

    0xd288cd6f,// 171 PAY 137 

    0x637e66e9,// 172 PAY 138 

    0xd3291f85,// 173 PAY 139 

    0x979f2d29,// 174 PAY 140 

    0xd60bf4d5,// 175 PAY 141 

    0x387a9925,// 176 PAY 142 

    0xb0d3b1b4,// 177 PAY 143 

    0x8d5d9b27,// 178 PAY 144 

    0xfa1cb0a5,// 179 PAY 145 

    0xaa2fcec3,// 180 PAY 146 

    0x58211c9c,// 181 PAY 147 

    0x9fe9c254,// 182 PAY 148 

    0x2d7bbff4,// 183 PAY 149 

    0x1a63dbb4,// 184 PAY 150 

    0x64e1c2e2,// 185 PAY 151 

    0xf86159c0,// 186 PAY 152 

    0xe5d9b9c1,// 187 PAY 153 

    0xaf51992e,// 188 PAY 154 

    0xa003cfc9,// 189 PAY 155 

    0x9dbf2aef,// 190 PAY 156 

    0x186029f8,// 191 PAY 157 

    0xf5801d3a,// 192 PAY 158 

    0x4f0fd15a,// 193 PAY 159 

    0xdc6e26a0,// 194 PAY 160 

    0xe74e424a,// 195 PAY 161 

    0x2cfad088,// 196 PAY 162 

    0x901c7126,// 197 PAY 163 

    0x9859ff73,// 198 PAY 164 

    0x7a8d397d,// 199 PAY 165 

    0x04f8a52a,// 200 PAY 166 

    0xe0aab883,// 201 PAY 167 

    0xace41f25,// 202 PAY 168 

    0xe67e11b2,// 203 PAY 169 

    0x9527f0a2,// 204 PAY 170 

    0x76481bda,// 205 PAY 171 

    0xe6254cc5,// 206 PAY 172 

    0xe1731fc0,// 207 PAY 173 

/// STA is 1 words. 

/// STA num_pkts       : 101 

/// STA pkt_idx        : 196 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0311ce65 // 208 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt50_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806228d8,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xbf4120d6,// 6 SCX   4 

    0x9efa6c19,// 7 SCX   5 

    0x42fe3d5a,// 8 SCX   6 

    0xfafd0de0,// 9 SCX   7 

    0x6fd617e5,// 10 SCX   8 

    0x7864a22e,// 11 SCX   9 

    0x065351bc,// 12 SCX  10 

    0xc426850c,// 13 SCX  11 

    0x286ce33a,// 14 SCX  12 

    0x52584560,// 15 SCX  13 

    0xa94991a7,// 16 SCX  14 

    0x88082085,// 17 SCX  15 

    0x6c2d9cd8,// 18 SCX  16 

    0xb7b46984,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 340 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 92 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 92 

/// BFD lencrypto      : 72 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 84 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 300 

    0x0000005c,// 20 BFD   1 

    0x000c0048,// 21 BFD   2 

    0x012c0004,// 22 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01004000,// 23 MFM   1 

/// BDA is 86 words. 

/// BDA size     is 340 (0x154) 

/// BDA id       is 0x3ee5 

    0x01543ee5,// 24 BDA   1 

/// PAY Generic Data size   : 340 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9fbb0993,// 25 PAY   1 

    0x4bbe50f8,// 26 PAY   2 

    0x3c2163fa,// 27 PAY   3 

    0xe60725a1,// 28 PAY   4 

    0xf10e9dbc,// 29 PAY   5 

    0x6b02ca9d,// 30 PAY   6 

    0x9be89fb8,// 31 PAY   7 

    0x619f397b,// 32 PAY   8 

    0xf64105f9,// 33 PAY   9 

    0x4858a0b5,// 34 PAY  10 

    0xcba3989d,// 35 PAY  11 

    0x22270b52,// 36 PAY  12 

    0x777c2d9d,// 37 PAY  13 

    0x6da59bd1,// 38 PAY  14 

    0x678b0ce9,// 39 PAY  15 

    0x07492e5a,// 40 PAY  16 

    0xbced0b58,// 41 PAY  17 

    0x9a92bdc5,// 42 PAY  18 

    0xab4a0873,// 43 PAY  19 

    0x0a328ad6,// 44 PAY  20 

    0xaa96948e,// 45 PAY  21 

    0x84d4be53,// 46 PAY  22 

    0x68d6ca95,// 47 PAY  23 

    0x70f545f4,// 48 PAY  24 

    0xfad9b6ef,// 49 PAY  25 

    0x452d0301,// 50 PAY  26 

    0xd27786cb,// 51 PAY  27 

    0xb39e3bed,// 52 PAY  28 

    0xcf967632,// 53 PAY  29 

    0xeb0d7d44,// 54 PAY  30 

    0x4bd52cf4,// 55 PAY  31 

    0x26eb5467,// 56 PAY  32 

    0x122cd02d,// 57 PAY  33 

    0xe535ec7c,// 58 PAY  34 

    0x70142e66,// 59 PAY  35 

    0xaf99b6ac,// 60 PAY  36 

    0xa6c3fb6f,// 61 PAY  37 

    0xbbd65777,// 62 PAY  38 

    0x0e6ba266,// 63 PAY  39 

    0x8b4e0b3e,// 64 PAY  40 

    0x13cc2c50,// 65 PAY  41 

    0x9034c7f1,// 66 PAY  42 

    0x0dc7d909,// 67 PAY  43 

    0xb7db8918,// 68 PAY  44 

    0xc5cf2b37,// 69 PAY  45 

    0x89364d1b,// 70 PAY  46 

    0xb8ee1293,// 71 PAY  47 

    0x171f374f,// 72 PAY  48 

    0x71653361,// 73 PAY  49 

    0x6fee3b29,// 74 PAY  50 

    0xac1a97a2,// 75 PAY  51 

    0xa7e41946,// 76 PAY  52 

    0x74725900,// 77 PAY  53 

    0x5e47541f,// 78 PAY  54 

    0x9ae36ee2,// 79 PAY  55 

    0x95576c18,// 80 PAY  56 

    0xe2df1927,// 81 PAY  57 

    0x615a0737,// 82 PAY  58 

    0x78998034,// 83 PAY  59 

    0x1f4e3808,// 84 PAY  60 

    0x210da937,// 85 PAY  61 

    0xc559d79a,// 86 PAY  62 

    0xc869bf8c,// 87 PAY  63 

    0x5ad68b14,// 88 PAY  64 

    0x700a2e61,// 89 PAY  65 

    0xe80d31e2,// 90 PAY  66 

    0x1aa0f2f4,// 91 PAY  67 

    0x39ef925f,// 92 PAY  68 

    0xb0d43c54,// 93 PAY  69 

    0x1feb8f51,// 94 PAY  70 

    0x24c42a2d,// 95 PAY  71 

    0x3453fdcc,// 96 PAY  72 

    0xf6eb4c21,// 97 PAY  73 

    0xbedbf6a2,// 98 PAY  74 

    0xbdebc1e7,// 99 PAY  75 

    0x59b7922a,// 100 PAY  76 

    0x108b024c,// 101 PAY  77 

    0x3a69fdb2,// 102 PAY  78 

    0x53c889ec,// 103 PAY  79 

    0x7ec1fa2b,// 104 PAY  80 

    0x608290c6,// 105 PAY  81 

    0x9d2d34f2,// 106 PAY  82 

    0xacb57b9e,// 107 PAY  83 

    0xa6fa7f46,// 108 PAY  84 

    0x88e65cc3,// 109 PAY  85 

/// STA is 1 words. 

/// STA num_pkts       : 196 

/// STA pkt_idx        : 51 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x52 

    0x00cc52c4 // 110 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt51_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806128a8,// 4 SCX   2 

    0x00006100,// 5 SCX   3 

    0x602060f8,// 6 SCX   4 

    0x674db3c8,// 7 SCX   5 

    0x4df6eff3,// 8 SCX   6 

    0x657362f7,// 9 SCX   7 

    0xe0f316bd,// 10 SCX   8 

    0x42ff0c1b,// 11 SCX   9 

    0x8de0b75f,// 12 SCX  10 

    0x6d988904,// 13 SCX  11 

    0xdf60c655,// 14 SCX  12 

    0xff63bab3,// 15 SCX  13 

    0xc782c6ab,// 16 SCX  14 

    0x9ad1b9ab,// 17 SCX  15 

    0xa7007224,// 18 SCX  16 

    0x94871416,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 576 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 517 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 517 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 392 

/// BFD (ofst+len)cry  : 496 

/// BFD ofstiv         : 320 

/// BFD ofsticv        : 536 

    0x00000205,// 20 BFD   1 

    0x01880068,// 21 BFD   2 

    0x02180140,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x10001696,// 23 MFM   1 

    0x018fc239,// 24 MFM   2 

    0x13730000,// 25 MFM   3 

/// BDA is 145 words. 

/// BDA size     is 576 (0x240) 

/// BDA id       is 0x30ad 

    0x024030ad,// 26 BDA   1 

/// PAY Generic Data size   : 576 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x0fcef435,// 27 PAY   1 

    0x54cf58fe,// 28 PAY   2 

    0xe9164c5d,// 29 PAY   3 

    0x7008bf82,// 30 PAY   4 

    0x4a221cb9,// 31 PAY   5 

    0xc2ed0dd5,// 32 PAY   6 

    0x8a81692f,// 33 PAY   7 

    0xf012513b,// 34 PAY   8 

    0xaaebf778,// 35 PAY   9 

    0xb76766a4,// 36 PAY  10 

    0x87fbfb3c,// 37 PAY  11 

    0x5564b8fa,// 38 PAY  12 

    0xc05f84a2,// 39 PAY  13 

    0x260d229d,// 40 PAY  14 

    0xad880507,// 41 PAY  15 

    0x8d990a56,// 42 PAY  16 

    0xab8555ba,// 43 PAY  17 

    0xf04cec25,// 44 PAY  18 

    0x5d5e55d1,// 45 PAY  19 

    0x19014806,// 46 PAY  20 

    0xff07264c,// 47 PAY  21 

    0xbec0bc74,// 48 PAY  22 

    0x251a55b4,// 49 PAY  23 

    0x801b76cf,// 50 PAY  24 

    0x99ac9c0e,// 51 PAY  25 

    0xc0bf617c,// 52 PAY  26 

    0x74b194f0,// 53 PAY  27 

    0x712be474,// 54 PAY  28 

    0x60dc58f2,// 55 PAY  29 

    0xa2f2820b,// 56 PAY  30 

    0x7ebc74d9,// 57 PAY  31 

    0x06e2de12,// 58 PAY  32 

    0x10a8c025,// 59 PAY  33 

    0x1594a347,// 60 PAY  34 

    0xb5712d84,// 61 PAY  35 

    0xc9a4d9a3,// 62 PAY  36 

    0x92cd1111,// 63 PAY  37 

    0x55c9c063,// 64 PAY  38 

    0x832f943e,// 65 PAY  39 

    0x77aa3f05,// 66 PAY  40 

    0x25945e05,// 67 PAY  41 

    0x7a5bac42,// 68 PAY  42 

    0xbc5f324d,// 69 PAY  43 

    0x7084449c,// 70 PAY  44 

    0xa7d376fc,// 71 PAY  45 

    0x9c5e4c54,// 72 PAY  46 

    0xe11609ea,// 73 PAY  47 

    0x6b90d38c,// 74 PAY  48 

    0xc6685087,// 75 PAY  49 

    0xa3257a64,// 76 PAY  50 

    0x0920d264,// 77 PAY  51 

    0xd9100643,// 78 PAY  52 

    0x29d60830,// 79 PAY  53 

    0xc88cae56,// 80 PAY  54 

    0x6630df2e,// 81 PAY  55 

    0x5d8d49f8,// 82 PAY  56 

    0x7ad6eb06,// 83 PAY  57 

    0x8f2d2303,// 84 PAY  58 

    0x9853c180,// 85 PAY  59 

    0x91636202,// 86 PAY  60 

    0xcf6eaa6d,// 87 PAY  61 

    0x3fbc5e6c,// 88 PAY  62 

    0x39b44015,// 89 PAY  63 

    0x47988620,// 90 PAY  64 

    0xb5435666,// 91 PAY  65 

    0xb9b411e1,// 92 PAY  66 

    0x5e40a4a8,// 93 PAY  67 

    0x30c45e9a,// 94 PAY  68 

    0x47ac555e,// 95 PAY  69 

    0x2c89cd33,// 96 PAY  70 

    0x43f1486e,// 97 PAY  71 

    0x3e84c989,// 98 PAY  72 

    0x80a24316,// 99 PAY  73 

    0xe5fdc6cb,// 100 PAY  74 

    0x944e9e99,// 101 PAY  75 

    0x35510ce3,// 102 PAY  76 

    0x9f1def68,// 103 PAY  77 

    0x6a2ba5ee,// 104 PAY  78 

    0x6b88f7fb,// 105 PAY  79 

    0x816c36a2,// 106 PAY  80 

    0xa7e901e1,// 107 PAY  81 

    0x5406d183,// 108 PAY  82 

    0x29a878ba,// 109 PAY  83 

    0xa1f1d0fe,// 110 PAY  84 

    0xc72dfcae,// 111 PAY  85 

    0x09787d76,// 112 PAY  86 

    0x516d8d95,// 113 PAY  87 

    0x422d17f7,// 114 PAY  88 

    0x1de57522,// 115 PAY  89 

    0x4a54d39b,// 116 PAY  90 

    0xfb6aee31,// 117 PAY  91 

    0xa0b83974,// 118 PAY  92 

    0x60125f3e,// 119 PAY  93 

    0xc2c68a76,// 120 PAY  94 

    0x24be1095,// 121 PAY  95 

    0x0b22f368,// 122 PAY  96 

    0x32049acc,// 123 PAY  97 

    0x281c4cff,// 124 PAY  98 

    0xc488f4e5,// 125 PAY  99 

    0x23d6369d,// 126 PAY 100 

    0x9599c76c,// 127 PAY 101 

    0xe1a1d491,// 128 PAY 102 

    0xf797a113,// 129 PAY 103 

    0x4f6349e2,// 130 PAY 104 

    0x6a9e8415,// 131 PAY 105 

    0x150a7585,// 132 PAY 106 

    0x67e46764,// 133 PAY 107 

    0x6d30608d,// 134 PAY 108 

    0xc20edf6b,// 135 PAY 109 

    0x5ad62359,// 136 PAY 110 

    0x21120319,// 137 PAY 111 

    0x52b4bd07,// 138 PAY 112 

    0x37f5ad8b,// 139 PAY 113 

    0x5b7068f1,// 140 PAY 114 

    0xae7243f9,// 141 PAY 115 

    0xe5372b2f,// 142 PAY 116 

    0xd16beda0,// 143 PAY 117 

    0x39181f7e,// 144 PAY 118 

    0xfcc477cd,// 145 PAY 119 

    0xe4cb6811,// 146 PAY 120 

    0xb942a744,// 147 PAY 121 

    0x83e3f9f4,// 148 PAY 122 

    0x636fe512,// 149 PAY 123 

    0x60a3f721,// 150 PAY 124 

    0x24af0c53,// 151 PAY 125 

    0x3cdd28e8,// 152 PAY 126 

    0x9ad1442a,// 153 PAY 127 

    0xdf5125bb,// 154 PAY 128 

    0x048563a0,// 155 PAY 129 

    0x6e2065c6,// 156 PAY 130 

    0x3ff96cf5,// 157 PAY 131 

    0x2b3434cf,// 158 PAY 132 

    0x64d46f28,// 159 PAY 133 

    0x985c0501,// 160 PAY 134 

    0xb318ba70,// 161 PAY 135 

    0xfded9546,// 162 PAY 136 

    0xe2f06790,// 163 PAY 137 

    0x097bf0eb,// 164 PAY 138 

    0x10c6bd6b,// 165 PAY 139 

    0xd9192ebd,// 166 PAY 140 

    0x1ab29a7f,// 167 PAY 141 

    0x3aefc132,// 168 PAY 142 

    0x22f3dc69,// 169 PAY 143 

    0x69d042a9,// 170 PAY 144 

/// STA is 1 words. 

/// STA num_pkts       : 59 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb6 

    0x0050b63b // 171 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt52_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806428db,// 4 SCX   2 

    0x00007382,// 5 SCX   3 

    0x946dabb8,// 6 SCX   4 

    0x7bb91c7e,// 7 SCX   5 

    0x689eefb0,// 8 SCX   6 

    0x148c86e8,// 9 SCX   7 

    0x2eb2d5b0,// 10 SCX   8 

    0x1b16f719,// 11 SCX   9 

    0xb0a03199,// 12 SCX  10 

    0x020592bd,// 13 SCX  11 

    0xa9f562e4,// 14 SCX  12 

    0x63759e2e,// 15 SCX  13 

    0x3418d33d,// 16 SCX  14 

    0x559135ed,// 17 SCX  15 

    0x101b8e7c,// 18 SCX  16 

    0x314d435c,// 19 SCX  17 

    0x06ede13e,// 20 SCX  18 

    0xaadc61ff,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 816 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 432 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 432 

/// BFD lencrypto      : 184 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 236 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 572 

    0x000001b0,// 22 BFD   1 

    0x003400b8,// 23 BFD   2 

    0x023c0028,// 24 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 47 

    0x4700f496,// 25 MFM   1 

    0x2347cb89,// 26 MFM   2 

    0x464570d5,// 27 MFM   3 

    0x6d15c363,// 28 MFM   4 

    0x8efbe5fb,// 29 MFM   5 

    0x8350fac2,// 30 MFM   6 

    0x602e5c47,// 31 MFM   7 

    0xc28f2b98,// 32 MFM   8 

    0xc0923abc,// 33 MFM   9 

    0xc6a00000,// 34 MFM  10 

/// BDA is 205 words. 

/// BDA size     is 816 (0x330) 

/// BDA id       is 0xa607 

    0x0330a607,// 35 BDA   1 

/// PAY Generic Data size   : 816 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xdd46e1b1,// 36 PAY   1 

    0x30021120,// 37 PAY   2 

    0xf6159bd2,// 38 PAY   3 

    0xc739590e,// 39 PAY   4 

    0x15169c3c,// 40 PAY   5 

    0x013816ec,// 41 PAY   6 

    0x22ada436,// 42 PAY   7 

    0x46b0a2a1,// 43 PAY   8 

    0xac5f19ee,// 44 PAY   9 

    0x25d73452,// 45 PAY  10 

    0x6c82281f,// 46 PAY  11 

    0x88bb542a,// 47 PAY  12 

    0x79626efa,// 48 PAY  13 

    0x47d9b7ce,// 49 PAY  14 

    0x1ce4d4e5,// 50 PAY  15 

    0x32c17dcd,// 51 PAY  16 

    0xb91cc7bb,// 52 PAY  17 

    0xf89f8e2f,// 53 PAY  18 

    0x8c686ba4,// 54 PAY  19 

    0x26720d0e,// 55 PAY  20 

    0x735c72ee,// 56 PAY  21 

    0xde2725e2,// 57 PAY  22 

    0x9a2aad6d,// 58 PAY  23 

    0x661e388a,// 59 PAY  24 

    0x8d97078a,// 60 PAY  25 

    0x6331ac21,// 61 PAY  26 

    0x0c22697c,// 62 PAY  27 

    0x13678937,// 63 PAY  28 

    0x98f8011a,// 64 PAY  29 

    0xb89d3c3d,// 65 PAY  30 

    0x43708c97,// 66 PAY  31 

    0xb61ed31f,// 67 PAY  32 

    0x5d99904e,// 68 PAY  33 

    0x3f8aff29,// 69 PAY  34 

    0xbf5c06a1,// 70 PAY  35 

    0x03f3eda6,// 71 PAY  36 

    0x32ea0352,// 72 PAY  37 

    0x68e0a914,// 73 PAY  38 

    0x4e1f39f2,// 74 PAY  39 

    0x32f105a5,// 75 PAY  40 

    0x60f1348b,// 76 PAY  41 

    0x9f0e208d,// 77 PAY  42 

    0xba18f558,// 78 PAY  43 

    0x6c432756,// 79 PAY  44 

    0xa2fd632d,// 80 PAY  45 

    0x1ed47209,// 81 PAY  46 

    0x5f43f609,// 82 PAY  47 

    0xc1fbb436,// 83 PAY  48 

    0x57a64dd1,// 84 PAY  49 

    0x26ec991d,// 85 PAY  50 

    0xa104447b,// 86 PAY  51 

    0x9a17fc32,// 87 PAY  52 

    0xd9316758,// 88 PAY  53 

    0x0a07cb2f,// 89 PAY  54 

    0x56c2b419,// 90 PAY  55 

    0xdcee0b51,// 91 PAY  56 

    0xd26083f1,// 92 PAY  57 

    0x4883e835,// 93 PAY  58 

    0x69640272,// 94 PAY  59 

    0xe2655b35,// 95 PAY  60 

    0x1650668e,// 96 PAY  61 

    0x0c84a23b,// 97 PAY  62 

    0xff525c4f,// 98 PAY  63 

    0xe8453b78,// 99 PAY  64 

    0xc3167e4f,// 100 PAY  65 

    0xe279a113,// 101 PAY  66 

    0x865be110,// 102 PAY  67 

    0x8fae0670,// 103 PAY  68 

    0xf668c551,// 104 PAY  69 

    0xead9c557,// 105 PAY  70 

    0x389b80c2,// 106 PAY  71 

    0xe3862e41,// 107 PAY  72 

    0xd55169cd,// 108 PAY  73 

    0xb06b107f,// 109 PAY  74 

    0xc41f9252,// 110 PAY  75 

    0x20d11cd9,// 111 PAY  76 

    0x7ce8ca49,// 112 PAY  77 

    0x5f303df8,// 113 PAY  78 

    0x822b610d,// 114 PAY  79 

    0xe57df17b,// 115 PAY  80 

    0x7ab041a5,// 116 PAY  81 

    0x73779eb9,// 117 PAY  82 

    0xdc42a22f,// 118 PAY  83 

    0xbb96039a,// 119 PAY  84 

    0x7991a5fa,// 120 PAY  85 

    0xa8cb32a2,// 121 PAY  86 

    0x1901263d,// 122 PAY  87 

    0xc4a6d651,// 123 PAY  88 

    0x28f8cbb6,// 124 PAY  89 

    0xe5ad28ad,// 125 PAY  90 

    0x418f52ea,// 126 PAY  91 

    0xce4e5237,// 127 PAY  92 

    0xe6fdc1c4,// 128 PAY  93 

    0x0a461655,// 129 PAY  94 

    0xa5e48fec,// 130 PAY  95 

    0xfa8187bb,// 131 PAY  96 

    0xc502f93a,// 132 PAY  97 

    0x0882a61e,// 133 PAY  98 

    0xe735523b,// 134 PAY  99 

    0x3e2dace7,// 135 PAY 100 

    0xb84ad0c1,// 136 PAY 101 

    0x8e1a66be,// 137 PAY 102 

    0x7188d72b,// 138 PAY 103 

    0xe6e34ce1,// 139 PAY 104 

    0x37b628f5,// 140 PAY 105 

    0x4980440f,// 141 PAY 106 

    0x01c7b92a,// 142 PAY 107 

    0xe664f3a7,// 143 PAY 108 

    0xaecb6eb0,// 144 PAY 109 

    0xae2a9dff,// 145 PAY 110 

    0xc26cc930,// 146 PAY 111 

    0x02a9a0b0,// 147 PAY 112 

    0x158d5fb9,// 148 PAY 113 

    0xbe1411e8,// 149 PAY 114 

    0xa7b9d3a7,// 150 PAY 115 

    0xac7f5a8b,// 151 PAY 116 

    0x4a610f49,// 152 PAY 117 

    0x0fde8869,// 153 PAY 118 

    0x7be01434,// 154 PAY 119 

    0xd9426f70,// 155 PAY 120 

    0x8d730ed8,// 156 PAY 121 

    0xdd7d9c71,// 157 PAY 122 

    0xe98634e8,// 158 PAY 123 

    0x29533676,// 159 PAY 124 

    0xa90e75bd,// 160 PAY 125 

    0x81a7f98f,// 161 PAY 126 

    0x0f295f09,// 162 PAY 127 

    0x0947494c,// 163 PAY 128 

    0x49900d4c,// 164 PAY 129 

    0xab4de5d8,// 165 PAY 130 

    0x0a98ddde,// 166 PAY 131 

    0x5fc98489,// 167 PAY 132 

    0x6d15f65b,// 168 PAY 133 

    0xa040ffcf,// 169 PAY 134 

    0x5723b105,// 170 PAY 135 

    0x3b1722ad,// 171 PAY 136 

    0x3f1c32ac,// 172 PAY 137 

    0x627e63da,// 173 PAY 138 

    0xcc808fbb,// 174 PAY 139 

    0x060679c1,// 175 PAY 140 

    0x511e28da,// 176 PAY 141 

    0xca2b2cf4,// 177 PAY 142 

    0x6cd8237d,// 178 PAY 143 

    0xcba09d69,// 179 PAY 144 

    0x56afca8e,// 180 PAY 145 

    0xc5110496,// 181 PAY 146 

    0xa4a001c0,// 182 PAY 147 

    0x41b05bf1,// 183 PAY 148 

    0x73081d6c,// 184 PAY 149 

    0xd1aec8da,// 185 PAY 150 

    0xfb25a58e,// 186 PAY 151 

    0xac9e9c3f,// 187 PAY 152 

    0x6d6875f8,// 188 PAY 153 

    0xc4761dc5,// 189 PAY 154 

    0x573e0a3e,// 190 PAY 155 

    0x24f40a4a,// 191 PAY 156 

    0x3b1da451,// 192 PAY 157 

    0x78b30c7d,// 193 PAY 158 

    0xc974cfb8,// 194 PAY 159 

    0x48850a22,// 195 PAY 160 

    0x6b613a6c,// 196 PAY 161 

    0xb1496cb5,// 197 PAY 162 

    0x50ce8b9b,// 198 PAY 163 

    0xb204f2b2,// 199 PAY 164 

    0xfe1b95bc,// 200 PAY 165 

    0xe921d005,// 201 PAY 166 

    0x26e159e0,// 202 PAY 167 

    0x6494d338,// 203 PAY 168 

    0xd1487f80,// 204 PAY 169 

    0xd75f6ab3,// 205 PAY 170 

    0xc1bce716,// 206 PAY 171 

    0x29beb910,// 207 PAY 172 

    0x1829893e,// 208 PAY 173 

    0x11d6499a,// 209 PAY 174 

    0x03bd9395,// 210 PAY 175 

    0x6868d878,// 211 PAY 176 

    0xe23e0697,// 212 PAY 177 

    0xb14ad48c,// 213 PAY 178 

    0x9561ed21,// 214 PAY 179 

    0x6688c3a7,// 215 PAY 180 

    0x322057be,// 216 PAY 181 

    0x908ab2c2,// 217 PAY 182 

    0xc984d9c2,// 218 PAY 183 

    0x69e0769b,// 219 PAY 184 

    0x9e61fce5,// 220 PAY 185 

    0x3841d801,// 221 PAY 186 

    0x2024046a,// 222 PAY 187 

    0xc81979e7,// 223 PAY 188 

    0xd29f1479,// 224 PAY 189 

    0x5e67d05e,// 225 PAY 190 

    0xb7a000ce,// 226 PAY 191 

    0xc54cec2d,// 227 PAY 192 

    0xb5983353,// 228 PAY 193 

    0xadb8f212,// 229 PAY 194 

    0x1105bd4f,// 230 PAY 195 

    0x01b8c113,// 231 PAY 196 

    0x07bf3812,// 232 PAY 197 

    0xdd6858e0,// 233 PAY 198 

    0x7b9ae298,// 234 PAY 199 

    0xd669dd5d,// 235 PAY 200 

    0x504ba28e,// 236 PAY 201 

    0x2a601506,// 237 PAY 202 

    0x07969e37,// 238 PAY 203 

    0x69237dcc,// 239 PAY 204 

/// STA is 1 words. 

/// STA num_pkts       : 163 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x58 

    0x03d958a3 // 240 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt53_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8062283a,// 4 SCX   2 

    0x00000300,// 5 SCX   3 

    0xa93670d3,// 6 SCX   4 

    0x62f5f788,// 7 SCX   5 

    0xed045635,// 8 SCX   6 

    0xf514726a,// 9 SCX   7 

    0x2194a07a,// 10 SCX   8 

    0x919779a1,// 11 SCX   9 

    0xe53e5f64,// 12 SCX  10 

    0xcb17a796,// 13 SCX  11 

    0x0aff189d,// 14 SCX  12 

    0xcbfdb85d,// 15 SCX  13 

    0x89841412,// 16 SCX  14 

    0xb7d8143c,// 17 SCX  15 

    0x885f7422,// 18 SCX  16 

    0x11d44376,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1409 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 754 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 754 

/// BFD lencrypto      : 496 

/// BFD ofstcrypto     : 196 

/// BFD (ofst+len)cry  : 692 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 1128 

    0x000002f2,// 20 BFD   1 

    0x00c401f0,// 21 BFD   2 

    0x046800ac,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00c084,// 23 MFM   1 

    0x4eeb11c4,// 24 MFM   2 

    0x8dc4edf3,// 25 MFM   3 

    0x887a06a4,// 26 MFM   4 

    0x34a89d21,// 27 MFM   5 

    0xc729cb3b,// 28 MFM   6 

    0x6dd6d0e1,// 29 MFM   7 

    0x3deebe3a,// 30 MFM   8 

    0x167ec208,// 31 MFM   9 

    0x5bdd3770,// 32 MFM  10 

    0x3aab52fe,// 33 MFM  11 

    0x7c1dee38,// 34 MFM  12 

    0x2dc79b0a,// 35 MFM  13 

    0xeadd2893,// 36 MFM  14 

    0x9858db99,// 37 MFM  15 

    0xe7eb7261,// 38 MFM  16 

/// BDA is 354 words. 

/// BDA size     is 1409 (0x581) 

/// BDA id       is 0x7e9d 

    0x05817e9d,// 39 BDA   1 

/// PAY Generic Data size   : 1409 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x19601f5d,// 40 PAY   1 

    0xce270785,// 41 PAY   2 

    0xe1386fb8,// 42 PAY   3 

    0xf83db524,// 43 PAY   4 

    0xc4eeddc2,// 44 PAY   5 

    0x4e043b89,// 45 PAY   6 

    0x0b80c2c2,// 46 PAY   7 

    0x4c5a7fd3,// 47 PAY   8 

    0x38ffb19b,// 48 PAY   9 

    0x708be665,// 49 PAY  10 

    0x7d631158,// 50 PAY  11 

    0xa008bacf,// 51 PAY  12 

    0xc931ad6f,// 52 PAY  13 

    0x2283e803,// 53 PAY  14 

    0xf9861538,// 54 PAY  15 

    0x3164f625,// 55 PAY  16 

    0x68bd3f34,// 56 PAY  17 

    0x516f6ef9,// 57 PAY  18 

    0x1f05a1b7,// 58 PAY  19 

    0x5ebbd93d,// 59 PAY  20 

    0xb0eccdd0,// 60 PAY  21 

    0xcf9581cb,// 61 PAY  22 

    0x96bb3f6a,// 62 PAY  23 

    0xc71469bd,// 63 PAY  24 

    0x1f1950ac,// 64 PAY  25 

    0x9a0bf046,// 65 PAY  26 

    0x5b773d81,// 66 PAY  27 

    0xce01c1e3,// 67 PAY  28 

    0x317a689a,// 68 PAY  29 

    0xce55d7b3,// 69 PAY  30 

    0x1fdb304e,// 70 PAY  31 

    0xa833e68f,// 71 PAY  32 

    0x2ca75080,// 72 PAY  33 

    0xf08ff185,// 73 PAY  34 

    0x64059044,// 74 PAY  35 

    0xe685a3eb,// 75 PAY  36 

    0x78e8c918,// 76 PAY  37 

    0x12a0638a,// 77 PAY  38 

    0xd762467a,// 78 PAY  39 

    0x3218e553,// 79 PAY  40 

    0x51c88913,// 80 PAY  41 

    0xd81ca7f5,// 81 PAY  42 

    0x9af25167,// 82 PAY  43 

    0x9b6030ba,// 83 PAY  44 

    0xe111ad6e,// 84 PAY  45 

    0x2adadee9,// 85 PAY  46 

    0xeaa4ec22,// 86 PAY  47 

    0x0c532d62,// 87 PAY  48 

    0xd2014e5d,// 88 PAY  49 

    0xfc5cce31,// 89 PAY  50 

    0x48083576,// 90 PAY  51 

    0x009d53e0,// 91 PAY  52 

    0x07c3e270,// 92 PAY  53 

    0xe64515d5,// 93 PAY  54 

    0x994d5764,// 94 PAY  55 

    0x92dbff8d,// 95 PAY  56 

    0x2ee5e90d,// 96 PAY  57 

    0x7d269380,// 97 PAY  58 

    0xe7db41c4,// 98 PAY  59 

    0xa905691d,// 99 PAY  60 

    0xe9fee47b,// 100 PAY  61 

    0xe5c8a2c8,// 101 PAY  62 

    0x07bca6de,// 102 PAY  63 

    0x0c930e1f,// 103 PAY  64 

    0x4ae25c5a,// 104 PAY  65 

    0x3e1184d0,// 105 PAY  66 

    0x6b214c38,// 106 PAY  67 

    0x83381c73,// 107 PAY  68 

    0x0becb661,// 108 PAY  69 

    0x4d743115,// 109 PAY  70 

    0x81b9823a,// 110 PAY  71 

    0x956321b0,// 111 PAY  72 

    0x06e8e31f,// 112 PAY  73 

    0xefa818d0,// 113 PAY  74 

    0x3b82ca65,// 114 PAY  75 

    0x9c8fe8cf,// 115 PAY  76 

    0xe1c3a818,// 116 PAY  77 

    0xd2f20c5f,// 117 PAY  78 

    0x91d261cc,// 118 PAY  79 

    0xaeb03113,// 119 PAY  80 

    0xc3bd7314,// 120 PAY  81 

    0xd8a4df6e,// 121 PAY  82 

    0xd2f2f32b,// 122 PAY  83 

    0xedcc75c6,// 123 PAY  84 

    0xad510e63,// 124 PAY  85 

    0x95f4151c,// 125 PAY  86 

    0xb24d8b78,// 126 PAY  87 

    0xc05aea7b,// 127 PAY  88 

    0x23741c7f,// 128 PAY  89 

    0x2a5dbe84,// 129 PAY  90 

    0x8d2b60cd,// 130 PAY  91 

    0xe2147a5c,// 131 PAY  92 

    0xbe6fb2a9,// 132 PAY  93 

    0x8b423d09,// 133 PAY  94 

    0xefa13cc2,// 134 PAY  95 

    0x1f8fae89,// 135 PAY  96 

    0x08c9cebf,// 136 PAY  97 

    0xb9858444,// 137 PAY  98 

    0x024ebf39,// 138 PAY  99 

    0x4c38e0a9,// 139 PAY 100 

    0xea6fd306,// 140 PAY 101 

    0x76ce074b,// 141 PAY 102 

    0x6800cbac,// 142 PAY 103 

    0x699952b1,// 143 PAY 104 

    0x9e0de1bc,// 144 PAY 105 

    0x960f8c77,// 145 PAY 106 

    0x433119b2,// 146 PAY 107 

    0xee3ac72c,// 147 PAY 108 

    0x10a68945,// 148 PAY 109 

    0xffea6ec8,// 149 PAY 110 

    0x704a7cce,// 150 PAY 111 

    0x47141300,// 151 PAY 112 

    0x33c19880,// 152 PAY 113 

    0xb794aa5d,// 153 PAY 114 

    0x662f39da,// 154 PAY 115 

    0xca74a158,// 155 PAY 116 

    0x550934a4,// 156 PAY 117 

    0x61341be0,// 157 PAY 118 

    0x2b362a0b,// 158 PAY 119 

    0x9330ec13,// 159 PAY 120 

    0xc5d3719b,// 160 PAY 121 

    0x17167ab1,// 161 PAY 122 

    0xea94c975,// 162 PAY 123 

    0x9ac4e908,// 163 PAY 124 

    0x044f6503,// 164 PAY 125 

    0x21674327,// 165 PAY 126 

    0x4890f480,// 166 PAY 127 

    0x481f09e8,// 167 PAY 128 

    0x57ee28a4,// 168 PAY 129 

    0x4086743d,// 169 PAY 130 

    0x7cd17a13,// 170 PAY 131 

    0x66b379c6,// 171 PAY 132 

    0xc4e6a655,// 172 PAY 133 

    0x7e881fa2,// 173 PAY 134 

    0x957f58d8,// 174 PAY 135 

    0x56ce5a1f,// 175 PAY 136 

    0x1c364a06,// 176 PAY 137 

    0x75ae08f1,// 177 PAY 138 

    0xffdbee2a,// 178 PAY 139 

    0x881a59e4,// 179 PAY 140 

    0x849d6457,// 180 PAY 141 

    0xe3533e60,// 181 PAY 142 

    0x50bd518e,// 182 PAY 143 

    0xbd911326,// 183 PAY 144 

    0xfe8b4c1c,// 184 PAY 145 

    0xbe41c06b,// 185 PAY 146 

    0xce497a44,// 186 PAY 147 

    0xf94fd2f5,// 187 PAY 148 

    0x660ef06a,// 188 PAY 149 

    0x0a5a15fe,// 189 PAY 150 

    0xd0aac2a7,// 190 PAY 151 

    0xa2798849,// 191 PAY 152 

    0x0be29bb3,// 192 PAY 153 

    0xe7b7f05f,// 193 PAY 154 

    0xcf8c3124,// 194 PAY 155 

    0xcc835573,// 195 PAY 156 

    0x26cc07b1,// 196 PAY 157 

    0xf66672ff,// 197 PAY 158 

    0xf7bef3de,// 198 PAY 159 

    0x1de13bc8,// 199 PAY 160 

    0xd02cfb9b,// 200 PAY 161 

    0x7603548d,// 201 PAY 162 

    0x647e4e17,// 202 PAY 163 

    0xd797fa9b,// 203 PAY 164 

    0x768568d7,// 204 PAY 165 

    0x7a718c07,// 205 PAY 166 

    0xab7660ef,// 206 PAY 167 

    0x7e7ee303,// 207 PAY 168 

    0x564ed094,// 208 PAY 169 

    0x50e3758e,// 209 PAY 170 

    0xe853da92,// 210 PAY 171 

    0xc220b791,// 211 PAY 172 

    0x7ec1b2b1,// 212 PAY 173 

    0x3b3132f2,// 213 PAY 174 

    0x9dd4d428,// 214 PAY 175 

    0x4f3e9f8f,// 215 PAY 176 

    0xf5dba66d,// 216 PAY 177 

    0x707fc661,// 217 PAY 178 

    0x5bbf2b8e,// 218 PAY 179 

    0x0660c5d2,// 219 PAY 180 

    0xa5bcc2b5,// 220 PAY 181 

    0xb16ebcfa,// 221 PAY 182 

    0x97ab51c4,// 222 PAY 183 

    0x78ac5423,// 223 PAY 184 

    0x51b7dca2,// 224 PAY 185 

    0xe41d08ab,// 225 PAY 186 

    0x1e831eda,// 226 PAY 187 

    0x19fb87d3,// 227 PAY 188 

    0x0fecb00c,// 228 PAY 189 

    0xd07fc0f5,// 229 PAY 190 

    0xec176276,// 230 PAY 191 

    0x23125f0b,// 231 PAY 192 

    0x8f91b42f,// 232 PAY 193 

    0xe58ae3f4,// 233 PAY 194 

    0x8471ccd9,// 234 PAY 195 

    0x23d90500,// 235 PAY 196 

    0x0891fe32,// 236 PAY 197 

    0xb17152dc,// 237 PAY 198 

    0xb3808d6c,// 238 PAY 199 

    0x6ba1bb19,// 239 PAY 200 

    0xe67cd7da,// 240 PAY 201 

    0x9cc6e583,// 241 PAY 202 

    0xab5bafcd,// 242 PAY 203 

    0xeb047b13,// 243 PAY 204 

    0xf0d4c70a,// 244 PAY 205 

    0x2cd3f1fd,// 245 PAY 206 

    0xdfc92ec6,// 246 PAY 207 

    0x552fa2bb,// 247 PAY 208 

    0x29a826a1,// 248 PAY 209 

    0x218fce20,// 249 PAY 210 

    0x43d5aa50,// 250 PAY 211 

    0x035c8a6f,// 251 PAY 212 

    0x4d6fd332,// 252 PAY 213 

    0x3e2cdb84,// 253 PAY 214 

    0x1cc7cbcc,// 254 PAY 215 

    0x90d070db,// 255 PAY 216 

    0xab11b495,// 256 PAY 217 

    0x8a726844,// 257 PAY 218 

    0xd1e36e84,// 258 PAY 219 

    0x1066c867,// 259 PAY 220 

    0x42ce24c0,// 260 PAY 221 

    0xe8a5a3ee,// 261 PAY 222 

    0x151feb9c,// 262 PAY 223 

    0x98c639b8,// 263 PAY 224 

    0xc6c77aae,// 264 PAY 225 

    0xe01503df,// 265 PAY 226 

    0xe00597fb,// 266 PAY 227 

    0x36fc855a,// 267 PAY 228 

    0x09845ae9,// 268 PAY 229 

    0x81528a47,// 269 PAY 230 

    0x7a848921,// 270 PAY 231 

    0x6ca9a76d,// 271 PAY 232 

    0x789eacdf,// 272 PAY 233 

    0x22741b2a,// 273 PAY 234 

    0xbaf1ac56,// 274 PAY 235 

    0xd4ee3554,// 275 PAY 236 

    0x31ceaf39,// 276 PAY 237 

    0xfac5f32d,// 277 PAY 238 

    0xb204a1bc,// 278 PAY 239 

    0x5312d6d3,// 279 PAY 240 

    0x06461ab5,// 280 PAY 241 

    0xc7ea5bd9,// 281 PAY 242 

    0xde1a995d,// 282 PAY 243 

    0x55c52802,// 283 PAY 244 

    0x42136e05,// 284 PAY 245 

    0x74955eb0,// 285 PAY 246 

    0x00b61469,// 286 PAY 247 

    0xb6e810ba,// 287 PAY 248 

    0x4d56e1eb,// 288 PAY 249 

    0x4ade8602,// 289 PAY 250 

    0x9695cc7d,// 290 PAY 251 

    0x47f5266b,// 291 PAY 252 

    0xf05d4354,// 292 PAY 253 

    0xadcf17ba,// 293 PAY 254 

    0xb39651b9,// 294 PAY 255 

    0x96a1e0d2,// 295 PAY 256 

    0xae14828f,// 296 PAY 257 

    0xd18df01e,// 297 PAY 258 

    0x34106858,// 298 PAY 259 

    0x6be25418,// 299 PAY 260 

    0xcd70a870,// 300 PAY 261 

    0xfe324e89,// 301 PAY 262 

    0x5eed4746,// 302 PAY 263 

    0x3a2bb202,// 303 PAY 264 

    0x9c246873,// 304 PAY 265 

    0xb0c49d6e,// 305 PAY 266 

    0x33ed7c68,// 306 PAY 267 

    0x2ec5e5cf,// 307 PAY 268 

    0xb7fd8d79,// 308 PAY 269 

    0xb18e3773,// 309 PAY 270 

    0x92831117,// 310 PAY 271 

    0x388abe82,// 311 PAY 272 

    0x1562c09d,// 312 PAY 273 

    0xf7abc442,// 313 PAY 274 

    0xd9a93577,// 314 PAY 275 

    0x8a8d6caf,// 315 PAY 276 

    0xa8925dd0,// 316 PAY 277 

    0x738f1fce,// 317 PAY 278 

    0xa99eac87,// 318 PAY 279 

    0x1c32617f,// 319 PAY 280 

    0x092595fd,// 320 PAY 281 

    0xfd658d83,// 321 PAY 282 

    0x44d06f5f,// 322 PAY 283 

    0xc3abb735,// 323 PAY 284 

    0xaddc7d59,// 324 PAY 285 

    0x148636ad,// 325 PAY 286 

    0x4e133cac,// 326 PAY 287 

    0x6449e8be,// 327 PAY 288 

    0x776df8b1,// 328 PAY 289 

    0xb990f0ee,// 329 PAY 290 

    0x8a2e3dc6,// 330 PAY 291 

    0x4627b294,// 331 PAY 292 

    0x846e3a33,// 332 PAY 293 

    0x58f984f4,// 333 PAY 294 

    0x2182984e,// 334 PAY 295 

    0x311b307a,// 335 PAY 296 

    0x2b40ef04,// 336 PAY 297 

    0x463aaec9,// 337 PAY 298 

    0xe8c269a4,// 338 PAY 299 

    0x6a312146,// 339 PAY 300 

    0x944f5e19,// 340 PAY 301 

    0xfe819aec,// 341 PAY 302 

    0xd090da5b,// 342 PAY 303 

    0xec25a455,// 343 PAY 304 

    0xf950028a,// 344 PAY 305 

    0xd7854dc4,// 345 PAY 306 

    0xa0d3479c,// 346 PAY 307 

    0x0166b1e6,// 347 PAY 308 

    0x1040b6ab,// 348 PAY 309 

    0x88c6dad6,// 349 PAY 310 

    0xa0d29a23,// 350 PAY 311 

    0x142aa939,// 351 PAY 312 

    0x976b9493,// 352 PAY 313 

    0x1f7fbd0a,// 353 PAY 314 

    0x33e32944,// 354 PAY 315 

    0x7c540825,// 355 PAY 316 

    0x32bb54a0,// 356 PAY 317 

    0x1846e7e6,// 357 PAY 318 

    0xab66ef16,// 358 PAY 319 

    0xc332dca5,// 359 PAY 320 

    0xc8736184,// 360 PAY 321 

    0x8fce97b8,// 361 PAY 322 

    0xaa35a01c,// 362 PAY 323 

    0xfd7febf6,// 363 PAY 324 

    0x524c769b,// 364 PAY 325 

    0xeb58543f,// 365 PAY 326 

    0x613d59f7,// 366 PAY 327 

    0xb811f535,// 367 PAY 328 

    0x99d32fa9,// 368 PAY 329 

    0x3f2e8bc2,// 369 PAY 330 

    0xce43b0b5,// 370 PAY 331 

    0x96b1e478,// 371 PAY 332 

    0x4018041d,// 372 PAY 333 

    0xc586d5d8,// 373 PAY 334 

    0x46dd7ce1,// 374 PAY 335 

    0x3be88ba5,// 375 PAY 336 

    0xfcabeb34,// 376 PAY 337 

    0x5232c3d1,// 377 PAY 338 

    0x9b0e49c7,// 378 PAY 339 

    0x628c7e58,// 379 PAY 340 

    0x74e764c7,// 380 PAY 341 

    0xe01ca325,// 381 PAY 342 

    0xbffc8be5,// 382 PAY 343 

    0x456acc37,// 383 PAY 344 

    0x921523eb,// 384 PAY 345 

    0x59a883b8,// 385 PAY 346 

    0xae060f1a,// 386 PAY 347 

    0xedccbadf,// 387 PAY 348 

    0x491617cd,// 388 PAY 349 

    0x805c9d55,// 389 PAY 350 

    0x2ab5026b,// 390 PAY 351 

    0x8c16706a,// 391 PAY 352 

    0x4b000000,// 392 PAY 353 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 44 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf8 

    0x00b1f806 // 393 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt54_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x8065284b,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0x35a5aa24,// 6 SCX   4 

    0x4d66de79,// 7 SCX   5 

    0x38c3c633,// 8 SCX   6 

    0x334538bc,// 9 SCX   7 

    0x8a78ab13,// 10 SCX   8 

    0x25b3a235,// 11 SCX   9 

    0x83a8c1d0,// 12 SCX  10 

    0x9683e40d,// 13 SCX  11 

    0x1ce709a9,// 14 SCX  12 

    0xeb6bc8d2,// 15 SCX  13 

    0x598305b0,// 16 SCX  14 

    0xe27ad8b7,// 17 SCX  15 

    0xf169fcc5,// 18 SCX  16 

    0x0f06f87e,// 19 SCX  17 

    0xba6f4283,// 20 SCX  18 

    0x31d12fe2,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 142 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 26 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 26 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 20 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 80 

    0x0000001a,// 22 BFD   1 

    0x000c0008,// 23 BFD   2 

    0x00500000,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600b532,// 25 MFM   1 

    0xb5000000,// 26 MFM   2 

/// BDA is 37 words. 

/// BDA size     is 142 (0x8e) 

/// BDA id       is 0x5aee 

    0x008e5aee,// 27 BDA   1 

/// PAY Generic Data size   : 142 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x62719e97,// 28 PAY   1 

    0x80b9016b,// 29 PAY   2 

    0xdc939dde,// 30 PAY   3 

    0x3482eef5,// 31 PAY   4 

    0x43f28313,// 32 PAY   5 

    0xac94266d,// 33 PAY   6 

    0x0cfe7878,// 34 PAY   7 

    0x76d9e780,// 35 PAY   8 

    0x9a19e28c,// 36 PAY   9 

    0x4e4affa8,// 37 PAY  10 

    0xd518e76c,// 38 PAY  11 

    0x950ad194,// 39 PAY  12 

    0x75e2cb05,// 40 PAY  13 

    0xa472e3d4,// 41 PAY  14 

    0x755b0f0b,// 42 PAY  15 

    0xf1be880e,// 43 PAY  16 

    0xa9520bbe,// 44 PAY  17 

    0x776436cd,// 45 PAY  18 

    0xcc2d9894,// 46 PAY  19 

    0x1fb09284,// 47 PAY  20 

    0xdaf31eb5,// 48 PAY  21 

    0xbdddea39,// 49 PAY  22 

    0xca9bed7d,// 50 PAY  23 

    0xfa6c2331,// 51 PAY  24 

    0xcf20d58f,// 52 PAY  25 

    0x1e911418,// 53 PAY  26 

    0xd288b999,// 54 PAY  27 

    0x1659562e,// 55 PAY  28 

    0x49261d00,// 56 PAY  29 

    0xaa99fc4b,// 57 PAY  30 

    0x579cfb26,// 58 PAY  31 

    0x3012b63d,// 59 PAY  32 

    0x5c1aa200,// 60 PAY  33 

    0xecbb4ba4,// 61 PAY  34 

    0x8b16af66,// 62 PAY  35 

    0x9c760000,// 63 PAY  36 

/// STA is 1 words. 

/// STA num_pkts       : 33 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x19 

    0x01b41921 // 64 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt55_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806428b2,// 4 SCX   2 

    0x00003482,// 5 SCX   3 

    0x55ee068b,// 6 SCX   4 

    0xd0d83ec8,// 7 SCX   5 

    0xf8b0a5ff,// 8 SCX   6 

    0x2122ffb6,// 9 SCX   7 

    0xaf72df1b,// 10 SCX   8 

    0xbe87cb90,// 11 SCX   9 

    0x76ec40f5,// 12 SCX  10 

    0xfc76bee8,// 13 SCX  11 

    0x55e53747,// 14 SCX  12 

    0xa860b1ce,// 15 SCX  13 

    0xedca521e,// 16 SCX  14 

    0xa8325c74,// 17 SCX  15 

    0x7206eb75,// 18 SCX  16 

    0x945f5ee2,// 19 SCX  17 

    0x4ebcd29e,// 20 SCX  18 

    0x72b65ebd,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1058 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 920 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 920 

/// BFD lencrypto      : 720 

/// BFD ofstcrypto     : 160 

/// BFD (ofst+len)cry  : 880 

/// BFD ofstiv         : 80 

/// BFD ofsticv        : 972 

    0x00000398,// 22 BFD   1 

    0x00a002d0,// 23 BFD   2 

    0x03cc0050,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 75 

    0x7500600c,// 25 MFM   1 

    0x0e68b184,// 26 MFM   2 

    0xe90d1a28,// 27 MFM   3 

    0xda1118db,// 28 MFM   4 

    0x224dba14,// 29 MFM   5 

    0x3f354682,// 30 MFM   6 

    0x7c291646,// 31 MFM   7 

    0x232535ce,// 32 MFM   8 

    0xf9fe1d05,// 33 MFM   9 

    0x016ba3b8,// 34 MFM  10 

    0x681a1e23,// 35 MFM  11 

    0xc79ec3e4,// 36 MFM  12 

    0xa2eb79bf,// 37 MFM  13 

    0xc286cdc9,// 38 MFM  14 

    0x302fc995,// 39 MFM  15 

    0xc0000000,// 40 MFM  16 

/// BDA is 266 words. 

/// BDA size     is 1058 (0x422) 

/// BDA id       is 0x49d1 

    0x042249d1,// 41 BDA   1 

/// PAY Generic Data size   : 1058 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0869385a,// 42 PAY   1 

    0x05f6f9b4,// 43 PAY   2 

    0x259c9bad,// 44 PAY   3 

    0x31094dcf,// 45 PAY   4 

    0x7995399b,// 46 PAY   5 

    0xebd5e52d,// 47 PAY   6 

    0x04d41b51,// 48 PAY   7 

    0x363a0ff9,// 49 PAY   8 

    0x2493ed93,// 50 PAY   9 

    0xc62baef2,// 51 PAY  10 

    0xc1c58960,// 52 PAY  11 

    0x9835ade0,// 53 PAY  12 

    0x04eca6d6,// 54 PAY  13 

    0x7bed45d0,// 55 PAY  14 

    0xcaa9cecf,// 56 PAY  15 

    0xc2242854,// 57 PAY  16 

    0xc413d807,// 58 PAY  17 

    0x67802036,// 59 PAY  18 

    0xb3727935,// 60 PAY  19 

    0x41c84e23,// 61 PAY  20 

    0x283abb81,// 62 PAY  21 

    0xe950bbb1,// 63 PAY  22 

    0x545b81a5,// 64 PAY  23 

    0xb24a35ed,// 65 PAY  24 

    0xfbaa33fe,// 66 PAY  25 

    0x1a7f4188,// 67 PAY  26 

    0x8c1ef479,// 68 PAY  27 

    0xfafc9284,// 69 PAY  28 

    0x7917324f,// 70 PAY  29 

    0x3b604cca,// 71 PAY  30 

    0x32f0aab3,// 72 PAY  31 

    0xb9cf25f7,// 73 PAY  32 

    0x5d23d7e3,// 74 PAY  33 

    0xf09c0b13,// 75 PAY  34 

    0x752c224a,// 76 PAY  35 

    0x120f9d4e,// 77 PAY  36 

    0xb3252bf1,// 78 PAY  37 

    0x7d190c67,// 79 PAY  38 

    0x59478bd8,// 80 PAY  39 

    0x3f6554a8,// 81 PAY  40 

    0xe446372a,// 82 PAY  41 

    0x3b8c6848,// 83 PAY  42 

    0xb4645d3a,// 84 PAY  43 

    0x4e00d718,// 85 PAY  44 

    0xb34f8dbe,// 86 PAY  45 

    0xe7fd5281,// 87 PAY  46 

    0x387f1167,// 88 PAY  47 

    0x27c7ba94,// 89 PAY  48 

    0x11fbd723,// 90 PAY  49 

    0x9715e84e,// 91 PAY  50 

    0xec979c08,// 92 PAY  51 

    0x6f834c47,// 93 PAY  52 

    0xe12e9bd5,// 94 PAY  53 

    0xc5fac9d7,// 95 PAY  54 

    0xdacd6ce3,// 96 PAY  55 

    0x4645f204,// 97 PAY  56 

    0xaf55b653,// 98 PAY  57 

    0x35cefca5,// 99 PAY  58 

    0xeaea2150,// 100 PAY  59 

    0x7d41be27,// 101 PAY  60 

    0x51f49161,// 102 PAY  61 

    0x1b0b12f1,// 103 PAY  62 

    0x4382ccd6,// 104 PAY  63 

    0x94fec15a,// 105 PAY  64 

    0x516d2ad6,// 106 PAY  65 

    0x47662e10,// 107 PAY  66 

    0xaa980bde,// 108 PAY  67 

    0x9c08a076,// 109 PAY  68 

    0x661017dd,// 110 PAY  69 

    0x85702e6f,// 111 PAY  70 

    0x724c0bba,// 112 PAY  71 

    0x51c66bed,// 113 PAY  72 

    0x5d374094,// 114 PAY  73 

    0x67ce9281,// 115 PAY  74 

    0xf957b0ed,// 116 PAY  75 

    0x6ef23f1b,// 117 PAY  76 

    0x4379faf1,// 118 PAY  77 

    0x0dc176a9,// 119 PAY  78 

    0xe5b3741f,// 120 PAY  79 

    0x32a29c3c,// 121 PAY  80 

    0x9cc41696,// 122 PAY  81 

    0x6dbcbb21,// 123 PAY  82 

    0x2128f8eb,// 124 PAY  83 

    0xba614eaa,// 125 PAY  84 

    0x0af1e297,// 126 PAY  85 

    0xc2cd701f,// 127 PAY  86 

    0x6f93a537,// 128 PAY  87 

    0xe5048cc2,// 129 PAY  88 

    0x5ca2e47d,// 130 PAY  89 

    0x424b7934,// 131 PAY  90 

    0x00fc0bcc,// 132 PAY  91 

    0x04156dc1,// 133 PAY  92 

    0x8c418b54,// 134 PAY  93 

    0x5920c313,// 135 PAY  94 

    0xa1215b8b,// 136 PAY  95 

    0x9891b32e,// 137 PAY  96 

    0x3df7e6e3,// 138 PAY  97 

    0x38b24bbf,// 139 PAY  98 

    0x7b34b7cd,// 140 PAY  99 

    0x4554ca7f,// 141 PAY 100 

    0xf95f2c4d,// 142 PAY 101 

    0x26a0e5b1,// 143 PAY 102 

    0xd2c209ae,// 144 PAY 103 

    0x25aba2bb,// 145 PAY 104 

    0xe33ed059,// 146 PAY 105 

    0x0799360b,// 147 PAY 106 

    0x76dd9f8b,// 148 PAY 107 

    0x9f2cb1a3,// 149 PAY 108 

    0x0779723f,// 150 PAY 109 

    0xeafd1544,// 151 PAY 110 

    0x019b0680,// 152 PAY 111 

    0x21da4f94,// 153 PAY 112 

    0xd23a81dd,// 154 PAY 113 

    0x6497d156,// 155 PAY 114 

    0x35920f02,// 156 PAY 115 

    0x0f656bc4,// 157 PAY 116 

    0x944513dc,// 158 PAY 117 

    0x1eeec95c,// 159 PAY 118 

    0x5f580ad6,// 160 PAY 119 

    0x3dd516c7,// 161 PAY 120 

    0x9ea4cfa6,// 162 PAY 121 

    0x0d920079,// 163 PAY 122 

    0xbf948f18,// 164 PAY 123 

    0xdf9ae678,// 165 PAY 124 

    0x113e7003,// 166 PAY 125 

    0x97e4bdb4,// 167 PAY 126 

    0x514c1f6f,// 168 PAY 127 

    0xdc83c284,// 169 PAY 128 

    0x09432b8d,// 170 PAY 129 

    0xc2a6f1dd,// 171 PAY 130 

    0xc51cd55d,// 172 PAY 131 

    0xd2b67a69,// 173 PAY 132 

    0xa1c4c9ba,// 174 PAY 133 

    0x6dad09ca,// 175 PAY 134 

    0x49a9d458,// 176 PAY 135 

    0x39a372d3,// 177 PAY 136 

    0xd7494d27,// 178 PAY 137 

    0xdad36472,// 179 PAY 138 

    0x302d284c,// 180 PAY 139 

    0xf2da9777,// 181 PAY 140 

    0x6f6e9e05,// 182 PAY 141 

    0x2d6eccff,// 183 PAY 142 

    0xdc6de885,// 184 PAY 143 

    0xeb803de1,// 185 PAY 144 

    0x1af9d1f1,// 186 PAY 145 

    0x99f3d909,// 187 PAY 146 

    0xc2ae26ae,// 188 PAY 147 

    0x4a8fcc71,// 189 PAY 148 

    0x00127472,// 190 PAY 149 

    0x16510414,// 191 PAY 150 

    0x59c5a51d,// 192 PAY 151 

    0xb6d79416,// 193 PAY 152 

    0x50078ef5,// 194 PAY 153 

    0x209620cd,// 195 PAY 154 

    0x78eb16a9,// 196 PAY 155 

    0xd6b39350,// 197 PAY 156 

    0x8eb2087c,// 198 PAY 157 

    0x6dd9a738,// 199 PAY 158 

    0xfcfd75b8,// 200 PAY 159 

    0x160b1160,// 201 PAY 160 

    0x117741aa,// 202 PAY 161 

    0x762f3b81,// 203 PAY 162 

    0xcf84da81,// 204 PAY 163 

    0x56465e70,// 205 PAY 164 

    0xb9006545,// 206 PAY 165 

    0x2e8be3e5,// 207 PAY 166 

    0x911e4c43,// 208 PAY 167 

    0x5d0e3410,// 209 PAY 168 

    0xb827cce9,// 210 PAY 169 

    0xe08a1819,// 211 PAY 170 

    0xe704bc7e,// 212 PAY 171 

    0xef1514d0,// 213 PAY 172 

    0x3f57dedc,// 214 PAY 173 

    0x8e88cd40,// 215 PAY 174 

    0x7a81521b,// 216 PAY 175 

    0x67eb85c4,// 217 PAY 176 

    0x5469cc42,// 218 PAY 177 

    0x1808cc73,// 219 PAY 178 

    0x74d65acc,// 220 PAY 179 

    0x68f8eb10,// 221 PAY 180 

    0xf03d719f,// 222 PAY 181 

    0xb29c0174,// 223 PAY 182 

    0x05bafd42,// 224 PAY 183 

    0xd25940ec,// 225 PAY 184 

    0x4e45e76f,// 226 PAY 185 

    0xcdbbfd9e,// 227 PAY 186 

    0x1fb6a492,// 228 PAY 187 

    0x9db6b2c3,// 229 PAY 188 

    0xbcbac289,// 230 PAY 189 

    0xe2b5f385,// 231 PAY 190 

    0x7dd383fd,// 232 PAY 191 

    0x96dbf7f2,// 233 PAY 192 

    0x0fccb543,// 234 PAY 193 

    0xec60a76c,// 235 PAY 194 

    0xec585631,// 236 PAY 195 

    0xdd03b3cc,// 237 PAY 196 

    0xc2aadb2c,// 238 PAY 197 

    0xa997b1da,// 239 PAY 198 

    0xe9d067b7,// 240 PAY 199 

    0xa0354862,// 241 PAY 200 

    0x94751e9e,// 242 PAY 201 

    0x13e84eac,// 243 PAY 202 

    0x0701c518,// 244 PAY 203 

    0x532a40a3,// 245 PAY 204 

    0x49267b08,// 246 PAY 205 

    0x642ac18e,// 247 PAY 206 

    0xfa41d2d4,// 248 PAY 207 

    0xcea50a14,// 249 PAY 208 

    0x3e1d9240,// 250 PAY 209 

    0xa3cf863a,// 251 PAY 210 

    0x804d7dc2,// 252 PAY 211 

    0x0a7879dd,// 253 PAY 212 

    0x2a8487ab,// 254 PAY 213 

    0xdbcbea33,// 255 PAY 214 

    0x20dc1d2c,// 256 PAY 215 

    0xd202d74f,// 257 PAY 216 

    0x022ecd29,// 258 PAY 217 

    0x06a22fbb,// 259 PAY 218 

    0x03b3f0b6,// 260 PAY 219 

    0x5c3262b0,// 261 PAY 220 

    0x49d5e4e8,// 262 PAY 221 

    0xd52e5f2a,// 263 PAY 222 

    0xa9d45a46,// 264 PAY 223 

    0xf924ecb6,// 265 PAY 224 

    0x9bb809be,// 266 PAY 225 

    0x756ad416,// 267 PAY 226 

    0xf33fa5fc,// 268 PAY 227 

    0x647f437d,// 269 PAY 228 

    0x6db0e3eb,// 270 PAY 229 

    0x0f01304d,// 271 PAY 230 

    0xa1852cbf,// 272 PAY 231 

    0xc9d6cf60,// 273 PAY 232 

    0x7f496a85,// 274 PAY 233 

    0xb4395ce0,// 275 PAY 234 

    0x936c5057,// 276 PAY 235 

    0xf3473fe0,// 277 PAY 236 

    0x19ceb2fd,// 278 PAY 237 

    0x89c23600,// 279 PAY 238 

    0xff0f105c,// 280 PAY 239 

    0xbc995889,// 281 PAY 240 

    0xf6714043,// 282 PAY 241 

    0x3c61c8c9,// 283 PAY 242 

    0x571530e6,// 284 PAY 243 

    0xc8a59859,// 285 PAY 244 

    0xa77d24f4,// 286 PAY 245 

    0x4c2700cd,// 287 PAY 246 

    0xfcdbc19c,// 288 PAY 247 

    0x11997ea2,// 289 PAY 248 

    0xaaf1a65f,// 290 PAY 249 

    0xc7e90057,// 291 PAY 250 

    0xa39e1fe6,// 292 PAY 251 

    0x29870d63,// 293 PAY 252 

    0xf335593e,// 294 PAY 253 

    0xff6dc319,// 295 PAY 254 

    0x84b4a7a1,// 296 PAY 255 

    0xae0ac7f9,// 297 PAY 256 

    0xc77b9eaf,// 298 PAY 257 

    0x1e7819e6,// 299 PAY 258 

    0xf5b17f2a,// 300 PAY 259 

    0x01a165bf,// 301 PAY 260 

    0xfc4823e4,// 302 PAY 261 

    0x23c42f63,// 303 PAY 262 

    0x7951d964,// 304 PAY 263 

    0xedfa52d5,// 305 PAY 264 

    0x34260000,// 306 PAY 265 

/// STA is 1 words. 

/// STA num_pkts       : 215 

/// STA pkt_idx        : 91 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc4 

    0x016cc4d7 // 307 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt56_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80612840,// 4 SCX   2 

    0x00005400,// 5 SCX   3 

    0x5f95b0cd,// 6 SCX   4 

    0x468a7d8e,// 7 SCX   5 

    0x3ee071c8,// 8 SCX   6 

    0x349f7858,// 9 SCX   7 

    0x2e62a432,// 10 SCX   8 

    0xb27bc68d,// 11 SCX   9 

    0x8e580fde,// 12 SCX  10 

    0xd07d6fd6,// 13 SCX  11 

    0x08a7fc00,// 14 SCX  12 

    0xfb8c7af5,// 15 SCX  13 

    0x044ec348,// 16 SCX  14 

    0xc5556a7f,// 17 SCX  15 

    0x3c43ff57,// 18 SCX  16 

    0x1b5f2c44,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 942 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 815 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 815 

/// BFD lencrypto      : 392 

/// BFD ofstcrypto     : 336 

/// BFD (ofst+len)cry  : 728 

/// BFD ofstiv         : 320 

/// BFD ofsticv        : 840 

    0x0000032f,// 20 BFD   1 

    0x01500188,// 21 BFD   2 

    0x03480140,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c002c07,// 23 MFM   1 

    0xcd8ac9ea,// 24 MFM   2 

    0x070e8a36,// 25 MFM   3 

    0x2a82007b,// 26 MFM   4 

    0xdfccfb4e,// 27 MFM   5 

    0x83127503,// 28 MFM   6 

    0xe3790212,// 29 MFM   7 

    0x9109e815,// 30 MFM   8 

    0x3318e2a0,// 31 MFM   9 

    0x8634ee3d,// 32 MFM  10 

    0x3dfeac5a,// 33 MFM  11 

    0x758d333b,// 34 MFM  12 

    0xc3ec4100,// 35 MFM  13 

    0x63717ab3,// 36 MFM  14 

    0x1aeef1f9,// 37 MFM  15 

    0xc0dd9d33,// 38 MFM  16 

/// BDA is 237 words. 

/// BDA size     is 942 (0x3ae) 

/// BDA id       is 0x1b7b 

    0x03ae1b7b,// 39 BDA   1 

/// PAY Generic Data size   : 942 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xc795f10c,// 40 PAY   1 

    0x051a4197,// 41 PAY   2 

    0xdfea2f35,// 42 PAY   3 

    0x12c3a629,// 43 PAY   4 

    0x886a29ac,// 44 PAY   5 

    0x4124472c,// 45 PAY   6 

    0xb57582ab,// 46 PAY   7 

    0x8f6c6700,// 47 PAY   8 

    0x8d77351e,// 48 PAY   9 

    0xd91d2401,// 49 PAY  10 

    0x8caa96ad,// 50 PAY  11 

    0xa729da22,// 51 PAY  12 

    0x121223a3,// 52 PAY  13 

    0xf21f1a29,// 53 PAY  14 

    0x08943e93,// 54 PAY  15 

    0xffef8323,// 55 PAY  16 

    0x54d5c59a,// 56 PAY  17 

    0xab9863e8,// 57 PAY  18 

    0xf5346aaa,// 58 PAY  19 

    0xc5d7f2f9,// 59 PAY  20 

    0x14588d96,// 60 PAY  21 

    0xe7cd651c,// 61 PAY  22 

    0x62ab6d51,// 62 PAY  23 

    0x2444cce5,// 63 PAY  24 

    0x979c849d,// 64 PAY  25 

    0xa775b95d,// 65 PAY  26 

    0x55ebec01,// 66 PAY  27 

    0x79c964b7,// 67 PAY  28 

    0xc8748589,// 68 PAY  29 

    0x70a01c25,// 69 PAY  30 

    0xbee2341d,// 70 PAY  31 

    0x37819548,// 71 PAY  32 

    0xc4d8c738,// 72 PAY  33 

    0xc4f0270a,// 73 PAY  34 

    0x4077a65c,// 74 PAY  35 

    0x81c49666,// 75 PAY  36 

    0x6b177c6e,// 76 PAY  37 

    0x0b3639f8,// 77 PAY  38 

    0x37a4b143,// 78 PAY  39 

    0x9c5ad977,// 79 PAY  40 

    0x57c4318b,// 80 PAY  41 

    0x920b5aba,// 81 PAY  42 

    0xd8886258,// 82 PAY  43 

    0xdd9d7753,// 83 PAY  44 

    0xa323a810,// 84 PAY  45 

    0x00131494,// 85 PAY  46 

    0x3b07fcf9,// 86 PAY  47 

    0x4c16a3ba,// 87 PAY  48 

    0x9af9414b,// 88 PAY  49 

    0x01e8b89c,// 89 PAY  50 

    0x33809159,// 90 PAY  51 

    0x27c0765c,// 91 PAY  52 

    0xbb9235bb,// 92 PAY  53 

    0x8027230c,// 93 PAY  54 

    0xed202f82,// 94 PAY  55 

    0x9af49745,// 95 PAY  56 

    0x0a547460,// 96 PAY  57 

    0xef1607b4,// 97 PAY  58 

    0x08b3c281,// 98 PAY  59 

    0x2255244e,// 99 PAY  60 

    0x192c327d,// 100 PAY  61 

    0x3910f8a1,// 101 PAY  62 

    0x46d7fcc0,// 102 PAY  63 

    0xe5c4fb88,// 103 PAY  64 

    0x670b3600,// 104 PAY  65 

    0x5265df9f,// 105 PAY  66 

    0x9e915a4a,// 106 PAY  67 

    0xb589a55d,// 107 PAY  68 

    0x340d15a4,// 108 PAY  69 

    0x7640e7ca,// 109 PAY  70 

    0x6b1e282e,// 110 PAY  71 

    0xeb226398,// 111 PAY  72 

    0x4a88ea3d,// 112 PAY  73 

    0xee0b78f3,// 113 PAY  74 

    0x0a102052,// 114 PAY  75 

    0xfe35d828,// 115 PAY  76 

    0xfa142d8c,// 116 PAY  77 

    0x76293948,// 117 PAY  78 

    0x0446e56b,// 118 PAY  79 

    0x3cfbca72,// 119 PAY  80 

    0xf7d1d709,// 120 PAY  81 

    0x6e1013c1,// 121 PAY  82 

    0x055aec7a,// 122 PAY  83 

    0x285a836d,// 123 PAY  84 

    0x86da057a,// 124 PAY  85 

    0x35c69ab3,// 125 PAY  86 

    0xaf07a9fd,// 126 PAY  87 

    0x002581ab,// 127 PAY  88 

    0xbe0b4f1a,// 128 PAY  89 

    0xd4a74bc9,// 129 PAY  90 

    0xe6788a5a,// 130 PAY  91 

    0x7d917014,// 131 PAY  92 

    0xbfb883bc,// 132 PAY  93 

    0x138c404d,// 133 PAY  94 

    0x30213855,// 134 PAY  95 

    0x0b42b4f3,// 135 PAY  96 

    0xc2fe864f,// 136 PAY  97 

    0x8a9f4abe,// 137 PAY  98 

    0xd2b79042,// 138 PAY  99 

    0x7f02d338,// 139 PAY 100 

    0x2e814cd9,// 140 PAY 101 

    0x9892250b,// 141 PAY 102 

    0x7ab07fc2,// 142 PAY 103 

    0x44c0cdab,// 143 PAY 104 

    0x21fa26b5,// 144 PAY 105 

    0x34bfe754,// 145 PAY 106 

    0xfd484a4a,// 146 PAY 107 

    0x1d58182b,// 147 PAY 108 

    0x7be8cb1a,// 148 PAY 109 

    0x53605e09,// 149 PAY 110 

    0x16dc12ea,// 150 PAY 111 

    0xe16c28ef,// 151 PAY 112 

    0x550060b3,// 152 PAY 113 

    0xd6934199,// 153 PAY 114 

    0x3e75a25e,// 154 PAY 115 

    0x7752a195,// 155 PAY 116 

    0x06ddbc46,// 156 PAY 117 

    0x85ef5659,// 157 PAY 118 

    0x13eb9023,// 158 PAY 119 

    0x2b5b5d76,// 159 PAY 120 

    0x61b14ced,// 160 PAY 121 

    0xf7c79c34,// 161 PAY 122 

    0xd05caeb4,// 162 PAY 123 

    0xd5027b4e,// 163 PAY 124 

    0xfc867219,// 164 PAY 125 

    0x1525be5c,// 165 PAY 126 

    0xc47f1371,// 166 PAY 127 

    0x6d9b071d,// 167 PAY 128 

    0x41a749e9,// 168 PAY 129 

    0xf4810d48,// 169 PAY 130 

    0x2a38ff50,// 170 PAY 131 

    0x54df3c67,// 171 PAY 132 

    0xbc6cf2ff,// 172 PAY 133 

    0xd87ba925,// 173 PAY 134 

    0x689e32d2,// 174 PAY 135 

    0xa55b9686,// 175 PAY 136 

    0x538b16a7,// 176 PAY 137 

    0x58a9af6a,// 177 PAY 138 

    0x2150814b,// 178 PAY 139 

    0xd3e6b920,// 179 PAY 140 

    0x0625dd98,// 180 PAY 141 

    0x59dad09f,// 181 PAY 142 

    0x5b0f1b5c,// 182 PAY 143 

    0x3ca1d91b,// 183 PAY 144 

    0x3282fbd7,// 184 PAY 145 

    0x1027fb62,// 185 PAY 146 

    0xc4754c62,// 186 PAY 147 

    0xec57d275,// 187 PAY 148 

    0x92f2049e,// 188 PAY 149 

    0x22eb18cf,// 189 PAY 150 

    0xc26846bd,// 190 PAY 151 

    0xdb42bed7,// 191 PAY 152 

    0xec2c2f58,// 192 PAY 153 

    0x830f1de0,// 193 PAY 154 

    0x7d23ffe7,// 194 PAY 155 

    0x762866a3,// 195 PAY 156 

    0xbf6d5eb5,// 196 PAY 157 

    0x94d906b8,// 197 PAY 158 

    0xbcb99584,// 198 PAY 159 

    0xc1a914b8,// 199 PAY 160 

    0x960668d0,// 200 PAY 161 

    0xe829d357,// 201 PAY 162 

    0xe671acbd,// 202 PAY 163 

    0x1f6c8769,// 203 PAY 164 

    0xb1fb904a,// 204 PAY 165 

    0xca8dd7db,// 205 PAY 166 

    0x8ccafe85,// 206 PAY 167 

    0x8b55c13b,// 207 PAY 168 

    0x527ec25d,// 208 PAY 169 

    0x19f8bcc0,// 209 PAY 170 

    0x5d1a39a6,// 210 PAY 171 

    0x91c7cfe3,// 211 PAY 172 

    0x5417553c,// 212 PAY 173 

    0xea8be949,// 213 PAY 174 

    0xf1890a7c,// 214 PAY 175 

    0x0b221317,// 215 PAY 176 

    0xfe0d907a,// 216 PAY 177 

    0x4634e159,// 217 PAY 178 

    0x3c1bbf55,// 218 PAY 179 

    0xe2285d0d,// 219 PAY 180 

    0x7e47cf00,// 220 PAY 181 

    0xb92c08d4,// 221 PAY 182 

    0x4c1f5675,// 222 PAY 183 

    0x9c4f2f30,// 223 PAY 184 

    0x73fcdbea,// 224 PAY 185 

    0x45b9521a,// 225 PAY 186 

    0x34568bc9,// 226 PAY 187 

    0x7307170d,// 227 PAY 188 

    0x012b4187,// 228 PAY 189 

    0x799df8c4,// 229 PAY 190 

    0xf3746386,// 230 PAY 191 

    0x60e2390c,// 231 PAY 192 

    0xa0331e46,// 232 PAY 193 

    0x76e5c012,// 233 PAY 194 

    0x491c9ae5,// 234 PAY 195 

    0x11024312,// 235 PAY 196 

    0x4e372fab,// 236 PAY 197 

    0x29516361,// 237 PAY 198 

    0x47a69a0b,// 238 PAY 199 

    0xb2d8028d,// 239 PAY 200 

    0x9d3de030,// 240 PAY 201 

    0x04e44eff,// 241 PAY 202 

    0x9152dea5,// 242 PAY 203 

    0xf6a058c0,// 243 PAY 204 

    0x52db85f7,// 244 PAY 205 

    0x373091e7,// 245 PAY 206 

    0x0aee35e9,// 246 PAY 207 

    0xb6799ba3,// 247 PAY 208 

    0x75b24e31,// 248 PAY 209 

    0xf6ea66df,// 249 PAY 210 

    0x2bf568e2,// 250 PAY 211 

    0xd39e50b7,// 251 PAY 212 

    0xb0dbf8e9,// 252 PAY 213 

    0x07c10b44,// 253 PAY 214 

    0x5be5559f,// 254 PAY 215 

    0x0e14093c,// 255 PAY 216 

    0x5cb78e91,// 256 PAY 217 

    0x9e704065,// 257 PAY 218 

    0xa5e1664e,// 258 PAY 219 

    0xc02a18f6,// 259 PAY 220 

    0x7fed4f46,// 260 PAY 221 

    0x0d7c5cfb,// 261 PAY 222 

    0xbdd07cbe,// 262 PAY 223 

    0x76bc0149,// 263 PAY 224 

    0x9c4c8f69,// 264 PAY 225 

    0xf1846b01,// 265 PAY 226 

    0xa86564d3,// 266 PAY 227 

    0x3972a3a5,// 267 PAY 228 

    0x41ca9f83,// 268 PAY 229 

    0x16ed7811,// 269 PAY 230 

    0x5a31bc7e,// 270 PAY 231 

    0xb81b3e14,// 271 PAY 232 

    0x72f521e1,// 272 PAY 233 

    0x548d183a,// 273 PAY 234 

    0x2f60916a,// 274 PAY 235 

    0x25580000,// 275 PAY 236 

/// STA is 1 words. 

/// STA num_pkts       : 160 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf7 

    0x02d1f7a0 // 276 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt57_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80602821,// 4 SCX   2 

    0x00002300,// 5 SCX   3 

    0x77167012,// 6 SCX   4 

    0xa16fbf75,// 7 SCX   5 

    0xbdd5bdb5,// 8 SCX   6 

    0x1a297495,// 9 SCX   7 

    0x5ab5cd7b,// 10 SCX   8 

    0x66164a6c,// 11 SCX   9 

    0xc4a57e33,// 12 SCX  10 

    0x8e2bea1d,// 13 SCX  11 

    0xdd245d04,// 14 SCX  12 

    0x11fdf91c,// 15 SCX  13 

    0x5d6177eb,// 16 SCX  14 

    0xf269d2d2,// 17 SCX  15 

    0x6570f557,// 18 SCX  16 

    0x497a9c9d,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1985 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 966 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 966 

/// BFD lencrypto      : 496 

/// BFD ofstcrypto     : 96 

/// BFD (ofst+len)cry  : 592 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 1228 

    0x000003c6,// 20 BFD   1 

    0x006001f0,// 21 BFD   2 

    0x04cc000c,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c0081b0,// 23 MFM   1 

    0x49f2c0e1,// 24 MFM   2 

    0x9f01a281,// 25 MFM   3 

    0x07b22718,// 26 MFM   4 

    0x1c1a0028,// 27 MFM   5 

    0x818a7dd5,// 28 MFM   6 

    0x37d704f6,// 29 MFM   7 

    0x7b549c81,// 30 MFM   8 

    0xa32ac037,// 31 MFM   9 

    0xce8a020a,// 32 MFM  10 

    0x4776d0d5,// 33 MFM  11 

    0x377a3f06,// 34 MFM  12 

    0xb8d68afc,// 35 MFM  13 

    0x5399e7d8,// 36 MFM  14 

    0x4fcd002f,// 37 MFM  15 

    0x5dfb99be,// 38 MFM  16 

/// BDA is 498 words. 

/// BDA size     is 1985 (0x7c1) 

/// BDA id       is 0xf427 

    0x07c1f427,// 39 BDA   1 

/// PAY Generic Data size   : 1985 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x73c6a354,// 40 PAY   1 

    0xc18225b9,// 41 PAY   2 

    0xdf2a927a,// 42 PAY   3 

    0xc74b093c,// 43 PAY   4 

    0x8a9530e1,// 44 PAY   5 

    0xa09a2c5b,// 45 PAY   6 

    0x487b41f8,// 46 PAY   7 

    0x6f40440d,// 47 PAY   8 

    0x9f5b1d6b,// 48 PAY   9 

    0xaa449443,// 49 PAY  10 

    0x395dd5a6,// 50 PAY  11 

    0xa0068b1d,// 51 PAY  12 

    0xd47d66be,// 52 PAY  13 

    0x5e5c26fc,// 53 PAY  14 

    0xd8828b31,// 54 PAY  15 

    0x7986bf9a,// 55 PAY  16 

    0x0c5b2422,// 56 PAY  17 

    0x6e197ea6,// 57 PAY  18 

    0x6bbeb78f,// 58 PAY  19 

    0x01ece4c5,// 59 PAY  20 

    0x97c7e0c6,// 60 PAY  21 

    0x7425aecb,// 61 PAY  22 

    0x40d1c701,// 62 PAY  23 

    0xa0aaad8a,// 63 PAY  24 

    0x0d330add,// 64 PAY  25 

    0xe4b633b6,// 65 PAY  26 

    0xaea37f3d,// 66 PAY  27 

    0xe1803c21,// 67 PAY  28 

    0xcee2a52f,// 68 PAY  29 

    0xd6809dd2,// 69 PAY  30 

    0x38f57a23,// 70 PAY  31 

    0x2c0d4e6f,// 71 PAY  32 

    0xb00b1037,// 72 PAY  33 

    0x44d2f555,// 73 PAY  34 

    0xa0ad8919,// 74 PAY  35 

    0xf4e78e46,// 75 PAY  36 

    0x69367d4e,// 76 PAY  37 

    0xf2b2e3c7,// 77 PAY  38 

    0xaeeb7cb8,// 78 PAY  39 

    0x631f9618,// 79 PAY  40 

    0xc265d222,// 80 PAY  41 

    0x89242df6,// 81 PAY  42 

    0x89ba9361,// 82 PAY  43 

    0x0ba81442,// 83 PAY  44 

    0x064ade17,// 84 PAY  45 

    0xb11c974f,// 85 PAY  46 

    0x0c6eb3a9,// 86 PAY  47 

    0xa2486839,// 87 PAY  48 

    0xc2c3d318,// 88 PAY  49 

    0x2595f324,// 89 PAY  50 

    0xa91b8610,// 90 PAY  51 

    0xb44d8eb9,// 91 PAY  52 

    0xb6032008,// 92 PAY  53 

    0xee689ccb,// 93 PAY  54 

    0xdaf404b7,// 94 PAY  55 

    0x22ac8f71,// 95 PAY  56 

    0xe71ff5b5,// 96 PAY  57 

    0x02b6384d,// 97 PAY  58 

    0xdac9e750,// 98 PAY  59 

    0x05ba2ba7,// 99 PAY  60 

    0x3dc4d856,// 100 PAY  61 

    0x7cc4179b,// 101 PAY  62 

    0x3ea8bdc3,// 102 PAY  63 

    0xbca183ba,// 103 PAY  64 

    0xba4f1db2,// 104 PAY  65 

    0xa6d2a96f,// 105 PAY  66 

    0xc467fd19,// 106 PAY  67 

    0xf2c80995,// 107 PAY  68 

    0x7a82a4a5,// 108 PAY  69 

    0x4a78df1d,// 109 PAY  70 

    0x335dd5af,// 110 PAY  71 

    0x1f4e3a9a,// 111 PAY  72 

    0xa2ce8289,// 112 PAY  73 

    0xe6cab53c,// 113 PAY  74 

    0x3185780c,// 114 PAY  75 

    0x08a94cba,// 115 PAY  76 

    0xca9b3648,// 116 PAY  77 

    0xd38b54d2,// 117 PAY  78 

    0x6bae37b0,// 118 PAY  79 

    0x80c2b6aa,// 119 PAY  80 

    0xebb1c46a,// 120 PAY  81 

    0xc27953ed,// 121 PAY  82 

    0x05166435,// 122 PAY  83 

    0xff324013,// 123 PAY  84 

    0xc6e50382,// 124 PAY  85 

    0x52246a84,// 125 PAY  86 

    0x6329b1d7,// 126 PAY  87 

    0x2e3c0793,// 127 PAY  88 

    0x7048e752,// 128 PAY  89 

    0xb68c3310,// 129 PAY  90 

    0x2b8fe319,// 130 PAY  91 

    0x21cf0d10,// 131 PAY  92 

    0x1ed7c92b,// 132 PAY  93 

    0x376236f6,// 133 PAY  94 

    0x971f7fed,// 134 PAY  95 

    0x7965f0af,// 135 PAY  96 

    0xdd48c6ae,// 136 PAY  97 

    0x517541df,// 137 PAY  98 

    0x488aff49,// 138 PAY  99 

    0xfd2f146a,// 139 PAY 100 

    0x17c55c82,// 140 PAY 101 

    0xd1b8b738,// 141 PAY 102 

    0x515487b7,// 142 PAY 103 

    0xc8bf6e12,// 143 PAY 104 

    0x94d9aa9f,// 144 PAY 105 

    0x117b1430,// 145 PAY 106 

    0x5d1390d3,// 146 PAY 107 

    0x2272f843,// 147 PAY 108 

    0x38ca7d11,// 148 PAY 109 

    0x5a490c1d,// 149 PAY 110 

    0x2597a16c,// 150 PAY 111 

    0x5dafd1b7,// 151 PAY 112 

    0x02c39255,// 152 PAY 113 

    0xc45e6761,// 153 PAY 114 

    0xd041d6b0,// 154 PAY 115 

    0x9e8e444d,// 155 PAY 116 

    0xd3c1905a,// 156 PAY 117 

    0xd13fe946,// 157 PAY 118 

    0xc9a2ea4d,// 158 PAY 119 

    0xf02abe8f,// 159 PAY 120 

    0xbdbde7d3,// 160 PAY 121 

    0xd04969d5,// 161 PAY 122 

    0x44e970c0,// 162 PAY 123 

    0xf52b8a8d,// 163 PAY 124 

    0xb2c61dbb,// 164 PAY 125 

    0x5b696a41,// 165 PAY 126 

    0x372a442b,// 166 PAY 127 

    0x6832355f,// 167 PAY 128 

    0x16f315f5,// 168 PAY 129 

    0xaecb047c,// 169 PAY 130 

    0xe72d36b9,// 170 PAY 131 

    0xb5a0d0d0,// 171 PAY 132 

    0x757a87e9,// 172 PAY 133 

    0x721eff2a,// 173 PAY 134 

    0x5c831530,// 174 PAY 135 

    0x41e072af,// 175 PAY 136 

    0x896fd974,// 176 PAY 137 

    0xb78a734e,// 177 PAY 138 

    0xcef31dbf,// 178 PAY 139 

    0xcf0c5322,// 179 PAY 140 

    0x09f31dc6,// 180 PAY 141 

    0xb35ff059,// 181 PAY 142 

    0x20b98970,// 182 PAY 143 

    0xae55dd8c,// 183 PAY 144 

    0x8b3f5f02,// 184 PAY 145 

    0x3b8f1c5d,// 185 PAY 146 

    0x4ad0c260,// 186 PAY 147 

    0xd42785a9,// 187 PAY 148 

    0x6c50ddc7,// 188 PAY 149 

    0xefe64af2,// 189 PAY 150 

    0x322d677a,// 190 PAY 151 

    0x82ba589e,// 191 PAY 152 

    0xedefb73a,// 192 PAY 153 

    0xbb3b7bb9,// 193 PAY 154 

    0x5ffa8ab1,// 194 PAY 155 

    0xbd4b5bd2,// 195 PAY 156 

    0x5eefaf38,// 196 PAY 157 

    0x4d149d94,// 197 PAY 158 

    0x43dfb6a7,// 198 PAY 159 

    0xb11124dc,// 199 PAY 160 

    0xf8c9994a,// 200 PAY 161 

    0xd3fe4fdc,// 201 PAY 162 

    0xef7e39e7,// 202 PAY 163 

    0xb392f9a5,// 203 PAY 164 

    0x09cfd647,// 204 PAY 165 

    0xf1ff6796,// 205 PAY 166 

    0xbd2c0853,// 206 PAY 167 

    0xcdd406ac,// 207 PAY 168 

    0xf5e33965,// 208 PAY 169 

    0x050bc0cc,// 209 PAY 170 

    0xb065fc5a,// 210 PAY 171 

    0x6715dcb9,// 211 PAY 172 

    0xbd853a3a,// 212 PAY 173 

    0x355a6b73,// 213 PAY 174 

    0xaac9d4a2,// 214 PAY 175 

    0x0c86e351,// 215 PAY 176 

    0xc63c7689,// 216 PAY 177 

    0xacffcc2a,// 217 PAY 178 

    0xb1c20146,// 218 PAY 179 

    0xbf3dc3b3,// 219 PAY 180 

    0x438797a4,// 220 PAY 181 

    0x254edeed,// 221 PAY 182 

    0x97f4c20c,// 222 PAY 183 

    0x9f43a171,// 223 PAY 184 

    0x54d2912f,// 224 PAY 185 

    0xe102ac97,// 225 PAY 186 

    0xd1a22705,// 226 PAY 187 

    0x11cb6f63,// 227 PAY 188 

    0xa0d0ebc8,// 228 PAY 189 

    0xac04dd2e,// 229 PAY 190 

    0xe351c069,// 230 PAY 191 

    0xed2da9b9,// 231 PAY 192 

    0x803e068f,// 232 PAY 193 

    0xb93d7ff5,// 233 PAY 194 

    0x8a9f4d5c,// 234 PAY 195 

    0xa9110ca2,// 235 PAY 196 

    0x08cb634b,// 236 PAY 197 

    0xea88cf0d,// 237 PAY 198 

    0xfdc6d712,// 238 PAY 199 

    0xc82576d0,// 239 PAY 200 

    0xddaa9ab5,// 240 PAY 201 

    0x5f02dffe,// 241 PAY 202 

    0xbf99c28d,// 242 PAY 203 

    0x730ee436,// 243 PAY 204 

    0x979c65e1,// 244 PAY 205 

    0xc1126577,// 245 PAY 206 

    0x2785122c,// 246 PAY 207 

    0x6d8c5d79,// 247 PAY 208 

    0x3523733a,// 248 PAY 209 

    0x1b4dd617,// 249 PAY 210 

    0x6b84e86b,// 250 PAY 211 

    0x0335fad1,// 251 PAY 212 

    0x4dde3677,// 252 PAY 213 

    0x7a3f6277,// 253 PAY 214 

    0x49762f6d,// 254 PAY 215 

    0x3b34acbd,// 255 PAY 216 

    0x237d01d6,// 256 PAY 217 

    0xb76675e1,// 257 PAY 218 

    0xba9e0023,// 258 PAY 219 

    0x925064b2,// 259 PAY 220 

    0xdb7132ab,// 260 PAY 221 

    0x41647a50,// 261 PAY 222 

    0xd7aaaa4c,// 262 PAY 223 

    0x4289161e,// 263 PAY 224 

    0xfa2eda2e,// 264 PAY 225 

    0x8dbdf82f,// 265 PAY 226 

    0x215715bd,// 266 PAY 227 

    0xa06aa3b5,// 267 PAY 228 

    0x35c3752a,// 268 PAY 229 

    0x4ce14538,// 269 PAY 230 

    0xa5d8dd4e,// 270 PAY 231 

    0x1f7385c8,// 271 PAY 232 

    0x2fd0faa8,// 272 PAY 233 

    0x65d045dd,// 273 PAY 234 

    0xf5a65f3c,// 274 PAY 235 

    0xbe262d47,// 275 PAY 236 

    0xd674e6b1,// 276 PAY 237 

    0x6b3d8be3,// 277 PAY 238 

    0x3066788f,// 278 PAY 239 

    0x4636a808,// 279 PAY 240 

    0x51b840c7,// 280 PAY 241 

    0xd263dc2d,// 281 PAY 242 

    0xb7297652,// 282 PAY 243 

    0x69f198b6,// 283 PAY 244 

    0xe39aeccd,// 284 PAY 245 

    0xd1de5176,// 285 PAY 246 

    0x0d362221,// 286 PAY 247 

    0x0e8adf8c,// 287 PAY 248 

    0x24a92f28,// 288 PAY 249 

    0xd4fa1b6c,// 289 PAY 250 

    0xb558c848,// 290 PAY 251 

    0xf11cb0fb,// 291 PAY 252 

    0xef19715a,// 292 PAY 253 

    0xd0df19ba,// 293 PAY 254 

    0x9e99435b,// 294 PAY 255 

    0xa109c406,// 295 PAY 256 

    0xe7bf8d60,// 296 PAY 257 

    0x6ceafb30,// 297 PAY 258 

    0x74dac0e1,// 298 PAY 259 

    0xaaf2668a,// 299 PAY 260 

    0x9cd25f42,// 300 PAY 261 

    0x98124d7a,// 301 PAY 262 

    0x6f1e1c98,// 302 PAY 263 

    0xf45a2cce,// 303 PAY 264 

    0x5fd3b319,// 304 PAY 265 

    0xf5b8c5a1,// 305 PAY 266 

    0xaeff5096,// 306 PAY 267 

    0x90b9de17,// 307 PAY 268 

    0x99833920,// 308 PAY 269 

    0x680ba894,// 309 PAY 270 

    0x5cce47aa,// 310 PAY 271 

    0x8fb93669,// 311 PAY 272 

    0x1774fc93,// 312 PAY 273 

    0xd479a4db,// 313 PAY 274 

    0xc0774e39,// 314 PAY 275 

    0x5a017d87,// 315 PAY 276 

    0x34bed756,// 316 PAY 277 

    0x441aaa54,// 317 PAY 278 

    0xac1e24cb,// 318 PAY 279 

    0x5e4df1c6,// 319 PAY 280 

    0x8c10a119,// 320 PAY 281 

    0x8d72f006,// 321 PAY 282 

    0xa015aa3d,// 322 PAY 283 

    0xd3d0bd59,// 323 PAY 284 

    0x79f46d30,// 324 PAY 285 

    0x416269e2,// 325 PAY 286 

    0x83e094f5,// 326 PAY 287 

    0x7c48277a,// 327 PAY 288 

    0x8a19ee55,// 328 PAY 289 

    0x81538fcb,// 329 PAY 290 

    0xb7d28809,// 330 PAY 291 

    0x9a366d47,// 331 PAY 292 

    0x157acb15,// 332 PAY 293 

    0xcd715ae9,// 333 PAY 294 

    0x3a45ea01,// 334 PAY 295 

    0x2dfdbf16,// 335 PAY 296 

    0x031d0e3b,// 336 PAY 297 

    0x1bbfeb38,// 337 PAY 298 

    0xb04f39ec,// 338 PAY 299 

    0xbddb33b1,// 339 PAY 300 

    0xefc7c78d,// 340 PAY 301 

    0xff1b5ab9,// 341 PAY 302 

    0xb5ec7dcc,// 342 PAY 303 

    0x89ba7456,// 343 PAY 304 

    0xc9102d5b,// 344 PAY 305 

    0x279b41af,// 345 PAY 306 

    0xf1202e5e,// 346 PAY 307 

    0x9ba64600,// 347 PAY 308 

    0x426c41da,// 348 PAY 309 

    0xf8282815,// 349 PAY 310 

    0x1a14dd4f,// 350 PAY 311 

    0x88dd8dd3,// 351 PAY 312 

    0x927e9242,// 352 PAY 313 

    0x1c3f038c,// 353 PAY 314 

    0x566b5d1a,// 354 PAY 315 

    0x1fb76ddc,// 355 PAY 316 

    0x40453846,// 356 PAY 317 

    0x12627ab9,// 357 PAY 318 

    0xf94fb400,// 358 PAY 319 

    0x3ab51e35,// 359 PAY 320 

    0x803e2bd1,// 360 PAY 321 

    0x24e0503e,// 361 PAY 322 

    0xb66740c4,// 362 PAY 323 

    0x54d3698f,// 363 PAY 324 

    0xc5fbf6ef,// 364 PAY 325 

    0x5726b4b3,// 365 PAY 326 

    0x1e5b9055,// 366 PAY 327 

    0x96ef9831,// 367 PAY 328 

    0x9123fad8,// 368 PAY 329 

    0xab2e1058,// 369 PAY 330 

    0x98b7eda1,// 370 PAY 331 

    0x03f88184,// 371 PAY 332 

    0x953b5b30,// 372 PAY 333 

    0x5945517e,// 373 PAY 334 

    0x6c46afe2,// 374 PAY 335 

    0x9b3be127,// 375 PAY 336 

    0x20f78d0c,// 376 PAY 337 

    0x7a15a396,// 377 PAY 338 

    0xc7af928a,// 378 PAY 339 

    0x02e309f2,// 379 PAY 340 

    0x15a8c7bc,// 380 PAY 341 

    0xf2164f78,// 381 PAY 342 

    0x11aa1783,// 382 PAY 343 

    0x44677b20,// 383 PAY 344 

    0x7636922a,// 384 PAY 345 

    0xd5ab974d,// 385 PAY 346 

    0x7ab61ae0,// 386 PAY 347 

    0x739ecf18,// 387 PAY 348 

    0x6b5d3539,// 388 PAY 349 

    0xa9daa466,// 389 PAY 350 

    0x8b9ee041,// 390 PAY 351 

    0x61426517,// 391 PAY 352 

    0x3df684af,// 392 PAY 353 

    0x780208e5,// 393 PAY 354 

    0x4d8cfc68,// 394 PAY 355 

    0x09772031,// 395 PAY 356 

    0xb82bc750,// 396 PAY 357 

    0xd0c21f60,// 397 PAY 358 

    0x3cab2429,// 398 PAY 359 

    0xaa19a7fa,// 399 PAY 360 

    0x2134d2a9,// 400 PAY 361 

    0xa8120cbd,// 401 PAY 362 

    0x0cdd1c50,// 402 PAY 363 

    0x70387b03,// 403 PAY 364 

    0x628bf0c2,// 404 PAY 365 

    0x2c99bda6,// 405 PAY 366 

    0x093f665e,// 406 PAY 367 

    0xb2d9c58f,// 407 PAY 368 

    0x0d33a045,// 408 PAY 369 

    0xca1a99d6,// 409 PAY 370 

    0xe620d188,// 410 PAY 371 

    0x47cef0d3,// 411 PAY 372 

    0x8c14f6e1,// 412 PAY 373 

    0xa30dd418,// 413 PAY 374 

    0x5e2a18f4,// 414 PAY 375 

    0x28e12107,// 415 PAY 376 

    0x043011f8,// 416 PAY 377 

    0x5afd5eba,// 417 PAY 378 

    0xc0fcc7ba,// 418 PAY 379 

    0x878d02ce,// 419 PAY 380 

    0x0328213f,// 420 PAY 381 

    0x4346122b,// 421 PAY 382 

    0x5570e601,// 422 PAY 383 

    0x0a577b34,// 423 PAY 384 

    0x6e2537e1,// 424 PAY 385 

    0x52194740,// 425 PAY 386 

    0x45d012a7,// 426 PAY 387 

    0x9319c6c6,// 427 PAY 388 

    0xe811cc06,// 428 PAY 389 

    0x93529278,// 429 PAY 390 

    0x1627658c,// 430 PAY 391 

    0x7fd10c54,// 431 PAY 392 

    0xf60cb8d6,// 432 PAY 393 

    0x6247f5d1,// 433 PAY 394 

    0x0f9f42bb,// 434 PAY 395 

    0xf40f1c70,// 435 PAY 396 

    0xb5bd47cd,// 436 PAY 397 

    0x96aaaecf,// 437 PAY 398 

    0xb0e235b1,// 438 PAY 399 

    0xb6f8f727,// 439 PAY 400 

    0x29334d44,// 440 PAY 401 

    0x7ff4ba47,// 441 PAY 402 

    0x629c2234,// 442 PAY 403 

    0x90c0f6b0,// 443 PAY 404 

    0x57684e9f,// 444 PAY 405 

    0xa973df09,// 445 PAY 406 

    0x5662c40a,// 446 PAY 407 

    0x03320d45,// 447 PAY 408 

    0x3e0f5ce6,// 448 PAY 409 

    0x659cf530,// 449 PAY 410 

    0x700ab6a0,// 450 PAY 411 

    0xd26e86d0,// 451 PAY 412 

    0xeb64399b,// 452 PAY 413 

    0xc998f821,// 453 PAY 414 

    0x5d57134e,// 454 PAY 415 

    0x80992bbe,// 455 PAY 416 

    0x33c46712,// 456 PAY 417 

    0x2f173a23,// 457 PAY 418 

    0x82d77a0c,// 458 PAY 419 

    0x233c19f5,// 459 PAY 420 

    0xa87d0fe6,// 460 PAY 421 

    0xfcc54ace,// 461 PAY 422 

    0xd94d6ec3,// 462 PAY 423 

    0xc41e1d1f,// 463 PAY 424 

    0xbdf136f7,// 464 PAY 425 

    0xb1296949,// 465 PAY 426 

    0x9e3dfcea,// 466 PAY 427 

    0x2ba04f94,// 467 PAY 428 

    0xf478da38,// 468 PAY 429 

    0x53e6610c,// 469 PAY 430 

    0x2c074e98,// 470 PAY 431 

    0xc9ca6a38,// 471 PAY 432 

    0x4242dc99,// 472 PAY 433 

    0xfa057b86,// 473 PAY 434 

    0xcdae9c84,// 474 PAY 435 

    0xef761ed5,// 475 PAY 436 

    0xf5ec6cbd,// 476 PAY 437 

    0x361d057f,// 477 PAY 438 

    0x0308ac5a,// 478 PAY 439 

    0xee4be08c,// 479 PAY 440 

    0x2528d5f8,// 480 PAY 441 

    0x77d3327d,// 481 PAY 442 

    0x47768bdd,// 482 PAY 443 

    0xaa1507ea,// 483 PAY 444 

    0x368309ce,// 484 PAY 445 

    0xf9d38cc3,// 485 PAY 446 

    0xff7efb12,// 486 PAY 447 

    0xf09ab18b,// 487 PAY 448 

    0x3746ccd7,// 488 PAY 449 

    0x4698fbbe,// 489 PAY 450 

    0xc903621e,// 490 PAY 451 

    0xceb30c4b,// 491 PAY 452 

    0x8803c6d6,// 492 PAY 453 

    0xb38df4cc,// 493 PAY 454 

    0x49051138,// 494 PAY 455 

    0xfc88131e,// 495 PAY 456 

    0x7e046ee9,// 496 PAY 457 

    0x48b6dc94,// 497 PAY 458 

    0x13e89f73,// 498 PAY 459 

    0xca904f35,// 499 PAY 460 

    0x3f631956,// 500 PAY 461 

    0x7da961c8,// 501 PAY 462 

    0x56b2a197,// 502 PAY 463 

    0x9a1b5830,// 503 PAY 464 

    0x4d47f7c1,// 504 PAY 465 

    0x7ff4d4e6,// 505 PAY 466 

    0x2b404390,// 506 PAY 467 

    0x024511ea,// 507 PAY 468 

    0x62332a55,// 508 PAY 469 

    0xfb6b0210,// 509 PAY 470 

    0xde29090d,// 510 PAY 471 

    0xe7ab7476,// 511 PAY 472 

    0x26a6e1f1,// 512 PAY 473 

    0xe82a0ea8,// 513 PAY 474 

    0x40e22c4c,// 514 PAY 475 

    0x1351ed1f,// 515 PAY 476 

    0x1a04009b,// 516 PAY 477 

    0x3635d1f2,// 517 PAY 478 

    0x77509a00,// 518 PAY 479 

    0xd5d902e2,// 519 PAY 480 

    0x422e3fe1,// 520 PAY 481 

    0x50d163f2,// 521 PAY 482 

    0xedd7fe54,// 522 PAY 483 

    0xafe86b90,// 523 PAY 484 

    0x1027fe63,// 524 PAY 485 

    0x7c228a28,// 525 PAY 486 

    0x47d78a19,// 526 PAY 487 

    0xa759c998,// 527 PAY 488 

    0x0b03b796,// 528 PAY 489 

    0x4de64d76,// 529 PAY 490 

    0x6fb150b9,// 530 PAY 491 

    0x9e614538,// 531 PAY 492 

    0x74a60765,// 532 PAY 493 

    0x6fb13289,// 533 PAY 494 

    0x8b42e848,// 534 PAY 495 

    0x060dbbfa,// 535 PAY 496 

    0xec000000,// 536 PAY 497 

/// STA is 1 words. 

/// STA num_pkts       : 231 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9 

    0x03dc09e7 // 537 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt58_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8062282e,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0xa0c6170f,// 6 SCX   4 

    0x50a52017,// 7 SCX   5 

    0x25280611,// 8 SCX   6 

    0x302645f8,// 9 SCX   7 

    0x91ec6519,// 10 SCX   8 

    0x113ecd18,// 11 SCX   9 

    0xce9ee378,// 12 SCX  10 

    0x46b34906,// 13 SCX  11 

    0x66adb2e5,// 14 SCX  12 

    0xc906f0d3,// 15 SCX  13 

    0xeaba56b9,// 16 SCX  14 

    0xdf3e772e,// 17 SCX  15 

    0xe5693ff0,// 18 SCX  16 

    0xc8cdc388,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1601 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1366 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1366 

/// BFD lencrypto      : 424 

/// BFD ofstcrypto     : 824 

/// BFD (ofst+len)cry  : 1248 

/// BFD ofstiv         : 492 

/// BFD ofsticv        : 1492 

    0x00000556,// 20 BFD   1 

    0x033801a8,// 21 BFD   2 

    0x05d401ec,// 22 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5e 

    0x5e00602c,// 23 MFM   1 

    0x3d09c13b,// 24 MFM   2 

    0x8fae9d28,// 25 MFM   3 

    0x3d05308d,// 26 MFM   4 

    0xb37af6fc,// 27 MFM   5 

    0x3941d982,// 28 MFM   6 

    0x8be73a73,// 29 MFM   7 

    0xe7f2f528,// 30 MFM   8 

    0x657b9605,// 31 MFM   9 

    0x53199d7d,// 32 MFM  10 

    0x0a3af2f7,// 33 MFM  11 

    0x7a1debbd,// 34 MFM  12 

    0x28000000,// 35 MFM  13 

/// BDA is 402 words. 

/// BDA size     is 1601 (0x641) 

/// BDA id       is 0x5042 

    0x06415042,// 36 BDA   1 

/// PAY Generic Data size   : 1601 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf1fa5d86,// 37 PAY   1 

    0x399c99e3,// 38 PAY   2 

    0xd86aaa81,// 39 PAY   3 

    0xcf7229c9,// 40 PAY   4 

    0x9dec40b1,// 41 PAY   5 

    0x4ec8267c,// 42 PAY   6 

    0x125e4b90,// 43 PAY   7 

    0x645a8869,// 44 PAY   8 

    0xd14eb79d,// 45 PAY   9 

    0x306a99b9,// 46 PAY  10 

    0x1f7aee20,// 47 PAY  11 

    0x55bb6bd1,// 48 PAY  12 

    0x2721bdac,// 49 PAY  13 

    0xc211027a,// 50 PAY  14 

    0x5409a660,// 51 PAY  15 

    0xb5403db1,// 52 PAY  16 

    0x7fd63903,// 53 PAY  17 

    0x2da14510,// 54 PAY  18 

    0x0c5f5e85,// 55 PAY  19 

    0x9a84413f,// 56 PAY  20 

    0x2be19c84,// 57 PAY  21 

    0x32cbc8d8,// 58 PAY  22 

    0xc2cac576,// 59 PAY  23 

    0x88ce2836,// 60 PAY  24 

    0xfacf8d96,// 61 PAY  25 

    0x41db8d35,// 62 PAY  26 

    0x76dbceee,// 63 PAY  27 

    0xae3c4f4c,// 64 PAY  28 

    0xf8bca1b6,// 65 PAY  29 

    0x440400d3,// 66 PAY  30 

    0x0f139480,// 67 PAY  31 

    0x416fff05,// 68 PAY  32 

    0x9544918f,// 69 PAY  33 

    0xcf4ad08b,// 70 PAY  34 

    0xdce65f82,// 71 PAY  35 

    0xd6a16c8d,// 72 PAY  36 

    0x1d70b17f,// 73 PAY  37 

    0xf2ca7161,// 74 PAY  38 

    0xed566f61,// 75 PAY  39 

    0xea316f3d,// 76 PAY  40 

    0xc9412477,// 77 PAY  41 

    0xa9fb7fa9,// 78 PAY  42 

    0x1e251d49,// 79 PAY  43 

    0x0e085400,// 80 PAY  44 

    0xaac94bd1,// 81 PAY  45 

    0x934c7670,// 82 PAY  46 

    0xdc64ac6e,// 83 PAY  47 

    0xc49e3d0c,// 84 PAY  48 

    0xbf2b7b7a,// 85 PAY  49 

    0x6506af88,// 86 PAY  50 

    0x74bc241c,// 87 PAY  51 

    0x9babf201,// 88 PAY  52 

    0x7f34dcc7,// 89 PAY  53 

    0x0ac28d5e,// 90 PAY  54 

    0xae686405,// 91 PAY  55 

    0xee5a657f,// 92 PAY  56 

    0xf53cf28b,// 93 PAY  57 

    0x30818345,// 94 PAY  58 

    0x122251ca,// 95 PAY  59 

    0x99695687,// 96 PAY  60 

    0xbbb6c5d4,// 97 PAY  61 

    0x75016613,// 98 PAY  62 

    0x4d4caabe,// 99 PAY  63 

    0x55861def,// 100 PAY  64 

    0x67b0131d,// 101 PAY  65 

    0x74fd5b7f,// 102 PAY  66 

    0x769afcee,// 103 PAY  67 

    0x9b6be906,// 104 PAY  68 

    0xed95a007,// 105 PAY  69 

    0x9c8aec83,// 106 PAY  70 

    0x1db9c045,// 107 PAY  71 

    0xb2ac0f88,// 108 PAY  72 

    0x08b07060,// 109 PAY  73 

    0xba8921ed,// 110 PAY  74 

    0xbaa98d40,// 111 PAY  75 

    0x45852b3c,// 112 PAY  76 

    0xb458339e,// 113 PAY  77 

    0x7402a89b,// 114 PAY  78 

    0x0fc8b7b9,// 115 PAY  79 

    0x9563cf22,// 116 PAY  80 

    0x6f9515aa,// 117 PAY  81 

    0x6347ab22,// 118 PAY  82 

    0x48597a81,// 119 PAY  83 

    0x1afe32fa,// 120 PAY  84 

    0xc936d896,// 121 PAY  85 

    0xeff0e7eb,// 122 PAY  86 

    0x72f01129,// 123 PAY  87 

    0x9871c12e,// 124 PAY  88 

    0x2ba509b1,// 125 PAY  89 

    0x802a2e8c,// 126 PAY  90 

    0xf5242930,// 127 PAY  91 

    0xe90fe0fb,// 128 PAY  92 

    0x1859c032,// 129 PAY  93 

    0xd43689a8,// 130 PAY  94 

    0xdfa8e53b,// 131 PAY  95 

    0x800c125b,// 132 PAY  96 

    0xe5667342,// 133 PAY  97 

    0xb799418a,// 134 PAY  98 

    0xb9957a6b,// 135 PAY  99 

    0x9a72b624,// 136 PAY 100 

    0x6f666bea,// 137 PAY 101 

    0xba65e8e2,// 138 PAY 102 

    0xc18acdba,// 139 PAY 103 

    0xf782a9ec,// 140 PAY 104 

    0x375954c8,// 141 PAY 105 

    0x84bfd531,// 142 PAY 106 

    0xf18ef6e9,// 143 PAY 107 

    0xda409491,// 144 PAY 108 

    0x7ae37729,// 145 PAY 109 

    0x66bc938c,// 146 PAY 110 

    0x5b6093ed,// 147 PAY 111 

    0xc33e7bf8,// 148 PAY 112 

    0x96ade1ba,// 149 PAY 113 

    0xa0f80b54,// 150 PAY 114 

    0x432d722f,// 151 PAY 115 

    0x856150af,// 152 PAY 116 

    0x691bae3d,// 153 PAY 117 

    0x5c8a3027,// 154 PAY 118 

    0x1a2160c7,// 155 PAY 119 

    0x79629c4a,// 156 PAY 120 

    0x2630b4ee,// 157 PAY 121 

    0x59ea5802,// 158 PAY 122 

    0x2777741f,// 159 PAY 123 

    0x6d40c1eb,// 160 PAY 124 

    0xe74e2e8d,// 161 PAY 125 

    0xa26d3c52,// 162 PAY 126 

    0x134ffca1,// 163 PAY 127 

    0x53f28cfe,// 164 PAY 128 

    0x2da4883f,// 165 PAY 129 

    0x3b04f30d,// 166 PAY 130 

    0xe9795da3,// 167 PAY 131 

    0xe74ece40,// 168 PAY 132 

    0xf2f84320,// 169 PAY 133 

    0xb094f228,// 170 PAY 134 

    0xea0d2f17,// 171 PAY 135 

    0x7a022012,// 172 PAY 136 

    0x1bbb5a5e,// 173 PAY 137 

    0x6d4220ab,// 174 PAY 138 

    0x77def4f1,// 175 PAY 139 

    0x1cb07d47,// 176 PAY 140 

    0xc696b580,// 177 PAY 141 

    0xfc430b08,// 178 PAY 142 

    0x62e3ca6f,// 179 PAY 143 

    0xa2097045,// 180 PAY 144 

    0xfeb2a760,// 181 PAY 145 

    0xfbb756be,// 182 PAY 146 

    0xfae33897,// 183 PAY 147 

    0x0faab7c9,// 184 PAY 148 

    0x57162137,// 185 PAY 149 

    0x0d153e80,// 186 PAY 150 

    0x90800f38,// 187 PAY 151 

    0x390d96b3,// 188 PAY 152 

    0x3504a721,// 189 PAY 153 

    0x16a314db,// 190 PAY 154 

    0x72ee30c1,// 191 PAY 155 

    0x1efa258e,// 192 PAY 156 

    0x83f2866d,// 193 PAY 157 

    0xfa87565c,// 194 PAY 158 

    0xc487c1c4,// 195 PAY 159 

    0x8660ad5a,// 196 PAY 160 

    0x4e7142bc,// 197 PAY 161 

    0x8cce6553,// 198 PAY 162 

    0x5fe5c2d5,// 199 PAY 163 

    0xb9fcf362,// 200 PAY 164 

    0x216b21ac,// 201 PAY 165 

    0xb37b5dca,// 202 PAY 166 

    0xf4e5899e,// 203 PAY 167 

    0xe5df0611,// 204 PAY 168 

    0xa572a5b0,// 205 PAY 169 

    0x34dae4bf,// 206 PAY 170 

    0xf858201f,// 207 PAY 171 

    0xb68a6c6c,// 208 PAY 172 

    0x71969a27,// 209 PAY 173 

    0xa788b181,// 210 PAY 174 

    0x56113af0,// 211 PAY 175 

    0x7cf10abd,// 212 PAY 176 

    0x43e7a022,// 213 PAY 177 

    0x69f17c4b,// 214 PAY 178 

    0x6db384b3,// 215 PAY 179 

    0x82d10f89,// 216 PAY 180 

    0xfd8be6f6,// 217 PAY 181 

    0x2de789d6,// 218 PAY 182 

    0x4f36b83d,// 219 PAY 183 

    0xf089fa2e,// 220 PAY 184 

    0x65d8de8d,// 221 PAY 185 

    0xbc9b7456,// 222 PAY 186 

    0xff30a335,// 223 PAY 187 

    0xe4298cbe,// 224 PAY 188 

    0x2b20e12d,// 225 PAY 189 

    0xf77c5f87,// 226 PAY 190 

    0xf3710784,// 227 PAY 191 

    0x500ff1e7,// 228 PAY 192 

    0x9cb00780,// 229 PAY 193 

    0xe8d90349,// 230 PAY 194 

    0x38233271,// 231 PAY 195 

    0xa69b83b7,// 232 PAY 196 

    0x2739cf11,// 233 PAY 197 

    0xc9a761a2,// 234 PAY 198 

    0xb80a4b43,// 235 PAY 199 

    0x9d4e32f9,// 236 PAY 200 

    0xe4f2e60c,// 237 PAY 201 

    0x3e278796,// 238 PAY 202 

    0xe7fae5d0,// 239 PAY 203 

    0xed97913e,// 240 PAY 204 

    0xe731d9cc,// 241 PAY 205 

    0xd4018388,// 242 PAY 206 

    0xb71b20d6,// 243 PAY 207 

    0xcb321ec4,// 244 PAY 208 

    0x1e7b88ab,// 245 PAY 209 

    0xab43294e,// 246 PAY 210 

    0x47b41aab,// 247 PAY 211 

    0xc781a852,// 248 PAY 212 

    0x5afcc111,// 249 PAY 213 

    0xcfde15d1,// 250 PAY 214 

    0x08afa165,// 251 PAY 215 

    0x9d27bb9f,// 252 PAY 216 

    0xefbcf139,// 253 PAY 217 

    0xd8a675fb,// 254 PAY 218 

    0x63e13cfb,// 255 PAY 219 

    0x6e1e8dcc,// 256 PAY 220 

    0x0bfe30fb,// 257 PAY 221 

    0x55d396eb,// 258 PAY 222 

    0x2958e463,// 259 PAY 223 

    0x6f01d11b,// 260 PAY 224 

    0x1eb8cca6,// 261 PAY 225 

    0xa396e9cc,// 262 PAY 226 

    0x8b3ac978,// 263 PAY 227 

    0xc948bd82,// 264 PAY 228 

    0x2674b9ba,// 265 PAY 229 

    0xa5be92a8,// 266 PAY 230 

    0x21711ebb,// 267 PAY 231 

    0x7cc4859d,// 268 PAY 232 

    0xd5ee2ad2,// 269 PAY 233 

    0x14288258,// 270 PAY 234 

    0x69c23cb2,// 271 PAY 235 

    0x53fb95d2,// 272 PAY 236 

    0x80bfb5df,// 273 PAY 237 

    0xfd0f8624,// 274 PAY 238 

    0xe0fea953,// 275 PAY 239 

    0x8d1e9063,// 276 PAY 240 

    0x6a8ca5b0,// 277 PAY 241 

    0x156fcc24,// 278 PAY 242 

    0x3961d553,// 279 PAY 243 

    0x4b014dfd,// 280 PAY 244 

    0x6566ea2c,// 281 PAY 245 

    0x7fefa93d,// 282 PAY 246 

    0x7ccd2cb5,// 283 PAY 247 

    0xe08a26c5,// 284 PAY 248 

    0x9698b5b3,// 285 PAY 249 

    0xf65558fe,// 286 PAY 250 

    0xa6d3ed67,// 287 PAY 251 

    0xa93035f0,// 288 PAY 252 

    0xdad27dc4,// 289 PAY 253 

    0xb63760f8,// 290 PAY 254 

    0xcb52c2b9,// 291 PAY 255 

    0x79727b76,// 292 PAY 256 

    0x94f1293a,// 293 PAY 257 

    0xcb594d86,// 294 PAY 258 

    0x51ba17cf,// 295 PAY 259 

    0x2bb8d2e3,// 296 PAY 260 

    0x3553e4c9,// 297 PAY 261 

    0x9a68b21b,// 298 PAY 262 

    0x94645ccf,// 299 PAY 263 

    0x6d1f3594,// 300 PAY 264 

    0x8ed2aa26,// 301 PAY 265 

    0x3b6cb805,// 302 PAY 266 

    0x2072b9b8,// 303 PAY 267 

    0x509f53d4,// 304 PAY 268 

    0xa1a1b9e1,// 305 PAY 269 

    0x55e23c9d,// 306 PAY 270 

    0xe6895ccf,// 307 PAY 271 

    0x7aafc042,// 308 PAY 272 

    0xe0552933,// 309 PAY 273 

    0x6380d66e,// 310 PAY 274 

    0x3d30dc63,// 311 PAY 275 

    0xf33b5ebf,// 312 PAY 276 

    0x17c3c19c,// 313 PAY 277 

    0xb7099728,// 314 PAY 278 

    0x6445ec65,// 315 PAY 279 

    0x0e485c29,// 316 PAY 280 

    0xa13fc106,// 317 PAY 281 

    0xcb53b174,// 318 PAY 282 

    0x8926c7a3,// 319 PAY 283 

    0xfcf0e82c,// 320 PAY 284 

    0x79a92fa6,// 321 PAY 285 

    0x44ea6698,// 322 PAY 286 

    0x7dbf1ea0,// 323 PAY 287 

    0xd334b719,// 324 PAY 288 

    0x04607e2a,// 325 PAY 289 

    0xa71ceb73,// 326 PAY 290 

    0xdcc5fd79,// 327 PAY 291 

    0x8bfebd99,// 328 PAY 292 

    0x25328f3b,// 329 PAY 293 

    0xbb53a491,// 330 PAY 294 

    0x0173b53a,// 331 PAY 295 

    0xaf7887d6,// 332 PAY 296 

    0x2b35e306,// 333 PAY 297 

    0xb1be29ce,// 334 PAY 298 

    0x28a2aa5b,// 335 PAY 299 

    0x920f8e42,// 336 PAY 300 

    0x9c2d7d2c,// 337 PAY 301 

    0x3eab0399,// 338 PAY 302 

    0x8be3fc83,// 339 PAY 303 

    0x067b447c,// 340 PAY 304 

    0xe2e6cd3e,// 341 PAY 305 

    0x19cf2727,// 342 PAY 306 

    0xe6544302,// 343 PAY 307 

    0xf44fd440,// 344 PAY 308 

    0x2c0bee41,// 345 PAY 309 

    0xd30e2892,// 346 PAY 310 

    0x3506231e,// 347 PAY 311 

    0xd2797056,// 348 PAY 312 

    0xec918333,// 349 PAY 313 

    0x6e14ef95,// 350 PAY 314 

    0xb08b1b50,// 351 PAY 315 

    0xda2ca7f9,// 352 PAY 316 

    0x205e13fb,// 353 PAY 317 

    0xab703ddc,// 354 PAY 318 

    0x6e861fb1,// 355 PAY 319 

    0x4e4bd062,// 356 PAY 320 

    0x6c7b9e2d,// 357 PAY 321 

    0xdae152bb,// 358 PAY 322 

    0xcec0d264,// 359 PAY 323 

    0x13c8877f,// 360 PAY 324 

    0x4711a1c3,// 361 PAY 325 

    0x0835f6b4,// 362 PAY 326 

    0xbc3c1dd9,// 363 PAY 327 

    0x5e00a281,// 364 PAY 328 

    0xebf86d06,// 365 PAY 329 

    0x9e15c021,// 366 PAY 330 

    0x7c42f34c,// 367 PAY 331 

    0x5bfe480b,// 368 PAY 332 

    0xefba4b3a,// 369 PAY 333 

    0xf3e47359,// 370 PAY 334 

    0x4308e290,// 371 PAY 335 

    0x0473b3e9,// 372 PAY 336 

    0x1b5bea42,// 373 PAY 337 

    0x347c52b4,// 374 PAY 338 

    0xc4583596,// 375 PAY 339 

    0x6abc2c5c,// 376 PAY 340 

    0x08f10543,// 377 PAY 341 

    0x06f154e9,// 378 PAY 342 

    0xdf75c36d,// 379 PAY 343 

    0xa1d4d984,// 380 PAY 344 

    0x58b25f32,// 381 PAY 345 

    0xf9cd300a,// 382 PAY 346 

    0x82e58222,// 383 PAY 347 

    0xe7c8f8fd,// 384 PAY 348 

    0x388eef51,// 385 PAY 349 

    0xf39408de,// 386 PAY 350 

    0xc8021c9a,// 387 PAY 351 

    0x299e9611,// 388 PAY 352 

    0x5b430e1f,// 389 PAY 353 

    0xe20ad1df,// 390 PAY 354 

    0xbdb0bd6e,// 391 PAY 355 

    0xb44224dc,// 392 PAY 356 

    0x8ccfbd91,// 393 PAY 357 

    0x85ca277e,// 394 PAY 358 

    0x7c5ba8c1,// 395 PAY 359 

    0x25f71be7,// 396 PAY 360 

    0x16d0c6df,// 397 PAY 361 

    0x6388e255,// 398 PAY 362 

    0x342274d5,// 399 PAY 363 

    0xb92cd530,// 400 PAY 364 

    0x0ec9b1a2,// 401 PAY 365 

    0x56117150,// 402 PAY 366 

    0xbc0f6043,// 403 PAY 367 

    0xb61af6e5,// 404 PAY 368 

    0x1b312e77,// 405 PAY 369 

    0x98c0fae3,// 406 PAY 370 

    0xc472f07f,// 407 PAY 371 

    0x657277c8,// 408 PAY 372 

    0x747411d0,// 409 PAY 373 

    0x032a878c,// 410 PAY 374 

    0x7fca338d,// 411 PAY 375 

    0xf1976b4f,// 412 PAY 376 

    0x7974c3be,// 413 PAY 377 

    0xf1476f65,// 414 PAY 378 

    0xb822672b,// 415 PAY 379 

    0xba30d41b,// 416 PAY 380 

    0x6c0f5e67,// 417 PAY 381 

    0xdf59a85e,// 418 PAY 382 

    0x4c3bcf1e,// 419 PAY 383 

    0x8c8cd596,// 420 PAY 384 

    0x3f22c842,// 421 PAY 385 

    0x50665def,// 422 PAY 386 

    0x0a1f3255,// 423 PAY 387 

    0xc48ca46c,// 424 PAY 388 

    0xe3178f78,// 425 PAY 389 

    0x30bd9d28,// 426 PAY 390 

    0xf1e6eb7f,// 427 PAY 391 

    0x7f6c1d30,// 428 PAY 392 

    0xdfcd766f,// 429 PAY 393 

    0x75bdb6ae,// 430 PAY 394 

    0xd156f4e8,// 431 PAY 395 

    0x6871e837,// 432 PAY 396 

    0xeea4d7a0,// 433 PAY 397 

    0x1bb9aea5,// 434 PAY 398 

    0x200f7cbf,// 435 PAY 399 

    0x1df823ed,// 436 PAY 400 

    0x02000000,// 437 PAY 401 

/// STA is 1 words. 

/// STA num_pkts       : 207 

/// STA pkt_idx        : 160 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1e 

    0x02811ecf // 438 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt59_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x80662815,// 4 SCX   2 

    0x00004382,// 5 SCX   3 

    0xd96ff58e,// 6 SCX   4 

    0x6bae1076,// 7 SCX   5 

    0xe0cd9012,// 8 SCX   6 

    0x627069f5,// 9 SCX   7 

    0x6344b4ea,// 10 SCX   8 

    0x36e60ed3,// 11 SCX   9 

    0xd16b9a80,// 12 SCX  10 

    0x4a2ed480,// 13 SCX  11 

    0x99684b9f,// 14 SCX  12 

    0xa301e586,// 15 SCX  13 

    0xc12ded09,// 16 SCX  14 

    0x6ed0a042,// 17 SCX  15 

    0xb30b68c1,// 18 SCX  16 

    0xa4cdbcd8,// 19 SCX  17 

    0xdde56303,// 20 SCX  18 

    0xc66a6284,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 2011 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 353 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 353 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 328 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 1088 

    0x00000161,// 22 BFD   1 

    0x00b00098,// 23 BFD   2 

    0x0440004c,// 24 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 25 

    0x25006a38,// 25 MFM   1 

    0x2d5ae896,// 26 MFM   2 

    0x385bc129,// 27 MFM   3 

    0x5126f257,// 28 MFM   4 

    0xb0b5775d,// 29 MFM   5 

    0x90000000,// 30 MFM   6 

/// BDA is 504 words. 

/// BDA size     is 2011 (0x7db) 

/// BDA id       is 0x1f49 

    0x07db1f49,// 31 BDA   1 

/// PAY Generic Data size   : 2011 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x316ec9e6,// 32 PAY   1 

    0x57dbe114,// 33 PAY   2 

    0xef46b072,// 34 PAY   3 

    0x6ebb7964,// 35 PAY   4 

    0x81234c81,// 36 PAY   5 

    0xfb295eb6,// 37 PAY   6 

    0x0d212f70,// 38 PAY   7 

    0xf5066e35,// 39 PAY   8 

    0xdd8a0935,// 40 PAY   9 

    0x5a165920,// 41 PAY  10 

    0x3ce37a15,// 42 PAY  11 

    0x836020db,// 43 PAY  12 

    0xc81fd370,// 44 PAY  13 

    0xc6b5fca1,// 45 PAY  14 

    0x6e15a853,// 46 PAY  15 

    0xe39f7100,// 47 PAY  16 

    0x1e4a4155,// 48 PAY  17 

    0xfa11d53c,// 49 PAY  18 

    0x6e401cae,// 50 PAY  19 

    0x5a1121c1,// 51 PAY  20 

    0x6a3dbb83,// 52 PAY  21 

    0x86fc9a91,// 53 PAY  22 

    0xf4b7360a,// 54 PAY  23 

    0x7fd7d950,// 55 PAY  24 

    0x13da5d52,// 56 PAY  25 

    0x61fc7816,// 57 PAY  26 

    0xd9bb0fe9,// 58 PAY  27 

    0x474ee31e,// 59 PAY  28 

    0xc9dea47a,// 60 PAY  29 

    0xf6357b06,// 61 PAY  30 

    0x8515ce40,// 62 PAY  31 

    0x88d7594a,// 63 PAY  32 

    0xc40012a7,// 64 PAY  33 

    0x8f4858ca,// 65 PAY  34 

    0x8384ed79,// 66 PAY  35 

    0x984fb46d,// 67 PAY  36 

    0x54f989c0,// 68 PAY  37 

    0xfe368329,// 69 PAY  38 

    0xf5e04f6c,// 70 PAY  39 

    0xf447fb69,// 71 PAY  40 

    0x75d7861c,// 72 PAY  41 

    0x290b9429,// 73 PAY  42 

    0x7dd8dafa,// 74 PAY  43 

    0xc5990a3f,// 75 PAY  44 

    0x410cbfe4,// 76 PAY  45 

    0xbbaa03c7,// 77 PAY  46 

    0xc41244b0,// 78 PAY  47 

    0xf10331df,// 79 PAY  48 

    0x04982f1d,// 80 PAY  49 

    0x4eeab147,// 81 PAY  50 

    0xd1e8db24,// 82 PAY  51 

    0x7f0be367,// 83 PAY  52 

    0x11b4b6f3,// 84 PAY  53 

    0xc2b380b1,// 85 PAY  54 

    0xb97de062,// 86 PAY  55 

    0x7c0ff2f5,// 87 PAY  56 

    0x9dbae62f,// 88 PAY  57 

    0x8df634c1,// 89 PAY  58 

    0x5bdb964d,// 90 PAY  59 

    0xc0df2de3,// 91 PAY  60 

    0x3357e4da,// 92 PAY  61 

    0xd3569b3e,// 93 PAY  62 

    0xc960be07,// 94 PAY  63 

    0x4f74275d,// 95 PAY  64 

    0x67cd37f4,// 96 PAY  65 

    0x13cc2321,// 97 PAY  66 

    0xc18f5c2b,// 98 PAY  67 

    0x736586b8,// 99 PAY  68 

    0x9bf7dd0e,// 100 PAY  69 

    0x3b36290c,// 101 PAY  70 

    0x007a1236,// 102 PAY  71 

    0x889f49db,// 103 PAY  72 

    0x7b3f0800,// 104 PAY  73 

    0x5f324e6c,// 105 PAY  74 

    0xee83e011,// 106 PAY  75 

    0x1d3298e0,// 107 PAY  76 

    0x054cc3af,// 108 PAY  77 

    0x39baaa9d,// 109 PAY  78 

    0xa1e074b2,// 110 PAY  79 

    0x3a183f4d,// 111 PAY  80 

    0x3a99f49b,// 112 PAY  81 

    0xdd2a0bf5,// 113 PAY  82 

    0x5b30ff34,// 114 PAY  83 

    0xc60f3b50,// 115 PAY  84 

    0x456d6b50,// 116 PAY  85 

    0xbd23dc37,// 117 PAY  86 

    0x83ce5e45,// 118 PAY  87 

    0x1b9cc8b8,// 119 PAY  88 

    0xbfa651ba,// 120 PAY  89 

    0xd82c3ca2,// 121 PAY  90 

    0x06fbed7f,// 122 PAY  91 

    0xac0d7103,// 123 PAY  92 

    0xde7e9938,// 124 PAY  93 

    0x93462194,// 125 PAY  94 

    0x2612a090,// 126 PAY  95 

    0xeac12fc5,// 127 PAY  96 

    0x1bc559b0,// 128 PAY  97 

    0x831df3d4,// 129 PAY  98 

    0x0c029dbc,// 130 PAY  99 

    0x5dbb856f,// 131 PAY 100 

    0xe37eb017,// 132 PAY 101 

    0x0ed068a1,// 133 PAY 102 

    0x2018021e,// 134 PAY 103 

    0x624565fd,// 135 PAY 104 

    0x801f4a07,// 136 PAY 105 

    0xd31050ca,// 137 PAY 106 

    0x8dcf067e,// 138 PAY 107 

    0x63eca92c,// 139 PAY 108 

    0x0c8ec5c6,// 140 PAY 109 

    0x955c9d1d,// 141 PAY 110 

    0x50df4510,// 142 PAY 111 

    0x3118655e,// 143 PAY 112 

    0x54fc5362,// 144 PAY 113 

    0x8a60a756,// 145 PAY 114 

    0x8f5cfe7b,// 146 PAY 115 

    0x21a0856c,// 147 PAY 116 

    0x6c431676,// 148 PAY 117 

    0xf3c99238,// 149 PAY 118 

    0xa94882d5,// 150 PAY 119 

    0x8acc209e,// 151 PAY 120 

    0x0c73f6ff,// 152 PAY 121 

    0xb87781c6,// 153 PAY 122 

    0x2643feb6,// 154 PAY 123 

    0xb51d1ecc,// 155 PAY 124 

    0xfa2bec9e,// 156 PAY 125 

    0xa607141d,// 157 PAY 126 

    0x44c0c188,// 158 PAY 127 

    0x5bf5a1c7,// 159 PAY 128 

    0x5e81d51b,// 160 PAY 129 

    0x25271685,// 161 PAY 130 

    0xe758c55e,// 162 PAY 131 

    0x90a66427,// 163 PAY 132 

    0xe0fd657f,// 164 PAY 133 

    0xeeb9c27f,// 165 PAY 134 

    0x938336e7,// 166 PAY 135 

    0xf76aced0,// 167 PAY 136 

    0x8d82cea5,// 168 PAY 137 

    0xa134b005,// 169 PAY 138 

    0x068e6b39,// 170 PAY 139 

    0xadcb7c32,// 171 PAY 140 

    0x26234010,// 172 PAY 141 

    0x0571b41a,// 173 PAY 142 

    0xbacd79d5,// 174 PAY 143 

    0xff1ccc4c,// 175 PAY 144 

    0x93ee7288,// 176 PAY 145 

    0xb061ee7c,// 177 PAY 146 

    0x382da947,// 178 PAY 147 

    0x56b4ecdc,// 179 PAY 148 

    0x381908f7,// 180 PAY 149 

    0xfa122954,// 181 PAY 150 

    0x89b6c578,// 182 PAY 151 

    0xb48b4896,// 183 PAY 152 

    0xb585fec6,// 184 PAY 153 

    0xc8c6c711,// 185 PAY 154 

    0xf8f4557d,// 186 PAY 155 

    0xe1fa1754,// 187 PAY 156 

    0x4e2fc837,// 188 PAY 157 

    0x193d9480,// 189 PAY 158 

    0xde6d7ffe,// 190 PAY 159 

    0xc8586a57,// 191 PAY 160 

    0xbbcc208c,// 192 PAY 161 

    0xa887bcdc,// 193 PAY 162 

    0xda88c94c,// 194 PAY 163 

    0x2fefbc73,// 195 PAY 164 

    0x02814a4e,// 196 PAY 165 

    0x8b0b407c,// 197 PAY 166 

    0x8398b4ef,// 198 PAY 167 

    0xb02862f7,// 199 PAY 168 

    0x55eff83a,// 200 PAY 169 

    0x4f6bf8f1,// 201 PAY 170 

    0x64c0c8d1,// 202 PAY 171 

    0xa1b0979e,// 203 PAY 172 

    0x19820a61,// 204 PAY 173 

    0x058c5388,// 205 PAY 174 

    0xe41bdbdb,// 206 PAY 175 

    0x47b4cc74,// 207 PAY 176 

    0x83f316aa,// 208 PAY 177 

    0xd7eea318,// 209 PAY 178 

    0x695c8c44,// 210 PAY 179 

    0x1a09af36,// 211 PAY 180 

    0x8242e242,// 212 PAY 181 

    0x3b40134e,// 213 PAY 182 

    0x83323c8b,// 214 PAY 183 

    0x40b60336,// 215 PAY 184 

    0xa32f039b,// 216 PAY 185 

    0x76a8d384,// 217 PAY 186 

    0xaa639027,// 218 PAY 187 

    0x7e445a3f,// 219 PAY 188 

    0x73d15bf9,// 220 PAY 189 

    0x33818135,// 221 PAY 190 

    0x97c3b878,// 222 PAY 191 

    0x69be5334,// 223 PAY 192 

    0xe6d4cdb0,// 224 PAY 193 

    0x6575447d,// 225 PAY 194 

    0x9643d737,// 226 PAY 195 

    0x0bea3d28,// 227 PAY 196 

    0xf08cc894,// 228 PAY 197 

    0xae5008df,// 229 PAY 198 

    0x6d35628e,// 230 PAY 199 

    0x2db27023,// 231 PAY 200 

    0x7770971b,// 232 PAY 201 

    0x2e68f9c4,// 233 PAY 202 

    0xadb49aac,// 234 PAY 203 

    0xafa10a09,// 235 PAY 204 

    0x3d28c0a0,// 236 PAY 205 

    0x2dfe4be7,// 237 PAY 206 

    0x88c94dd1,// 238 PAY 207 

    0x63b390d2,// 239 PAY 208 

    0x8614f6d3,// 240 PAY 209 

    0x830c55da,// 241 PAY 210 

    0x47238604,// 242 PAY 211 

    0x059e6abf,// 243 PAY 212 

    0x243fcf07,// 244 PAY 213 

    0x7564140b,// 245 PAY 214 

    0xa6e45bc3,// 246 PAY 215 

    0x930834b8,// 247 PAY 216 

    0xf36edff6,// 248 PAY 217 

    0xc32dbe56,// 249 PAY 218 

    0x923e9494,// 250 PAY 219 

    0xd8d75220,// 251 PAY 220 

    0x70d46eb5,// 252 PAY 221 

    0x9734272e,// 253 PAY 222 

    0x0b770fb1,// 254 PAY 223 

    0x2ff02f93,// 255 PAY 224 

    0xf1427484,// 256 PAY 225 

    0xf758a5ce,// 257 PAY 226 

    0xfecb0087,// 258 PAY 227 

    0xb4e82d1b,// 259 PAY 228 

    0x0054281c,// 260 PAY 229 

    0xe732978e,// 261 PAY 230 

    0xfa738049,// 262 PAY 231 

    0x748b50fe,// 263 PAY 232 

    0x78c01ade,// 264 PAY 233 

    0x222d0d4d,// 265 PAY 234 

    0xc44357d7,// 266 PAY 235 

    0xb806840c,// 267 PAY 236 

    0xb1820fd6,// 268 PAY 237 

    0x54cfdc3d,// 269 PAY 238 

    0x6fe4e13e,// 270 PAY 239 

    0x313311ba,// 271 PAY 240 

    0x56a4f897,// 272 PAY 241 

    0x2cd99103,// 273 PAY 242 

    0x2d46dc26,// 274 PAY 243 

    0x11ac836d,// 275 PAY 244 

    0x6d8dbf3a,// 276 PAY 245 

    0x9bfbc648,// 277 PAY 246 

    0x62dc818f,// 278 PAY 247 

    0x0bc64299,// 279 PAY 248 

    0x8c94e5e0,// 280 PAY 249 

    0xc9e9b548,// 281 PAY 250 

    0xeaf55cc8,// 282 PAY 251 

    0x78b64562,// 283 PAY 252 

    0x1bac6470,// 284 PAY 253 

    0xd85b30f1,// 285 PAY 254 

    0xe19aa58a,// 286 PAY 255 

    0xacf431c3,// 287 PAY 256 

    0xf236f9a1,// 288 PAY 257 

    0xcee21e9a,// 289 PAY 258 

    0xeb0b4a77,// 290 PAY 259 

    0xe8109a21,// 291 PAY 260 

    0xe8bd526d,// 292 PAY 261 

    0x4269cbc5,// 293 PAY 262 

    0xb4d05c11,// 294 PAY 263 

    0x989aa323,// 295 PAY 264 

    0x1aa71aaa,// 296 PAY 265 

    0x991ddc5d,// 297 PAY 266 

    0x8581260f,// 298 PAY 267 

    0x5e318407,// 299 PAY 268 

    0x94e9aab2,// 300 PAY 269 

    0xb13309a3,// 301 PAY 270 

    0x63017d13,// 302 PAY 271 

    0x0ccf4163,// 303 PAY 272 

    0xd37356e5,// 304 PAY 273 

    0xf48fe96e,// 305 PAY 274 

    0x2a24d82d,// 306 PAY 275 

    0x01a9bc94,// 307 PAY 276 

    0x0206dede,// 308 PAY 277 

    0xdd9f6d9e,// 309 PAY 278 

    0xc5055506,// 310 PAY 279 

    0xd3c20a84,// 311 PAY 280 

    0x69d27cc7,// 312 PAY 281 

    0x226afa11,// 313 PAY 282 

    0x49057bd8,// 314 PAY 283 

    0xd209f6b4,// 315 PAY 284 

    0xb46a2dd9,// 316 PAY 285 

    0x276abeb2,// 317 PAY 286 

    0x5a812d4a,// 318 PAY 287 

    0x26e08897,// 319 PAY 288 

    0xf2b06f1d,// 320 PAY 289 

    0x0580f69a,// 321 PAY 290 

    0x874e4dc4,// 322 PAY 291 

    0xf2345719,// 323 PAY 292 

    0x9cdc6bfe,// 324 PAY 293 

    0xbbab3918,// 325 PAY 294 

    0x6042be21,// 326 PAY 295 

    0x66dc88ce,// 327 PAY 296 

    0xc33723a9,// 328 PAY 297 

    0x52dc4290,// 329 PAY 298 

    0x70acf36a,// 330 PAY 299 

    0xbc3d27aa,// 331 PAY 300 

    0x1ed7df42,// 332 PAY 301 

    0x9d2869ff,// 333 PAY 302 

    0x64792bfe,// 334 PAY 303 

    0x2dd28080,// 335 PAY 304 

    0x8942aecc,// 336 PAY 305 

    0x3b6660b8,// 337 PAY 306 

    0x6ad20426,// 338 PAY 307 

    0x1904ed9a,// 339 PAY 308 

    0xb102b9db,// 340 PAY 309 

    0x1955c2da,// 341 PAY 310 

    0x281ccfa4,// 342 PAY 311 

    0x85234ca3,// 343 PAY 312 

    0xea2c8ddd,// 344 PAY 313 

    0xba337c40,// 345 PAY 314 

    0xcc3b25e5,// 346 PAY 315 

    0x9d836771,// 347 PAY 316 

    0x0dfe748e,// 348 PAY 317 

    0x3a46f1c7,// 349 PAY 318 

    0x98ed6579,// 350 PAY 319 

    0xe48fe0e8,// 351 PAY 320 

    0x010eef1c,// 352 PAY 321 

    0x2b3fc12a,// 353 PAY 322 

    0x3945f9ee,// 354 PAY 323 

    0x356bb640,// 355 PAY 324 

    0x51512f12,// 356 PAY 325 

    0x265ef7ae,// 357 PAY 326 

    0x595a9ce1,// 358 PAY 327 

    0x1b926409,// 359 PAY 328 

    0x4dd35230,// 360 PAY 329 

    0x1c188671,// 361 PAY 330 

    0x144eee76,// 362 PAY 331 

    0x4333dec8,// 363 PAY 332 

    0xf7bb7de2,// 364 PAY 333 

    0x89ec2acd,// 365 PAY 334 

    0x49088934,// 366 PAY 335 

    0xaa3bd1d6,// 367 PAY 336 

    0x1ebfaf8c,// 368 PAY 337 

    0xbe8096ab,// 369 PAY 338 

    0x63e84600,// 370 PAY 339 

    0x7e5d3e3d,// 371 PAY 340 

    0xe77c4003,// 372 PAY 341 

    0xfb421fd8,// 373 PAY 342 

    0x7df6c682,// 374 PAY 343 

    0x17de5fba,// 375 PAY 344 

    0x3bfe315a,// 376 PAY 345 

    0x3ed53bbf,// 377 PAY 346 

    0xa37224bc,// 378 PAY 347 

    0x6799e762,// 379 PAY 348 

    0x317a4c3b,// 380 PAY 349 

    0xb256d298,// 381 PAY 350 

    0x30bd039e,// 382 PAY 351 

    0xf5f81bb3,// 383 PAY 352 

    0xddf4559b,// 384 PAY 353 

    0xc3615f6e,// 385 PAY 354 

    0x99f7ede8,// 386 PAY 355 

    0x813b9d6c,// 387 PAY 356 

    0x24d85ad2,// 388 PAY 357 

    0x90b0f229,// 389 PAY 358 

    0x89bdd0ef,// 390 PAY 359 

    0xa55c077c,// 391 PAY 360 

    0xac752890,// 392 PAY 361 

    0xf8266fd8,// 393 PAY 362 

    0x88cfb298,// 394 PAY 363 

    0x16356390,// 395 PAY 364 

    0x2e16bc41,// 396 PAY 365 

    0xfbe99a09,// 397 PAY 366 

    0x2e91c8ad,// 398 PAY 367 

    0xcfd079d7,// 399 PAY 368 

    0x77e29276,// 400 PAY 369 

    0x7d336873,// 401 PAY 370 

    0x34602e75,// 402 PAY 371 

    0x8770d505,// 403 PAY 372 

    0x9bb96f8d,// 404 PAY 373 

    0x37bf307f,// 405 PAY 374 

    0xe42d1f41,// 406 PAY 375 

    0xba821e17,// 407 PAY 376 

    0xbd245575,// 408 PAY 377 

    0xa6c10db5,// 409 PAY 378 

    0x2de6e446,// 410 PAY 379 

    0xb5a02b80,// 411 PAY 380 

    0x70018e44,// 412 PAY 381 

    0x93a8194c,// 413 PAY 382 

    0x60fc5ed5,// 414 PAY 383 

    0xcea40a16,// 415 PAY 384 

    0x0f1e1d3c,// 416 PAY 385 

    0xae1ef164,// 417 PAY 386 

    0x63c7d7d1,// 418 PAY 387 

    0x3edd9313,// 419 PAY 388 

    0xe379355c,// 420 PAY 389 

    0xe742d5a4,// 421 PAY 390 

    0x645a792f,// 422 PAY 391 

    0xedc972df,// 423 PAY 392 

    0xcbe27842,// 424 PAY 393 

    0x2193a206,// 425 PAY 394 

    0xb1a270f7,// 426 PAY 395 

    0xc5413a7d,// 427 PAY 396 

    0x0784fd6c,// 428 PAY 397 

    0x39d336fb,// 429 PAY 398 

    0xc74a0f41,// 430 PAY 399 

    0x8b6594fe,// 431 PAY 400 

    0x66dcd55b,// 432 PAY 401 

    0xb989f1fc,// 433 PAY 402 

    0xe988e86c,// 434 PAY 403 

    0xe2ae6108,// 435 PAY 404 

    0xba85c8b1,// 436 PAY 405 

    0x3518d7db,// 437 PAY 406 

    0xe979a42e,// 438 PAY 407 

    0xc3ff24b5,// 439 PAY 408 

    0x35fdd523,// 440 PAY 409 

    0x6eab508c,// 441 PAY 410 

    0x1e9f3e99,// 442 PAY 411 

    0x3f8eab1e,// 443 PAY 412 

    0x32c3e8f3,// 444 PAY 413 

    0x7b5cd77e,// 445 PAY 414 

    0xd1878c7f,// 446 PAY 415 

    0x582d03e0,// 447 PAY 416 

    0x8389f62f,// 448 PAY 417 

    0xdbc07442,// 449 PAY 418 

    0x82079a64,// 450 PAY 419 

    0x9954c8e3,// 451 PAY 420 

    0x84a758c4,// 452 PAY 421 

    0x23564c9b,// 453 PAY 422 

    0x4715233a,// 454 PAY 423 

    0xbd30c208,// 455 PAY 424 

    0x0bd5a271,// 456 PAY 425 

    0xa2d6c257,// 457 PAY 426 

    0x9e07f740,// 458 PAY 427 

    0xcfaacf09,// 459 PAY 428 

    0x13b537dc,// 460 PAY 429 

    0x6cb86579,// 461 PAY 430 

    0x912af7dc,// 462 PAY 431 

    0xee671e50,// 463 PAY 432 

    0x516a8009,// 464 PAY 433 

    0x06c6cc23,// 465 PAY 434 

    0x819d4e59,// 466 PAY 435 

    0xf56ee244,// 467 PAY 436 

    0xad85a3d0,// 468 PAY 437 

    0xf89d49a2,// 469 PAY 438 

    0xc7b79690,// 470 PAY 439 

    0xf4d0c7e9,// 471 PAY 440 

    0xa513a7cb,// 472 PAY 441 

    0x0fef36e7,// 473 PAY 442 

    0xbbe7f192,// 474 PAY 443 

    0x5dd0142b,// 475 PAY 444 

    0xea7d8736,// 476 PAY 445 

    0x164c449f,// 477 PAY 446 

    0xef64360e,// 478 PAY 447 

    0x146ea541,// 479 PAY 448 

    0x3d5f8add,// 480 PAY 449 

    0xf925f206,// 481 PAY 450 

    0x74b9d0b0,// 482 PAY 451 

    0x36f26f72,// 483 PAY 452 

    0xceaebff5,// 484 PAY 453 

    0xf3dc85e3,// 485 PAY 454 

    0xeb941a7d,// 486 PAY 455 

    0x78d93de5,// 487 PAY 456 

    0xe4e6bcab,// 488 PAY 457 

    0x1160e408,// 489 PAY 458 

    0xb624948f,// 490 PAY 459 

    0xde6f2fe4,// 491 PAY 460 

    0xf09bccac,// 492 PAY 461 

    0x859d3277,// 493 PAY 462 

    0x11251992,// 494 PAY 463 

    0xb7278bf4,// 495 PAY 464 

    0x5e795bd0,// 496 PAY 465 

    0x8100ef6e,// 497 PAY 466 

    0xa3ceaccb,// 498 PAY 467 

    0xe0b8451a,// 499 PAY 468 

    0x88acedde,// 500 PAY 469 

    0xfe37c612,// 501 PAY 470 

    0x928b53a9,// 502 PAY 471 

    0x339f22ec,// 503 PAY 472 

    0x0ee37281,// 504 PAY 473 

    0xa1dd43e2,// 505 PAY 474 

    0xf2e43e7b,// 506 PAY 475 

    0xda2e75cc,// 507 PAY 476 

    0x6ae9371e,// 508 PAY 477 

    0x1dfa0f88,// 509 PAY 478 

    0xc747b41b,// 510 PAY 479 

    0x50cb46cb,// 511 PAY 480 

    0x93c1d803,// 512 PAY 481 

    0x4eaeab18,// 513 PAY 482 

    0x6cb0e54a,// 514 PAY 483 

    0xf2449d7b,// 515 PAY 484 

    0x32a37488,// 516 PAY 485 

    0xe1be2eed,// 517 PAY 486 

    0x55be92bf,// 518 PAY 487 

    0x6d26b208,// 519 PAY 488 

    0x2c73ad8d,// 520 PAY 489 

    0x914cc624,// 521 PAY 490 

    0x9964f42d,// 522 PAY 491 

    0x7cd441e5,// 523 PAY 492 

    0x78a82683,// 524 PAY 493 

    0xb170765e,// 525 PAY 494 

    0xa4cc694c,// 526 PAY 495 

    0x40322134,// 527 PAY 496 

    0xbc52fbce,// 528 PAY 497 

    0x2097bbcd,// 529 PAY 498 

    0x05829cd1,// 530 PAY 499 

    0xef8d3d69,// 531 PAY 500 

    0x38d6175b,// 532 PAY 501 

    0x9ef86122,// 533 PAY 502 

    0x4449e400,// 534 PAY 503 

/// STA is 1 words. 

/// STA num_pkts       : 244 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7a 

    0x01107af4 // 535 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt60_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80602869,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xb5a8e6b3,// 6 SCX   4 

    0xb15743af,// 7 SCX   5 

    0x4a858ebc,// 8 SCX   6 

    0x51def40a,// 9 SCX   7 

    0x5c4b1def,// 10 SCX   8 

    0xa6d5108e,// 11 SCX   9 

    0xf4b68ac4,// 12 SCX  10 

    0x2ea60d10,// 13 SCX  11 

    0x7dc73305,// 14 SCX  12 

    0xa3025067,// 15 SCX  13 

    0xe3f8c393,// 16 SCX  14 

    0x562b6915,// 17 SCX  15 

    0x43398642,// 18 SCX  16 

    0x413280c1,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1077 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1039 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1039 

/// BFD lencrypto      : 88 

/// BFD ofstcrypto     : 484 

/// BFD (ofst+len)cry  : 572 

/// BFD ofstiv         : 336 

/// BFD ofsticv        : 1044 

    0x0000040f,// 20 BFD   1 

    0x01e40058,// 21 BFD   2 

    0x04140150,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00a982,// 23 MFM   1 

    0x6d366a2c,// 24 MFM   2 

    0xcec35ed2,// 25 MFM   3 

    0x3acfec49,// 26 MFM   4 

    0xe7934ab1,// 27 MFM   5 

    0x46bd4e73,// 28 MFM   6 

    0xbc9399c7,// 29 MFM   7 

    0xd53bbb83,// 30 MFM   8 

    0x072076fe,// 31 MFM   9 

    0x88af300f,// 32 MFM  10 

    0x5d405444,// 33 MFM  11 

    0x13b83e5e,// 34 MFM  12 

    0xd8c0c41a,// 35 MFM  13 

    0x368b421f,// 36 MFM  14 

    0x32fb5f86,// 37 MFM  15 

    0xddb7c116,// 38 MFM  16 

/// BDA is 271 words. 

/// BDA size     is 1077 (0x435) 

/// BDA id       is 0x6d6b 

    0x04356d6b,// 39 BDA   1 

/// PAY Generic Data size   : 1077 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x0563b74f,// 40 PAY   1 

    0xa847150c,// 41 PAY   2 

    0xf0cc4df0,// 42 PAY   3 

    0x62d9a1ae,// 43 PAY   4 

    0xd6c9577e,// 44 PAY   5 

    0x220c924f,// 45 PAY   6 

    0x6e4d1e2b,// 46 PAY   7 

    0x5234528f,// 47 PAY   8 

    0x5d4d4525,// 48 PAY   9 

    0x952377ae,// 49 PAY  10 

    0x0b877731,// 50 PAY  11 

    0xf165d633,// 51 PAY  12 

    0x7afceb4f,// 52 PAY  13 

    0x2e881570,// 53 PAY  14 

    0x861d2630,// 54 PAY  15 

    0xfcac507f,// 55 PAY  16 

    0x3bf6577c,// 56 PAY  17 

    0x1bfa71cf,// 57 PAY  18 

    0xd2b6862e,// 58 PAY  19 

    0x5e11c2ab,// 59 PAY  20 

    0xe5ed1b88,// 60 PAY  21 

    0x494bd55c,// 61 PAY  22 

    0x9cd9b181,// 62 PAY  23 

    0x24f97611,// 63 PAY  24 

    0x1cdcaed7,// 64 PAY  25 

    0xda405a16,// 65 PAY  26 

    0x90abdecc,// 66 PAY  27 

    0xa368c666,// 67 PAY  28 

    0x92caddb4,// 68 PAY  29 

    0xc588fef7,// 69 PAY  30 

    0xaef0508b,// 70 PAY  31 

    0xd0c1c6b0,// 71 PAY  32 

    0xdaeb7337,// 72 PAY  33 

    0xf3ae41ff,// 73 PAY  34 

    0x39c8c638,// 74 PAY  35 

    0x52fbfb74,// 75 PAY  36 

    0x5a5c8e1b,// 76 PAY  37 

    0x5f42bbf0,// 77 PAY  38 

    0x1b1560b6,// 78 PAY  39 

    0xa450f3d1,// 79 PAY  40 

    0xe1731cda,// 80 PAY  41 

    0xc02f6c35,// 81 PAY  42 

    0xbd4e6c33,// 82 PAY  43 

    0x23868ca1,// 83 PAY  44 

    0xef2622bc,// 84 PAY  45 

    0x05f73fe4,// 85 PAY  46 

    0x53dfbd6e,// 86 PAY  47 

    0x4dae091b,// 87 PAY  48 

    0x133bbf22,// 88 PAY  49 

    0x7928748c,// 89 PAY  50 

    0x64d09b75,// 90 PAY  51 

    0xf0372281,// 91 PAY  52 

    0x5c00a13c,// 92 PAY  53 

    0xafd76a3b,// 93 PAY  54 

    0x4cb152b1,// 94 PAY  55 

    0x1aee81bc,// 95 PAY  56 

    0xae464700,// 96 PAY  57 

    0xce169f7f,// 97 PAY  58 

    0xca15fa4e,// 98 PAY  59 

    0x08094514,// 99 PAY  60 

    0xbefdfcb9,// 100 PAY  61 

    0xd3a0a132,// 101 PAY  62 

    0x0f5ff80d,// 102 PAY  63 

    0x7eba0a9f,// 103 PAY  64 

    0x4debb848,// 104 PAY  65 

    0x38c180dd,// 105 PAY  66 

    0xcbe5f48a,// 106 PAY  67 

    0x788b70c3,// 107 PAY  68 

    0x518b2b4b,// 108 PAY  69 

    0xb345232f,// 109 PAY  70 

    0x74fb1a17,// 110 PAY  71 

    0xd7078667,// 111 PAY  72 

    0x8cb4a22b,// 112 PAY  73 

    0xac5b0937,// 113 PAY  74 

    0xdb8e9d08,// 114 PAY  75 

    0x854545fa,// 115 PAY  76 

    0x0e3c100f,// 116 PAY  77 

    0x4c0a2689,// 117 PAY  78 

    0xf9e750e9,// 118 PAY  79 

    0x123edbad,// 119 PAY  80 

    0x68f6888b,// 120 PAY  81 

    0xb3eb7256,// 121 PAY  82 

    0xd5f9302f,// 122 PAY  83 

    0x100f8732,// 123 PAY  84 

    0x70caa38c,// 124 PAY  85 

    0x9a908355,// 125 PAY  86 

    0x9bbb1817,// 126 PAY  87 

    0x3e1c3377,// 127 PAY  88 

    0x8e49d671,// 128 PAY  89 

    0xe35a1fec,// 129 PAY  90 

    0x233f4c8e,// 130 PAY  91 

    0x63bee6fd,// 131 PAY  92 

    0x99ead7aa,// 132 PAY  93 

    0xb987615b,// 133 PAY  94 

    0x83e06833,// 134 PAY  95 

    0x25b4aefa,// 135 PAY  96 

    0x852d22ae,// 136 PAY  97 

    0x8a6eaf80,// 137 PAY  98 

    0xac7e6528,// 138 PAY  99 

    0x5db51095,// 139 PAY 100 

    0x82794e23,// 140 PAY 101 

    0x7344f0a7,// 141 PAY 102 

    0x0c88db72,// 142 PAY 103 

    0x73c2b790,// 143 PAY 104 

    0x64ffd0c8,// 144 PAY 105 

    0x620d591d,// 145 PAY 106 

    0x3e8c7cdf,// 146 PAY 107 

    0x12369bac,// 147 PAY 108 

    0xb4762d4e,// 148 PAY 109 

    0x47010767,// 149 PAY 110 

    0xfe6d5f1c,// 150 PAY 111 

    0xc21c05c7,// 151 PAY 112 

    0x3501223b,// 152 PAY 113 

    0xa027f453,// 153 PAY 114 

    0x8a79e95b,// 154 PAY 115 

    0xa09bbb46,// 155 PAY 116 

    0x732d382e,// 156 PAY 117 

    0x7b952202,// 157 PAY 118 

    0x976230c3,// 158 PAY 119 

    0xdb189bb6,// 159 PAY 120 

    0xdd211d83,// 160 PAY 121 

    0x2c09c0ee,// 161 PAY 122 

    0x3fef7887,// 162 PAY 123 

    0x740a18fd,// 163 PAY 124 

    0x2599134c,// 164 PAY 125 

    0x70845480,// 165 PAY 126 

    0xb0c544b0,// 166 PAY 127 

    0x1cbc88c8,// 167 PAY 128 

    0x3016f6e8,// 168 PAY 129 

    0x715fd0f9,// 169 PAY 130 

    0xbf9cba6d,// 170 PAY 131 

    0xc6967650,// 171 PAY 132 

    0xfe3561b9,// 172 PAY 133 

    0xdef15cf8,// 173 PAY 134 

    0xaea1e15a,// 174 PAY 135 

    0x946e5dc5,// 175 PAY 136 

    0x84eeda49,// 176 PAY 137 

    0x335149be,// 177 PAY 138 

    0x92140819,// 178 PAY 139 

    0xd10fbfea,// 179 PAY 140 

    0x5e4f54f0,// 180 PAY 141 

    0x4ff968e0,// 181 PAY 142 

    0xf316f988,// 182 PAY 143 

    0xdf655ad1,// 183 PAY 144 

    0x515d9ee8,// 184 PAY 145 

    0x4f011218,// 185 PAY 146 

    0x352da860,// 186 PAY 147 

    0xc5ff4d67,// 187 PAY 148 

    0xa7356eea,// 188 PAY 149 

    0xc0a83739,// 189 PAY 150 

    0x7fd30891,// 190 PAY 151 

    0xd040d325,// 191 PAY 152 

    0x0171ea95,// 192 PAY 153 

    0xf721cfcd,// 193 PAY 154 

    0x1a7e78bc,// 194 PAY 155 

    0x0955d93c,// 195 PAY 156 

    0xd2c9dfe6,// 196 PAY 157 

    0x1384c9dc,// 197 PAY 158 

    0x4b0428e2,// 198 PAY 159 

    0xc529a9dd,// 199 PAY 160 

    0x7c1aadc7,// 200 PAY 161 

    0xda01ac75,// 201 PAY 162 

    0xec621064,// 202 PAY 163 

    0x8a7a4d9b,// 203 PAY 164 

    0xb02a79d2,// 204 PAY 165 

    0xc0d65a8f,// 205 PAY 166 

    0x1c097008,// 206 PAY 167 

    0x5b0255a8,// 207 PAY 168 

    0x0520980b,// 208 PAY 169 

    0xb231b77c,// 209 PAY 170 

    0x753385f1,// 210 PAY 171 

    0x2666629a,// 211 PAY 172 

    0x3619109e,// 212 PAY 173 

    0x600a5bbc,// 213 PAY 174 

    0x352804d8,// 214 PAY 175 

    0xa3fe9455,// 215 PAY 176 

    0xbd704350,// 216 PAY 177 

    0x762bef74,// 217 PAY 178 

    0x17c57615,// 218 PAY 179 

    0xc41310cf,// 219 PAY 180 

    0x823351d8,// 220 PAY 181 

    0x6d99fdcc,// 221 PAY 182 

    0x41936330,// 222 PAY 183 

    0x3486dd17,// 223 PAY 184 

    0xf28c563a,// 224 PAY 185 

    0x8f0858bb,// 225 PAY 186 

    0x03a7ef78,// 226 PAY 187 

    0x795bc02c,// 227 PAY 188 

    0x9ac87d81,// 228 PAY 189 

    0x0f3b729a,// 229 PAY 190 

    0xbc4067c1,// 230 PAY 191 

    0x47d5c5fd,// 231 PAY 192 

    0x6a805656,// 232 PAY 193 

    0xa7da2cad,// 233 PAY 194 

    0x10557b6d,// 234 PAY 195 

    0x7d1f6837,// 235 PAY 196 

    0x80324980,// 236 PAY 197 

    0x17faa5b8,// 237 PAY 198 

    0x6aa12720,// 238 PAY 199 

    0x458b0e78,// 239 PAY 200 

    0xbda0409f,// 240 PAY 201 

    0x5af3cd12,// 241 PAY 202 

    0x25397088,// 242 PAY 203 

    0x5cca54e0,// 243 PAY 204 

    0x1892c8f4,// 244 PAY 205 

    0xbfd0b2fe,// 245 PAY 206 

    0xd29a4b38,// 246 PAY 207 

    0x951c043c,// 247 PAY 208 

    0xf062be56,// 248 PAY 209 

    0xe6a4997d,// 249 PAY 210 

    0xa73df7fc,// 250 PAY 211 

    0x1bb7d39e,// 251 PAY 212 

    0x6fabe8aa,// 252 PAY 213 

    0x4a1bbecb,// 253 PAY 214 

    0x6c9c1c28,// 254 PAY 215 

    0x5e2bb4da,// 255 PAY 216 

    0xeaa0b09b,// 256 PAY 217 

    0x798fc14a,// 257 PAY 218 

    0x6d14ecf7,// 258 PAY 219 

    0xe3d5cfc8,// 259 PAY 220 

    0x868022d5,// 260 PAY 221 

    0x4ef5832f,// 261 PAY 222 

    0xe632d969,// 262 PAY 223 

    0x89da5e94,// 263 PAY 224 

    0xae4a68fc,// 264 PAY 225 

    0xc894e55f,// 265 PAY 226 

    0xc605c8a0,// 266 PAY 227 

    0x20e88a44,// 267 PAY 228 

    0x8140cc41,// 268 PAY 229 

    0xa20ff1ce,// 269 PAY 230 

    0x5f35a165,// 270 PAY 231 

    0x24cb9fde,// 271 PAY 232 

    0x2605e6b6,// 272 PAY 233 

    0x6622a2a2,// 273 PAY 234 

    0xa1884d71,// 274 PAY 235 

    0x78fd88c3,// 275 PAY 236 

    0x6aa1fd1c,// 276 PAY 237 

    0xb6f99946,// 277 PAY 238 

    0x07a07f92,// 278 PAY 239 

    0x00b3d27d,// 279 PAY 240 

    0x8cc41be3,// 280 PAY 241 

    0x0f34e924,// 281 PAY 242 

    0xf5388c93,// 282 PAY 243 

    0xf8ec9370,// 283 PAY 244 

    0x8576012a,// 284 PAY 245 

    0x568216d6,// 285 PAY 246 

    0x3f3c6432,// 286 PAY 247 

    0x706171b5,// 287 PAY 248 

    0x2a9ffa3e,// 288 PAY 249 

    0xd8592cd2,// 289 PAY 250 

    0x7168dbfa,// 290 PAY 251 

    0x5b6a9470,// 291 PAY 252 

    0x2666dbcb,// 292 PAY 253 

    0x6b851531,// 293 PAY 254 

    0xd38beeba,// 294 PAY 255 

    0x2f5f1582,// 295 PAY 256 

    0xe4cf79ff,// 296 PAY 257 

    0x966fb515,// 297 PAY 258 

    0xd863dec9,// 298 PAY 259 

    0xfe7ffd8f,// 299 PAY 260 

    0xf91c89a3,// 300 PAY 261 

    0xb14d9afc,// 301 PAY 262 

    0x9bdac21e,// 302 PAY 263 

    0x39b7d318,// 303 PAY 264 

    0x51a7148c,// 304 PAY 265 

    0xff64fcd5,// 305 PAY 266 

    0x68f99d48,// 306 PAY 267 

    0xceffb823,// 307 PAY 268 

    0x4081abb6,// 308 PAY 269 

    0xac000000,// 309 PAY 270 

/// STA is 1 words. 

/// STA num_pkts       : 18 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xda 

    0x0051da12 // 310 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt61_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806628b0,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0xfed544cc,// 6 SCX   4 

    0x5f565f2f,// 7 SCX   5 

    0x26e66c0d,// 8 SCX   6 

    0x6ff5201a,// 9 SCX   7 

    0x582f24e3,// 10 SCX   8 

    0x07de19df,// 11 SCX   9 

    0xe58ddec5,// 12 SCX  10 

    0x8101776b,// 13 SCX  11 

    0x166a856c,// 14 SCX  12 

    0x2febd0cf,// 15 SCX  13 

    0x27fd163c,// 16 SCX  14 

    0x41951f59,// 17 SCX  15 

    0xcd990e55,// 18 SCX  16 

    0x6525a099,// 19 SCX  17 

    0xbf1fb002,// 20 SCX  18 

    0x4782174a,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 465 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 413 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 413 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 264 

/// BFD (ofst+len)cry  : 304 

/// BFD ofstiv         : 196 

/// BFD ofsticv        : 420 

    0x0000019d,// 22 BFD   1 

    0x01080028,// 23 BFD   2 

    0x01a400c4,// 24 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 45 

    0x4500e20e,// 25 MFM   1 

    0x02614815,// 26 MFM   2 

    0xa238cf17,// 27 MFM   3 

    0x6dac6f2f,// 28 MFM   4 

    0x16dfbdca,// 29 MFM   5 

    0x27f01e54,// 30 MFM   6 

    0xc3f64f1e,// 31 MFM   7 

    0x99c7bddc,// 32 MFM   8 

    0xa2e7decd,// 33 MFM   9 

    0x90000000,// 34 MFM  10 

/// BDA is 118 words. 

/// BDA size     is 465 (0x1d1) 

/// BDA id       is 0xb58b 

    0x01d1b58b,// 35 BDA   1 

/// PAY Generic Data size   : 465 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x934523e8,// 36 PAY   1 

    0x3215014e,// 37 PAY   2 

    0x58972a2c,// 38 PAY   3 

    0xf6d8edc5,// 39 PAY   4 

    0x2e962b82,// 40 PAY   5 

    0x485c99d8,// 41 PAY   6 

    0xd8ae936d,// 42 PAY   7 

    0x18ae98ad,// 43 PAY   8 

    0x13a2fd26,// 44 PAY   9 

    0xa12384cc,// 45 PAY  10 

    0x4da39508,// 46 PAY  11 

    0xebc2fb5f,// 47 PAY  12 

    0x3eddf7c1,// 48 PAY  13 

    0x180e4002,// 49 PAY  14 

    0xba26b276,// 50 PAY  15 

    0xb007af1c,// 51 PAY  16 

    0xd8949def,// 52 PAY  17 

    0x65ab970b,// 53 PAY  18 

    0x08f921a4,// 54 PAY  19 

    0x7e8b6c13,// 55 PAY  20 

    0x590a999f,// 56 PAY  21 

    0xa93a409e,// 57 PAY  22 

    0x70f111f0,// 58 PAY  23 

    0xdd46c662,// 59 PAY  24 

    0x081155ae,// 60 PAY  25 

    0x3bb1cf67,// 61 PAY  26 

    0x6e1260e4,// 62 PAY  27 

    0x0d5c75a9,// 63 PAY  28 

    0x06ab90e7,// 64 PAY  29 

    0x93711c5a,// 65 PAY  30 

    0x38bda3f0,// 66 PAY  31 

    0xfb7b0a3b,// 67 PAY  32 

    0x72b2e5cb,// 68 PAY  33 

    0x0e4a0d7a,// 69 PAY  34 

    0x5dd443d0,// 70 PAY  35 

    0x81782db8,// 71 PAY  36 

    0xd64ec731,// 72 PAY  37 

    0xdca0f562,// 73 PAY  38 

    0xc1bb70df,// 74 PAY  39 

    0x8093f14e,// 75 PAY  40 

    0x5421a821,// 76 PAY  41 

    0x9a3ad9fb,// 77 PAY  42 

    0xe4c38e2d,// 78 PAY  43 

    0xaa1951b5,// 79 PAY  44 

    0x15993a02,// 80 PAY  45 

    0x65ffc0c0,// 81 PAY  46 

    0xf71fccc2,// 82 PAY  47 

    0x5de33066,// 83 PAY  48 

    0xb7de89af,// 84 PAY  49 

    0x4e514fba,// 85 PAY  50 

    0x5be1a258,// 86 PAY  51 

    0x663add1f,// 87 PAY  52 

    0x4b113471,// 88 PAY  53 

    0x5530dc2c,// 89 PAY  54 

    0x82547ac0,// 90 PAY  55 

    0x6024d3ca,// 91 PAY  56 

    0x04ae6de5,// 92 PAY  57 

    0xc9750621,// 93 PAY  58 

    0x51e9ffad,// 94 PAY  59 

    0xc9af76f4,// 95 PAY  60 

    0xb27adb11,// 96 PAY  61 

    0x6972f129,// 97 PAY  62 

    0x5964ab03,// 98 PAY  63 

    0xc2a270b8,// 99 PAY  64 

    0x92723007,// 100 PAY  65 

    0x113c7a5b,// 101 PAY  66 

    0xdb04784f,// 102 PAY  67 

    0xf8b2af19,// 103 PAY  68 

    0xc24a639c,// 104 PAY  69 

    0xa4193362,// 105 PAY  70 

    0x3783fda4,// 106 PAY  71 

    0x3bef27d0,// 107 PAY  72 

    0x0c716e7a,// 108 PAY  73 

    0x12d8757d,// 109 PAY  74 

    0x875fcf5a,// 110 PAY  75 

    0xb14edbd2,// 111 PAY  76 

    0xe66ab173,// 112 PAY  77 

    0x8ccad062,// 113 PAY  78 

    0x2896f173,// 114 PAY  79 

    0xaff28f34,// 115 PAY  80 

    0xf1909c1b,// 116 PAY  81 

    0x58628b58,// 117 PAY  82 

    0x550e6299,// 118 PAY  83 

    0x4bdf023e,// 119 PAY  84 

    0x7d994681,// 120 PAY  85 

    0x9a530e5a,// 121 PAY  86 

    0xd5ff1940,// 122 PAY  87 

    0x9564b354,// 123 PAY  88 

    0x0957c73a,// 124 PAY  89 

    0x6d8914bc,// 125 PAY  90 

    0xfdd1be04,// 126 PAY  91 

    0xd062fc10,// 127 PAY  92 

    0x75eab4f0,// 128 PAY  93 

    0xf79ef619,// 129 PAY  94 

    0x9306e23a,// 130 PAY  95 

    0xe64582d9,// 131 PAY  96 

    0x7d8b3701,// 132 PAY  97 

    0x0bdba11d,// 133 PAY  98 

    0xb938fd22,// 134 PAY  99 

    0xe9700e15,// 135 PAY 100 

    0xe0c42885,// 136 PAY 101 

    0x0c347050,// 137 PAY 102 

    0x5611c18d,// 138 PAY 103 

    0xa583d082,// 139 PAY 104 

    0xdc584f05,// 140 PAY 105 

    0xad4864bc,// 141 PAY 106 

    0xdedab474,// 142 PAY 107 

    0x80fcc443,// 143 PAY 108 

    0x824c33f0,// 144 PAY 109 

    0x7feded7d,// 145 PAY 110 

    0xe9d1c315,// 146 PAY 111 

    0x1584578f,// 147 PAY 112 

    0xa83da200,// 148 PAY 113 

    0x19639b39,// 149 PAY 114 

    0x9dc32f6f,// 150 PAY 115 

    0xc91f09e3,// 151 PAY 116 

    0xfa000000,// 152 PAY 117 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x03586eb2 // 153 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt62_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80612870,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x0c8986d9,// 6 SCX   4 

    0x91c238e3,// 7 SCX   5 

    0x406364e4,// 8 SCX   6 

    0x50215c2d,// 9 SCX   7 

    0xe52ffe91,// 10 SCX   8 

    0xe49e4c23,// 11 SCX   9 

    0x80ce95d7,// 12 SCX  10 

    0x678eb8fb,// 13 SCX  11 

    0x621b4a42,// 14 SCX  12 

    0x1148fbf0,// 15 SCX  13 

    0x38b5d365,// 16 SCX  14 

    0x991ccfdc,// 17 SCX  15 

    0xd61c18f9,// 18 SCX  16 

    0x8f22c456,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1185 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 436 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 436 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 20 

/// BFD (ofst+len)cry  : 132 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 936 

    0x000001b4,// 20 BFD   1 

    0x00140070,// 21 BFD   2 

    0x03a80004,// 22 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 62 

    0x62008b0f,// 23 MFM   1 

    0x137f9af2,// 24 MFM   2 

    0x9cc6d840,// 25 MFM   3 

    0xac3b55f6,// 26 MFM   4 

    0x66a752f1,// 27 MFM   5 

    0x11b6ef9d,// 28 MFM   6 

    0x82fc984c,// 29 MFM   7 

    0x1e9b6b3e,// 30 MFM   8 

    0xfe5e77f6,// 31 MFM   9 

    0xa716f8a9,// 32 MFM  10 

    0xd922cd64,// 33 MFM  11 

    0x458b9cc0,// 34 MFM  12 

    0x68ef4b00,// 35 MFM  13 

/// BDA is 298 words. 

/// BDA size     is 1185 (0x4a1) 

/// BDA id       is 0x8eca 

    0x04a18eca,// 36 BDA   1 

/// PAY Generic Data size   : 1185 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x0393938d,// 37 PAY   1 

    0xa122f2db,// 38 PAY   2 

    0x49858b4c,// 39 PAY   3 

    0xb78151b0,// 40 PAY   4 

    0x6a2e4037,// 41 PAY   5 

    0xa4efc35d,// 42 PAY   6 

    0xbdaca4bc,// 43 PAY   7 

    0x03d90c60,// 44 PAY   8 

    0x1c635101,// 45 PAY   9 

    0x943968a3,// 46 PAY  10 

    0x2f7dbbf8,// 47 PAY  11 

    0x5db34ab0,// 48 PAY  12 

    0x327b5678,// 49 PAY  13 

    0x546ec6c0,// 50 PAY  14 

    0x4ff813ae,// 51 PAY  15 

    0x6975641a,// 52 PAY  16 

    0xedecd5a7,// 53 PAY  17 

    0x72598906,// 54 PAY  18 

    0xd0a087a4,// 55 PAY  19 

    0x646628cd,// 56 PAY  20 

    0x3e2580a6,// 57 PAY  21 

    0x4dc973c4,// 58 PAY  22 

    0x8680550d,// 59 PAY  23 

    0x54e8589e,// 60 PAY  24 

    0xac16f32f,// 61 PAY  25 

    0x8ff12ec5,// 62 PAY  26 

    0xb8829e62,// 63 PAY  27 

    0x8d731f9a,// 64 PAY  28 

    0x715fd2a2,// 65 PAY  29 

    0x40c1c57b,// 66 PAY  30 

    0xf75039ad,// 67 PAY  31 

    0xd8a4c0e7,// 68 PAY  32 

    0x05c78ea8,// 69 PAY  33 

    0x2dacadd4,// 70 PAY  34 

    0x6373352d,// 71 PAY  35 

    0x2269ccf3,// 72 PAY  36 

    0x8ca73f64,// 73 PAY  37 

    0x3e4b9986,// 74 PAY  38 

    0xa2debe5b,// 75 PAY  39 

    0x1fac72ea,// 76 PAY  40 

    0xf21a5427,// 77 PAY  41 

    0x3de13454,// 78 PAY  42 

    0x2c000232,// 79 PAY  43 

    0x91041352,// 80 PAY  44 

    0x70b1457b,// 81 PAY  45 

    0xa5e6d12e,// 82 PAY  46 

    0x56aba714,// 83 PAY  47 

    0x9493528a,// 84 PAY  48 

    0x88d87c00,// 85 PAY  49 

    0x02677010,// 86 PAY  50 

    0x25b31ba1,// 87 PAY  51 

    0x06c0c5be,// 88 PAY  52 

    0x54bffb0f,// 89 PAY  53 

    0x62daeec5,// 90 PAY  54 

    0x1d9295f2,// 91 PAY  55 

    0x20c7f86a,// 92 PAY  56 

    0x678bd828,// 93 PAY  57 

    0x26709867,// 94 PAY  58 

    0x7e7d8ebd,// 95 PAY  59 

    0x5ba17a7e,// 96 PAY  60 

    0x0edf6aef,// 97 PAY  61 

    0x095704af,// 98 PAY  62 

    0x3c5baa5d,// 99 PAY  63 

    0xa86dff65,// 100 PAY  64 

    0xec70f1cf,// 101 PAY  65 

    0xb22228cf,// 102 PAY  66 

    0x6b16748f,// 103 PAY  67 

    0x26d538e6,// 104 PAY  68 

    0x0ab5eb05,// 105 PAY  69 

    0x4c779145,// 106 PAY  70 

    0x6cfb1128,// 107 PAY  71 

    0x53616ada,// 108 PAY  72 

    0x3b69f7fa,// 109 PAY  73 

    0x18722e71,// 110 PAY  74 

    0xa5bd16ec,// 111 PAY  75 

    0xc467261e,// 112 PAY  76 

    0x8627c949,// 113 PAY  77 

    0xd688be47,// 114 PAY  78 

    0x6ed12a5c,// 115 PAY  79 

    0xf10fdd94,// 116 PAY  80 

    0x097a4c16,// 117 PAY  81 

    0xbbd4d07a,// 118 PAY  82 

    0xf33542fe,// 119 PAY  83 

    0xf4324f61,// 120 PAY  84 

    0x333efb2e,// 121 PAY  85 

    0x5bf91726,// 122 PAY  86 

    0x29acacb1,// 123 PAY  87 

    0x50ac9fdb,// 124 PAY  88 

    0xbfb86510,// 125 PAY  89 

    0x89460451,// 126 PAY  90 

    0x281d5c5c,// 127 PAY  91 

    0x7c9f070b,// 128 PAY  92 

    0xbd929316,// 129 PAY  93 

    0xe1cf6232,// 130 PAY  94 

    0xd224ff01,// 131 PAY  95 

    0x27973b9f,// 132 PAY  96 

    0x9b7a09f7,// 133 PAY  97 

    0xc5ff4be6,// 134 PAY  98 

    0x5838bc54,// 135 PAY  99 

    0x610e3a89,// 136 PAY 100 

    0x94fcd911,// 137 PAY 101 

    0x26314d66,// 138 PAY 102 

    0xf81f90fc,// 139 PAY 103 

    0xc96deab1,// 140 PAY 104 

    0x4837eddc,// 141 PAY 105 

    0x968ad125,// 142 PAY 106 

    0x489ff91a,// 143 PAY 107 

    0xe835a642,// 144 PAY 108 

    0xcb8dea08,// 145 PAY 109 

    0x7b991d53,// 146 PAY 110 

    0xe65ea6b7,// 147 PAY 111 

    0x6cf7e9dc,// 148 PAY 112 

    0xb0e8fa30,// 149 PAY 113 

    0xa5f7dc25,// 150 PAY 114 

    0x75930657,// 151 PAY 115 

    0x85ec7315,// 152 PAY 116 

    0x9e237082,// 153 PAY 117 

    0x725d69b9,// 154 PAY 118 

    0xcc510b93,// 155 PAY 119 

    0x4823a89e,// 156 PAY 120 

    0xe504af1e,// 157 PAY 121 

    0xdc8255db,// 158 PAY 122 

    0x7e20f22e,// 159 PAY 123 

    0x8f9f0916,// 160 PAY 124 

    0xde8b0926,// 161 PAY 125 

    0x82363779,// 162 PAY 126 

    0xed5d04ac,// 163 PAY 127 

    0xd33d4298,// 164 PAY 128 

    0x28074314,// 165 PAY 129 

    0xf34e231d,// 166 PAY 130 

    0xa3c9124a,// 167 PAY 131 

    0x841e088b,// 168 PAY 132 

    0xcd5f68ed,// 169 PAY 133 

    0xd0412a76,// 170 PAY 134 

    0x3e96a588,// 171 PAY 135 

    0x2a7889f9,// 172 PAY 136 

    0xdbbb6467,// 173 PAY 137 

    0x8e972452,// 174 PAY 138 

    0xef9bcee0,// 175 PAY 139 

    0xf83f45a9,// 176 PAY 140 

    0x85c146fa,// 177 PAY 141 

    0xa75a16c5,// 178 PAY 142 

    0x95c2ef82,// 179 PAY 143 

    0xf087f5f5,// 180 PAY 144 

    0xe157408b,// 181 PAY 145 

    0xda2bc7c3,// 182 PAY 146 

    0x0120140f,// 183 PAY 147 

    0x6dd83ccb,// 184 PAY 148 

    0xe9ab0b6e,// 185 PAY 149 

    0x66390bb3,// 186 PAY 150 

    0x92d028a3,// 187 PAY 151 

    0xd9678d02,// 188 PAY 152 

    0x0a4e21bd,// 189 PAY 153 

    0x980e50b9,// 190 PAY 154 

    0xc8aac6b8,// 191 PAY 155 

    0x6d530bab,// 192 PAY 156 

    0x81c64421,// 193 PAY 157 

    0x297432a5,// 194 PAY 158 

    0xca8ef9ad,// 195 PAY 159 

    0x7df6d760,// 196 PAY 160 

    0xa31bd6ed,// 197 PAY 161 

    0x9c61eb1c,// 198 PAY 162 

    0x366484cf,// 199 PAY 163 

    0xf80914ef,// 200 PAY 164 

    0x869c06c1,// 201 PAY 165 

    0xaf514267,// 202 PAY 166 

    0x0c9a5b42,// 203 PAY 167 

    0x5759570b,// 204 PAY 168 

    0xd4eaecb1,// 205 PAY 169 

    0x1dcae8ad,// 206 PAY 170 

    0xde7d2a3c,// 207 PAY 171 

    0x6b13f064,// 208 PAY 172 

    0x3417819d,// 209 PAY 173 

    0x7b72c98e,// 210 PAY 174 

    0x59b58a33,// 211 PAY 175 

    0x403142aa,// 212 PAY 176 

    0xab97bfe1,// 213 PAY 177 

    0x369b8db2,// 214 PAY 178 

    0xa655198f,// 215 PAY 179 

    0x685c8c58,// 216 PAY 180 

    0xeb490189,// 217 PAY 181 

    0xa82ac5fe,// 218 PAY 182 

    0x74d87287,// 219 PAY 183 

    0x6546db81,// 220 PAY 184 

    0xfe036fec,// 221 PAY 185 

    0xf0a24d3b,// 222 PAY 186 

    0xb90850e4,// 223 PAY 187 

    0x4fe81d9e,// 224 PAY 188 

    0x7a5b536b,// 225 PAY 189 

    0x363a8381,// 226 PAY 190 

    0xd65839a8,// 227 PAY 191 

    0x026694d4,// 228 PAY 192 

    0xe58a1b14,// 229 PAY 193 

    0xa752181a,// 230 PAY 194 

    0x4eab428b,// 231 PAY 195 

    0x63e9c48c,// 232 PAY 196 

    0x22ee4c85,// 233 PAY 197 

    0x1375b2ea,// 234 PAY 198 

    0xbf0f73bf,// 235 PAY 199 

    0x6258308c,// 236 PAY 200 

    0xb52d2f4d,// 237 PAY 201 

    0x56ff49f4,// 238 PAY 202 

    0xdcbe7f8a,// 239 PAY 203 

    0x5bcb4091,// 240 PAY 204 

    0xe1b7b957,// 241 PAY 205 

    0xa57a7780,// 242 PAY 206 

    0x9306eb7d,// 243 PAY 207 

    0x7eb05bf0,// 244 PAY 208 

    0x2d3e9e1b,// 245 PAY 209 

    0x644cfd6c,// 246 PAY 210 

    0x3fbdd083,// 247 PAY 211 

    0x8df0449f,// 248 PAY 212 

    0xffd2b5d0,// 249 PAY 213 

    0xef822892,// 250 PAY 214 

    0x635d5dde,// 251 PAY 215 

    0xb903fba7,// 252 PAY 216 

    0xaa4c1afd,// 253 PAY 217 

    0x2336e9eb,// 254 PAY 218 

    0x2bb83bae,// 255 PAY 219 

    0xad477af4,// 256 PAY 220 

    0xcec5410c,// 257 PAY 221 

    0x561435a3,// 258 PAY 222 

    0x46e9d742,// 259 PAY 223 

    0xf3730c81,// 260 PAY 224 

    0x156901bd,// 261 PAY 225 

    0x9e0c5bbc,// 262 PAY 226 

    0x0b7c9d19,// 263 PAY 227 

    0xe878753c,// 264 PAY 228 

    0x8b9dcd94,// 265 PAY 229 

    0x6ad01ec8,// 266 PAY 230 

    0x174c248d,// 267 PAY 231 

    0x52ca88d7,// 268 PAY 232 

    0xbf79f1eb,// 269 PAY 233 

    0xaeb6ebfc,// 270 PAY 234 

    0x0d9bf2bb,// 271 PAY 235 

    0x24a716b7,// 272 PAY 236 

    0x9b361d57,// 273 PAY 237 

    0x14cb4013,// 274 PAY 238 

    0x12b3a6ef,// 275 PAY 239 

    0x5a54966c,// 276 PAY 240 

    0x46cb4275,// 277 PAY 241 

    0xabdc3761,// 278 PAY 242 

    0x5fbf01b4,// 279 PAY 243 

    0x53ce466e,// 280 PAY 244 

    0xf5c9c574,// 281 PAY 245 

    0x69bae7b3,// 282 PAY 246 

    0x039008ef,// 283 PAY 247 

    0x35ba432d,// 284 PAY 248 

    0xfd819bb0,// 285 PAY 249 

    0x14ff2da7,// 286 PAY 250 

    0xa6895b12,// 287 PAY 251 

    0x40ca2dc2,// 288 PAY 252 

    0x438c030d,// 289 PAY 253 

    0x0f308b2e,// 290 PAY 254 

    0x8490bbea,// 291 PAY 255 

    0xf0dc3363,// 292 PAY 256 

    0x47f7bccd,// 293 PAY 257 

    0x924fce11,// 294 PAY 258 

    0x34238755,// 295 PAY 259 

    0xe15928b8,// 296 PAY 260 

    0x6ef8308d,// 297 PAY 261 

    0x0bf526bd,// 298 PAY 262 

    0xc3e285a7,// 299 PAY 263 

    0xac41188a,// 300 PAY 264 

    0x62e01b2e,// 301 PAY 265 

    0x729289c2,// 302 PAY 266 

    0xe5dbc081,// 303 PAY 267 

    0x117162cd,// 304 PAY 268 

    0xbede803a,// 305 PAY 269 

    0x4070d5a2,// 306 PAY 270 

    0x52153264,// 307 PAY 271 

    0x7491777d,// 308 PAY 272 

    0x57ad4ebf,// 309 PAY 273 

    0xfefa8612,// 310 PAY 274 

    0x7a7db524,// 311 PAY 275 

    0xdc8d947f,// 312 PAY 276 

    0x684b3418,// 313 PAY 277 

    0x2c34d20c,// 314 PAY 278 

    0xfea711bb,// 315 PAY 279 

    0xe9e334a0,// 316 PAY 280 

    0x173da67d,// 317 PAY 281 

    0x402f5921,// 318 PAY 282 

    0x31437496,// 319 PAY 283 

    0xfb7c7133,// 320 PAY 284 

    0x3c57f3db,// 321 PAY 285 

    0x6ef87994,// 322 PAY 286 

    0x6e3d46b1,// 323 PAY 287 

    0x486c4d0e,// 324 PAY 288 

    0xc1567d2a,// 325 PAY 289 

    0x5e37409e,// 326 PAY 290 

    0x7bc7b458,// 327 PAY 291 

    0x27303adf,// 328 PAY 292 

    0x5f7b6bea,// 329 PAY 293 

    0x60e4b11b,// 330 PAY 294 

    0xdd61a2f8,// 331 PAY 295 

    0xd7b82cd9,// 332 PAY 296 

    0x26000000,// 333 PAY 297 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 187 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdd 

    0x02ecdd80 // 334 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt63_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806228d8,// 4 SCX   2 

    0x00002200,// 5 SCX   3 

    0x6ec40d6f,// 6 SCX   4 

    0xd75bb23c,// 7 SCX   5 

    0xf4e7c7d8,// 8 SCX   6 

    0x7f753dd1,// 9 SCX   7 

    0xf2cd6729,// 10 SCX   8 

    0xbd030f25,// 11 SCX   9 

    0xb1063a22,// 12 SCX  10 

    0x38799bfb,// 13 SCX  11 

    0x2f314215,// 14 SCX  12 

    0x3cc2f4c6,// 15 SCX  13 

    0x545bdf2a,// 16 SCX  14 

    0xa010d2c1,// 17 SCX  15 

    0x53d91a04,// 18 SCX  16 

    0x63181a31,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1131 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 561 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 561 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 544 

/// BFD (ofst+len)cry  : 560 

/// BFD ofstiv         : 96 

/// BFD ofsticv        : 1032 

    0x00000231,// 20 BFD   1 

    0x02200010,// 21 BFD   2 

    0x04080060,// 22 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 34 

    0x34006b40,// 23 MFM   1 

    0xd1ce0f4f,// 24 MFM   2 

    0xbfc376ea,// 25 MFM   3 

    0xc2f85acf,// 26 MFM   4 

    0x5c1bc32b,// 27 MFM   5 

    0x39499a0d,// 28 MFM   6 

    0xfd7cfbd5,// 29 MFM   7 

/// BDA is 284 words. 

/// BDA size     is 1131 (0x46b) 

/// BDA id       is 0xad27 

    0x046bad27,// 30 BDA   1 

/// PAY Generic Data size   : 1131 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x16161d62,// 31 PAY   1 

    0x8ae89c91,// 32 PAY   2 

    0x0c1930f4,// 33 PAY   3 

    0x7cd00b64,// 34 PAY   4 

    0x6e7d4269,// 35 PAY   5 

    0x608c225b,// 36 PAY   6 

    0xcb249f5f,// 37 PAY   7 

    0x56bc050c,// 38 PAY   8 

    0xef1621cb,// 39 PAY   9 

    0x9c5f6974,// 40 PAY  10 

    0xcf75103e,// 41 PAY  11 

    0x060eecbf,// 42 PAY  12 

    0x7bafecce,// 43 PAY  13 

    0x9630351d,// 44 PAY  14 

    0xc89815a2,// 45 PAY  15 

    0x23db69fd,// 46 PAY  16 

    0xb14fa3d1,// 47 PAY  17 

    0x7d03bf9a,// 48 PAY  18 

    0xd1868cd9,// 49 PAY  19 

    0xd7f6e83e,// 50 PAY  20 

    0x7f4f5308,// 51 PAY  21 

    0x0ab9c49c,// 52 PAY  22 

    0x1ec65f1d,// 53 PAY  23 

    0xf81dd021,// 54 PAY  24 

    0x488b257a,// 55 PAY  25 

    0xa401f341,// 56 PAY  26 

    0x99edf7c7,// 57 PAY  27 

    0x6eda83ca,// 58 PAY  28 

    0xac202118,// 59 PAY  29 

    0x491ec6f8,// 60 PAY  30 

    0x2e88605c,// 61 PAY  31 

    0x61e361ec,// 62 PAY  32 

    0xe80a3e80,// 63 PAY  33 

    0xf8675794,// 64 PAY  34 

    0xe5e3ae60,// 65 PAY  35 

    0x3a18deeb,// 66 PAY  36 

    0xa8fa862d,// 67 PAY  37 

    0x7b7f9472,// 68 PAY  38 

    0xec5a51af,// 69 PAY  39 

    0xe5180a1b,// 70 PAY  40 

    0x5b201f85,// 71 PAY  41 

    0xf5eeb548,// 72 PAY  42 

    0x4fe397b8,// 73 PAY  43 

    0x6ace7dbc,// 74 PAY  44 

    0xe2efd1c7,// 75 PAY  45 

    0x6b74004e,// 76 PAY  46 

    0x855a9339,// 77 PAY  47 

    0x7d4a8d18,// 78 PAY  48 

    0x4bbaf085,// 79 PAY  49 

    0x9cea3f3e,// 80 PAY  50 

    0x51150ef2,// 81 PAY  51 

    0xd373a00d,// 82 PAY  52 

    0x7bff4954,// 83 PAY  53 

    0x4ae36086,// 84 PAY  54 

    0xca030017,// 85 PAY  55 

    0x6c62167e,// 86 PAY  56 

    0xbf5f97be,// 87 PAY  57 

    0x52ea7c10,// 88 PAY  58 

    0xbd77a4bf,// 89 PAY  59 

    0xc1d8c6c4,// 90 PAY  60 

    0x807c3bdf,// 91 PAY  61 

    0x7b1a1cac,// 92 PAY  62 

    0x43fe605f,// 93 PAY  63 

    0x7670b1a8,// 94 PAY  64 

    0xa86bf6b6,// 95 PAY  65 

    0x8d1a386d,// 96 PAY  66 

    0x6e49d2bc,// 97 PAY  67 

    0xb1354a7f,// 98 PAY  68 

    0x9b6594a0,// 99 PAY  69 

    0x61177e37,// 100 PAY  70 

    0xb40f24df,// 101 PAY  71 

    0x63d955d0,// 102 PAY  72 

    0x51c9883d,// 103 PAY  73 

    0xad6adc18,// 104 PAY  74 

    0xc520b9fe,// 105 PAY  75 

    0xf314e386,// 106 PAY  76 

    0xf8900691,// 107 PAY  77 

    0xe75157d6,// 108 PAY  78 

    0xcaa422db,// 109 PAY  79 

    0x623041ba,// 110 PAY  80 

    0x110d2a22,// 111 PAY  81 

    0x59718515,// 112 PAY  82 

    0x9a172f50,// 113 PAY  83 

    0x2822d049,// 114 PAY  84 

    0xf0e042d4,// 115 PAY  85 

    0xc1dca1ec,// 116 PAY  86 

    0x3e47ddb0,// 117 PAY  87 

    0xf50e98b5,// 118 PAY  88 

    0xf57ba019,// 119 PAY  89 

    0xf23c2700,// 120 PAY  90 

    0x35396c69,// 121 PAY  91 

    0x6b6f4dc8,// 122 PAY  92 

    0x6018e57c,// 123 PAY  93 

    0x6bfb2c71,// 124 PAY  94 

    0x63d5b947,// 125 PAY  95 

    0x080bb83a,// 126 PAY  96 

    0xde1b6cd5,// 127 PAY  97 

    0xdee17687,// 128 PAY  98 

    0x7a49b54f,// 129 PAY  99 

    0x041eaf6a,// 130 PAY 100 

    0x0f73a720,// 131 PAY 101 

    0x07f95b74,// 132 PAY 102 

    0xb53fe580,// 133 PAY 103 

    0x8b4f1469,// 134 PAY 104 

    0x4f4a6161,// 135 PAY 105 

    0x663c302c,// 136 PAY 106 

    0xbdc23501,// 137 PAY 107 

    0x10523389,// 138 PAY 108 

    0x3bb1ee28,// 139 PAY 109 

    0xa3388be9,// 140 PAY 110 

    0x2d86df46,// 141 PAY 111 

    0x43e97765,// 142 PAY 112 

    0xf51b9292,// 143 PAY 113 

    0x7671b076,// 144 PAY 114 

    0xbeea4447,// 145 PAY 115 

    0x9e9ad999,// 146 PAY 116 

    0x737a3315,// 147 PAY 117 

    0x9bf9efaf,// 148 PAY 118 

    0x529134de,// 149 PAY 119 

    0x94b1b338,// 150 PAY 120 

    0x3efad291,// 151 PAY 121 

    0xf228f256,// 152 PAY 122 

    0xa1435be9,// 153 PAY 123 

    0x232e50de,// 154 PAY 124 

    0xac8ecaf8,// 155 PAY 125 

    0x27687d1f,// 156 PAY 126 

    0x21bb8dcd,// 157 PAY 127 

    0x983e6afe,// 158 PAY 128 

    0xf4ac1741,// 159 PAY 129 

    0xb9d8d64c,// 160 PAY 130 

    0xef6e76cd,// 161 PAY 131 

    0x06adff46,// 162 PAY 132 

    0xbab03714,// 163 PAY 133 

    0x074f20b4,// 164 PAY 134 

    0x34762637,// 165 PAY 135 

    0x06aad04c,// 166 PAY 136 

    0x42856303,// 167 PAY 137 

    0x92f97605,// 168 PAY 138 

    0xe0834230,// 169 PAY 139 

    0x53262a6b,// 170 PAY 140 

    0x74ff1755,// 171 PAY 141 

    0xea5168c6,// 172 PAY 142 

    0xf3596954,// 173 PAY 143 

    0x1561f610,// 174 PAY 144 

    0xb06d749f,// 175 PAY 145 

    0x10825ec6,// 176 PAY 146 

    0x21daf2f2,// 177 PAY 147 

    0xb463d3dd,// 178 PAY 148 

    0xd3cf758e,// 179 PAY 149 

    0x13ae7ef4,// 180 PAY 150 

    0xa8f2c7ce,// 181 PAY 151 

    0x3bbeb267,// 182 PAY 152 

    0xea9f7d3f,// 183 PAY 153 

    0xa33ea139,// 184 PAY 154 

    0x107259aa,// 185 PAY 155 

    0xebfe4b2f,// 186 PAY 156 

    0xd91ee673,// 187 PAY 157 

    0x2c44de99,// 188 PAY 158 

    0xe00bf3fa,// 189 PAY 159 

    0x32329fa9,// 190 PAY 160 

    0x48f66bc4,// 191 PAY 161 

    0x65e80bad,// 192 PAY 162 

    0x9e3eb366,// 193 PAY 163 

    0xcc25b4af,// 194 PAY 164 

    0x185a2496,// 195 PAY 165 

    0xeae6da10,// 196 PAY 166 

    0x3a0b987f,// 197 PAY 167 

    0x8dc2ac1a,// 198 PAY 168 

    0xd43c1790,// 199 PAY 169 

    0x817c0aa8,// 200 PAY 170 

    0x6681747d,// 201 PAY 171 

    0x0108a8d8,// 202 PAY 172 

    0xa3d2b37d,// 203 PAY 173 

    0x47892837,// 204 PAY 174 

    0x473be2a0,// 205 PAY 175 

    0x852a01a7,// 206 PAY 176 

    0x38896ba8,// 207 PAY 177 

    0x67afbeca,// 208 PAY 178 

    0xcfae2c30,// 209 PAY 179 

    0xa9c2d74d,// 210 PAY 180 

    0x325b98cb,// 211 PAY 181 

    0xe0f8d709,// 212 PAY 182 

    0x43a88a55,// 213 PAY 183 

    0xfb9a1f59,// 214 PAY 184 

    0xfaa7c3c5,// 215 PAY 185 

    0x3fd219a6,// 216 PAY 186 

    0x791e2aef,// 217 PAY 187 

    0x067189c4,// 218 PAY 188 

    0xd29d1f08,// 219 PAY 189 

    0xfeeff204,// 220 PAY 190 

    0x26db8099,// 221 PAY 191 

    0x44aa384c,// 222 PAY 192 

    0x6c418548,// 223 PAY 193 

    0x23617ea6,// 224 PAY 194 

    0x40398f42,// 225 PAY 195 

    0x14bfa32f,// 226 PAY 196 

    0x71b2b16a,// 227 PAY 197 

    0x74b71ac2,// 228 PAY 198 

    0xd955e4c4,// 229 PAY 199 

    0x1b15bf20,// 230 PAY 200 

    0x631567b7,// 231 PAY 201 

    0x5a303711,// 232 PAY 202 

    0x4d0b09e6,// 233 PAY 203 

    0x08616f4d,// 234 PAY 204 

    0x2ada9cfb,// 235 PAY 205 

    0x360bde22,// 236 PAY 206 

    0x76d732f2,// 237 PAY 207 

    0x5ec72a8f,// 238 PAY 208 

    0xab0a19e7,// 239 PAY 209 

    0x9e5031cb,// 240 PAY 210 

    0x0b16b697,// 241 PAY 211 

    0x11e04af3,// 242 PAY 212 

    0xa057b6b1,// 243 PAY 213 

    0x7cf3d21c,// 244 PAY 214 

    0x04e71e51,// 245 PAY 215 

    0x6faf2219,// 246 PAY 216 

    0xeab06001,// 247 PAY 217 

    0xcec16d10,// 248 PAY 218 

    0x50feb8a2,// 249 PAY 219 

    0xa69d5fe5,// 250 PAY 220 

    0x5713003d,// 251 PAY 221 

    0x56a7da96,// 252 PAY 222 

    0x6167ff0e,// 253 PAY 223 

    0x4989c040,// 254 PAY 224 

    0x7baf1648,// 255 PAY 225 

    0x25915840,// 256 PAY 226 

    0xbc30f032,// 257 PAY 227 

    0xb01d15da,// 258 PAY 228 

    0xbe655c61,// 259 PAY 229 

    0x6ea150c3,// 260 PAY 230 

    0xe4b39025,// 261 PAY 231 

    0x2e807941,// 262 PAY 232 

    0x60d96bf2,// 263 PAY 233 

    0xc91a1872,// 264 PAY 234 

    0x9ba21227,// 265 PAY 235 

    0xb364007c,// 266 PAY 236 

    0x099a43db,// 267 PAY 237 

    0xc3ea619b,// 268 PAY 238 

    0xe68d7bc6,// 269 PAY 239 

    0xef945b97,// 270 PAY 240 

    0x2f4d8c65,// 271 PAY 241 

    0x23eaa281,// 272 PAY 242 

    0xfa72321f,// 273 PAY 243 

    0x6dae2b28,// 274 PAY 244 

    0xccb3c0c5,// 275 PAY 245 

    0x92fb3c1a,// 276 PAY 246 

    0xd0f552d1,// 277 PAY 247 

    0x33434983,// 278 PAY 248 

    0x09210cab,// 279 PAY 249 

    0xc9fa4c76,// 280 PAY 250 

    0x56b04235,// 281 PAY 251 

    0x0f10132c,// 282 PAY 252 

    0xaf906089,// 283 PAY 253 

    0xab1cdb67,// 284 PAY 254 

    0xb5dfbd2d,// 285 PAY 255 

    0x1b166a11,// 286 PAY 256 

    0xedbfa3f5,// 287 PAY 257 

    0x2d40a38b,// 288 PAY 258 

    0xb408c0e1,// 289 PAY 259 

    0xc195da8d,// 290 PAY 260 

    0x2011416c,// 291 PAY 261 

    0x7e81d4c3,// 292 PAY 262 

    0x066940c2,// 293 PAY 263 

    0x5965ff1a,// 294 PAY 264 

    0x25278b70,// 295 PAY 265 

    0x40208c33,// 296 PAY 266 

    0x6cf3c61f,// 297 PAY 267 

    0x25b05c15,// 298 PAY 268 

    0xc68a0996,// 299 PAY 269 

    0x822a57ea,// 300 PAY 270 

    0x29482860,// 301 PAY 271 

    0xa232b6e0,// 302 PAY 272 

    0xf3f549e2,// 303 PAY 273 

    0xbaea951c,// 304 PAY 274 

    0x23a6e1c0,// 305 PAY 275 

    0xe492a5cf,// 306 PAY 276 

    0x89a224c4,// 307 PAY 277 

    0x98f04fe3,// 308 PAY 278 

    0x1d1a5069,// 309 PAY 279 

    0xba5297a8,// 310 PAY 280 

    0x292dcdd0,// 311 PAY 281 

    0xdaf192ba,// 312 PAY 282 

    0x8a362e00,// 313 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 218 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x25 

    0x03682553 // 314 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt64_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x8065288e,// 4 SCX   2 

    0x000013c2,// 5 SCX   3 

    0x53cf3309,// 6 SCX   4 

    0xd0dcac2e,// 7 SCX   5 

    0xfc2db1ef,// 8 SCX   6 

    0x0adf8e5a,// 9 SCX   7 

    0x00ed556a,// 10 SCX   8 

    0xcd71d5f2,// 11 SCX   9 

    0x969c7faf,// 12 SCX  10 

    0xadf116df,// 13 SCX  11 

    0x1219c37f,// 14 SCX  12 

    0x4219fd0c,// 15 SCX  13 

    0xb4a2d752,// 16 SCX  14 

    0x545c5d8d,// 17 SCX  15 

    0x05c9d1d8,// 18 SCX  16 

    0x95d171b2,// 19 SCX  17 

    0xf5455951,// 20 SCX  18 

    0xf79d8ba2,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1130 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 802 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 802 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 624 

/// BFD (ofst+len)cry  : 632 

/// BFD ofstiv         : 256 

/// BFD ofsticv        : 1028 

    0x00000322,// 22 BFD   1 

    0x02700008,// 23 BFD   2 

    0x04040100,// 24 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 62 

    0x6200ff8f,// 25 MFM   1 

    0x0198b9ad,// 26 MFM   2 

    0xdf3e2f99,// 27 MFM   3 

    0x08433d90,// 28 MFM   4 

    0xb61f3067,// 29 MFM   5 

    0x7c6b3fc1,// 30 MFM   6 

    0xd08bf122,// 31 MFM   7 

    0x22a34b4c,// 32 MFM   8 

    0xec70dba3,// 33 MFM   9 

    0x895f3df6,// 34 MFM  10 

    0xf8094eb9,// 35 MFM  11 

    0x9562a6d8,// 36 MFM  12 

    0x353e9100,// 37 MFM  13 

/// BDA is 284 words. 

/// BDA size     is 1130 (0x46a) 

/// BDA id       is 0x770a 

    0x046a770a,// 38 BDA   1 

/// PAY Generic Data size   : 1130 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xc40f0b6c,// 39 PAY   1 

    0xa3006216,// 40 PAY   2 

    0xec6a01b6,// 41 PAY   3 

    0x6905e27b,// 42 PAY   4 

    0x489d4415,// 43 PAY   5 

    0xf40ef0f7,// 44 PAY   6 

    0xf5dc2aab,// 45 PAY   7 

    0xabdfc28d,// 46 PAY   8 

    0xb44aaa78,// 47 PAY   9 

    0xf4cfc990,// 48 PAY  10 

    0x3f5363de,// 49 PAY  11 

    0x60ded868,// 50 PAY  12 

    0x30b8673a,// 51 PAY  13 

    0xc1f065fe,// 52 PAY  14 

    0x1466ef50,// 53 PAY  15 

    0x7cde037e,// 54 PAY  16 

    0x83dff4ac,// 55 PAY  17 

    0xb6d28305,// 56 PAY  18 

    0x99d75018,// 57 PAY  19 

    0xe1a997a1,// 58 PAY  20 

    0xdd5384c4,// 59 PAY  21 

    0xdb0a5dd3,// 60 PAY  22 

    0xdf98275b,// 61 PAY  23 

    0x0ed1cfac,// 62 PAY  24 

    0x36b815a3,// 63 PAY  25 

    0x95ac8aa5,// 64 PAY  26 

    0xb0fc60c3,// 65 PAY  27 

    0x0b0cc68f,// 66 PAY  28 

    0x2fd843e0,// 67 PAY  29 

    0x3dc47883,// 68 PAY  30 

    0x230139a4,// 69 PAY  31 

    0xd719d812,// 70 PAY  32 

    0xd95a9d20,// 71 PAY  33 

    0x74bfba43,// 72 PAY  34 

    0xae9ee675,// 73 PAY  35 

    0x0ef066af,// 74 PAY  36 

    0x2ae39fa7,// 75 PAY  37 

    0x06d85db2,// 76 PAY  38 

    0x70227f74,// 77 PAY  39 

    0x48eb4a0e,// 78 PAY  40 

    0xbf2ff54b,// 79 PAY  41 

    0x7c809465,// 80 PAY  42 

    0xa21a6b15,// 81 PAY  43 

    0xd3654e99,// 82 PAY  44 

    0x0211802e,// 83 PAY  45 

    0xe4f095df,// 84 PAY  46 

    0x2fef4e9f,// 85 PAY  47 

    0xcf0407f8,// 86 PAY  48 

    0x1c60f613,// 87 PAY  49 

    0x618706eb,// 88 PAY  50 

    0xd99b8f1c,// 89 PAY  51 

    0xca8ba323,// 90 PAY  52 

    0xa4add889,// 91 PAY  53 

    0x7cca7c72,// 92 PAY  54 

    0x98199cb3,// 93 PAY  55 

    0x2377a12f,// 94 PAY  56 

    0x48806707,// 95 PAY  57 

    0x9341aa0f,// 96 PAY  58 

    0xf4218e43,// 97 PAY  59 

    0x4d57f442,// 98 PAY  60 

    0xfefe8483,// 99 PAY  61 

    0x9bacc134,// 100 PAY  62 

    0xab628f94,// 101 PAY  63 

    0x11986c82,// 102 PAY  64 

    0x3e8e4d15,// 103 PAY  65 

    0x56d949d1,// 104 PAY  66 

    0x5bc2e8dc,// 105 PAY  67 

    0x4957f75e,// 106 PAY  68 

    0xc52f45b4,// 107 PAY  69 

    0xb54a1f2c,// 108 PAY  70 

    0x0748c899,// 109 PAY  71 

    0xc0c1a0dc,// 110 PAY  72 

    0xeb45bb27,// 111 PAY  73 

    0x33aeaa98,// 112 PAY  74 

    0xad3ee78b,// 113 PAY  75 

    0xfbb958f7,// 114 PAY  76 

    0xb871d5b0,// 115 PAY  77 

    0x57002305,// 116 PAY  78 

    0x506f329a,// 117 PAY  79 

    0x0ea1aace,// 118 PAY  80 

    0x071eafad,// 119 PAY  81 

    0xf710bb8c,// 120 PAY  82 

    0xd3c69fae,// 121 PAY  83 

    0xf8ba7d3a,// 122 PAY  84 

    0xf1d56cf7,// 123 PAY  85 

    0x8598bf37,// 124 PAY  86 

    0xd65432cb,// 125 PAY  87 

    0xf0bcd0d2,// 126 PAY  88 

    0x8e5fe562,// 127 PAY  89 

    0x8c0e7a23,// 128 PAY  90 

    0x92ccab53,// 129 PAY  91 

    0xfba7e22f,// 130 PAY  92 

    0x853e42b3,// 131 PAY  93 

    0x337629c8,// 132 PAY  94 

    0xa32c7b9c,// 133 PAY  95 

    0x35fe3f2d,// 134 PAY  96 

    0x75de84f7,// 135 PAY  97 

    0xb1a72434,// 136 PAY  98 

    0xb92d386f,// 137 PAY  99 

    0xfc1464e2,// 138 PAY 100 

    0xc9b65cd2,// 139 PAY 101 

    0x63f67ffe,// 140 PAY 102 

    0xd5d062f1,// 141 PAY 103 

    0xe1407637,// 142 PAY 104 

    0xd40c425d,// 143 PAY 105 

    0x1c4b4eb5,// 144 PAY 106 

    0xead67b1a,// 145 PAY 107 

    0xef894876,// 146 PAY 108 

    0xb21cd9b7,// 147 PAY 109 

    0xa866cf4f,// 148 PAY 110 

    0x865e492a,// 149 PAY 111 

    0x76f43217,// 150 PAY 112 

    0x95a166c7,// 151 PAY 113 

    0xbf2d0857,// 152 PAY 114 

    0x322dbde8,// 153 PAY 115 

    0xa6ed40fc,// 154 PAY 116 

    0x8d80ceba,// 155 PAY 117 

    0xe854054c,// 156 PAY 118 

    0x065006ef,// 157 PAY 119 

    0x41e2c8da,// 158 PAY 120 

    0x322e29a1,// 159 PAY 121 

    0x5e6d4023,// 160 PAY 122 

    0x0ec30138,// 161 PAY 123 

    0xc0ecc060,// 162 PAY 124 

    0x397b81d6,// 163 PAY 125 

    0x5dbb8d86,// 164 PAY 126 

    0xa8307f8d,// 165 PAY 127 

    0x2e43d5f2,// 166 PAY 128 

    0xe948ff56,// 167 PAY 129 

    0x3d25cfbc,// 168 PAY 130 

    0x2866ce4e,// 169 PAY 131 

    0x2c6c548a,// 170 PAY 132 

    0x5ed2f1f7,// 171 PAY 133 

    0x385b5ca4,// 172 PAY 134 

    0x87390876,// 173 PAY 135 

    0x3fe3a84e,// 174 PAY 136 

    0x428e9a0a,// 175 PAY 137 

    0x0d4a5a70,// 176 PAY 138 

    0x19a37de9,// 177 PAY 139 

    0x454a42ef,// 178 PAY 140 

    0x0fb731bc,// 179 PAY 141 

    0x1e62f615,// 180 PAY 142 

    0x93cb1566,// 181 PAY 143 

    0x244d479f,// 182 PAY 144 

    0x71de816a,// 183 PAY 145 

    0x81b06390,// 184 PAY 146 

    0xf71a120f,// 185 PAY 147 

    0x9b6b639e,// 186 PAY 148 

    0xff99173c,// 187 PAY 149 

    0x8327dee4,// 188 PAY 150 

    0xdc128d5f,// 189 PAY 151 

    0xbe09214f,// 190 PAY 152 

    0x510848ed,// 191 PAY 153 

    0x18ee20bf,// 192 PAY 154 

    0x1ec2bab0,// 193 PAY 155 

    0x95d27e9c,// 194 PAY 156 

    0x831a17ee,// 195 PAY 157 

    0x114c9476,// 196 PAY 158 

    0x9c60811a,// 197 PAY 159 

    0x36fa9437,// 198 PAY 160 

    0xf7fce42f,// 199 PAY 161 

    0xe0cfeef2,// 200 PAY 162 

    0x352f3776,// 201 PAY 163 

    0x363170a0,// 202 PAY 164 

    0x661cad59,// 203 PAY 165 

    0x335573e4,// 204 PAY 166 

    0x07081d0d,// 205 PAY 167 

    0x77aa9b17,// 206 PAY 168 

    0xeade5aac,// 207 PAY 169 

    0x998893b0,// 208 PAY 170 

    0x73bdc1bf,// 209 PAY 171 

    0x0b7915d3,// 210 PAY 172 

    0xa9fbd295,// 211 PAY 173 

    0x8b266b4e,// 212 PAY 174 

    0xa19f8a5b,// 213 PAY 175 

    0x12fb3b38,// 214 PAY 176 

    0x2ea45ce2,// 215 PAY 177 

    0xefd7b3ae,// 216 PAY 178 

    0x393e88f0,// 217 PAY 179 

    0xd611d55c,// 218 PAY 180 

    0x58117c49,// 219 PAY 181 

    0x76c2e291,// 220 PAY 182 

    0x7ebf4a04,// 221 PAY 183 

    0x81f5e824,// 222 PAY 184 

    0xfa4c03d3,// 223 PAY 185 

    0x6d5b5c1a,// 224 PAY 186 

    0xbe0bb936,// 225 PAY 187 

    0x617332de,// 226 PAY 188 

    0x1a5bf546,// 227 PAY 189 

    0xc540c3af,// 228 PAY 190 

    0xa352547c,// 229 PAY 191 

    0x7b7e599f,// 230 PAY 192 

    0xd0e49f9e,// 231 PAY 193 

    0x6691aa75,// 232 PAY 194 

    0xff3c0f08,// 233 PAY 195 

    0x8ef11cce,// 234 PAY 196 

    0xc89de928,// 235 PAY 197 

    0x5556f9f5,// 236 PAY 198 

    0x2a6697aa,// 237 PAY 199 

    0xa92d91a4,// 238 PAY 200 

    0xf0bd919f,// 239 PAY 201 

    0xb46dda6a,// 240 PAY 202 

    0x3613ca0e,// 241 PAY 203 

    0x84d81a01,// 242 PAY 204 

    0xee3ad55e,// 243 PAY 205 

    0x59337953,// 244 PAY 206 

    0x382346e2,// 245 PAY 207 

    0x19112783,// 246 PAY 208 

    0xe9c57b04,// 247 PAY 209 

    0xfe0c603f,// 248 PAY 210 

    0x849b0bcf,// 249 PAY 211 

    0xc5fbde3c,// 250 PAY 212 

    0x550eb7b4,// 251 PAY 213 

    0x5e0e8faf,// 252 PAY 214 

    0x7b02df0e,// 253 PAY 215 

    0x491496a7,// 254 PAY 216 

    0xf0da445d,// 255 PAY 217 

    0xf7ba2066,// 256 PAY 218 

    0xe145a31d,// 257 PAY 219 

    0x02db19e0,// 258 PAY 220 

    0x7c316baa,// 259 PAY 221 

    0xbe14d815,// 260 PAY 222 

    0x61e5f84a,// 261 PAY 223 

    0x0deabcf7,// 262 PAY 224 

    0x2c5545df,// 263 PAY 225 

    0xf6fd771c,// 264 PAY 226 

    0x5ec99562,// 265 PAY 227 

    0x73b178f8,// 266 PAY 228 

    0xaf448ec5,// 267 PAY 229 

    0x6bf01503,// 268 PAY 230 

    0xf02c5462,// 269 PAY 231 

    0x19733cca,// 270 PAY 232 

    0xc2e84d71,// 271 PAY 233 

    0x4e015165,// 272 PAY 234 

    0xae608a64,// 273 PAY 235 

    0x046b6bdc,// 274 PAY 236 

    0x03eca4a0,// 275 PAY 237 

    0xbc01920e,// 276 PAY 238 

    0x51e696e8,// 277 PAY 239 

    0x07bcac02,// 278 PAY 240 

    0x313e4714,// 279 PAY 241 

    0x15a5a4f0,// 280 PAY 242 

    0x825991ce,// 281 PAY 243 

    0x52be061e,// 282 PAY 244 

    0x2d41272b,// 283 PAY 245 

    0xcd57b6a4,// 284 PAY 246 

    0x97094558,// 285 PAY 247 

    0xb9d6a156,// 286 PAY 248 

    0x60909b34,// 287 PAY 249 

    0xfac89954,// 288 PAY 250 

    0x9a807624,// 289 PAY 251 

    0x53041191,// 290 PAY 252 

    0xdf004a14,// 291 PAY 253 

    0x5f4b5fd6,// 292 PAY 254 

    0xfa3868dd,// 293 PAY 255 

    0xf707879c,// 294 PAY 256 

    0xdbce37f5,// 295 PAY 257 

    0xf890eb30,// 296 PAY 258 

    0x8e350bcd,// 297 PAY 259 

    0x970d0b9c,// 298 PAY 260 

    0xee16131e,// 299 PAY 261 

    0x159b5d66,// 300 PAY 262 

    0x963dd9ad,// 301 PAY 263 

    0x5c4c73af,// 302 PAY 264 

    0x8864f8ab,// 303 PAY 265 

    0xb1b3b2c7,// 304 PAY 266 

    0xc6c887f8,// 305 PAY 267 

    0x30a2c6ce,// 306 PAY 268 

    0x3c3c7bf6,// 307 PAY 269 

    0x22b60f10,// 308 PAY 270 

    0xe603f780,// 309 PAY 271 

    0x51863e3b,// 310 PAY 272 

    0xe8d19e1f,// 311 PAY 273 

    0x4a923399,// 312 PAY 274 

    0x8e141f08,// 313 PAY 275 

    0x97e10788,// 314 PAY 276 

    0x21e5aebd,// 315 PAY 277 

    0xc1bc9ae3,// 316 PAY 278 

    0x78f2c5b2,// 317 PAY 279 

    0x92aad564,// 318 PAY 280 

    0x1f41c1b4,// 319 PAY 281 

    0xa822231f,// 320 PAY 282 

    0x3f020000,// 321 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 131 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbb 

    0x020cbb33 // 322 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt65_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80602849,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0x731418e4,// 6 SCX   4 

    0xbe789c27,// 7 SCX   5 

    0x5687e379,// 8 SCX   6 

    0x84b9ac39,// 9 SCX   7 

    0x04a025de,// 10 SCX   8 

    0xa4e1bc03,// 11 SCX   9 

    0x3cc09b36,// 12 SCX  10 

    0x0d16d831,// 13 SCX  11 

    0xbe2bd6a8,// 14 SCX  12 

    0x64077fc7,// 15 SCX  13 

    0xd7461487,// 16 SCX  14 

    0xdda0068b,// 17 SCX  15 

    0x2c1f3576,// 18 SCX  16 

    0x8a2b8241,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 253 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 212 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 212 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 196 

/// BFD (ofst+len)cry  : 204 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 232 

    0x000000d4,// 20 BFD   1 

    0x00c40008,// 21 BFD   2 

    0x00e8009c,// 22 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 30 

    0x30002e26,// 23 MFM   1 

    0x183f4567,// 24 MFM   2 

    0x04cf4737,// 25 MFM   3 

    0x2d270c83,// 26 MFM   4 

    0x01c00678,// 27 MFM   5 

    0xdbda34a2,// 28 MFM   6 

    0x28a20000,// 29 MFM   7 

/// BDA is 65 words. 

/// BDA size     is 253 (0xfd) 

/// BDA id       is 0x5fa4 

    0x00fd5fa4,// 30 BDA   1 

/// PAY Generic Data size   : 253 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x0d6abc56,// 31 PAY   1 

    0xfdd0431f,// 32 PAY   2 

    0xac8bb714,// 33 PAY   3 

    0x410302c2,// 34 PAY   4 

    0xa94fbed9,// 35 PAY   5 

    0xb37e64b8,// 36 PAY   6 

    0x7fa2ace2,// 37 PAY   7 

    0x909a9c51,// 38 PAY   8 

    0x005c422b,// 39 PAY   9 

    0x685b881e,// 40 PAY  10 

    0x1fc2619e,// 41 PAY  11 

    0x8f0a7702,// 42 PAY  12 

    0x396858fc,// 43 PAY  13 

    0xfbafd162,// 44 PAY  14 

    0xd68ec344,// 45 PAY  15 

    0x52bcce85,// 46 PAY  16 

    0xd877c1b7,// 47 PAY  17 

    0xcd0e9a4f,// 48 PAY  18 

    0x2128c3d7,// 49 PAY  19 

    0xf0df3b9c,// 50 PAY  20 

    0xfe5c3700,// 51 PAY  21 

    0x2962901b,// 52 PAY  22 

    0x66a05f35,// 53 PAY  23 

    0x8a7b5bc3,// 54 PAY  24 

    0x7bb1d192,// 55 PAY  25 

    0xa7f2ae48,// 56 PAY  26 

    0x1a23455c,// 57 PAY  27 

    0xce497072,// 58 PAY  28 

    0x8087c049,// 59 PAY  29 

    0x6f37bbeb,// 60 PAY  30 

    0xf6a79c74,// 61 PAY  31 

    0x3b018932,// 62 PAY  32 

    0x03638db1,// 63 PAY  33 

    0x09173fb2,// 64 PAY  34 

    0xde252965,// 65 PAY  35 

    0x38589d32,// 66 PAY  36 

    0x792dd826,// 67 PAY  37 

    0x1becdd88,// 68 PAY  38 

    0xb63b91ee,// 69 PAY  39 

    0x07d1f3bd,// 70 PAY  40 

    0x82769ac3,// 71 PAY  41 

    0xc36afdef,// 72 PAY  42 

    0x3c2efc44,// 73 PAY  43 

    0xda342a8f,// 74 PAY  44 

    0x39640b05,// 75 PAY  45 

    0x4a6833da,// 76 PAY  46 

    0x9555704c,// 77 PAY  47 

    0x161473e8,// 78 PAY  48 

    0x04cc4634,// 79 PAY  49 

    0x16239ced,// 80 PAY  50 

    0x799a75ba,// 81 PAY  51 

    0x9f8e1943,// 82 PAY  52 

    0xb944408c,// 83 PAY  53 

    0x5ace372a,// 84 PAY  54 

    0x2c4270a9,// 85 PAY  55 

    0xe340136f,// 86 PAY  56 

    0xf22d9acc,// 87 PAY  57 

    0xc8b33e6a,// 88 PAY  58 

    0x46d2eff1,// 89 PAY  59 

    0x7478a4c7,// 90 PAY  60 

    0x4f346bfe,// 91 PAY  61 

    0xb43dd430,// 92 PAY  62 

    0xbddf253a,// 93 PAY  63 

    0x4a000000,// 94 PAY  64 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x45 

    0x00d44533 // 95 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt66_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x8060281d,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xef266256,// 6 SCX   4 

    0xc35815aa,// 7 SCX   5 

    0x4d4da7cf,// 8 SCX   6 

    0xc283b0bb,// 9 SCX   7 

    0xd261a599,// 10 SCX   8 

    0x4a1eb3ec,// 11 SCX   9 

    0xb95f2f0f,// 12 SCX  10 

    0x9248f0cf,// 13 SCX  11 

    0x9f766d7f,// 14 SCX  12 

    0xcd968872,// 15 SCX  13 

    0x8e23dd86,// 16 SCX  14 

    0x7ac82776,// 17 SCX  15 

    0xf4ebb0a8,// 18 SCX  16 

    0x0faf2a94,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 838 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 261 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 261 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 80 

/// BFD (ofst+len)cry  : 192 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 712 

    0x00000105,// 20 BFD   1 

    0x00500070,// 21 BFD   2 

    0x02c80008,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b002c5a,// 23 MFM   1 

    0x01dbdcc0,// 24 MFM   2 

/// BDA is 211 words. 

/// BDA size     is 838 (0x346) 

/// BDA id       is 0xb717 

    0x0346b717,// 25 BDA   1 

/// PAY Generic Data size   : 838 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xe2bfd939,// 26 PAY   1 

    0x7f6d04d6,// 27 PAY   2 

    0xedee156d,// 28 PAY   3 

    0xb3c6b3d0,// 29 PAY   4 

    0x68f05865,// 30 PAY   5 

    0x30107d5c,// 31 PAY   6 

    0xa5350bed,// 32 PAY   7 

    0x4c9712c1,// 33 PAY   8 

    0x1df19339,// 34 PAY   9 

    0x2643d339,// 35 PAY  10 

    0x1c2874cd,// 36 PAY  11 

    0xae06fb1d,// 37 PAY  12 

    0x5e658dd6,// 38 PAY  13 

    0x6312f186,// 39 PAY  14 

    0x91e1e83b,// 40 PAY  15 

    0x96ac41b9,// 41 PAY  16 

    0x03a63422,// 42 PAY  17 

    0x9f9fc9ff,// 43 PAY  18 

    0x1b6ee412,// 44 PAY  19 

    0xc3d8ac86,// 45 PAY  20 

    0x029be78c,// 46 PAY  21 

    0x24e5ee2f,// 47 PAY  22 

    0xe806bf8b,// 48 PAY  23 

    0x320137d0,// 49 PAY  24 

    0x9baac8e3,// 50 PAY  25 

    0x8b6acf84,// 51 PAY  26 

    0x42223798,// 52 PAY  27 

    0xc5ec25b3,// 53 PAY  28 

    0x358b11dd,// 54 PAY  29 

    0xd4794284,// 55 PAY  30 

    0xac2c37ac,// 56 PAY  31 

    0x1c5fcbf7,// 57 PAY  32 

    0x77cad6d9,// 58 PAY  33 

    0x27e68841,// 59 PAY  34 

    0x735fa345,// 60 PAY  35 

    0x92f3b969,// 61 PAY  36 

    0x94842131,// 62 PAY  37 

    0x7752485b,// 63 PAY  38 

    0xf3b8a2c3,// 64 PAY  39 

    0x3f259bc8,// 65 PAY  40 

    0xc22bf528,// 66 PAY  41 

    0x0729370c,// 67 PAY  42 

    0x140d44b6,// 68 PAY  43 

    0xd488a8dc,// 69 PAY  44 

    0x40e17689,// 70 PAY  45 

    0xea648a60,// 71 PAY  46 

    0x35e56a58,// 72 PAY  47 

    0xfd3954d8,// 73 PAY  48 

    0xdb126eff,// 74 PAY  49 

    0x2d2f97c2,// 75 PAY  50 

    0x39752a1e,// 76 PAY  51 

    0xe3b1896c,// 77 PAY  52 

    0x5495fbd1,// 78 PAY  53 

    0xd389f6d4,// 79 PAY  54 

    0x935ab83e,// 80 PAY  55 

    0xec86f485,// 81 PAY  56 

    0x74f0fe39,// 82 PAY  57 

    0xad9c6c51,// 83 PAY  58 

    0x4b5960b4,// 84 PAY  59 

    0x2ec15ddc,// 85 PAY  60 

    0x6893d097,// 86 PAY  61 

    0xcc8c0a02,// 87 PAY  62 

    0xf899a209,// 88 PAY  63 

    0x1095f6f4,// 89 PAY  64 

    0x9a613c7f,// 90 PAY  65 

    0xcfd24368,// 91 PAY  66 

    0xf1d1b611,// 92 PAY  67 

    0x2f9dfcb0,// 93 PAY  68 

    0x27bc8519,// 94 PAY  69 

    0xbcf2f3ab,// 95 PAY  70 

    0x07fc908e,// 96 PAY  71 

    0xdfa472cf,// 97 PAY  72 

    0x5ceee498,// 98 PAY  73 

    0x59bfb8f8,// 99 PAY  74 

    0x65c0362c,// 100 PAY  75 

    0x5ec08c0e,// 101 PAY  76 

    0x908f738b,// 102 PAY  77 

    0x53fcdd7e,// 103 PAY  78 

    0xe88a3687,// 104 PAY  79 

    0x9b28de31,// 105 PAY  80 

    0xda1dbc9e,// 106 PAY  81 

    0xf86a88ba,// 107 PAY  82 

    0x7dff3929,// 108 PAY  83 

    0xa3f2b4a4,// 109 PAY  84 

    0xa439968a,// 110 PAY  85 

    0x66667c77,// 111 PAY  86 

    0x4ebce425,// 112 PAY  87 

    0xcf19ee2e,// 113 PAY  88 

    0x719d40b3,// 114 PAY  89 

    0x22285f68,// 115 PAY  90 

    0xa7a368a4,// 116 PAY  91 

    0x1171a4e6,// 117 PAY  92 

    0x64b1f4bc,// 118 PAY  93 

    0xb722a9bc,// 119 PAY  94 

    0xbaccc936,// 120 PAY  95 

    0x08a737aa,// 121 PAY  96 

    0x1d0562fb,// 122 PAY  97 

    0xbcb851cd,// 123 PAY  98 

    0x9394989f,// 124 PAY  99 

    0x55c1d0c7,// 125 PAY 100 

    0x2a841147,// 126 PAY 101 

    0x88a1faa5,// 127 PAY 102 

    0x675d812d,// 128 PAY 103 

    0x80ba78fb,// 129 PAY 104 

    0xb03e938c,// 130 PAY 105 

    0x2c62aa13,// 131 PAY 106 

    0x34da850d,// 132 PAY 107 

    0x93ab4880,// 133 PAY 108 

    0x2273e3e9,// 134 PAY 109 

    0x0e19d898,// 135 PAY 110 

    0xcacf94c5,// 136 PAY 111 

    0x5c9c7d7d,// 137 PAY 112 

    0x7b999830,// 138 PAY 113 

    0x7ffca893,// 139 PAY 114 

    0xcd575dc9,// 140 PAY 115 

    0xd6cd7264,// 141 PAY 116 

    0x5d0d1911,// 142 PAY 117 

    0x24f5ca1c,// 143 PAY 118 

    0xe3f996f2,// 144 PAY 119 

    0xd03370df,// 145 PAY 120 

    0x6df113b6,// 146 PAY 121 

    0x3eee4ad4,// 147 PAY 122 

    0xb88ac7ad,// 148 PAY 123 

    0x0750fff3,// 149 PAY 124 

    0x473cde91,// 150 PAY 125 

    0xecac10a7,// 151 PAY 126 

    0x02d73f3f,// 152 PAY 127 

    0x549b66fc,// 153 PAY 128 

    0x60a5da83,// 154 PAY 129 

    0xb958cdaa,// 155 PAY 130 

    0xb51b17cf,// 156 PAY 131 

    0xba6d6067,// 157 PAY 132 

    0xabbb2821,// 158 PAY 133 

    0x36f0187f,// 159 PAY 134 

    0x3f4b8db4,// 160 PAY 135 

    0xcb5e88c1,// 161 PAY 136 

    0xecfe6c3e,// 162 PAY 137 

    0xccaf3efe,// 163 PAY 138 

    0xf819d1a1,// 164 PAY 139 

    0xe18c8517,// 165 PAY 140 

    0x3ee4cd2c,// 166 PAY 141 

    0x8cebb746,// 167 PAY 142 

    0xe9bc2e7c,// 168 PAY 143 

    0xa9f4c7c1,// 169 PAY 144 

    0x235310d7,// 170 PAY 145 

    0x5cc299c9,// 171 PAY 146 

    0x109c7608,// 172 PAY 147 

    0x77862d88,// 173 PAY 148 

    0x17f3c50a,// 174 PAY 149 

    0x50ac2845,// 175 PAY 150 

    0xb45bb8c2,// 176 PAY 151 

    0x383bdfee,// 177 PAY 152 

    0x3f677a75,// 178 PAY 153 

    0xab78a8c9,// 179 PAY 154 

    0xb58de395,// 180 PAY 155 

    0x88a6a458,// 181 PAY 156 

    0x47ce3135,// 182 PAY 157 

    0x8a5662bf,// 183 PAY 158 

    0x6a5dff60,// 184 PAY 159 

    0xbf5e6c1d,// 185 PAY 160 

    0x730976b9,// 186 PAY 161 

    0xcb725b7d,// 187 PAY 162 

    0xa19edf44,// 188 PAY 163 

    0x073a183e,// 189 PAY 164 

    0xcecb4098,// 190 PAY 165 

    0xa9cdcd31,// 191 PAY 166 

    0x3711eb60,// 192 PAY 167 

    0x29f154bd,// 193 PAY 168 

    0x00f23392,// 194 PAY 169 

    0xee22c08c,// 195 PAY 170 

    0x3ccdc632,// 196 PAY 171 

    0x0f04bd86,// 197 PAY 172 

    0x8ab750ec,// 198 PAY 173 

    0xdb4b6086,// 199 PAY 174 

    0xbecc5e4f,// 200 PAY 175 

    0x73b2e9e0,// 201 PAY 176 

    0xab1755aa,// 202 PAY 177 

    0x9d0ac6ea,// 203 PAY 178 

    0x84444cf2,// 204 PAY 179 

    0x97a38179,// 205 PAY 180 

    0x81b8cd8e,// 206 PAY 181 

    0x4f719efe,// 207 PAY 182 

    0x6ca58cfe,// 208 PAY 183 

    0x9b04fd16,// 209 PAY 184 

    0xfeae28e0,// 210 PAY 185 

    0x6280d1b8,// 211 PAY 186 

    0xdc7f2e37,// 212 PAY 187 

    0x48e2850d,// 213 PAY 188 

    0x5814dd0e,// 214 PAY 189 

    0x3bedd783,// 215 PAY 190 

    0x7613200c,// 216 PAY 191 

    0x6c8fae6e,// 217 PAY 192 

    0x7e8cf7c6,// 218 PAY 193 

    0xd2c2b791,// 219 PAY 194 

    0x7b3def94,// 220 PAY 195 

    0xf5642924,// 221 PAY 196 

    0x2669308a,// 222 PAY 197 

    0x20dbf546,// 223 PAY 198 

    0x8a110606,// 224 PAY 199 

    0x98bd98a5,// 225 PAY 200 

    0x0432856b,// 226 PAY 201 

    0x2a825123,// 227 PAY 202 

    0x37631cd1,// 228 PAY 203 

    0x15a3829d,// 229 PAY 204 

    0x5f7210f4,// 230 PAY 205 

    0xeabbcd4b,// 231 PAY 206 

    0x7f921ec8,// 232 PAY 207 

    0x53ef599a,// 233 PAY 208 

    0x2ed8d32f,// 234 PAY 209 

    0xc75c0000,// 235 PAY 210 

/// STA is 1 words. 

/// STA num_pkts       : 91 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x83 

    0x01e8835b // 236 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt67_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8061280a,// 4 SCX   2 

    0x00004100,// 5 SCX   3 

    0xa4bedec3,// 6 SCX   4 

    0xbf1a2ed5,// 7 SCX   5 

    0x29f4e898,// 8 SCX   6 

    0x1b418350,// 9 SCX   7 

    0x047343ba,// 10 SCX   8 

    0x4cb14b5a,// 11 SCX   9 

    0x4a3f9ea4,// 12 SCX  10 

    0x138befcd,// 13 SCX  11 

    0x662d0694,// 14 SCX  12 

    0xdb211a21,// 15 SCX  13 

    0xb27cabc7,// 16 SCX  14 

    0xdeb03a53,// 17 SCX  15 

    0xd130acde,// 18 SCX  16 

    0x8224c6d0,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 422 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 386 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 386 

/// BFD lencrypto      : 312 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 372 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 396 

    0x00000182,// 20 BFD   1 

    0x003c0138,// 21 BFD   2 

    0x018c0020,// 22 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 35 

    0x35003e35,// 23 MFM   1 

    0x9f550f2b,// 24 MFM   2 

    0xf8b4b52e,// 25 MFM   3 

    0x6a5c8e53,// 26 MFM   4 

    0x4efccef1,// 27 MFM   5 

    0x4327b9cb,// 28 MFM   6 

    0xad4f95a2,// 29 MFM   7 

    0x80000000,// 30 MFM   8 

/// BDA is 107 words. 

/// BDA size     is 422 (0x1a6) 

/// BDA id       is 0xa522 

    0x01a6a522,// 31 BDA   1 

/// PAY Generic Data size   : 422 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x7332dc0d,// 32 PAY   1 

    0xe57f2558,// 33 PAY   2 

    0x9b45e940,// 34 PAY   3 

    0x8766c538,// 35 PAY   4 

    0xb8f56439,// 36 PAY   5 

    0x68e3074d,// 37 PAY   6 

    0xd7febda0,// 38 PAY   7 

    0xd6059516,// 39 PAY   8 

    0x53e1acfe,// 40 PAY   9 

    0x42815040,// 41 PAY  10 

    0x95f8cc2b,// 42 PAY  11 

    0xf28e807a,// 43 PAY  12 

    0xd5d01f9a,// 44 PAY  13 

    0xc667c86d,// 45 PAY  14 

    0xce25546c,// 46 PAY  15 

    0x3efd2c76,// 47 PAY  16 

    0xab2d08c4,// 48 PAY  17 

    0xeacb1a09,// 49 PAY  18 

    0x0a92a819,// 50 PAY  19 

    0x0753c405,// 51 PAY  20 

    0xaae39d44,// 52 PAY  21 

    0xb94ee4e2,// 53 PAY  22 

    0x124b7153,// 54 PAY  23 

    0x9447a92b,// 55 PAY  24 

    0xeb45f35c,// 56 PAY  25 

    0x06f60aad,// 57 PAY  26 

    0x1663664d,// 58 PAY  27 

    0x82ce3d1a,// 59 PAY  28 

    0x0f8668cc,// 60 PAY  29 

    0x95d5dd15,// 61 PAY  30 

    0xd4f1c447,// 62 PAY  31 

    0x416da03d,// 63 PAY  32 

    0x9d285cb1,// 64 PAY  33 

    0x6b0865de,// 65 PAY  34 

    0x391148bd,// 66 PAY  35 

    0x9880335e,// 67 PAY  36 

    0x2c5ed14f,// 68 PAY  37 

    0x448cef5f,// 69 PAY  38 

    0x89fee9c2,// 70 PAY  39 

    0x4c30db83,// 71 PAY  40 

    0x5bd5fa5b,// 72 PAY  41 

    0x16c855e6,// 73 PAY  42 

    0xba31a2cb,// 74 PAY  43 

    0x6f4138ff,// 75 PAY  44 

    0xb004e150,// 76 PAY  45 

    0x1f468712,// 77 PAY  46 

    0x91ce9b3f,// 78 PAY  47 

    0x4b2ddd6a,// 79 PAY  48 

    0xe7dc947c,// 80 PAY  49 

    0x663aeb0a,// 81 PAY  50 

    0xc93bc490,// 82 PAY  51 

    0x4dd61d64,// 83 PAY  52 

    0xf385df56,// 84 PAY  53 

    0x0e77cce8,// 85 PAY  54 

    0xdf822a1f,// 86 PAY  55 

    0xedeaf636,// 87 PAY  56 

    0xe0eae9ca,// 88 PAY  57 

    0xaf3b3403,// 89 PAY  58 

    0x479513a0,// 90 PAY  59 

    0x264af8b5,// 91 PAY  60 

    0xa09b74f0,// 92 PAY  61 

    0x0296d468,// 93 PAY  62 

    0x90b36eca,// 94 PAY  63 

    0x6b6b3f33,// 95 PAY  64 

    0x5dcab003,// 96 PAY  65 

    0xd89fcd75,// 97 PAY  66 

    0x20d34dc8,// 98 PAY  67 

    0x3844fc63,// 99 PAY  68 

    0x66c20c38,// 100 PAY  69 

    0xbbb884a5,// 101 PAY  70 

    0xb181b712,// 102 PAY  71 

    0x203e696b,// 103 PAY  72 

    0x07f002d4,// 104 PAY  73 

    0x2c08f61a,// 105 PAY  74 

    0xb8d43817,// 106 PAY  75 

    0x14707690,// 107 PAY  76 

    0x7aa3ceef,// 108 PAY  77 

    0x149893b5,// 109 PAY  78 

    0x088c8031,// 110 PAY  79 

    0x789897a5,// 111 PAY  80 

    0x104a4586,// 112 PAY  81 

    0x2d49c0f1,// 113 PAY  82 

    0x9adab0af,// 114 PAY  83 

    0x3504750b,// 115 PAY  84 

    0x49697f7c,// 116 PAY  85 

    0x2ac30976,// 117 PAY  86 

    0xf92d0504,// 118 PAY  87 

    0x9acdd80d,// 119 PAY  88 

    0x8342e11a,// 120 PAY  89 

    0x2adca714,// 121 PAY  90 

    0xdcd55e55,// 122 PAY  91 

    0xdbe68e28,// 123 PAY  92 

    0x1a59c63c,// 124 PAY  93 

    0xc4a620b6,// 125 PAY  94 

    0x6d68b6fd,// 126 PAY  95 

    0x4ab9c5b1,// 127 PAY  96 

    0xdf317f59,// 128 PAY  97 

    0x7e6f958e,// 129 PAY  98 

    0xd55b8283,// 130 PAY  99 

    0x1f2b7150,// 131 PAY 100 

    0x07d7acc4,// 132 PAY 101 

    0xac7b5a10,// 133 PAY 102 

    0x2c1a2f31,// 134 PAY 103 

    0x7eca476e,// 135 PAY 104 

    0xbec1c4cd,// 136 PAY 105 

    0xeae40000,// 137 PAY 106 

/// STA is 1 words. 

/// STA num_pkts       : 221 

/// STA pkt_idx        : 35 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd4 

    0x008cd4dd // 138 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt68_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x80662898,// 4 SCX   2 

    0x00004442,// 5 SCX   3 

    0xac8e21cd,// 6 SCX   4 

    0x907a5f71,// 7 SCX   5 

    0x60473ae8,// 8 SCX   6 

    0xd06b1320,// 9 SCX   7 

    0xf0933ac6,// 10 SCX   8 

    0x59b95d57,// 11 SCX   9 

    0x9d715c46,// 12 SCX  10 

    0xb5dd6839,// 13 SCX  11 

    0x2470570e,// 14 SCX  12 

    0xc3e35aac,// 15 SCX  13 

    0xb47272b5,// 16 SCX  14 

    0x9551018b,// 17 SCX  15 

    0xa600f1a1,// 18 SCX  16 

    0x79ee759f,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1261 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1014 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1014 

/// BFD lencrypto      : 576 

/// BFD ofstcrypto     : 72 

/// BFD (ofst+len)cry  : 648 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 1220 

    0x000003f6,// 20 BFD   1 

    0x00480240,// 21 BFD   2 

    0x04c40014,// 22 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5f 

    0x5f006055,// 23 MFM   1 

    0x65cfe4e9,// 24 MFM   2 

    0xae3bfb72,// 25 MFM   3 

    0xf69b62a1,// 26 MFM   4 

    0xa2e96187,// 27 MFM   5 

    0x7e422fe1,// 28 MFM   6 

    0xce283da9,// 29 MFM   7 

    0x8b3f52a8,// 30 MFM   8 

    0x7fbaa2e0,// 31 MFM   9 

    0xf92cd13f,// 32 MFM  10 

    0x89cac25d,// 33 MFM  11 

    0x42ebdf83,// 34 MFM  12 

    0x96000000,// 35 MFM  13 

/// BDA is 317 words. 

/// BDA size     is 1261 (0x4ed) 

/// BDA id       is 0x7985 

    0x04ed7985,// 36 BDA   1 

/// PAY Generic Data size   : 1261 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xe9379e5b,// 37 PAY   1 

    0xa5744c2f,// 38 PAY   2 

    0x9e866062,// 39 PAY   3 

    0x5abb80f7,// 40 PAY   4 

    0xc95a1666,// 41 PAY   5 

    0x8984a06a,// 42 PAY   6 

    0x0df22017,// 43 PAY   7 

    0x4f2da423,// 44 PAY   8 

    0x0b3b7be8,// 45 PAY   9 

    0x75f6d42e,// 46 PAY  10 

    0x6f0cb94d,// 47 PAY  11 

    0xf9b04fff,// 48 PAY  12 

    0x09c357e5,// 49 PAY  13 

    0x42a357c6,// 50 PAY  14 

    0xd69e9cd1,// 51 PAY  15 

    0x10b58799,// 52 PAY  16 

    0x39fa8472,// 53 PAY  17 

    0xd8be9594,// 54 PAY  18 

    0x03c6f5c6,// 55 PAY  19 

    0x8da0b40b,// 56 PAY  20 

    0x40f45d03,// 57 PAY  21 

    0x8f45b175,// 58 PAY  22 

    0x74114b0a,// 59 PAY  23 

    0x53d2ea58,// 60 PAY  24 

    0xf4474795,// 61 PAY  25 

    0xf8b59b1e,// 62 PAY  26 

    0xac36bca0,// 63 PAY  27 

    0x8bcc55e2,// 64 PAY  28 

    0x589d305b,// 65 PAY  29 

    0xb02cecce,// 66 PAY  30 

    0xf9c24dc8,// 67 PAY  31 

    0xf7303ac9,// 68 PAY  32 

    0xac2cc1b4,// 69 PAY  33 

    0x0f4134c5,// 70 PAY  34 

    0x29385e50,// 71 PAY  35 

    0x7ea42bf7,// 72 PAY  36 

    0xc19562e3,// 73 PAY  37 

    0x977e2c87,// 74 PAY  38 

    0x08881ebf,// 75 PAY  39 

    0xc8d01862,// 76 PAY  40 

    0x0d441b7e,// 77 PAY  41 

    0xe3556b69,// 78 PAY  42 

    0x684fff8f,// 79 PAY  43 

    0x46d70bb4,// 80 PAY  44 

    0xfbb24c28,// 81 PAY  45 

    0x75fe7d32,// 82 PAY  46 

    0x71adfc00,// 83 PAY  47 

    0x3c0a694f,// 84 PAY  48 

    0xd490896a,// 85 PAY  49 

    0xf908fef9,// 86 PAY  50 

    0xf8be1f1a,// 87 PAY  51 

    0x33eb117b,// 88 PAY  52 

    0x3808d100,// 89 PAY  53 

    0xdb2a3141,// 90 PAY  54 

    0xd685c444,// 91 PAY  55 

    0xf0ba0a47,// 92 PAY  56 

    0x7bb4796b,// 93 PAY  57 

    0xe83f1bd3,// 94 PAY  58 

    0xf1cfa51f,// 95 PAY  59 

    0x721c00c3,// 96 PAY  60 

    0xd68b0260,// 97 PAY  61 

    0x45eb935a,// 98 PAY  62 

    0xc7e55297,// 99 PAY  63 

    0xc05e9dd1,// 100 PAY  64 

    0x222e9a0e,// 101 PAY  65 

    0xf6804cdc,// 102 PAY  66 

    0xe42f810d,// 103 PAY  67 

    0x1bb5bfe6,// 104 PAY  68 

    0x23af9030,// 105 PAY  69 

    0x28c7b0f1,// 106 PAY  70 

    0xb2e13997,// 107 PAY  71 

    0x14a263bd,// 108 PAY  72 

    0x147e5339,// 109 PAY  73 

    0x7c552d27,// 110 PAY  74 

    0x01ab9e23,// 111 PAY  75 

    0x83361e1b,// 112 PAY  76 

    0x80328d20,// 113 PAY  77 

    0xdc3d9474,// 114 PAY  78 

    0x98774d94,// 115 PAY  79 

    0x813b78b8,// 116 PAY  80 

    0xe046ffd0,// 117 PAY  81 

    0x63c117ab,// 118 PAY  82 

    0x651bbb41,// 119 PAY  83 

    0xc078bce3,// 120 PAY  84 

    0x54e7f6fa,// 121 PAY  85 

    0xed21b020,// 122 PAY  86 

    0x18640b1d,// 123 PAY  87 

    0x7552f838,// 124 PAY  88 

    0xecfe1d96,// 125 PAY  89 

    0x2d4382d6,// 126 PAY  90 

    0x38f19c23,// 127 PAY  91 

    0xbcec0d1f,// 128 PAY  92 

    0x5210919e,// 129 PAY  93 

    0xcdeaa0a2,// 130 PAY  94 

    0x8061a7a3,// 131 PAY  95 

    0xe4955230,// 132 PAY  96 

    0x8454d09d,// 133 PAY  97 

    0x4df0c48d,// 134 PAY  98 

    0x67714ea1,// 135 PAY  99 

    0xc5738077,// 136 PAY 100 

    0xca204eb2,// 137 PAY 101 

    0x846be64b,// 138 PAY 102 

    0x3fad55ed,// 139 PAY 103 

    0x686cfb41,// 140 PAY 104 

    0x66f47503,// 141 PAY 105 

    0xc1b6f0be,// 142 PAY 106 

    0x75e36b8e,// 143 PAY 107 

    0x2000345b,// 144 PAY 108 

    0xd7d32a5b,// 145 PAY 109 

    0x93f2dc41,// 146 PAY 110 

    0x751ee8a8,// 147 PAY 111 

    0x74350c13,// 148 PAY 112 

    0x25010cc6,// 149 PAY 113 

    0xaaa52bfc,// 150 PAY 114 

    0x97d0bcf5,// 151 PAY 115 

    0x9c59010b,// 152 PAY 116 

    0x6a910cb3,// 153 PAY 117 

    0xdd5ea587,// 154 PAY 118 

    0x7ac90185,// 155 PAY 119 

    0x222d3632,// 156 PAY 120 

    0xca3e9891,// 157 PAY 121 

    0xbf4da44a,// 158 PAY 122 

    0xa707bf49,// 159 PAY 123 

    0x530e0711,// 160 PAY 124 

    0x3bf732c0,// 161 PAY 125 

    0xb40e524d,// 162 PAY 126 

    0xadcf6391,// 163 PAY 127 

    0xbf07eb98,// 164 PAY 128 

    0xf2f0e6f4,// 165 PAY 129 

    0xf407e8ce,// 166 PAY 130 

    0xd5fea2ac,// 167 PAY 131 

    0x4c49b789,// 168 PAY 132 

    0x5a55d6cc,// 169 PAY 133 

    0x6d0622c3,// 170 PAY 134 

    0x32c92f1a,// 171 PAY 135 

    0x53d8158c,// 172 PAY 136 

    0x563aa9ae,// 173 PAY 137 

    0xdb916af7,// 174 PAY 138 

    0x2df6d3f3,// 175 PAY 139 

    0xa8170e17,// 176 PAY 140 

    0x35ece300,// 177 PAY 141 

    0x7f936668,// 178 PAY 142 

    0xa91e7267,// 179 PAY 143 

    0xa70f76e3,// 180 PAY 144 

    0x193e78fb,// 181 PAY 145 

    0xefb12a47,// 182 PAY 146 

    0x0dd5e8cf,// 183 PAY 147 

    0x63439377,// 184 PAY 148 

    0xab72f609,// 185 PAY 149 

    0x6ddf61d0,// 186 PAY 150 

    0xe3b10e33,// 187 PAY 151 

    0xe8498229,// 188 PAY 152 

    0x90bfd646,// 189 PAY 153 

    0x620b0aa1,// 190 PAY 154 

    0x04faf4f7,// 191 PAY 155 

    0x8e491c7c,// 192 PAY 156 

    0x8f1ddd6e,// 193 PAY 157 

    0xd9d4a157,// 194 PAY 158 

    0xc4500396,// 195 PAY 159 

    0xb259e5a6,// 196 PAY 160 

    0x9a8b38af,// 197 PAY 161 

    0xcd90825a,// 198 PAY 162 

    0x2981b477,// 199 PAY 163 

    0x712a3aa4,// 200 PAY 164 

    0x07394cfc,// 201 PAY 165 

    0x91aff1b3,// 202 PAY 166 

    0x3f4888cb,// 203 PAY 167 

    0x56403f25,// 204 PAY 168 

    0x9e92171e,// 205 PAY 169 

    0xefa85b9b,// 206 PAY 170 

    0x326fe355,// 207 PAY 171 

    0x6ceb6e20,// 208 PAY 172 

    0x778cb3e7,// 209 PAY 173 

    0xd36b9772,// 210 PAY 174 

    0x602891c6,// 211 PAY 175 

    0xc207658d,// 212 PAY 176 

    0x3d212ead,// 213 PAY 177 

    0xa7d619f2,// 214 PAY 178 

    0x2616e394,// 215 PAY 179 

    0xbfe7ad24,// 216 PAY 180 

    0x8e6d0bac,// 217 PAY 181 

    0x5d00317d,// 218 PAY 182 

    0x6f48a1f7,// 219 PAY 183 

    0xe2ce266b,// 220 PAY 184 

    0x4ff4a92b,// 221 PAY 185 

    0x1cfd7fd4,// 222 PAY 186 

    0xcb2cba90,// 223 PAY 187 

    0x4251e762,// 224 PAY 188 

    0x6db075a9,// 225 PAY 189 

    0xd6bbc8af,// 226 PAY 190 

    0x177e284b,// 227 PAY 191 

    0x75d3d8bb,// 228 PAY 192 

    0x899938d6,// 229 PAY 193 

    0x1f374566,// 230 PAY 194 

    0xcd5d78ef,// 231 PAY 195 

    0x1ad7c31a,// 232 PAY 196 

    0xefcafd26,// 233 PAY 197 

    0x4c8b7e68,// 234 PAY 198 

    0xa2c38a6a,// 235 PAY 199 

    0xa9a9ba39,// 236 PAY 200 

    0x964d0e83,// 237 PAY 201 

    0x7281077b,// 238 PAY 202 

    0x33a7509b,// 239 PAY 203 

    0xc187ca2a,// 240 PAY 204 

    0x531e7512,// 241 PAY 205 

    0x9510a407,// 242 PAY 206 

    0x626a7b3b,// 243 PAY 207 

    0xa9069a01,// 244 PAY 208 

    0xf0f01534,// 245 PAY 209 

    0x19841239,// 246 PAY 210 

    0x55af6c9e,// 247 PAY 211 

    0x0b1c1f67,// 248 PAY 212 

    0xd3af9e49,// 249 PAY 213 

    0x52e5f12f,// 250 PAY 214 

    0xf3f3c25c,// 251 PAY 215 

    0xf315d661,// 252 PAY 216 

    0xd1f168eb,// 253 PAY 217 

    0x48e3c554,// 254 PAY 218 

    0x774c698d,// 255 PAY 219 

    0x5b576c5f,// 256 PAY 220 

    0x93f0c9a2,// 257 PAY 221 

    0x59ee121c,// 258 PAY 222 

    0xbafaf42f,// 259 PAY 223 

    0xc13a386f,// 260 PAY 224 

    0xcbf81839,// 261 PAY 225 

    0x1202e478,// 262 PAY 226 

    0xe52ed787,// 263 PAY 227 

    0x5cd180cf,// 264 PAY 228 

    0xe7f4ff41,// 265 PAY 229 

    0x4afb77e7,// 266 PAY 230 

    0xfa6c750a,// 267 PAY 231 

    0x85e86d16,// 268 PAY 232 

    0xc3075d99,// 269 PAY 233 

    0xcfe904bd,// 270 PAY 234 

    0x3b09a799,// 271 PAY 235 

    0x74365f0b,// 272 PAY 236 

    0x53cd3f46,// 273 PAY 237 

    0x171e7ea4,// 274 PAY 238 

    0x7bb99730,// 275 PAY 239 

    0x51d3bd5c,// 276 PAY 240 

    0x06709dc4,// 277 PAY 241 

    0x6f817624,// 278 PAY 242 

    0x92b0c597,// 279 PAY 243 

    0x23028c89,// 280 PAY 244 

    0x1ff4511d,// 281 PAY 245 

    0xccd13f00,// 282 PAY 246 

    0xeb2dd85c,// 283 PAY 247 

    0xe548e0b5,// 284 PAY 248 

    0x7fc4701f,// 285 PAY 249 

    0x5e45c00e,// 286 PAY 250 

    0x3bd5b440,// 287 PAY 251 

    0xf8c8c604,// 288 PAY 252 

    0x0b1128d0,// 289 PAY 253 

    0x8ceee55c,// 290 PAY 254 

    0xcb141d69,// 291 PAY 255 

    0x18058c48,// 292 PAY 256 

    0x9f9869e1,// 293 PAY 257 

    0x5f911163,// 294 PAY 258 

    0xd8780c8b,// 295 PAY 259 

    0x7fe659e6,// 296 PAY 260 

    0x14c8c60a,// 297 PAY 261 

    0xf6b29964,// 298 PAY 262 

    0x9e241d9c,// 299 PAY 263 

    0x9e9a56df,// 300 PAY 264 

    0xe47dc8ca,// 301 PAY 265 

    0xb1e5bfbe,// 302 PAY 266 

    0x376eca92,// 303 PAY 267 

    0xf3d1c871,// 304 PAY 268 

    0xf97929dd,// 305 PAY 269 

    0xdfee3c6d,// 306 PAY 270 

    0x4e0042dc,// 307 PAY 271 

    0x0c1f719a,// 308 PAY 272 

    0x679176bf,// 309 PAY 273 

    0x30fa37f5,// 310 PAY 274 

    0xfcdd8402,// 311 PAY 275 

    0xdf1408da,// 312 PAY 276 

    0xfbc7b1a3,// 313 PAY 277 

    0xe9aa9077,// 314 PAY 278 

    0xa96aa20e,// 315 PAY 279 

    0xa079a07d,// 316 PAY 280 

    0xeaa16f0e,// 317 PAY 281 

    0x1128946e,// 318 PAY 282 

    0x5f1e4f1c,// 319 PAY 283 

    0x7bb2a5a2,// 320 PAY 284 

    0x2080b388,// 321 PAY 285 

    0xec76033f,// 322 PAY 286 

    0x7ce6eff4,// 323 PAY 287 

    0xfca6f19a,// 324 PAY 288 

    0x435fc981,// 325 PAY 289 

    0x1a611e3c,// 326 PAY 290 

    0x73849c25,// 327 PAY 291 

    0xe8e5e7d0,// 328 PAY 292 

    0xf490c220,// 329 PAY 293 

    0x4c4745b9,// 330 PAY 294 

    0x24c61166,// 331 PAY 295 

    0xc800af45,// 332 PAY 296 

    0x6be0d618,// 333 PAY 297 

    0xb37f4457,// 334 PAY 298 

    0xd5e50f15,// 335 PAY 299 

    0xaec8922d,// 336 PAY 300 

    0x71afac5d,// 337 PAY 301 

    0x985ef063,// 338 PAY 302 

    0x7f569580,// 339 PAY 303 

    0xf89b913e,// 340 PAY 304 

    0xe1533ac1,// 341 PAY 305 

    0x3354933d,// 342 PAY 306 

    0xae243423,// 343 PAY 307 

    0xa8156c4e,// 344 PAY 308 

    0xc444f21a,// 345 PAY 309 

    0x1cf5bff3,// 346 PAY 310 

    0xce2b4a3b,// 347 PAY 311 

    0xee34abb3,// 348 PAY 312 

    0x20fa5b17,// 349 PAY 313 

    0x96ae18b6,// 350 PAY 314 

    0x98f1c547,// 351 PAY 315 

    0x6b000000,// 352 PAY 316 

/// STA is 1 words. 

/// STA num_pkts       : 198 

/// STA pkt_idx        : 217 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9d 

    0x03659dc6 // 353 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt69_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806128ec,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0xcc0b5b25,// 6 SCX   4 

    0x35c0a106,// 7 SCX   5 

    0xee227593,// 8 SCX   6 

    0x644efeb0,// 9 SCX   7 

    0xa335a13e,// 10 SCX   8 

    0x06f4b276,// 11 SCX   9 

    0x728cf091,// 12 SCX  10 

    0x5f1a122e,// 13 SCX  11 

    0x46d4e4e7,// 14 SCX  12 

    0x08def798,// 15 SCX  13 

    0x7a1f9181,// 16 SCX  14 

    0x6013c233,// 17 SCX  15 

    0xaa26418f,// 18 SCX  16 

    0xb93d6d70,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 723 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 501 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 501 

/// BFD lencrypto      : 312 

/// BFD ofstcrypto     : 188 

/// BFD (ofst+len)cry  : 500 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 524 

    0x000001f5,// 20 BFD   1 

    0x00bc0138,// 21 BFD   2 

    0x020c004c,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 75 

    0x7500c77e,// 23 MFM   1 

    0x7328bc47,// 24 MFM   2 

    0xc0eb16ce,// 25 MFM   3 

    0x0ca58bec,// 26 MFM   4 

    0xd4d5e55d,// 27 MFM   5 

    0x68628b06,// 28 MFM   6 

    0xd0e0fc42,// 29 MFM   7 

    0xc495dce6,// 30 MFM   8 

    0x374fe876,// 31 MFM   9 

    0x0854bb8e,// 32 MFM  10 

    0x057b2c1e,// 33 MFM  11 

    0xbbab5925,// 34 MFM  12 

    0xf8709818,// 35 MFM  13 

    0x284c09fe,// 36 MFM  14 

    0x37f55aa7,// 37 MFM  15 

    0x90000000,// 38 MFM  16 

/// BDA is 182 words. 

/// BDA size     is 723 (0x2d3) 

/// BDA id       is 0xe834 

    0x02d3e834,// 39 BDA   1 

/// PAY Generic Data size   : 723 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xe814653f,// 40 PAY   1 

    0xcdb3dc58,// 41 PAY   2 

    0xb79ac96c,// 42 PAY   3 

    0xe3629787,// 43 PAY   4 

    0xa7f66568,// 44 PAY   5 

    0xf0a83ed9,// 45 PAY   6 

    0x1445a929,// 46 PAY   7 

    0x5c8e768f,// 47 PAY   8 

    0x10497a47,// 48 PAY   9 

    0x3efe485a,// 49 PAY  10 

    0xfca0e50b,// 50 PAY  11 

    0xbd835a00,// 51 PAY  12 

    0xee4f0e86,// 52 PAY  13 

    0x4f99366b,// 53 PAY  14 

    0xdf4026a2,// 54 PAY  15 

    0x68c21b38,// 55 PAY  16 

    0x3a09d5ba,// 56 PAY  17 

    0x9e620913,// 57 PAY  18 

    0xb3bf05df,// 58 PAY  19 

    0xe275c8f7,// 59 PAY  20 

    0xea983d13,// 60 PAY  21 

    0x946e32a3,// 61 PAY  22 

    0x715d08ba,// 62 PAY  23 

    0x9a12e528,// 63 PAY  24 

    0xe39f881c,// 64 PAY  25 

    0x2aca0664,// 65 PAY  26 

    0xf81297bf,// 66 PAY  27 

    0x68b62d3e,// 67 PAY  28 

    0xb3b7db68,// 68 PAY  29 

    0x2776622e,// 69 PAY  30 

    0x6119861d,// 70 PAY  31 

    0xee8c2476,// 71 PAY  32 

    0xa4e92437,// 72 PAY  33 

    0x949d8699,// 73 PAY  34 

    0x6ce64f0a,// 74 PAY  35 

    0x2d0a4eb5,// 75 PAY  36 

    0xf6092333,// 76 PAY  37 

    0xb02f009c,// 77 PAY  38 

    0xe838460f,// 78 PAY  39 

    0x8b0879f9,// 79 PAY  40 

    0x703d68f0,// 80 PAY  41 

    0xdc0d3b02,// 81 PAY  42 

    0xa2558219,// 82 PAY  43 

    0x232dd04c,// 83 PAY  44 

    0x03c7047f,// 84 PAY  45 

    0xc25f4b98,// 85 PAY  46 

    0x583b1920,// 86 PAY  47 

    0xb7285e72,// 87 PAY  48 

    0xfccca082,// 88 PAY  49 

    0x57a26842,// 89 PAY  50 

    0xd3c18eae,// 90 PAY  51 

    0x544ad98b,// 91 PAY  52 

    0x063e25a4,// 92 PAY  53 

    0xad2a20f1,// 93 PAY  54 

    0x544f6fd7,// 94 PAY  55 

    0x2114846a,// 95 PAY  56 

    0x4dfccc6a,// 96 PAY  57 

    0xb55ed143,// 97 PAY  58 

    0xea68f373,// 98 PAY  59 

    0xdb208ebc,// 99 PAY  60 

    0x0f601faa,// 100 PAY  61 

    0x36420bfb,// 101 PAY  62 

    0xec975110,// 102 PAY  63 

    0xefd9c34e,// 103 PAY  64 

    0xe7d91835,// 104 PAY  65 

    0xe3333015,// 105 PAY  66 

    0x08706ef2,// 106 PAY  67 

    0xe6493927,// 107 PAY  68 

    0xef0e04b8,// 108 PAY  69 

    0x2bb35ede,// 109 PAY  70 

    0xc9593668,// 110 PAY  71 

    0x9ded311f,// 111 PAY  72 

    0x5abe7ff9,// 112 PAY  73 

    0x0fe950c3,// 113 PAY  74 

    0x13b4c3e9,// 114 PAY  75 

    0x69d7f0ee,// 115 PAY  76 

    0x97f3de32,// 116 PAY  77 

    0xb5b34b23,// 117 PAY  78 

    0xfb09aef2,// 118 PAY  79 

    0x5d11cb5b,// 119 PAY  80 

    0xdb648307,// 120 PAY  81 

    0xf1efa0a8,// 121 PAY  82 

    0x1c19c8bf,// 122 PAY  83 

    0x18df1c31,// 123 PAY  84 

    0xcdec92ad,// 124 PAY  85 

    0x08843c32,// 125 PAY  86 

    0x7e2df061,// 126 PAY  87 

    0x302e28c6,// 127 PAY  88 

    0x34f6231c,// 128 PAY  89 

    0xd2846c61,// 129 PAY  90 

    0x06d7aca6,// 130 PAY  91 

    0x76a4fe46,// 131 PAY  92 

    0x53e13dd9,// 132 PAY  93 

    0xe0e7ef70,// 133 PAY  94 

    0x9bcee13b,// 134 PAY  95 

    0xa25c36f4,// 135 PAY  96 

    0x7c247c05,// 136 PAY  97 

    0x06ac1400,// 137 PAY  98 

    0xa5e5ad9f,// 138 PAY  99 

    0xdec6f618,// 139 PAY 100 

    0x989a5ed0,// 140 PAY 101 

    0xd1b221b9,// 141 PAY 102 

    0xc84cbb3d,// 142 PAY 103 

    0x4fb5303a,// 143 PAY 104 

    0x5c250518,// 144 PAY 105 

    0xe3ce2c2f,// 145 PAY 106 

    0x57ba6340,// 146 PAY 107 

    0x4b1fa352,// 147 PAY 108 

    0x3157e42a,// 148 PAY 109 

    0x31bf3edf,// 149 PAY 110 

    0x2032533c,// 150 PAY 111 

    0x4131176c,// 151 PAY 112 

    0xb82195df,// 152 PAY 113 

    0xabb10018,// 153 PAY 114 

    0xdf198000,// 154 PAY 115 

    0xecec0915,// 155 PAY 116 

    0x02f51278,// 156 PAY 117 

    0x085459f5,// 157 PAY 118 

    0xfe3bcaf0,// 158 PAY 119 

    0xfdb08335,// 159 PAY 120 

    0xa8288623,// 160 PAY 121 

    0xb44bd633,// 161 PAY 122 

    0xb161c1e5,// 162 PAY 123 

    0x1a4da505,// 163 PAY 124 

    0xc47fab34,// 164 PAY 125 

    0x7ce69cbe,// 165 PAY 126 

    0x720138bc,// 166 PAY 127 

    0xef265c98,// 167 PAY 128 

    0x99ee63c8,// 168 PAY 129 

    0xcd3407d6,// 169 PAY 130 

    0xd45418b4,// 170 PAY 131 

    0x2967f053,// 171 PAY 132 

    0x46e90b4d,// 172 PAY 133 

    0x42c753e0,// 173 PAY 134 

    0x1eb9810d,// 174 PAY 135 

    0xdb581fb2,// 175 PAY 136 

    0x5112af13,// 176 PAY 137 

    0x50bd20f4,// 177 PAY 138 

    0xa1f2e880,// 178 PAY 139 

    0xe737506e,// 179 PAY 140 

    0xe5289709,// 180 PAY 141 

    0xf76bd1fa,// 181 PAY 142 

    0xcfec7309,// 182 PAY 143 

    0x6481e5c7,// 183 PAY 144 

    0x39ed5332,// 184 PAY 145 

    0xfa596287,// 185 PAY 146 

    0x682892f1,// 186 PAY 147 

    0xf3037963,// 187 PAY 148 

    0x7ae3e57a,// 188 PAY 149 

    0xefe3f2e9,// 189 PAY 150 

    0x0bfaf489,// 190 PAY 151 

    0x20d1f226,// 191 PAY 152 

    0x1e8e06ac,// 192 PAY 153 

    0x90fbf338,// 193 PAY 154 

    0x9ca42b49,// 194 PAY 155 

    0x3141e275,// 195 PAY 156 

    0x378f9f44,// 196 PAY 157 

    0xb688d204,// 197 PAY 158 

    0x62cbe52e,// 198 PAY 159 

    0xb83ea27e,// 199 PAY 160 

    0x106d800f,// 200 PAY 161 

    0xe20cdb41,// 201 PAY 162 

    0x89b6fe45,// 202 PAY 163 

    0x2be96f01,// 203 PAY 164 

    0xa4753cea,// 204 PAY 165 

    0x356f7233,// 205 PAY 166 

    0xcafa0ff0,// 206 PAY 167 

    0xb9c68f8e,// 207 PAY 168 

    0x60ab2471,// 208 PAY 169 

    0x4ba7dc06,// 209 PAY 170 

    0x97fe8380,// 210 PAY 171 

    0xbf92ba35,// 211 PAY 172 

    0x8085a4dd,// 212 PAY 173 

    0x7a1cc29a,// 213 PAY 174 

    0x9da70131,// 214 PAY 175 

    0x20859f18,// 215 PAY 176 

    0xaadf8f92,// 216 PAY 177 

    0x440681ab,// 217 PAY 178 

    0x79afca0e,// 218 PAY 179 

    0xfd892c35,// 219 PAY 180 

    0x68a97f00,// 220 PAY 181 

/// STA is 1 words. 

/// STA num_pkts       : 24 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xed 

    0x03dded18 // 221 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt70_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806628c3,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0xa6105a85,// 6 SCX   4 

    0xbe8e4529,// 7 SCX   5 

    0x2c971e8d,// 8 SCX   6 

    0x56a0c58b,// 9 SCX   7 

    0x6cab56ed,// 10 SCX   8 

    0x16019602,// 11 SCX   9 

    0x1348f5e2,// 12 SCX  10 

    0xe378104a,// 13 SCX  11 

    0x75e0c38a,// 14 SCX  12 

    0xe4520bc4,// 15 SCX  13 

    0xe4f6a696,// 16 SCX  14 

    0x47cddd98,// 17 SCX  15 

    0x3e527d18,// 18 SCX  16 

    0xf2f204c0,// 19 SCX  17 

    0x5b521895,// 20 SCX  18 

    0x287e1d36,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1275 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 482 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 482 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 252 

/// BFD (ofst+len)cry  : 260 

/// BFD ofstiv         : 184 

/// BFD ofsticv        : 552 

    0x000001e2,// 22 BFD   1 

    0x00fc0008,// 23 BFD   2 

    0x022800b8,// 24 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 65 

    0x6500fab5,// 25 MFM   1 

    0x754f92ca,// 26 MFM   2 

    0x9497f066,// 27 MFM   3 

    0x9542fef3,// 28 MFM   4 

    0xd2c3bd33,// 29 MFM   5 

    0xde4e00fe,// 30 MFM   6 

    0x92b2ff9b,// 31 MFM   7 

    0xe20cc5be,// 32 MFM   8 

    0xf4af33b3,// 33 MFM   9 

    0x7fbb445d,// 34 MFM  10 

    0x1ced18f9,// 35 MFM  11 

    0xbca279ab,// 36 MFM  12 

    0xf0d6d796,// 37 MFM  13 

    0xd0000000,// 38 MFM  14 

/// BDA is 320 words. 

/// BDA size     is 1275 (0x4fb) 

/// BDA id       is 0x8e57 

    0x04fb8e57,// 39 BDA   1 

/// PAY Generic Data size   : 1275 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xa731afbd,// 40 PAY   1 

    0x38656022,// 41 PAY   2 

    0x0cf67191,// 42 PAY   3 

    0xead8f177,// 43 PAY   4 

    0x8e435470,// 44 PAY   5 

    0x4fff8886,// 45 PAY   6 

    0xb4c68706,// 46 PAY   7 

    0x2bb01678,// 47 PAY   8 

    0x7071ee1f,// 48 PAY   9 

    0xefb9311f,// 49 PAY  10 

    0xde05699b,// 50 PAY  11 

    0xda3c7ebb,// 51 PAY  12 

    0x60aed44c,// 52 PAY  13 

    0x3cadb8a9,// 53 PAY  14 

    0xea69fd67,// 54 PAY  15 

    0xa068a89e,// 55 PAY  16 

    0x632525c0,// 56 PAY  17 

    0xaba87026,// 57 PAY  18 

    0xefd2b87c,// 58 PAY  19 

    0x8ef0adc4,// 59 PAY  20 

    0x1a9890b1,// 60 PAY  21 

    0xd040cfd1,// 61 PAY  22 

    0x56d92059,// 62 PAY  23 

    0x82228553,// 63 PAY  24 

    0xf289b70d,// 64 PAY  25 

    0x46d724fa,// 65 PAY  26 

    0xe6fdc91c,// 66 PAY  27 

    0x07f9d702,// 67 PAY  28 

    0x1beb154e,// 68 PAY  29 

    0x5022d167,// 69 PAY  30 

    0xa9c7a732,// 70 PAY  31 

    0x207492d5,// 71 PAY  32 

    0xd6a2aa9e,// 72 PAY  33 

    0x64fdc0b6,// 73 PAY  34 

    0x4a48e466,// 74 PAY  35 

    0x719a7568,// 75 PAY  36 

    0x733f2267,// 76 PAY  37 

    0x0696463d,// 77 PAY  38 

    0x9c6646e8,// 78 PAY  39 

    0x24accfaf,// 79 PAY  40 

    0x32cd5272,// 80 PAY  41 

    0x8a83da19,// 81 PAY  42 

    0x917ef8d7,// 82 PAY  43 

    0x82f71c9f,// 83 PAY  44 

    0x370dee2f,// 84 PAY  45 

    0x8891dc4d,// 85 PAY  46 

    0xfa2815d9,// 86 PAY  47 

    0xa557af77,// 87 PAY  48 

    0x47d0a8b8,// 88 PAY  49 

    0x54f6634a,// 89 PAY  50 

    0xceaccc4e,// 90 PAY  51 

    0x69718c79,// 91 PAY  52 

    0xc1f7122a,// 92 PAY  53 

    0x2bffa2d6,// 93 PAY  54 

    0xf5cda604,// 94 PAY  55 

    0x6036ab05,// 95 PAY  56 

    0x865d2b5d,// 96 PAY  57 

    0xc5f2d241,// 97 PAY  58 

    0x18aec89d,// 98 PAY  59 

    0x14089f88,// 99 PAY  60 

    0x9d83bfc9,// 100 PAY  61 

    0x5864a85a,// 101 PAY  62 

    0xd47e0051,// 102 PAY  63 

    0x3bf7d1c7,// 103 PAY  64 

    0xfeeb314f,// 104 PAY  65 

    0xf75284b2,// 105 PAY  66 

    0x914589e3,// 106 PAY  67 

    0x95fb12d1,// 107 PAY  68 

    0x2a403e3b,// 108 PAY  69 

    0x50451b81,// 109 PAY  70 

    0x9aa9dfdd,// 110 PAY  71 

    0x3fb2b038,// 111 PAY  72 

    0xe4e74af1,// 112 PAY  73 

    0xc2ce3eaa,// 113 PAY  74 

    0x54548d87,// 114 PAY  75 

    0xc8fb92c5,// 115 PAY  76 

    0x833362e1,// 116 PAY  77 

    0x66d8af5e,// 117 PAY  78 

    0x09d1ab98,// 118 PAY  79 

    0x0f010e54,// 119 PAY  80 

    0x98baf4dd,// 120 PAY  81 

    0x432582de,// 121 PAY  82 

    0x3936d2a2,// 122 PAY  83 

    0xcd203897,// 123 PAY  84 

    0x37ee013f,// 124 PAY  85 

    0x44e88f4c,// 125 PAY  86 

    0x7f2f9e9e,// 126 PAY  87 

    0x766990ee,// 127 PAY  88 

    0xf5d1911b,// 128 PAY  89 

    0xe171d13e,// 129 PAY  90 

    0x73d9b399,// 130 PAY  91 

    0x61b2f402,// 131 PAY  92 

    0x57f5a1fa,// 132 PAY  93 

    0x7760a275,// 133 PAY  94 

    0x93fe1392,// 134 PAY  95 

    0xfe836d70,// 135 PAY  96 

    0xa643c1f0,// 136 PAY  97 

    0x288c2f82,// 137 PAY  98 

    0xe4ce759d,// 138 PAY  99 

    0xf7dba10e,// 139 PAY 100 

    0xa940d30b,// 140 PAY 101 

    0x682f3cd2,// 141 PAY 102 

    0x675277c0,// 142 PAY 103 

    0xe9a2e7e9,// 143 PAY 104 

    0x9c88435d,// 144 PAY 105 

    0x67225229,// 145 PAY 106 

    0x4bf117ea,// 146 PAY 107 

    0xdfebf5e8,// 147 PAY 108 

    0x93e0d679,// 148 PAY 109 

    0xe0cbd582,// 149 PAY 110 

    0x899f358b,// 150 PAY 111 

    0x77287992,// 151 PAY 112 

    0x9a8be002,// 152 PAY 113 

    0x7ef280e4,// 153 PAY 114 

    0xff1926ab,// 154 PAY 115 

    0xd241b86e,// 155 PAY 116 

    0xb277cacc,// 156 PAY 117 

    0x23b7182c,// 157 PAY 118 

    0xab05adc2,// 158 PAY 119 

    0xf6af014a,// 159 PAY 120 

    0xe8773a15,// 160 PAY 121 

    0xa76917f3,// 161 PAY 122 

    0x370d0225,// 162 PAY 123 

    0x224b76f1,// 163 PAY 124 

    0xec70922d,// 164 PAY 125 

    0x03f03973,// 165 PAY 126 

    0x69e0c98e,// 166 PAY 127 

    0xa5b11733,// 167 PAY 128 

    0xfd325efb,// 168 PAY 129 

    0xd6103059,// 169 PAY 130 

    0x7265d6bf,// 170 PAY 131 

    0xf066d8ef,// 171 PAY 132 

    0x0e39ee4d,// 172 PAY 133 

    0x8190daff,// 173 PAY 134 

    0x21880f02,// 174 PAY 135 

    0xbeda5f6a,// 175 PAY 136 

    0x1e4bfade,// 176 PAY 137 

    0x5b34237f,// 177 PAY 138 

    0x77125da3,// 178 PAY 139 

    0x5bc867e5,// 179 PAY 140 

    0x8bc54158,// 180 PAY 141 

    0x5832f0e4,// 181 PAY 142 

    0x79d8b242,// 182 PAY 143 

    0x408f8288,// 183 PAY 144 

    0xbcc16df5,// 184 PAY 145 

    0x75ceb821,// 185 PAY 146 

    0x0b76d7c7,// 186 PAY 147 

    0x0affc07a,// 187 PAY 148 

    0x65358d8d,// 188 PAY 149 

    0xc46b0ac7,// 189 PAY 150 

    0x14462f43,// 190 PAY 151 

    0x836bc9b7,// 191 PAY 152 

    0x94067df0,// 192 PAY 153 

    0x53cf69e6,// 193 PAY 154 

    0x14cd8886,// 194 PAY 155 

    0xfe258da3,// 195 PAY 156 

    0xa3938772,// 196 PAY 157 

    0x6e5bfae0,// 197 PAY 158 

    0x7943758a,// 198 PAY 159 

    0x9143ef99,// 199 PAY 160 

    0x1bb70b28,// 200 PAY 161 

    0x69c23c78,// 201 PAY 162 

    0x13bde055,// 202 PAY 163 

    0x01b1b7d0,// 203 PAY 164 

    0xdd16643e,// 204 PAY 165 

    0x35e24993,// 205 PAY 166 

    0x9e2097a8,// 206 PAY 167 

    0x2aefc1bc,// 207 PAY 168 

    0xe83d4106,// 208 PAY 169 

    0x83ee2a62,// 209 PAY 170 

    0xef970178,// 210 PAY 171 

    0x8838ad4a,// 211 PAY 172 

    0x7c99fd4a,// 212 PAY 173 

    0x40e62d81,// 213 PAY 174 

    0xb74a9ad3,// 214 PAY 175 

    0x6b98bebc,// 215 PAY 176 

    0x54f1c59c,// 216 PAY 177 

    0xa4754fba,// 217 PAY 178 

    0x503c836c,// 218 PAY 179 

    0xd4677536,// 219 PAY 180 

    0xaf873c05,// 220 PAY 181 

    0x1258cdf5,// 221 PAY 182 

    0x0836b495,// 222 PAY 183 

    0x1c4c874b,// 223 PAY 184 

    0x9bb01696,// 224 PAY 185 

    0x74b4c2bd,// 225 PAY 186 

    0x3602ed03,// 226 PAY 187 

    0xb764d3a7,// 227 PAY 188 

    0x362bddbf,// 228 PAY 189 

    0x3c3f1961,// 229 PAY 190 

    0x10eec89d,// 230 PAY 191 

    0xff60380f,// 231 PAY 192 

    0x76a32d58,// 232 PAY 193 

    0x70717367,// 233 PAY 194 

    0xceb2ed54,// 234 PAY 195 

    0x318dc4c8,// 235 PAY 196 

    0xa23aa1f6,// 236 PAY 197 

    0x4fa683a3,// 237 PAY 198 

    0x504b1f01,// 238 PAY 199 

    0x91d454dd,// 239 PAY 200 

    0x413f2df0,// 240 PAY 201 

    0x57ec28c2,// 241 PAY 202 

    0x2b806b96,// 242 PAY 203 

    0x0a6b327a,// 243 PAY 204 

    0x264d75d3,// 244 PAY 205 

    0xad3ab59e,// 245 PAY 206 

    0x7fdc19d9,// 246 PAY 207 

    0x228c22b8,// 247 PAY 208 

    0xd9875fd2,// 248 PAY 209 

    0x42a9ada7,// 249 PAY 210 

    0x4d485edf,// 250 PAY 211 

    0x5f600df8,// 251 PAY 212 

    0x6ef97e41,// 252 PAY 213 

    0x32621879,// 253 PAY 214 

    0xd718f099,// 254 PAY 215 

    0x54c4e205,// 255 PAY 216 

    0xcc37bc67,// 256 PAY 217 

    0x51eb9a28,// 257 PAY 218 

    0x60052a84,// 258 PAY 219 

    0xf23b16c9,// 259 PAY 220 

    0x8181c92c,// 260 PAY 221 

    0x423c6460,// 261 PAY 222 

    0xc20e0cee,// 262 PAY 223 

    0xfa96538d,// 263 PAY 224 

    0x3bc45fe5,// 264 PAY 225 

    0x6c3a42ab,// 265 PAY 226 

    0xf8abd54c,// 266 PAY 227 

    0x2cf6eedb,// 267 PAY 228 

    0xd4f381e4,// 268 PAY 229 

    0x9e6f48ff,// 269 PAY 230 

    0xdce6af13,// 270 PAY 231 

    0x06df2757,// 271 PAY 232 

    0xa9e6ea34,// 272 PAY 233 

    0xa0dafffb,// 273 PAY 234 

    0xe901b5b2,// 274 PAY 235 

    0x6e9417a3,// 275 PAY 236 

    0xed3f6ddc,// 276 PAY 237 

    0xa7ceebe4,// 277 PAY 238 

    0xbc0abd11,// 278 PAY 239 

    0x43498bdf,// 279 PAY 240 

    0x2eee88c3,// 280 PAY 241 

    0x87089588,// 281 PAY 242 

    0x78dbab9c,// 282 PAY 243 

    0x76e46ee5,// 283 PAY 244 

    0xc5156c0f,// 284 PAY 245 

    0x189b3dd9,// 285 PAY 246 

    0x5da610ef,// 286 PAY 247 

    0xeb9ee7dc,// 287 PAY 248 

    0x87144ead,// 288 PAY 249 

    0x266aefe6,// 289 PAY 250 

    0xa91db10e,// 290 PAY 251 

    0x491ca2e7,// 291 PAY 252 

    0x7a0a3962,// 292 PAY 253 

    0x1cad827a,// 293 PAY 254 

    0x27b1c1d2,// 294 PAY 255 

    0xd890569d,// 295 PAY 256 

    0x287b2494,// 296 PAY 257 

    0x69414c28,// 297 PAY 258 

    0xdc92695b,// 298 PAY 259 

    0x2cb2d138,// 299 PAY 260 

    0x320312b0,// 300 PAY 261 

    0xd9a5fb13,// 301 PAY 262 

    0x5f1f7781,// 302 PAY 263 

    0x165a4c9a,// 303 PAY 264 

    0x01cc65ef,// 304 PAY 265 

    0x27b065fd,// 305 PAY 266 

    0xedc29901,// 306 PAY 267 

    0xf36c8678,// 307 PAY 268 

    0x64aa9eb6,// 308 PAY 269 

    0xfc14e015,// 309 PAY 270 

    0x698a93f2,// 310 PAY 271 

    0x981c1261,// 311 PAY 272 

    0x1ce87baa,// 312 PAY 273 

    0x46f848ad,// 313 PAY 274 

    0xaa4246be,// 314 PAY 275 

    0x91970ecb,// 315 PAY 276 

    0xbbeab6d0,// 316 PAY 277 

    0xd048bcd4,// 317 PAY 278 

    0x036763ca,// 318 PAY 279 

    0x73ead135,// 319 PAY 280 

    0x1e1acde0,// 320 PAY 281 

    0x5aca35d8,// 321 PAY 282 

    0x27f29aec,// 322 PAY 283 

    0x488a4e58,// 323 PAY 284 

    0x5cc51821,// 324 PAY 285 

    0x821767e8,// 325 PAY 286 

    0x9e3953e3,// 326 PAY 287 

    0x5f74da4d,// 327 PAY 288 

    0x76263571,// 328 PAY 289 

    0xbf462c2e,// 329 PAY 290 

    0xe7e6aeea,// 330 PAY 291 

    0x510f1d9a,// 331 PAY 292 

    0xa72d2cb8,// 332 PAY 293 

    0xb7c10be1,// 333 PAY 294 

    0xed91aa2b,// 334 PAY 295 

    0x0404c639,// 335 PAY 296 

    0x07d06c73,// 336 PAY 297 

    0x1cf306aa,// 337 PAY 298 

    0xf33b3c4b,// 338 PAY 299 

    0xce1851fe,// 339 PAY 300 

    0x98044f00,// 340 PAY 301 

    0x8f51c7a5,// 341 PAY 302 

    0xfdf461a8,// 342 PAY 303 

    0x818108f1,// 343 PAY 304 

    0xabf7dd2d,// 344 PAY 305 

    0xb66cbfd2,// 345 PAY 306 

    0x449a5c9d,// 346 PAY 307 

    0x20042617,// 347 PAY 308 

    0xac075975,// 348 PAY 309 

    0x53cdae0e,// 349 PAY 310 

    0xc4bb1c38,// 350 PAY 311 

    0x881e13a2,// 351 PAY 312 

    0xeb850728,// 352 PAY 313 

    0xce7a7577,// 353 PAY 314 

    0xff981773,// 354 PAY 315 

    0x3dd24e80,// 355 PAY 316 

    0x92df9fe7,// 356 PAY 317 

    0xab22d160,// 357 PAY 318 

    0xa4500900,// 358 PAY 319 

/// STA is 1 words. 

/// STA num_pkts       : 20 

/// STA pkt_idx        : 132 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x13 

    0x02111314 // 359 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt71_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x806428b2,// 4 SCX   2 

    0x000001c2,// 5 SCX   3 

    0xeb82896f,// 6 SCX   4 

    0xfe895283,// 7 SCX   5 

    0xe30812ac,// 8 SCX   6 

    0x968c39d4,// 9 SCX   7 

    0x05fd79cd,// 10 SCX   8 

    0x73d9f557,// 11 SCX   9 

    0xa38fea6f,// 12 SCX  10 

    0x08a968c1,// 13 SCX  11 

    0x620c8070,// 14 SCX  12 

    0x97f2b708,// 15 SCX  13 

    0x62a3ab2e,// 16 SCX  14 

    0x4aa4f71f,// 17 SCX  15 

    0x0fb0d60f,// 18 SCX  16 

    0x7f85f889,// 19 SCX  17 

    0xddbf715e,// 20 SCX  18 

    0xf8c397a0,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1223 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 266 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 266 

/// BFD lencrypto      : 168 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 260 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 612 

    0x0000010a,// 22 BFD   1 

    0x005c00a8,// 23 BFD   2 

    0x02640014,// 24 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : e 

    0x0e005fd7,// 25 MFM   1 

    0x1a8d974e,// 26 MFM   2 

    0xbe000000,// 27 MFM   3 

/// BDA is 307 words. 

/// BDA size     is 1223 (0x4c7) 

/// BDA id       is 0xc9c9 

    0x04c7c9c9,// 28 BDA   1 

/// PAY Generic Data size   : 1223 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x93535ef4,// 29 PAY   1 

    0x31b37ca3,// 30 PAY   2 

    0xaf8633d3,// 31 PAY   3 

    0x4fc3bc01,// 32 PAY   4 

    0x9ee538a3,// 33 PAY   5 

    0x28c621b9,// 34 PAY   6 

    0x09a89d27,// 35 PAY   7 

    0xde451940,// 36 PAY   8 

    0xf3e0e9db,// 37 PAY   9 

    0xeab308c7,// 38 PAY  10 

    0x3f454e35,// 39 PAY  11 

    0xf1e3d20d,// 40 PAY  12 

    0x803d2386,// 41 PAY  13 

    0x67d61b83,// 42 PAY  14 

    0x384bdbeb,// 43 PAY  15 

    0xf472a74b,// 44 PAY  16 

    0x325b01b5,// 45 PAY  17 

    0xf574cc3a,// 46 PAY  18 

    0x7e9a3c27,// 47 PAY  19 

    0xbece69ff,// 48 PAY  20 

    0x9502f31c,// 49 PAY  21 

    0x02c84a34,// 50 PAY  22 

    0x503b3557,// 51 PAY  23 

    0x22a8c313,// 52 PAY  24 

    0xfc6f08f4,// 53 PAY  25 

    0xad457152,// 54 PAY  26 

    0x477c0896,// 55 PAY  27 

    0x73b372d6,// 56 PAY  28 

    0x608ac7c1,// 57 PAY  29 

    0xd7948069,// 58 PAY  30 

    0x1b02f466,// 59 PAY  31 

    0x9dbf2757,// 60 PAY  32 

    0x88a61d65,// 61 PAY  33 

    0xb6f9067f,// 62 PAY  34 

    0xbb60372d,// 63 PAY  35 

    0xbd270d48,// 64 PAY  36 

    0xbba523e1,// 65 PAY  37 

    0xd00e8b78,// 66 PAY  38 

    0x58070321,// 67 PAY  39 

    0x34ebb9c7,// 68 PAY  40 

    0x4b3cc049,// 69 PAY  41 

    0xf07e5276,// 70 PAY  42 

    0x004e14e4,// 71 PAY  43 

    0xca2d3f6a,// 72 PAY  44 

    0x17589058,// 73 PAY  45 

    0xdd7f9a24,// 74 PAY  46 

    0xf89c0086,// 75 PAY  47 

    0x746069ac,// 76 PAY  48 

    0x9720b869,// 77 PAY  49 

    0xb1ddb350,// 78 PAY  50 

    0xf4fa451c,// 79 PAY  51 

    0xe0a7cc63,// 80 PAY  52 

    0xc7e6d213,// 81 PAY  53 

    0xfa5fc02d,// 82 PAY  54 

    0x65cd34e6,// 83 PAY  55 

    0xca9ce988,// 84 PAY  56 

    0x27939c25,// 85 PAY  57 

    0x8251ee60,// 86 PAY  58 

    0x2453becb,// 87 PAY  59 

    0x23d078c9,// 88 PAY  60 

    0xb3394d9f,// 89 PAY  61 

    0xa35ebd72,// 90 PAY  62 

    0xc60a6f1f,// 91 PAY  63 

    0xe1de789a,// 92 PAY  64 

    0xf747ff2f,// 93 PAY  65 

    0xb7085da7,// 94 PAY  66 

    0x58f64a3a,// 95 PAY  67 

    0x488e3a26,// 96 PAY  68 

    0x21c9d2fe,// 97 PAY  69 

    0xd722a351,// 98 PAY  70 

    0x4fc2ac4b,// 99 PAY  71 

    0x404348bd,// 100 PAY  72 

    0x84fdda40,// 101 PAY  73 

    0x20bdb30f,// 102 PAY  74 

    0xb3951a39,// 103 PAY  75 

    0x9574977c,// 104 PAY  76 

    0x1f7d6fe5,// 105 PAY  77 

    0x80be8f39,// 106 PAY  78 

    0x299cc98e,// 107 PAY  79 

    0xa1eb7d34,// 108 PAY  80 

    0xa11204be,// 109 PAY  81 

    0xe80170fe,// 110 PAY  82 

    0x27f13fd0,// 111 PAY  83 

    0x1fef0790,// 112 PAY  84 

    0xe05e0c39,// 113 PAY  85 

    0x02ea676a,// 114 PAY  86 

    0x4738c840,// 115 PAY  87 

    0x02a0df77,// 116 PAY  88 

    0x0a3c4a26,// 117 PAY  89 

    0xabc613c8,// 118 PAY  90 

    0xbf288444,// 119 PAY  91 

    0xd2a14993,// 120 PAY  92 

    0x9dd8c97e,// 121 PAY  93 

    0x9961bab8,// 122 PAY  94 

    0x51388a07,// 123 PAY  95 

    0xb77b5603,// 124 PAY  96 

    0xaac47a40,// 125 PAY  97 

    0x62e3a73a,// 126 PAY  98 

    0xbf1567ce,// 127 PAY  99 

    0x8cb249fb,// 128 PAY 100 

    0x5cc3df0f,// 129 PAY 101 

    0x087bc034,// 130 PAY 102 

    0x60f3fe3b,// 131 PAY 103 

    0x6f014bbb,// 132 PAY 104 

    0x968d6818,// 133 PAY 105 

    0xf8865bb2,// 134 PAY 106 

    0x6ab26356,// 135 PAY 107 

    0xc1a51bd9,// 136 PAY 108 

    0xf2aabf73,// 137 PAY 109 

    0x51c0d950,// 138 PAY 110 

    0x425b3d1d,// 139 PAY 111 

    0x70458f55,// 140 PAY 112 

    0xfa0fc01e,// 141 PAY 113 

    0x8a2c022e,// 142 PAY 114 

    0x8f97d757,// 143 PAY 115 

    0xe94b50bd,// 144 PAY 116 

    0x56e33aa1,// 145 PAY 117 

    0x99b184d7,// 146 PAY 118 

    0xfb1224aa,// 147 PAY 119 

    0xdf4148e1,// 148 PAY 120 

    0x4b14150a,// 149 PAY 121 

    0x5ce722e9,// 150 PAY 122 

    0x570ee6a3,// 151 PAY 123 

    0x18633896,// 152 PAY 124 

    0xac943f29,// 153 PAY 125 

    0xc46f0abd,// 154 PAY 126 

    0x109b1ff3,// 155 PAY 127 

    0xbd7019d2,// 156 PAY 128 

    0xb13ed464,// 157 PAY 129 

    0x12e3340c,// 158 PAY 130 

    0xdb9b17a9,// 159 PAY 131 

    0x3f31927d,// 160 PAY 132 

    0x24a56c90,// 161 PAY 133 

    0x1de5f8d9,// 162 PAY 134 

    0x0108920b,// 163 PAY 135 

    0xfbfbcc6b,// 164 PAY 136 

    0xb847da45,// 165 PAY 137 

    0xc2612b49,// 166 PAY 138 

    0xdd6617a8,// 167 PAY 139 

    0xc2c5995c,// 168 PAY 140 

    0x63754d97,// 169 PAY 141 

    0x0acdfbe4,// 170 PAY 142 

    0x10c44c65,// 171 PAY 143 

    0x0481bf85,// 172 PAY 144 

    0xfdd3aaf0,// 173 PAY 145 

    0x2d3a31f7,// 174 PAY 146 

    0xd3cfaf91,// 175 PAY 147 

    0xc7e0466c,// 176 PAY 148 

    0xeee3d9bd,// 177 PAY 149 

    0x2ac0f10a,// 178 PAY 150 

    0x3cf2efe7,// 179 PAY 151 

    0xf4bb0e7e,// 180 PAY 152 

    0xdd558009,// 181 PAY 153 

    0x8f4dad83,// 182 PAY 154 

    0x8c61e215,// 183 PAY 155 

    0x9b98eed8,// 184 PAY 156 

    0x84308b33,// 185 PAY 157 

    0x9fe1639b,// 186 PAY 158 

    0x32ea71fe,// 187 PAY 159 

    0xe5e66d35,// 188 PAY 160 

    0xf90d342a,// 189 PAY 161 

    0xf5a51c8c,// 190 PAY 162 

    0x6d52c87d,// 191 PAY 163 

    0xd2398e8d,// 192 PAY 164 

    0x4bb12088,// 193 PAY 165 

    0x36b0b54d,// 194 PAY 166 

    0x7afe18d6,// 195 PAY 167 

    0x505303e9,// 196 PAY 168 

    0xaee69759,// 197 PAY 169 

    0x8eda9d70,// 198 PAY 170 

    0x2d6b7537,// 199 PAY 171 

    0x1f9043f7,// 200 PAY 172 

    0xa8fd84d9,// 201 PAY 173 

    0x4c409742,// 202 PAY 174 

    0xfbeababb,// 203 PAY 175 

    0x5725e4e8,// 204 PAY 176 

    0x0abef7f2,// 205 PAY 177 

    0xe8716edb,// 206 PAY 178 

    0xac50bba7,// 207 PAY 179 

    0xf86c846c,// 208 PAY 180 

    0x815a61d7,// 209 PAY 181 

    0x9912b7f9,// 210 PAY 182 

    0x8925d10a,// 211 PAY 183 

    0x8d64502e,// 212 PAY 184 

    0x7bf2bdb5,// 213 PAY 185 

    0x967fbaad,// 214 PAY 186 

    0xb147caa8,// 215 PAY 187 

    0x13493382,// 216 PAY 188 

    0xeb8410d1,// 217 PAY 189 

    0x4573a155,// 218 PAY 190 

    0x8c4290f0,// 219 PAY 191 

    0xe0a6b1b0,// 220 PAY 192 

    0x513fbd4e,// 221 PAY 193 

    0xf02beecb,// 222 PAY 194 

    0x15d653cc,// 223 PAY 195 

    0xcbb21213,// 224 PAY 196 

    0xde38b5d3,// 225 PAY 197 

    0xf8f49530,// 226 PAY 198 

    0x499ab83f,// 227 PAY 199 

    0x7e27bb52,// 228 PAY 200 

    0xd86e084b,// 229 PAY 201 

    0x02950e22,// 230 PAY 202 

    0x523e3fc7,// 231 PAY 203 

    0xf8dc55d3,// 232 PAY 204 

    0xa3de63f2,// 233 PAY 205 

    0x91163767,// 234 PAY 206 

    0xf3ac1fe2,// 235 PAY 207 

    0xd3d014f7,// 236 PAY 208 

    0xa05ab35d,// 237 PAY 209 

    0x1c4e90c0,// 238 PAY 210 

    0x4c7b550f,// 239 PAY 211 

    0xbac09ec9,// 240 PAY 212 

    0x83a6e934,// 241 PAY 213 

    0x1f9a48e5,// 242 PAY 214 

    0xfcbfc784,// 243 PAY 215 

    0x808d58ad,// 244 PAY 216 

    0x39bd5c37,// 245 PAY 217 

    0xa590c28b,// 246 PAY 218 

    0x6b3e8175,// 247 PAY 219 

    0xe897c723,// 248 PAY 220 

    0x30d2480c,// 249 PAY 221 

    0x3e2c7b56,// 250 PAY 222 

    0xe6085f0f,// 251 PAY 223 

    0x760a3e29,// 252 PAY 224 

    0xa1810b6e,// 253 PAY 225 

    0xa9c330d2,// 254 PAY 226 

    0xfc2c6339,// 255 PAY 227 

    0x2f724d86,// 256 PAY 228 

    0x8d747bfb,// 257 PAY 229 

    0xb4051c85,// 258 PAY 230 

    0xf184adf1,// 259 PAY 231 

    0x180d4dc0,// 260 PAY 232 

    0x99218fe3,// 261 PAY 233 

    0x515e3c97,// 262 PAY 234 

    0xb5cdfe7d,// 263 PAY 235 

    0xe79a4d2d,// 264 PAY 236 

    0xd0d4a626,// 265 PAY 237 

    0xbfa218a9,// 266 PAY 238 

    0x442bdb78,// 267 PAY 239 

    0x09d1db9f,// 268 PAY 240 

    0xb619fc79,// 269 PAY 241 

    0xc2f10d96,// 270 PAY 242 

    0x622f6926,// 271 PAY 243 

    0xcdf81522,// 272 PAY 244 

    0xf7fb8699,// 273 PAY 245 

    0x66efadb3,// 274 PAY 246 

    0xd94080da,// 275 PAY 247 

    0x57161937,// 276 PAY 248 

    0x167a62d6,// 277 PAY 249 

    0xe10ab55e,// 278 PAY 250 

    0x574abc09,// 279 PAY 251 

    0xc30c2a1d,// 280 PAY 252 

    0x079a3e06,// 281 PAY 253 

    0xe2aaa3e9,// 282 PAY 254 

    0x2ebf09f9,// 283 PAY 255 

    0xda0662c8,// 284 PAY 256 

    0xac4f5540,// 285 PAY 257 

    0xcd628647,// 286 PAY 258 

    0xdca5d8e1,// 287 PAY 259 

    0xe8e2186d,// 288 PAY 260 

    0x0ca7e676,// 289 PAY 261 

    0x62aaccab,// 290 PAY 262 

    0x7d6ff48b,// 291 PAY 263 

    0xf12bfbdc,// 292 PAY 264 

    0xa24d12b7,// 293 PAY 265 

    0xcdec1baf,// 294 PAY 266 

    0xddf23f46,// 295 PAY 267 

    0xde0be85a,// 296 PAY 268 

    0x3cb34812,// 297 PAY 269 

    0xe1c30fdb,// 298 PAY 270 

    0x476a27bc,// 299 PAY 271 

    0x447ba0e4,// 300 PAY 272 

    0x46dd3c7e,// 301 PAY 273 

    0x825916cb,// 302 PAY 274 

    0xed18db2b,// 303 PAY 275 

    0x171e175b,// 304 PAY 276 

    0x765dd56b,// 305 PAY 277 

    0x8f39822a,// 306 PAY 278 

    0xb482c2f5,// 307 PAY 279 

    0x8efbc7d1,// 308 PAY 280 

    0x1716626d,// 309 PAY 281 

    0x97396074,// 310 PAY 282 

    0x098ba85c,// 311 PAY 283 

    0x1758e231,// 312 PAY 284 

    0xa2942edc,// 313 PAY 285 

    0x088ffc00,// 314 PAY 286 

    0x68a64093,// 315 PAY 287 

    0x9411f84c,// 316 PAY 288 

    0x3f99a3af,// 317 PAY 289 

    0x96c46df2,// 318 PAY 290 

    0x42246c37,// 319 PAY 291 

    0xfed23de3,// 320 PAY 292 

    0x9fa1a7cb,// 321 PAY 293 

    0xa2199d34,// 322 PAY 294 

    0xbf76e2e8,// 323 PAY 295 

    0x428f1e69,// 324 PAY 296 

    0x91b2a809,// 325 PAY 297 

    0x2cf92a15,// 326 PAY 298 

    0xcbafe4ae,// 327 PAY 299 

    0xc8996674,// 328 PAY 300 

    0x34afc052,// 329 PAY 301 

    0xefef8a10,// 330 PAY 302 

    0xed3c405d,// 331 PAY 303 

    0x23eaca19,// 332 PAY 304 

    0xa5ef9c7e,// 333 PAY 305 

    0x9fe10d00,// 334 PAY 306 

/// STA is 1 words. 

/// STA num_pkts       : 85 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf5 

    0x02ccf555 // 335 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt72_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x8065284d,// 4 SCX   2 

    0x00004482,// 5 SCX   3 

    0xb344ee08,// 6 SCX   4 

    0x0c1be253,// 7 SCX   5 

    0x220fb0a6,// 8 SCX   6 

    0x2a14e5b5,// 9 SCX   7 

    0xfb340727,// 10 SCX   8 

    0x65641cca,// 11 SCX   9 

    0x43b99d77,// 12 SCX  10 

    0x15486249,// 13 SCX  11 

    0x94123bd9,// 14 SCX  12 

    0xa5232a98,// 15 SCX  13 

    0xd8fb8efc,// 16 SCX  14 

    0x1e56650e,// 17 SCX  15 

    0x8d2941d1,// 18 SCX  16 

    0x15849b0c,// 19 SCX  17 

    0x18281ce8,// 20 SCX  18 

    0x8bb4d70f,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 105 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 33 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 33 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 16 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 68 

    0x00000021,// 22 BFD   1 

    0x00080008,// 23 BFD   2 

    0x00440000,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01006000,// 25 MFM   1 

/// BDA is 28 words. 

/// BDA size     is 105 (0x69) 

/// BDA id       is 0xdad4 

    0x0069dad4,// 26 BDA   1 

/// PAY Generic Data size   : 105 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2e4c8f44,// 27 PAY   1 

    0x845e6a32,// 28 PAY   2 

    0xa6ce0681,// 29 PAY   3 

    0x97684d70,// 30 PAY   4 

    0x47ed8be4,// 31 PAY   5 

    0x0ca55f53,// 32 PAY   6 

    0x13460391,// 33 PAY   7 

    0xe257145d,// 34 PAY   8 

    0x3034a7e3,// 35 PAY   9 

    0xb42026b0,// 36 PAY  10 

    0x514ef3a6,// 37 PAY  11 

    0x3d6c22f1,// 38 PAY  12 

    0x8208e2ce,// 39 PAY  13 

    0x083595ec,// 40 PAY  14 

    0xcb2f7c82,// 41 PAY  15 

    0x364ff57f,// 42 PAY  16 

    0xe1078ddd,// 43 PAY  17 

    0xa0ec884d,// 44 PAY  18 

    0xcdfa79f9,// 45 PAY  19 

    0x38c2158a,// 46 PAY  20 

    0xc5e20b3d,// 47 PAY  21 

    0xc15a3818,// 48 PAY  22 

    0x98fcab8c,// 49 PAY  23 

    0x72c722e0,// 50 PAY  24 

    0xf06cefa6,// 51 PAY  25 

    0x8f50159c,// 52 PAY  26 

    0x46000000,// 53 PAY  27 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 45 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x94 

    0x00b5942c // 54 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt73_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x80622853,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xdf92daf3,// 6 SCX   4 

    0xcbf24784,// 7 SCX   5 

    0x9c2a1047,// 8 SCX   6 

    0x2d61c73f,// 9 SCX   7 

    0x49f3bb13,// 10 SCX   8 

    0x583ac0bf,// 11 SCX   9 

    0x69f7a5f3,// 12 SCX  10 

    0x8c8ac7f3,// 13 SCX  11 

    0xfe74a85c,// 14 SCX  12 

    0x35486b57,// 15 SCX  13 

    0x1d49000b,// 16 SCX  14 

    0xa660f951,// 17 SCX  15 

    0x9c4c9741,// 18 SCX  16 

    0xf7c11d59,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 429 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 18 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 18 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 16 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 404 

    0x00000012,// 20 BFD   1 

    0x00080008,// 21 BFD   2 

    0x01940000,// 22 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x0300c500,// 23 MFM   1 

/// BDA is 109 words. 

/// BDA size     is 429 (0x1ad) 

/// BDA id       is 0xb041 

    0x01adb041,// 24 BDA   1 

/// PAY Generic Data size   : 429 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf1149571,// 25 PAY   1 

    0x2a17d39f,// 26 PAY   2 

    0x6f585697,// 27 PAY   3 

    0xa5d9f5d7,// 28 PAY   4 

    0x5582d983,// 29 PAY   5 

    0x52921999,// 30 PAY   6 

    0x705ca01f,// 31 PAY   7 

    0xc4df5b02,// 32 PAY   8 

    0x7eb02e24,// 33 PAY   9 

    0xcd76d848,// 34 PAY  10 

    0x63801ee4,// 35 PAY  11 

    0x35f2ed30,// 36 PAY  12 

    0x6bc4804e,// 37 PAY  13 

    0xd16a3c7c,// 38 PAY  14 

    0x3f01b1c6,// 39 PAY  15 

    0xd7c41b18,// 40 PAY  16 

    0xa79a2569,// 41 PAY  17 

    0x869eedba,// 42 PAY  18 

    0x49a2581b,// 43 PAY  19 

    0x928ccfa9,// 44 PAY  20 

    0xf29ebcf3,// 45 PAY  21 

    0x351f4ca4,// 46 PAY  22 

    0xb7e5d945,// 47 PAY  23 

    0x59066568,// 48 PAY  24 

    0x7bfe764e,// 49 PAY  25 

    0xdbdc9669,// 50 PAY  26 

    0xdc9bec84,// 51 PAY  27 

    0xaebde1f9,// 52 PAY  28 

    0x182a2923,// 53 PAY  29 

    0xc4aa871e,// 54 PAY  30 

    0xb7c19f41,// 55 PAY  31 

    0xf983cd05,// 56 PAY  32 

    0xafad39d5,// 57 PAY  33 

    0x762ba32e,// 58 PAY  34 

    0xb4cc6c2e,// 59 PAY  35 

    0x4714bd3c,// 60 PAY  36 

    0xba54b963,// 61 PAY  37 

    0x613a7520,// 62 PAY  38 

    0x3433113d,// 63 PAY  39 

    0xa8a762a9,// 64 PAY  40 

    0x40749acb,// 65 PAY  41 

    0xfd530b69,// 66 PAY  42 

    0x2a4ee7f3,// 67 PAY  43 

    0xac1874be,// 68 PAY  44 

    0x4beef707,// 69 PAY  45 

    0xc4d18805,// 70 PAY  46 

    0xc4704f37,// 71 PAY  47 

    0xc9be9f82,// 72 PAY  48 

    0x39a274de,// 73 PAY  49 

    0x69de2cf8,// 74 PAY  50 

    0x15c820db,// 75 PAY  51 

    0xb7ccd921,// 76 PAY  52 

    0x8a3479fe,// 77 PAY  53 

    0xe165c96c,// 78 PAY  54 

    0x537ee4f6,// 79 PAY  55 

    0x1c1aee5a,// 80 PAY  56 

    0x4340d233,// 81 PAY  57 

    0x9bec2138,// 82 PAY  58 

    0xab1e15d8,// 83 PAY  59 

    0x8abd0451,// 84 PAY  60 

    0xeaf35917,// 85 PAY  61 

    0x72b0af5e,// 86 PAY  62 

    0x50c444b9,// 87 PAY  63 

    0xb0e82c97,// 88 PAY  64 

    0x922640cb,// 89 PAY  65 

    0x835962fd,// 90 PAY  66 

    0xae522b80,// 91 PAY  67 

    0x8aa64481,// 92 PAY  68 

    0x7ea18dcc,// 93 PAY  69 

    0x98a937bd,// 94 PAY  70 

    0xecc8286f,// 95 PAY  71 

    0x31a4bad9,// 96 PAY  72 

    0x0edd2e6d,// 97 PAY  73 

    0xfd7fc345,// 98 PAY  74 

    0x592b25b9,// 99 PAY  75 

    0x87f23a29,// 100 PAY  76 

    0x3d6883e9,// 101 PAY  77 

    0xf655347c,// 102 PAY  78 

    0xecb9f0aa,// 103 PAY  79 

    0x4076a3fd,// 104 PAY  80 

    0x259078f8,// 105 PAY  81 

    0xbb309c1a,// 106 PAY  82 

    0xcba123c8,// 107 PAY  83 

    0x46e7684e,// 108 PAY  84 

    0x704b8164,// 109 PAY  85 

    0x639e6fb2,// 110 PAY  86 

    0x989a5ae0,// 111 PAY  87 

    0x0fa0d68f,// 112 PAY  88 

    0x8d8e4fb3,// 113 PAY  89 

    0xf92e6e23,// 114 PAY  90 

    0x2355b339,// 115 PAY  91 

    0x36da1cad,// 116 PAY  92 

    0xf46db92f,// 117 PAY  93 

    0x67d90d58,// 118 PAY  94 

    0xf2c75b48,// 119 PAY  95 

    0x1b019897,// 120 PAY  96 

    0x62ff8ee5,// 121 PAY  97 

    0x50f2b0e9,// 122 PAY  98 

    0x1581a56f,// 123 PAY  99 

    0x2c563c95,// 124 PAY 100 

    0x7b1b7473,// 125 PAY 101 

    0x89a4c04d,// 126 PAY 102 

    0x1797ade8,// 127 PAY 103 

    0x50e63144,// 128 PAY 104 

    0x4d716264,// 129 PAY 105 

    0x95443caf,// 130 PAY 106 

    0x2bbd243e,// 131 PAY 107 

    0x5c000000,// 132 PAY 108 

/// STA is 1 words. 

/// STA num_pkts       : 218 

/// STA pkt_idx        : 241 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x44 

    0x03c544da // 133 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt74_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8060287e,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xee85b63a,// 6 SCX   4 

    0xa99b7144,// 7 SCX   5 

    0x6d3b500d,// 8 SCX   6 

    0xd526e171,// 9 SCX   7 

    0x81c7d3f4,// 10 SCX   8 

    0xd9c06785,// 11 SCX   9 

    0xb4018431,// 12 SCX  10 

    0xe621acc6,// 13 SCX  11 

    0x6312f856,// 14 SCX  12 

    0x372a4cca,// 15 SCX  13 

    0x087b30ea,// 16 SCX  14 

    0x7ef30192,// 17 SCX  15 

    0x7b459bfb,// 18 SCX  16 

    0xc42b101e,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1885 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1800 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1800 

/// BFD lencrypto      : 296 

/// BFD ofstcrypto     : 1376 

/// BFD (ofst+len)cry  : 1672 

/// BFD ofstiv         : 888 

/// BFD ofsticv        : 1864 

    0x00000708,// 20 BFD   1 

    0x05600128,// 21 BFD   2 

    0x07480378,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00c0a3,// 23 MFM   1 

    0x2bbac793,// 24 MFM   2 

    0x4f8ffcde,// 25 MFM   3 

    0xee986b3a,// 26 MFM   4 

    0x1f959478,// 27 MFM   5 

    0x43ccf251,// 28 MFM   6 

    0xf3cc131e,// 29 MFM   7 

    0x9fea44a2,// 30 MFM   8 

    0x36fb6d00,// 31 MFM   9 

    0x2543ef1e,// 32 MFM  10 

    0x5a812fd3,// 33 MFM  11 

    0x16cd0d8d,// 34 MFM  12 

    0x22f29644,// 35 MFM  13 

    0xe02e3f43,// 36 MFM  14 

    0x7add57ef,// 37 MFM  15 

    0xed61b422,// 38 MFM  16 

/// BDA is 473 words. 

/// BDA size     is 1885 (0x75d) 

/// BDA id       is 0xa0be 

    0x075da0be,// 39 BDA   1 

/// PAY Generic Data size   : 1885 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x5cd118cb,// 40 PAY   1 

    0x16489fb9,// 41 PAY   2 

    0x0fb3080a,// 42 PAY   3 

    0x9a3de689,// 43 PAY   4 

    0x802e6100,// 44 PAY   5 

    0xce4393a4,// 45 PAY   6 

    0x7abe2e7f,// 46 PAY   7 

    0xe68ac8a4,// 47 PAY   8 

    0xbf4ca502,// 48 PAY   9 

    0x97b083be,// 49 PAY  10 

    0x43aaa914,// 50 PAY  11 

    0xbeab49bf,// 51 PAY  12 

    0xdeab60cd,// 52 PAY  13 

    0x44bf5494,// 53 PAY  14 

    0x0b9c32be,// 54 PAY  15 

    0x4ae85f49,// 55 PAY  16 

    0x0423034f,// 56 PAY  17 

    0xbcc4fc99,// 57 PAY  18 

    0xccdcc124,// 58 PAY  19 

    0xe4f08bb7,// 59 PAY  20 

    0xf0daccf4,// 60 PAY  21 

    0xfd431b65,// 61 PAY  22 

    0xf7a9a11a,// 62 PAY  23 

    0xbecbbf26,// 63 PAY  24 

    0x58fd3a58,// 64 PAY  25 

    0x8b2086da,// 65 PAY  26 

    0x69a05a21,// 66 PAY  27 

    0x93a14140,// 67 PAY  28 

    0x4cd700ae,// 68 PAY  29 

    0x2751f0c4,// 69 PAY  30 

    0x7be8b910,// 70 PAY  31 

    0xf75ae2f2,// 71 PAY  32 

    0x472ff78c,// 72 PAY  33 

    0xcf6716b7,// 73 PAY  34 

    0xca33a4a6,// 74 PAY  35 

    0xc25af151,// 75 PAY  36 

    0xf1619095,// 76 PAY  37 

    0x3ea3c726,// 77 PAY  38 

    0xedaaeb55,// 78 PAY  39 

    0xfa603639,// 79 PAY  40 

    0x1185d6a8,// 80 PAY  41 

    0x9a3eea05,// 81 PAY  42 

    0xa23b9d11,// 82 PAY  43 

    0xbc77c351,// 83 PAY  44 

    0xbc603d67,// 84 PAY  45 

    0xb9718142,// 85 PAY  46 

    0x72dda0e1,// 86 PAY  47 

    0xe0ce5244,// 87 PAY  48 

    0x4a7607a0,// 88 PAY  49 

    0xc2bfa806,// 89 PAY  50 

    0x26e34f55,// 90 PAY  51 

    0x8f7487cc,// 91 PAY  52 

    0x03ebc37d,// 92 PAY  53 

    0xaf7048fb,// 93 PAY  54 

    0x390981bb,// 94 PAY  55 

    0x2025f23f,// 95 PAY  56 

    0x1d96a86a,// 96 PAY  57 

    0xf1d75e93,// 97 PAY  58 

    0x70d693ea,// 98 PAY  59 

    0xa366e9fd,// 99 PAY  60 

    0x64a08016,// 100 PAY  61 

    0x063deba1,// 101 PAY  62 

    0x370fa7ef,// 102 PAY  63 

    0x736b7d55,// 103 PAY  64 

    0xf99b23a2,// 104 PAY  65 

    0x51915110,// 105 PAY  66 

    0x42e32910,// 106 PAY  67 

    0x6f0c1fb9,// 107 PAY  68 

    0x9d2997cb,// 108 PAY  69 

    0x4e0ff9e0,// 109 PAY  70 

    0x233b0bda,// 110 PAY  71 

    0xd38f2360,// 111 PAY  72 

    0xc613f025,// 112 PAY  73 

    0x436c56d1,// 113 PAY  74 

    0x400cb8e5,// 114 PAY  75 

    0x690b9f67,// 115 PAY  76 

    0x96f6c2b3,// 116 PAY  77 

    0xdc7cc3f8,// 117 PAY  78 

    0xde71f785,// 118 PAY  79 

    0x67640147,// 119 PAY  80 

    0xa782817f,// 120 PAY  81 

    0x8c3b1ea1,// 121 PAY  82 

    0x153c4dd3,// 122 PAY  83 

    0x98799afa,// 123 PAY  84 

    0xced99272,// 124 PAY  85 

    0x3fef0fd3,// 125 PAY  86 

    0x06067513,// 126 PAY  87 

    0x1e45d32c,// 127 PAY  88 

    0xd00bc1d0,// 128 PAY  89 

    0x77a37f85,// 129 PAY  90 

    0x41d138fa,// 130 PAY  91 

    0xcef437a6,// 131 PAY  92 

    0x19dbbc2c,// 132 PAY  93 

    0x98e4156a,// 133 PAY  94 

    0x2e4bb72b,// 134 PAY  95 

    0xcf4d4a70,// 135 PAY  96 

    0xaedbe741,// 136 PAY  97 

    0x544c6254,// 137 PAY  98 

    0x9c67e2f4,// 138 PAY  99 

    0x5535641d,// 139 PAY 100 

    0x2594b87d,// 140 PAY 101 

    0x5ce8cb2e,// 141 PAY 102 

    0x09eb1073,// 142 PAY 103 

    0x84179727,// 143 PAY 104 

    0xa8a05491,// 144 PAY 105 

    0x2e26c25d,// 145 PAY 106 

    0x30eb60b7,// 146 PAY 107 

    0xe1fe83e8,// 147 PAY 108 

    0xeea12ae5,// 148 PAY 109 

    0x4ba2f204,// 149 PAY 110 

    0xcf46af54,// 150 PAY 111 

    0x7b673d7f,// 151 PAY 112 

    0x34e5ca05,// 152 PAY 113 

    0xb218a4e7,// 153 PAY 114 

    0x96f2d1a6,// 154 PAY 115 

    0xc848785f,// 155 PAY 116 

    0x557749ac,// 156 PAY 117 

    0xa4f42d5c,// 157 PAY 118 

    0xff464575,// 158 PAY 119 

    0x34ceadcb,// 159 PAY 120 

    0x3f791e63,// 160 PAY 121 

    0xb7deac31,// 161 PAY 122 

    0x4dda39d9,// 162 PAY 123 

    0x68411e3c,// 163 PAY 124 

    0xf271b756,// 164 PAY 125 

    0x81eb8ca0,// 165 PAY 126 

    0xbfdd9c48,// 166 PAY 127 

    0x921e1c2f,// 167 PAY 128 

    0xa72ab4dd,// 168 PAY 129 

    0x5f0f0d35,// 169 PAY 130 

    0xf45d6678,// 170 PAY 131 

    0x38d25461,// 171 PAY 132 

    0x9c80b547,// 172 PAY 133 

    0x40652c6b,// 173 PAY 134 

    0x41975b31,// 174 PAY 135 

    0x3f86bafb,// 175 PAY 136 

    0x61785b62,// 176 PAY 137 

    0x90c5bc51,// 177 PAY 138 

    0x63cf25a3,// 178 PAY 139 

    0xb7c6a057,// 179 PAY 140 

    0x4c7598fc,// 180 PAY 141 

    0x257fdd9e,// 181 PAY 142 

    0x030f4e13,// 182 PAY 143 

    0x003581fb,// 183 PAY 144 

    0x49ac8389,// 184 PAY 145 

    0x55fa427d,// 185 PAY 146 

    0xb4ec7ba8,// 186 PAY 147 

    0xb7f6f4f5,// 187 PAY 148 

    0x4f21a5b0,// 188 PAY 149 

    0xe53b4a94,// 189 PAY 150 

    0x87ac8444,// 190 PAY 151 

    0xefce69f7,// 191 PAY 152 

    0xcb3edfed,// 192 PAY 153 

    0xab489494,// 193 PAY 154 

    0xd575dc07,// 194 PAY 155 

    0x60360898,// 195 PAY 156 

    0x197eea18,// 196 PAY 157 

    0xe49ce216,// 197 PAY 158 

    0xa3eec54f,// 198 PAY 159 

    0x3fe70785,// 199 PAY 160 

    0x8af5fd68,// 200 PAY 161 

    0x2dfff093,// 201 PAY 162 

    0x1886bb99,// 202 PAY 163 

    0xc5cbbba2,// 203 PAY 164 

    0xa92c68c5,// 204 PAY 165 

    0xc4436048,// 205 PAY 166 

    0xa4637da6,// 206 PAY 167 

    0x9e316e59,// 207 PAY 168 

    0x05997632,// 208 PAY 169 

    0x8fb7c7df,// 209 PAY 170 

    0x8299ef87,// 210 PAY 171 

    0x5760ea36,// 211 PAY 172 

    0x655fa70b,// 212 PAY 173 

    0x8ba83105,// 213 PAY 174 

    0x4f3a60a1,// 214 PAY 175 

    0xd4aab2eb,// 215 PAY 176 

    0x1bf553fc,// 216 PAY 177 

    0x757fc414,// 217 PAY 178 

    0x2f3cec51,// 218 PAY 179 

    0x0fecae9a,// 219 PAY 180 

    0x60b66947,// 220 PAY 181 

    0x2267959a,// 221 PAY 182 

    0x3eecf956,// 222 PAY 183 

    0xbc926fa1,// 223 PAY 184 

    0xe3d37da7,// 224 PAY 185 

    0x74573fdd,// 225 PAY 186 

    0xe5583c6c,// 226 PAY 187 

    0x7c3ff67a,// 227 PAY 188 

    0xd2aa53f8,// 228 PAY 189 

    0xdbfc7653,// 229 PAY 190 

    0x849eb8c2,// 230 PAY 191 

    0x9261c6c6,// 231 PAY 192 

    0x01c379dc,// 232 PAY 193 

    0xad3048b1,// 233 PAY 194 

    0x0d6a0fa4,// 234 PAY 195 

    0xeba60c10,// 235 PAY 196 

    0x764ebdba,// 236 PAY 197 

    0xec3cb7cc,// 237 PAY 198 

    0x5c896468,// 238 PAY 199 

    0x1ccd07b6,// 239 PAY 200 

    0xfa588fa8,// 240 PAY 201 

    0xb261a581,// 241 PAY 202 

    0xf4d1a90a,// 242 PAY 203 

    0xeece991f,// 243 PAY 204 

    0xf9c54678,// 244 PAY 205 

    0x87d239ee,// 245 PAY 206 

    0xa2430abe,// 246 PAY 207 

    0x22a195f1,// 247 PAY 208 

    0x5c2ddc53,// 248 PAY 209 

    0x597e09e5,// 249 PAY 210 

    0xa5bc0319,// 250 PAY 211 

    0x194cf783,// 251 PAY 212 

    0x09b1d463,// 252 PAY 213 

    0xca956950,// 253 PAY 214 

    0xfcc7bfc3,// 254 PAY 215 

    0x4eac2c02,// 255 PAY 216 

    0x549b2c1b,// 256 PAY 217 

    0x07c11659,// 257 PAY 218 

    0xacf809ce,// 258 PAY 219 

    0x6be8b89a,// 259 PAY 220 

    0x8b1e799e,// 260 PAY 221 

    0x3ae1f2f6,// 261 PAY 222 

    0x7e8f7e12,// 262 PAY 223 

    0x06d9baa2,// 263 PAY 224 

    0x86c914a9,// 264 PAY 225 

    0xb33678b1,// 265 PAY 226 

    0x59298f87,// 266 PAY 227 

    0xa1c56593,// 267 PAY 228 

    0x1bec1270,// 268 PAY 229 

    0x25c44001,// 269 PAY 230 

    0x6f8e81d2,// 270 PAY 231 

    0xce9e2a32,// 271 PAY 232 

    0x35fc45ce,// 272 PAY 233 

    0x43c89c5a,// 273 PAY 234 

    0x3a7c85ce,// 274 PAY 235 

    0xd3db6328,// 275 PAY 236 

    0x4e87e803,// 276 PAY 237 

    0x0ebdda92,// 277 PAY 238 

    0x03a33cfc,// 278 PAY 239 

    0xb832e011,// 279 PAY 240 

    0x0d4c1d7e,// 280 PAY 241 

    0x1e202416,// 281 PAY 242 

    0xc5a4951a,// 282 PAY 243 

    0x584b01a4,// 283 PAY 244 

    0x9c5d70fc,// 284 PAY 245 

    0x486750e5,// 285 PAY 246 

    0xed4ddd57,// 286 PAY 247 

    0x01ab6949,// 287 PAY 248 

    0x123b734b,// 288 PAY 249 

    0xd37a76f5,// 289 PAY 250 

    0x7699881f,// 290 PAY 251 

    0x9df0fde9,// 291 PAY 252 

    0x693a2ecf,// 292 PAY 253 

    0x6c36e477,// 293 PAY 254 

    0x66ff2416,// 294 PAY 255 

    0x2075354b,// 295 PAY 256 

    0x1f51569e,// 296 PAY 257 

    0x088ac978,// 297 PAY 258 

    0xfd508690,// 298 PAY 259 

    0x7b098068,// 299 PAY 260 

    0x53085c4e,// 300 PAY 261 

    0xc09a210a,// 301 PAY 262 

    0x3fd5cf21,// 302 PAY 263 

    0x94414940,// 303 PAY 264 

    0x084dfaed,// 304 PAY 265 

    0x7ade8c5f,// 305 PAY 266 

    0x47ae005f,// 306 PAY 267 

    0x8b08cd18,// 307 PAY 268 

    0xe7747e41,// 308 PAY 269 

    0xc434a1a7,// 309 PAY 270 

    0x4be3b573,// 310 PAY 271 

    0x178a4e8b,// 311 PAY 272 

    0xf04a717d,// 312 PAY 273 

    0x41e2c8a8,// 313 PAY 274 

    0x18782cab,// 314 PAY 275 

    0xc4d1fa5b,// 315 PAY 276 

    0x3c9ccfe6,// 316 PAY 277 

    0xf96be32c,// 317 PAY 278 

    0x94cb32c5,// 318 PAY 279 

    0x914d0a12,// 319 PAY 280 

    0x5e746b05,// 320 PAY 281 

    0xa188f8eb,// 321 PAY 282 

    0xed97b84c,// 322 PAY 283 

    0x7e191d23,// 323 PAY 284 

    0xe01e2df2,// 324 PAY 285 

    0xa1a77f68,// 325 PAY 286 

    0x0852fd48,// 326 PAY 287 

    0xf3523617,// 327 PAY 288 

    0x5108f46f,// 328 PAY 289 

    0x7c5e737e,// 329 PAY 290 

    0x59987233,// 330 PAY 291 

    0x777478a4,// 331 PAY 292 

    0x1034605a,// 332 PAY 293 

    0xb796e67e,// 333 PAY 294 

    0x11ab7e7a,// 334 PAY 295 

    0xb23bda64,// 335 PAY 296 

    0x0d81845d,// 336 PAY 297 

    0x0e54bf65,// 337 PAY 298 

    0x180eddc0,// 338 PAY 299 

    0x4357768e,// 339 PAY 300 

    0x13765849,// 340 PAY 301 

    0x26fd3949,// 341 PAY 302 

    0xd5d30d73,// 342 PAY 303 

    0xac3b2c22,// 343 PAY 304 

    0x253ee495,// 344 PAY 305 

    0xbb7689e4,// 345 PAY 306 

    0xfcfd595d,// 346 PAY 307 

    0xcd1055bc,// 347 PAY 308 

    0xed9bc390,// 348 PAY 309 

    0xf5ed6739,// 349 PAY 310 

    0x5cb92cf2,// 350 PAY 311 

    0x33520483,// 351 PAY 312 

    0x9dbbb7fb,// 352 PAY 313 

    0x985a13b9,// 353 PAY 314 

    0x50645dc6,// 354 PAY 315 

    0xe5752864,// 355 PAY 316 

    0x5da47299,// 356 PAY 317 

    0x113a2391,// 357 PAY 318 

    0xc3a565ff,// 358 PAY 319 

    0x046b34b3,// 359 PAY 320 

    0x2dc89e23,// 360 PAY 321 

    0xb5fb9ddb,// 361 PAY 322 

    0xc1ac1bc4,// 362 PAY 323 

    0x46a345ea,// 363 PAY 324 

    0x6f42c6ce,// 364 PAY 325 

    0x54ee0304,// 365 PAY 326 

    0x9c45443e,// 366 PAY 327 

    0xe24c4d24,// 367 PAY 328 

    0x9b588071,// 368 PAY 329 

    0x0b5aeaf5,// 369 PAY 330 

    0x6c056462,// 370 PAY 331 

    0x22abaf9f,// 371 PAY 332 

    0x38e66dbb,// 372 PAY 333 

    0x3167cd72,// 373 PAY 334 

    0x21094064,// 374 PAY 335 

    0xf3a46c21,// 375 PAY 336 

    0x968cbe51,// 376 PAY 337 

    0xa323ea3b,// 377 PAY 338 

    0xacc772f3,// 378 PAY 339 

    0x63bc447f,// 379 PAY 340 

    0x2bdcc64d,// 380 PAY 341 

    0xdc20f80f,// 381 PAY 342 

    0x611e0178,// 382 PAY 343 

    0x1f3aa337,// 383 PAY 344 

    0x893f7afa,// 384 PAY 345 

    0xfbf38a86,// 385 PAY 346 

    0x8bd8bb5c,// 386 PAY 347 

    0xa9c960e0,// 387 PAY 348 

    0x49637c11,// 388 PAY 349 

    0x2459a812,// 389 PAY 350 

    0x29c61ec2,// 390 PAY 351 

    0xb10d700f,// 391 PAY 352 

    0xae30d77c,// 392 PAY 353 

    0xc8cb74c3,// 393 PAY 354 

    0xbe1b4975,// 394 PAY 355 

    0x4369c3de,// 395 PAY 356 

    0x5cafbf5e,// 396 PAY 357 

    0x504ed2f5,// 397 PAY 358 

    0x8f539b75,// 398 PAY 359 

    0x8fd848e1,// 399 PAY 360 

    0xda756dc9,// 400 PAY 361 

    0x35c6f973,// 401 PAY 362 

    0x5aede3d3,// 402 PAY 363 

    0xb1958e12,// 403 PAY 364 

    0xa37db8f9,// 404 PAY 365 

    0xfdc83352,// 405 PAY 366 

    0x736e0a34,// 406 PAY 367 

    0x9935c63f,// 407 PAY 368 

    0xf5393ec7,// 408 PAY 369 

    0xde26fac9,// 409 PAY 370 

    0xa56ee126,// 410 PAY 371 

    0x674b738a,// 411 PAY 372 

    0x3dc3b277,// 412 PAY 373 

    0x3a98c428,// 413 PAY 374 

    0xa80084b3,// 414 PAY 375 

    0xae5182cb,// 415 PAY 376 

    0x719b7479,// 416 PAY 377 

    0xbfe9db49,// 417 PAY 378 

    0x032c7d58,// 418 PAY 379 

    0xe3008625,// 419 PAY 380 

    0xfd92278c,// 420 PAY 381 

    0xae6fd09f,// 421 PAY 382 

    0x9c7dd44c,// 422 PAY 383 

    0xf2e38ed7,// 423 PAY 384 

    0x29bee934,// 424 PAY 385 

    0xc952e1f5,// 425 PAY 386 

    0xc609a82b,// 426 PAY 387 

    0x3622bc48,// 427 PAY 388 

    0x2411fca9,// 428 PAY 389 

    0xc648e301,// 429 PAY 390 

    0x832a61b4,// 430 PAY 391 

    0xffbd02e8,// 431 PAY 392 

    0x8cfb355f,// 432 PAY 393 

    0x65686b60,// 433 PAY 394 

    0x796d3f24,// 434 PAY 395 

    0x9382b5aa,// 435 PAY 396 

    0xf605f41a,// 436 PAY 397 

    0x787d402d,// 437 PAY 398 

    0x08e91b7c,// 438 PAY 399 

    0x82fb76bc,// 439 PAY 400 

    0x808cf36a,// 440 PAY 401 

    0xbc5b329c,// 441 PAY 402 

    0xc4e944c3,// 442 PAY 403 

    0x4fe1049e,// 443 PAY 404 

    0xff4e4743,// 444 PAY 405 

    0xcf8500ec,// 445 PAY 406 

    0x77fe59cf,// 446 PAY 407 

    0xad17a326,// 447 PAY 408 

    0xf288046d,// 448 PAY 409 

    0x071b860b,// 449 PAY 410 

    0xf55bb090,// 450 PAY 411 

    0xb0126455,// 451 PAY 412 

    0x4b3b80d6,// 452 PAY 413 

    0xafc51cfe,// 453 PAY 414 

    0x91f8aa8f,// 454 PAY 415 

    0x9b44c1e0,// 455 PAY 416 

    0xf7d38fc9,// 456 PAY 417 

    0x08759393,// 457 PAY 418 

    0x7b2ea867,// 458 PAY 419 

    0xf27064b6,// 459 PAY 420 

    0x5a1e1a92,// 460 PAY 421 

    0x00dc00b1,// 461 PAY 422 

    0x8f216257,// 462 PAY 423 

    0xa0e3d751,// 463 PAY 424 

    0x5be66629,// 464 PAY 425 

    0xa81dd09a,// 465 PAY 426 

    0x7c5352f4,// 466 PAY 427 

    0xfe11c291,// 467 PAY 428 

    0x1ab0d8fc,// 468 PAY 429 

    0xbdbfac1c,// 469 PAY 430 

    0x24dfadea,// 470 PAY 431 

    0x1284b541,// 471 PAY 432 

    0xc8b4f65e,// 472 PAY 433 

    0x2eb70400,// 473 PAY 434 

    0x207c48d2,// 474 PAY 435 

    0x5d2875e1,// 475 PAY 436 

    0x6f283785,// 476 PAY 437 

    0x830de6f7,// 477 PAY 438 

    0xef0c99c4,// 478 PAY 439 

    0x43a05b6a,// 479 PAY 440 

    0x24aa0f2a,// 480 PAY 441 

    0x0ea68045,// 481 PAY 442 

    0xe8e5dce7,// 482 PAY 443 

    0xeb9fb12d,// 483 PAY 444 

    0xdc9d5720,// 484 PAY 445 

    0xfff8abe7,// 485 PAY 446 

    0xb753aee6,// 486 PAY 447 

    0x01207b90,// 487 PAY 448 

    0x84530973,// 488 PAY 449 

    0x072838b3,// 489 PAY 450 

    0x777a9d5e,// 490 PAY 451 

    0x6b46a34e,// 491 PAY 452 

    0xb4abaddf,// 492 PAY 453 

    0xd3e49609,// 493 PAY 454 

    0x12555f7f,// 494 PAY 455 

    0x572fb596,// 495 PAY 456 

    0x1a230aa1,// 496 PAY 457 

    0x8ee60f57,// 497 PAY 458 

    0xa1404a1e,// 498 PAY 459 

    0x4a53e79a,// 499 PAY 460 

    0x02d908a2,// 500 PAY 461 

    0x44210caf,// 501 PAY 462 

    0x934b7306,// 502 PAY 463 

    0x72c85721,// 503 PAY 464 

    0x7d0ed246,// 504 PAY 465 

    0x5b3f079d,// 505 PAY 466 

    0x1fb7c418,// 506 PAY 467 

    0x3bce26aa,// 507 PAY 468 

    0x39c86f69,// 508 PAY 469 

    0x6e01f1e7,// 509 PAY 470 

    0x1b820798,// 510 PAY 471 

    0x69000000,// 511 PAY 472 

/// STA is 1 words. 

/// STA num_pkts       : 111 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x01f04d6f // 512 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt75_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x80662898,// 4 SCX   2 

    0x00003482,// 5 SCX   3 

    0x032691ce,// 6 SCX   4 

    0x61556187,// 7 SCX   5 

    0x99f72ba2,// 8 SCX   6 

    0x1d982586,// 9 SCX   7 

    0x5edc1e2f,// 10 SCX   8 

    0x684aa6b4,// 11 SCX   9 

    0xb597d8b1,// 12 SCX  10 

    0x47af6c14,// 13 SCX  11 

    0xe3ca6dee,// 14 SCX  12 

    0x648ab76b,// 15 SCX  13 

    0xd2104117,// 16 SCX  14 

    0x158782ba,// 17 SCX  15 

    0x87a81d81,// 18 SCX  16 

    0x66faaae6,// 19 SCX  17 

    0xfa3a572b,// 20 SCX  18 

    0x70791114,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 195 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 53 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 53 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 40 

/// BFD (ofst+len)cry  : 48 

/// BFD ofstiv         : 28 

/// BFD ofsticv        : 96 

    0x00000035,// 22 BFD   1 

    0x00280008,// 23 BFD   2 

    0x0060001c,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b00e914,// 25 MFM   1 

    0xabd89020,// 26 MFM   2 

/// BDA is 50 words. 

/// BDA size     is 195 (0xc3) 

/// BDA id       is 0xec5d 

    0x00c3ec5d,// 27 BDA   1 

/// PAY Generic Data size   : 195 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x94f648b0,// 28 PAY   1 

    0x6b7ad3d1,// 29 PAY   2 

    0x0396f6c2,// 30 PAY   3 

    0x9c2a26d3,// 31 PAY   4 

    0x36c20979,// 32 PAY   5 

    0x81df17a3,// 33 PAY   6 

    0x2dc338c8,// 34 PAY   7 

    0x28371ae6,// 35 PAY   8 

    0xf6d069de,// 36 PAY   9 

    0x543d4d07,// 37 PAY  10 

    0x817f4b84,// 38 PAY  11 

    0xf407e375,// 39 PAY  12 

    0x83120e96,// 40 PAY  13 

    0x1ff63663,// 41 PAY  14 

    0xb84e0529,// 42 PAY  15 

    0x7ae8a415,// 43 PAY  16 

    0xeb9555a2,// 44 PAY  17 

    0x3651f616,// 45 PAY  18 

    0xa6ad2f01,// 46 PAY  19 

    0xee30f979,// 47 PAY  20 

    0xc810231d,// 48 PAY  21 

    0xaeaa55d3,// 49 PAY  22 

    0xb72b4958,// 50 PAY  23 

    0x415ccb89,// 51 PAY  24 

    0x7cc1c485,// 52 PAY  25 

    0x13c62cf7,// 53 PAY  26 

    0x21b8cd5b,// 54 PAY  27 

    0xc45d94bf,// 55 PAY  28 

    0xa6fe71e0,// 56 PAY  29 

    0x405abc36,// 57 PAY  30 

    0x0ad6e8ed,// 58 PAY  31 

    0x31ec6605,// 59 PAY  32 

    0x27f7be31,// 60 PAY  33 

    0x859d2bdb,// 61 PAY  34 

    0xdc92d336,// 62 PAY  35 

    0x6938d1c3,// 63 PAY  36 

    0xef76a541,// 64 PAY  37 

    0xd86df547,// 65 PAY  38 

    0xdea17f8c,// 66 PAY  39 

    0x6425cc81,// 67 PAY  40 

    0x84cdd12e,// 68 PAY  41 

    0xeeed8270,// 69 PAY  42 

    0xe56331f0,// 70 PAY  43 

    0xfea4f5d1,// 71 PAY  44 

    0xaf293ce6,// 72 PAY  45 

    0xe97c44de,// 73 PAY  46 

    0xcd7f4f08,// 74 PAY  47 

    0x2f64b546,// 75 PAY  48 

    0xf6aa6900,// 76 PAY  49 

/// STA is 1 words. 

/// STA num_pkts       : 147 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x96 

    0x02d09693 // 77 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt76_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8060283a,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x90241325,// 6 SCX   4 

    0x785e483b,// 7 SCX   5 

    0x5c936625,// 8 SCX   6 

    0x51525c06,// 9 SCX   7 

    0xf4abe146,// 10 SCX   8 

    0x176e0403,// 11 SCX   9 

    0xed87a02c,// 12 SCX  10 

    0xd9e503bf,// 13 SCX  11 

    0x38d45a44,// 14 SCX  12 

    0x616c6f35,// 15 SCX  13 

    0x825e7338,// 16 SCX  14 

    0xebf32769,// 17 SCX  15 

    0xa7603f06,// 18 SCX  16 

    0xe898e59c,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1467 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 352 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 352 

/// BFD lencrypto      : 192 

/// BFD ofstcrypto     : 28 

/// BFD (ofst+len)cry  : 220 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 612 

    0x00000160,// 20 BFD   1 

    0x001c00c0,// 21 BFD   2 

    0x02640004,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : d 

    0x0d007b73,// 23 MFM   1 

    0xf29d8b47,// 24 MFM   2 

    0x50000000,// 25 MFM   3 

/// BDA is 368 words. 

/// BDA size     is 1467 (0x5bb) 

/// BDA id       is 0xd76a 

    0x05bbd76a,// 26 BDA   1 

/// PAY Generic Data size   : 1467 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xdcb71168,// 27 PAY   1 

    0xbab8f1bb,// 28 PAY   2 

    0x57d5ee01,// 29 PAY   3 

    0x625ff6e4,// 30 PAY   4 

    0x310f9664,// 31 PAY   5 

    0x7447cbf7,// 32 PAY   6 

    0xa517698b,// 33 PAY   7 

    0xfd36eaae,// 34 PAY   8 

    0x6356ff31,// 35 PAY   9 

    0x7911f91d,// 36 PAY  10 

    0x050a074b,// 37 PAY  11 

    0xfd044e3e,// 38 PAY  12 

    0x1d88cb8d,// 39 PAY  13 

    0x3ed7fe96,// 40 PAY  14 

    0x7f9f246f,// 41 PAY  15 

    0xc32f6f75,// 42 PAY  16 

    0xc7f32fa2,// 43 PAY  17 

    0xd6cd8c0a,// 44 PAY  18 

    0x97270e01,// 45 PAY  19 

    0x08acd0d1,// 46 PAY  20 

    0x97bdcd7d,// 47 PAY  21 

    0x7e95c56d,// 48 PAY  22 

    0xbe7ac30f,// 49 PAY  23 

    0x3cb983d9,// 50 PAY  24 

    0x1aee4e94,// 51 PAY  25 

    0x8f870ef1,// 52 PAY  26 

    0x7c88f1a6,// 53 PAY  27 

    0xbdc28741,// 54 PAY  28 

    0xb994cdda,// 55 PAY  29 

    0x78b04e00,// 56 PAY  30 

    0x104132a5,// 57 PAY  31 

    0x0e1a3d50,// 58 PAY  32 

    0x509b699a,// 59 PAY  33 

    0xc78fc72e,// 60 PAY  34 

    0xc6298247,// 61 PAY  35 

    0x8825636a,// 62 PAY  36 

    0xc454f4a8,// 63 PAY  37 

    0xd15f9d11,// 64 PAY  38 

    0x5c4b467b,// 65 PAY  39 

    0x85bc2378,// 66 PAY  40 

    0x1a4f8117,// 67 PAY  41 

    0x22c706e6,// 68 PAY  42 

    0x633c04e7,// 69 PAY  43 

    0xe3759c41,// 70 PAY  44 

    0xff2f35ce,// 71 PAY  45 

    0x6210cbe4,// 72 PAY  46 

    0x2e071332,// 73 PAY  47 

    0x800546ff,// 74 PAY  48 

    0xd65fd898,// 75 PAY  49 

    0x619ab0cf,// 76 PAY  50 

    0x7503a3ff,// 77 PAY  51 

    0x66737853,// 78 PAY  52 

    0x04c5663a,// 79 PAY  53 

    0x0d612146,// 80 PAY  54 

    0xc3e92b8f,// 81 PAY  55 

    0x35e2be80,// 82 PAY  56 

    0x506ada4a,// 83 PAY  57 

    0xa89d856e,// 84 PAY  58 

    0x3ed855fc,// 85 PAY  59 

    0xc3bf1397,// 86 PAY  60 

    0xb5dba28a,// 87 PAY  61 

    0x056a8e30,// 88 PAY  62 

    0x937d479e,// 89 PAY  63 

    0x152e9962,// 90 PAY  64 

    0x9b4b158d,// 91 PAY  65 

    0x0b9896b2,// 92 PAY  66 

    0x2da92449,// 93 PAY  67 

    0x7bfb15cf,// 94 PAY  68 

    0x157acbc4,// 95 PAY  69 

    0x44c6e716,// 96 PAY  70 

    0x9ea8e637,// 97 PAY  71 

    0x11c8cb31,// 98 PAY  72 

    0xe4a0b65c,// 99 PAY  73 

    0x115e351f,// 100 PAY  74 

    0x696ae8a6,// 101 PAY  75 

    0x879d449b,// 102 PAY  76 

    0x1b109e06,// 103 PAY  77 

    0xa2a2db90,// 104 PAY  78 

    0x462f6625,// 105 PAY  79 

    0x2a6d7556,// 106 PAY  80 

    0xad789c3e,// 107 PAY  81 

    0x4d790bd0,// 108 PAY  82 

    0xc981d5e9,// 109 PAY  83 

    0x4b719fdf,// 110 PAY  84 

    0xbdcd798e,// 111 PAY  85 

    0x5d1e3ca2,// 112 PAY  86 

    0x40f9a928,// 113 PAY  87 

    0xc390bcdd,// 114 PAY  88 

    0x28e09484,// 115 PAY  89 

    0x43e5ac60,// 116 PAY  90 

    0x4b3ae0de,// 117 PAY  91 

    0xf22eb863,// 118 PAY  92 

    0x3ea6700e,// 119 PAY  93 

    0x5a3b5439,// 120 PAY  94 

    0x7cc8b60f,// 121 PAY  95 

    0xc621085b,// 122 PAY  96 

    0xaf12bf5d,// 123 PAY  97 

    0xcade557b,// 124 PAY  98 

    0xc8d67b64,// 125 PAY  99 

    0x12cdafa1,// 126 PAY 100 

    0x3f687664,// 127 PAY 101 

    0x8053d026,// 128 PAY 102 

    0xc099092e,// 129 PAY 103 

    0x8fbd0cc5,// 130 PAY 104 

    0x5c4ffda1,// 131 PAY 105 

    0x6cad20b4,// 132 PAY 106 

    0xda78d895,// 133 PAY 107 

    0x6566ca53,// 134 PAY 108 

    0x2164dcef,// 135 PAY 109 

    0x7af3b123,// 136 PAY 110 

    0x7fae9c51,// 137 PAY 111 

    0x8591cd70,// 138 PAY 112 

    0x3820fb8e,// 139 PAY 113 

    0x78f1b4a3,// 140 PAY 114 

    0x079e2de7,// 141 PAY 115 

    0xca9431cb,// 142 PAY 116 

    0xb2866964,// 143 PAY 117 

    0xdcf8554b,// 144 PAY 118 

    0xa1d36996,// 145 PAY 119 

    0xa4c631a4,// 146 PAY 120 

    0xd1ecd319,// 147 PAY 121 

    0xff6d64a4,// 148 PAY 122 

    0x168d8bba,// 149 PAY 123 

    0x94fbb9b3,// 150 PAY 124 

    0xc23dfbc0,// 151 PAY 125 

    0xf715b97d,// 152 PAY 126 

    0xe7b29d9f,// 153 PAY 127 

    0x8b1d5ca0,// 154 PAY 128 

    0x3371df66,// 155 PAY 129 

    0xcdacaca4,// 156 PAY 130 

    0x27ba2077,// 157 PAY 131 

    0x1d99d0d5,// 158 PAY 132 

    0x8363f120,// 159 PAY 133 

    0xeffcd87f,// 160 PAY 134 

    0xea2679a9,// 161 PAY 135 

    0x52b8a574,// 162 PAY 136 

    0xc610e4e6,// 163 PAY 137 

    0x19eec8d5,// 164 PAY 138 

    0x201297c8,// 165 PAY 139 

    0xcadf3fb6,// 166 PAY 140 

    0x6276c27a,// 167 PAY 141 

    0x84544b12,// 168 PAY 142 

    0x8300bd45,// 169 PAY 143 

    0x4a369fc3,// 170 PAY 144 

    0x79a703f5,// 171 PAY 145 

    0x988fd9fe,// 172 PAY 146 

    0x1c8ede8a,// 173 PAY 147 

    0xd789560e,// 174 PAY 148 

    0x1d33b639,// 175 PAY 149 

    0xbdcc26c8,// 176 PAY 150 

    0x9300ccce,// 177 PAY 151 

    0x9495d212,// 178 PAY 152 

    0x82fa706d,// 179 PAY 153 

    0xcfc4073a,// 180 PAY 154 

    0x2287b4a8,// 181 PAY 155 

    0x26055e58,// 182 PAY 156 

    0x40165304,// 183 PAY 157 

    0x1e878f35,// 184 PAY 158 

    0x1168e676,// 185 PAY 159 

    0xf3d8c292,// 186 PAY 160 

    0x146ecb79,// 187 PAY 161 

    0xddcbbf52,// 188 PAY 162 

    0x4c5e5a74,// 189 PAY 163 

    0x0b529dbf,// 190 PAY 164 

    0x7ebc9f61,// 191 PAY 165 

    0xb7dee152,// 192 PAY 166 

    0x6c9e37f3,// 193 PAY 167 

    0x708b444d,// 194 PAY 168 

    0xc7ec48b5,// 195 PAY 169 

    0x01a1db0b,// 196 PAY 170 

    0x045e5bc9,// 197 PAY 171 

    0xa03714c9,// 198 PAY 172 

    0x2e01edfc,// 199 PAY 173 

    0x9cb882e7,// 200 PAY 174 

    0x0befb83b,// 201 PAY 175 

    0x4dee41fd,// 202 PAY 176 

    0x0a57dc0d,// 203 PAY 177 

    0x3c01a48e,// 204 PAY 178 

    0xf85a9c08,// 205 PAY 179 

    0x9a023edf,// 206 PAY 180 

    0x4eb7f442,// 207 PAY 181 

    0x3e97151d,// 208 PAY 182 

    0x6115f9f3,// 209 PAY 183 

    0x080ea43d,// 210 PAY 184 

    0x573a408a,// 211 PAY 185 

    0x08241f9d,// 212 PAY 186 

    0x0c1ba14a,// 213 PAY 187 

    0x4f18cd0d,// 214 PAY 188 

    0xbfeb67cc,// 215 PAY 189 

    0xe77664a3,// 216 PAY 190 

    0x534e9848,// 217 PAY 191 

    0xaaf72eb4,// 218 PAY 192 

    0x2f85cdc9,// 219 PAY 193 

    0x3192b929,// 220 PAY 194 

    0xbd14df0a,// 221 PAY 195 

    0x404a3993,// 222 PAY 196 

    0xafb80388,// 223 PAY 197 

    0x1c182eca,// 224 PAY 198 

    0x40b84ebb,// 225 PAY 199 

    0xdd907731,// 226 PAY 200 

    0x608a08c5,// 227 PAY 201 

    0x8dafd6ed,// 228 PAY 202 

    0x142f045c,// 229 PAY 203 

    0xcdcbed1e,// 230 PAY 204 

    0xedf6a461,// 231 PAY 205 

    0x65891603,// 232 PAY 206 

    0x454f1f0b,// 233 PAY 207 

    0x7f503409,// 234 PAY 208 

    0xfbde7e5f,// 235 PAY 209 

    0x935230fe,// 236 PAY 210 

    0x01277f0b,// 237 PAY 211 

    0x6efddc10,// 238 PAY 212 

    0x830a7469,// 239 PAY 213 

    0xb829f93a,// 240 PAY 214 

    0x28255fb1,// 241 PAY 215 

    0x7c887d1b,// 242 PAY 216 

    0x5c75c1cb,// 243 PAY 217 

    0xa335874d,// 244 PAY 218 

    0xd758d5c3,// 245 PAY 219 

    0xff1a2c86,// 246 PAY 220 

    0x92dd1480,// 247 PAY 221 

    0x81d412a6,// 248 PAY 222 

    0x2cc85308,// 249 PAY 223 

    0x812f2d65,// 250 PAY 224 

    0x80734e93,// 251 PAY 225 

    0x9b75e249,// 252 PAY 226 

    0xfe071e25,// 253 PAY 227 

    0xaf6646b9,// 254 PAY 228 

    0x61cf071a,// 255 PAY 229 

    0xb4e15e21,// 256 PAY 230 

    0xae119cc6,// 257 PAY 231 

    0x0ae46ecb,// 258 PAY 232 

    0xc59f929a,// 259 PAY 233 

    0x9e25402f,// 260 PAY 234 

    0x1247c380,// 261 PAY 235 

    0xeb34367e,// 262 PAY 236 

    0x7a22c6aa,// 263 PAY 237 

    0xfa47f032,// 264 PAY 238 

    0x02703359,// 265 PAY 239 

    0xc48349da,// 266 PAY 240 

    0xaf2e7bb4,// 267 PAY 241 

    0xaa3aaa60,// 268 PAY 242 

    0x2f74bac2,// 269 PAY 243 

    0x91ccac29,// 270 PAY 244 

    0xf54f44d5,// 271 PAY 245 

    0xbae23c5a,// 272 PAY 246 

    0x34cd7a28,// 273 PAY 247 

    0x8700f19d,// 274 PAY 248 

    0xbcd2f877,// 275 PAY 249 

    0x37175925,// 276 PAY 250 

    0x04cfdf73,// 277 PAY 251 

    0x0562638e,// 278 PAY 252 

    0x9b3e0207,// 279 PAY 253 

    0xe094e3c7,// 280 PAY 254 

    0xad67c4c5,// 281 PAY 255 

    0x2d8344b0,// 282 PAY 256 

    0xdfeabc5a,// 283 PAY 257 

    0x01ce7cf6,// 284 PAY 258 

    0x4934a073,// 285 PAY 259 

    0xb58a4b75,// 286 PAY 260 

    0xc74c15b6,// 287 PAY 261 

    0xee40a6c4,// 288 PAY 262 

    0x296e92bd,// 289 PAY 263 

    0xa5a8d7b3,// 290 PAY 264 

    0x579b7fa7,// 291 PAY 265 

    0xd4f44efd,// 292 PAY 266 

    0x4d5c1e44,// 293 PAY 267 

    0x7ef776ad,// 294 PAY 268 

    0x3dff29ea,// 295 PAY 269 

    0x7c7fae64,// 296 PAY 270 

    0xbae1540f,// 297 PAY 271 

    0x5dc9c42f,// 298 PAY 272 

    0x71443a6d,// 299 PAY 273 

    0x8d997fa8,// 300 PAY 274 

    0x1eda9222,// 301 PAY 275 

    0x5263bddb,// 302 PAY 276 

    0x21a9be3e,// 303 PAY 277 

    0xbdc6aea4,// 304 PAY 278 

    0xf97edb48,// 305 PAY 279 

    0xaa84707f,// 306 PAY 280 

    0x72d86587,// 307 PAY 281 

    0xd4f82320,// 308 PAY 282 

    0xb9c960a6,// 309 PAY 283 

    0xa9cb221b,// 310 PAY 284 

    0x651f0b2f,// 311 PAY 285 

    0x056dcf9f,// 312 PAY 286 

    0x4c47917e,// 313 PAY 287 

    0x5b3a0c5e,// 314 PAY 288 

    0x47ffab1f,// 315 PAY 289 

    0xd8175afb,// 316 PAY 290 

    0x04476140,// 317 PAY 291 

    0x85f9b020,// 318 PAY 292 

    0x1db35e27,// 319 PAY 293 

    0x72a9e3a8,// 320 PAY 294 

    0x27eb06bc,// 321 PAY 295 

    0x5ebfc441,// 322 PAY 296 

    0xecd048f9,// 323 PAY 297 

    0x037173c4,// 324 PAY 298 

    0x856c289c,// 325 PAY 299 

    0x27df5db0,// 326 PAY 300 

    0x8cee0092,// 327 PAY 301 

    0xe44b3ad0,// 328 PAY 302 

    0x365c1329,// 329 PAY 303 

    0xff382457,// 330 PAY 304 

    0x4afb0eee,// 331 PAY 305 

    0x41859ac5,// 332 PAY 306 

    0x2f3160f7,// 333 PAY 307 

    0x191305e8,// 334 PAY 308 

    0x4e00ea46,// 335 PAY 309 

    0xa2acbf15,// 336 PAY 310 

    0x5ecfdeec,// 337 PAY 311 

    0x00e83d82,// 338 PAY 312 

    0x1599638e,// 339 PAY 313 

    0xdfa9f1eb,// 340 PAY 314 

    0x3ec4f585,// 341 PAY 315 

    0x3e47b551,// 342 PAY 316 

    0x92f53c2b,// 343 PAY 317 

    0x96d2a57c,// 344 PAY 318 

    0x2b5b1bd7,// 345 PAY 319 

    0xdaf2bc51,// 346 PAY 320 

    0xbc935cc2,// 347 PAY 321 

    0xdcc967a6,// 348 PAY 322 

    0xd49c5cdc,// 349 PAY 323 

    0xd2b180b4,// 350 PAY 324 

    0x9127d59b,// 351 PAY 325 

    0x0031e187,// 352 PAY 326 

    0xe7a78cb3,// 353 PAY 327 

    0x33c3be7f,// 354 PAY 328 

    0xc920afdc,// 355 PAY 329 

    0x8169cd65,// 356 PAY 330 

    0xf26870f0,// 357 PAY 331 

    0x256245ee,// 358 PAY 332 

    0x6e87c2d3,// 359 PAY 333 

    0x0c7e4f1d,// 360 PAY 334 

    0xaee75cd0,// 361 PAY 335 

    0xcce57dc4,// 362 PAY 336 

    0x6a9b304e,// 363 PAY 337 

    0x6994b8dd,// 364 PAY 338 

    0xc616d8ff,// 365 PAY 339 

    0xfef3d0cc,// 366 PAY 340 

    0x3ae5304b,// 367 PAY 341 

    0xdb545a6b,// 368 PAY 342 

    0x171a6f04,// 369 PAY 343 

    0x32b5f5f0,// 370 PAY 344 

    0xf1466242,// 371 PAY 345 

    0x5f5ea4c6,// 372 PAY 346 

    0x94eaca01,// 373 PAY 347 

    0x1e100f3b,// 374 PAY 348 

    0xd3816c4a,// 375 PAY 349 

    0x0746d15c,// 376 PAY 350 

    0x1f53a79a,// 377 PAY 351 

    0xd79a854d,// 378 PAY 352 

    0x83cd4161,// 379 PAY 353 

    0xd57bbd2b,// 380 PAY 354 

    0x65368ca0,// 381 PAY 355 

    0xb0586a82,// 382 PAY 356 

    0xcd46b67c,// 383 PAY 357 

    0x6230717e,// 384 PAY 358 

    0x69bb35ae,// 385 PAY 359 

    0x75b59ae3,// 386 PAY 360 

    0x790465ab,// 387 PAY 361 

    0x1eea1cd9,// 388 PAY 362 

    0x26c7670f,// 389 PAY 363 

    0x9d34de4e,// 390 PAY 364 

    0xcbffd58f,// 391 PAY 365 

    0xf679d2f9,// 392 PAY 366 

    0x9be9a200,// 393 PAY 367 

/// STA is 1 words. 

/// STA num_pkts       : 235 

/// STA pkt_idx        : 178 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x02c81ceb // 394 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt77_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806528ab,// 4 SCX   2 

    0x00007142,// 5 SCX   3 

    0x22594197,// 6 SCX   4 

    0x1cf18f4b,// 7 SCX   5 

    0xe814dc87,// 8 SCX   6 

    0x946fcc75,// 9 SCX   7 

    0x2841a9c2,// 10 SCX   8 

    0x460f4f23,// 11 SCX   9 

    0xa7eccdda,// 12 SCX  10 

    0x716bab38,// 13 SCX  11 

    0xa56920e5,// 14 SCX  12 

    0x849781ea,// 15 SCX  13 

    0xfa5f4a3b,// 16 SCX  14 

    0xd584207f,// 17 SCX  15 

    0x8350e42b,// 18 SCX  16 

    0x71b40a05,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 147 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 113 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 113 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 108 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 124 

    0x00000071,// 20 BFD   1 

    0x003c0030,// 21 BFD   2 

    0x007c0028,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x11005a8c,// 23 MFM   1 

    0x733972c6,// 24 MFM   2 

    0xa4029000,// 25 MFM   3 

/// BDA is 38 words. 

/// BDA size     is 147 (0x93) 

/// BDA id       is 0xaa5 

    0x00930aa5,// 26 BDA   1 

/// PAY Generic Data size   : 147 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x98b0b8e7,// 27 PAY   1 

    0xf49fb0e7,// 28 PAY   2 

    0x6081bcaf,// 29 PAY   3 

    0x6df5f018,// 30 PAY   4 

    0x6e1971cb,// 31 PAY   5 

    0xb0cfbfa8,// 32 PAY   6 

    0x83506234,// 33 PAY   7 

    0xba898c05,// 34 PAY   8 

    0xb54983cb,// 35 PAY   9 

    0x2b81b82c,// 36 PAY  10 

    0x33e3f069,// 37 PAY  11 

    0x00317e1c,// 38 PAY  12 

    0xf4a79466,// 39 PAY  13 

    0x2705e3d6,// 40 PAY  14 

    0x49793e51,// 41 PAY  15 

    0xa410ba03,// 42 PAY  16 

    0x5287dd22,// 43 PAY  17 

    0x26626afc,// 44 PAY  18 

    0x441687eb,// 45 PAY  19 

    0x994721c8,// 46 PAY  20 

    0xb67135e4,// 47 PAY  21 

    0x45d7eced,// 48 PAY  22 

    0xf308f5b2,// 49 PAY  23 

    0x90b87c79,// 50 PAY  24 

    0x902c340a,// 51 PAY  25 

    0x5e8ba045,// 52 PAY  26 

    0x454d90f1,// 53 PAY  27 

    0xc1e412aa,// 54 PAY  28 

    0xe947de80,// 55 PAY  29 

    0x47141fc3,// 56 PAY  30 

    0x44268174,// 57 PAY  31 

    0xa5031aaf,// 58 PAY  32 

    0x98abbe7f,// 59 PAY  33 

    0x14f1743d,// 60 PAY  34 

    0xe9a4a329,// 61 PAY  35 

    0xb52a08e6,// 62 PAY  36 

    0x18eead00,// 63 PAY  37 

/// STA is 1 words. 

/// STA num_pkts       : 254 

/// STA pkt_idx        : 71 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x011dbefe // 64 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt78_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806628af,// 4 SCX   2 

    0x00006142,// 5 SCX   3 

    0x432081a7,// 6 SCX   4 

    0x243f7d43,// 7 SCX   5 

    0x1aac986c,// 8 SCX   6 

    0xd91f4982,// 9 SCX   7 

    0xe3d9434f,// 10 SCX   8 

    0xfe607322,// 11 SCX   9 

    0x7da1d66f,// 12 SCX  10 

    0x6a997072,// 13 SCX  11 

    0xc8c38277,// 14 SCX  12 

    0x9cfa4e3a,// 15 SCX  13 

    0x6ef95f41,// 16 SCX  14 

    0x90351554,// 17 SCX  15 

    0x45e9d9b8,// 18 SCX  16 

    0x47a3d409,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1698 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 729 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 729 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 576 

/// BFD (ofst+len)cry  : 720 

/// BFD ofstiv         : 556 

/// BFD ofsticv        : 984 

    0x000002d9,// 20 BFD   1 

    0x02400090,// 21 BFD   2 

    0x03d8022c,// 22 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 16 

    0x1600cb52,// 23 MFM   1 

    0xbcb0db86,// 24 MFM   2 

    0x8951b43a,// 25 MFM   3 

    0x8b000000,// 26 MFM   4 

/// BDA is 426 words. 

/// BDA size     is 1698 (0x6a2) 

/// BDA id       is 0xdef3 

    0x06a2def3,// 27 BDA   1 

/// PAY Generic Data size   : 1698 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x66bbf8ae,// 28 PAY   1 

    0x6c9f2a31,// 29 PAY   2 

    0xb68419b5,// 30 PAY   3 

    0x72349853,// 31 PAY   4 

    0x3061dd4e,// 32 PAY   5 

    0xc9ed3787,// 33 PAY   6 

    0xec90d578,// 34 PAY   7 

    0x9aac210f,// 35 PAY   8 

    0x46abaaf7,// 36 PAY   9 

    0x4bd085d1,// 37 PAY  10 

    0x1338b232,// 38 PAY  11 

    0x111be187,// 39 PAY  12 

    0x154e5c58,// 40 PAY  13 

    0x3b2ac451,// 41 PAY  14 

    0x72b6cfce,// 42 PAY  15 

    0x8f286513,// 43 PAY  16 

    0x77f9d5a5,// 44 PAY  17 

    0x50efa950,// 45 PAY  18 

    0xfdeb8472,// 46 PAY  19 

    0x73c399d2,// 47 PAY  20 

    0xfe598f54,// 48 PAY  21 

    0xd1fc3ba4,// 49 PAY  22 

    0x8508972e,// 50 PAY  23 

    0xe34aea4f,// 51 PAY  24 

    0xceb023ca,// 52 PAY  25 

    0xaf93fb4d,// 53 PAY  26 

    0x5d7fe955,// 54 PAY  27 

    0x62058bc5,// 55 PAY  28 

    0x487785e6,// 56 PAY  29 

    0xf3e250d5,// 57 PAY  30 

    0x91ce1654,// 58 PAY  31 

    0x3faa2785,// 59 PAY  32 

    0x525289a3,// 60 PAY  33 

    0xee536ca3,// 61 PAY  34 

    0x87c301ef,// 62 PAY  35 

    0x738b4746,// 63 PAY  36 

    0x41758eb9,// 64 PAY  37 

    0x3453462e,// 65 PAY  38 

    0x10d6a591,// 66 PAY  39 

    0xe7353d38,// 67 PAY  40 

    0x00dbc516,// 68 PAY  41 

    0x43666421,// 69 PAY  42 

    0x0e02ca09,// 70 PAY  43 

    0x626b933d,// 71 PAY  44 

    0x01dbdeea,// 72 PAY  45 

    0xb75a5f3e,// 73 PAY  46 

    0x9f5ae494,// 74 PAY  47 

    0x1815f132,// 75 PAY  48 

    0xaaecf338,// 76 PAY  49 

    0xb9bfe2b9,// 77 PAY  50 

    0xdedf8d50,// 78 PAY  51 

    0xa98732f7,// 79 PAY  52 

    0xf7ee8896,// 80 PAY  53 

    0xa3ab4bf2,// 81 PAY  54 

    0x969641f4,// 82 PAY  55 

    0xe14fe560,// 83 PAY  56 

    0x2606912b,// 84 PAY  57 

    0x84ee38c1,// 85 PAY  58 

    0xaa121dd3,// 86 PAY  59 

    0xb0f532ec,// 87 PAY  60 

    0xf93b7e43,// 88 PAY  61 

    0x7b635909,// 89 PAY  62 

    0x60460fb4,// 90 PAY  63 

    0x6115df7b,// 91 PAY  64 

    0x73fd209a,// 92 PAY  65 

    0x81850ba7,// 93 PAY  66 

    0xd4835109,// 94 PAY  67 

    0x0e6da804,// 95 PAY  68 

    0x149ee413,// 96 PAY  69 

    0x68c31c4a,// 97 PAY  70 

    0x489dda12,// 98 PAY  71 

    0xf071e4ae,// 99 PAY  72 

    0x2c3743d7,// 100 PAY  73 

    0xce2b72a3,// 101 PAY  74 

    0xf2c3b7ff,// 102 PAY  75 

    0xd6cf88c8,// 103 PAY  76 

    0x1156fac5,// 104 PAY  77 

    0x139a93a6,// 105 PAY  78 

    0x35500adb,// 106 PAY  79 

    0x8815da01,// 107 PAY  80 

    0xc8d7ac74,// 108 PAY  81 

    0x048048c1,// 109 PAY  82 

    0x2fea9ab9,// 110 PAY  83 

    0x3c9e5a84,// 111 PAY  84 

    0x8fdf4803,// 112 PAY  85 

    0x3ee831f3,// 113 PAY  86 

    0x16f7d11b,// 114 PAY  87 

    0x4f84a6a0,// 115 PAY  88 

    0xe9f697c7,// 116 PAY  89 

    0xf6b567cb,// 117 PAY  90 

    0xdb346678,// 118 PAY  91 

    0xb306c7e8,// 119 PAY  92 

    0x2d37d2ff,// 120 PAY  93 

    0x3a693469,// 121 PAY  94 

    0xf16c491d,// 122 PAY  95 

    0x73230f9e,// 123 PAY  96 

    0xa291d707,// 124 PAY  97 

    0xc7ec22df,// 125 PAY  98 

    0xdc0c6ea0,// 126 PAY  99 

    0x55e028e6,// 127 PAY 100 

    0x28673027,// 128 PAY 101 

    0x3cc1e942,// 129 PAY 102 

    0x41c85cbb,// 130 PAY 103 

    0x090f390a,// 131 PAY 104 

    0x90372702,// 132 PAY 105 

    0xf28f5049,// 133 PAY 106 

    0x654a6999,// 134 PAY 107 

    0x1ecbe5cc,// 135 PAY 108 

    0xc0724e76,// 136 PAY 109 

    0x6e22a1dc,// 137 PAY 110 

    0xc1ed9981,// 138 PAY 111 

    0xa7efea52,// 139 PAY 112 

    0x96cf739c,// 140 PAY 113 

    0xc13b288c,// 141 PAY 114 

    0x04ea9d60,// 142 PAY 115 

    0x49be2106,// 143 PAY 116 

    0x28b9d47d,// 144 PAY 117 

    0x6a264957,// 145 PAY 118 

    0x6ac4ce7d,// 146 PAY 119 

    0x268f652a,// 147 PAY 120 

    0x11e3b015,// 148 PAY 121 

    0x6eb59a05,// 149 PAY 122 

    0xda577ad9,// 150 PAY 123 

    0x5936557a,// 151 PAY 124 

    0x8b8247dd,// 152 PAY 125 

    0x0d85fbd7,// 153 PAY 126 

    0x0447fbd8,// 154 PAY 127 

    0x9278ea9f,// 155 PAY 128 

    0x7ae760fa,// 156 PAY 129 

    0xc4046d67,// 157 PAY 130 

    0x98d58c79,// 158 PAY 131 

    0xf1af434e,// 159 PAY 132 

    0x5d13a655,// 160 PAY 133 

    0x13475404,// 161 PAY 134 

    0xe4692c87,// 162 PAY 135 

    0xa576fab3,// 163 PAY 136 

    0xae88ad46,// 164 PAY 137 

    0x684fde77,// 165 PAY 138 

    0xee3484a9,// 166 PAY 139 

    0x5396dc79,// 167 PAY 140 

    0xcfdbdac9,// 168 PAY 141 

    0x171cb9c0,// 169 PAY 142 

    0x6e3208b1,// 170 PAY 143 

    0x072a5221,// 171 PAY 144 

    0x2e439522,// 172 PAY 145 

    0x7b2992cf,// 173 PAY 146 

    0x7c9133ff,// 174 PAY 147 

    0xcf1862c9,// 175 PAY 148 

    0x967f283b,// 176 PAY 149 

    0xdafbfb8a,// 177 PAY 150 

    0xb70fddae,// 178 PAY 151 

    0x871ecc46,// 179 PAY 152 

    0x47814b15,// 180 PAY 153 

    0xa77b5f25,// 181 PAY 154 

    0xc7b5514e,// 182 PAY 155 

    0xe3683a44,// 183 PAY 156 

    0xa27cb783,// 184 PAY 157 

    0xf8aca88e,// 185 PAY 158 

    0xdbcd2513,// 186 PAY 159 

    0x28eb5b6a,// 187 PAY 160 

    0x0d8045c9,// 188 PAY 161 

    0x3e3b9b25,// 189 PAY 162 

    0xc73d3236,// 190 PAY 163 

    0x24ded6a9,// 191 PAY 164 

    0x86eca698,// 192 PAY 165 

    0xbe98ac52,// 193 PAY 166 

    0x6b1545ce,// 194 PAY 167 

    0xec5421d6,// 195 PAY 168 

    0x857adc87,// 196 PAY 169 

    0x0aec559a,// 197 PAY 170 

    0xda407e77,// 198 PAY 171 

    0x447a2554,// 199 PAY 172 

    0x2250a982,// 200 PAY 173 

    0x733af314,// 201 PAY 174 

    0x912118e4,// 202 PAY 175 

    0x2ac58511,// 203 PAY 176 

    0x9444c55b,// 204 PAY 177 

    0xeb7af4c6,// 205 PAY 178 

    0xe92f0f1b,// 206 PAY 179 

    0x0e63ee21,// 207 PAY 180 

    0xe8d83c36,// 208 PAY 181 

    0x35ccba16,// 209 PAY 182 

    0x299061bb,// 210 PAY 183 

    0x34579c10,// 211 PAY 184 

    0x2f6a1b08,// 212 PAY 185 

    0x63feee6c,// 213 PAY 186 

    0x611e8232,// 214 PAY 187 

    0x4144a780,// 215 PAY 188 

    0x42743aa4,// 216 PAY 189 

    0xca96ed08,// 217 PAY 190 

    0xc4943131,// 218 PAY 191 

    0x69a774fd,// 219 PAY 192 

    0xa078866e,// 220 PAY 193 

    0xd2d6ae85,// 221 PAY 194 

    0x130d2748,// 222 PAY 195 

    0xa1f0accf,// 223 PAY 196 

    0x3dc58ced,// 224 PAY 197 

    0x46fc5bb6,// 225 PAY 198 

    0x03259c43,// 226 PAY 199 

    0x89e559ed,// 227 PAY 200 

    0x7d6e53bb,// 228 PAY 201 

    0x222be8e8,// 229 PAY 202 

    0x0a3c6025,// 230 PAY 203 

    0xdd6bd3fa,// 231 PAY 204 

    0x996443dd,// 232 PAY 205 

    0x68b91afd,// 233 PAY 206 

    0x12653bb3,// 234 PAY 207 

    0xd4d4f4f7,// 235 PAY 208 

    0xf3b4cb51,// 236 PAY 209 

    0x863a67f9,// 237 PAY 210 

    0x5ecb324e,// 238 PAY 211 

    0x5292ff10,// 239 PAY 212 

    0x78a75cf4,// 240 PAY 213 

    0xb16e9cc7,// 241 PAY 214 

    0x61e40d71,// 242 PAY 215 

    0x8da36cd3,// 243 PAY 216 

    0x6d181471,// 244 PAY 217 

    0x44bde20b,// 245 PAY 218 

    0x2cb55d90,// 246 PAY 219 

    0x2b34dbcd,// 247 PAY 220 

    0x395b3470,// 248 PAY 221 

    0x60f384df,// 249 PAY 222 

    0xc1f9cee5,// 250 PAY 223 

    0x921e992a,// 251 PAY 224 

    0x9239a89b,// 252 PAY 225 

    0x4a78376f,// 253 PAY 226 

    0xe45c670c,// 254 PAY 227 

    0xa631c151,// 255 PAY 228 

    0x850fbee9,// 256 PAY 229 

    0x95449211,// 257 PAY 230 

    0xb06f85bc,// 258 PAY 231 

    0x3ef2f02b,// 259 PAY 232 

    0x6ecd2059,// 260 PAY 233 

    0xa0a2861e,// 261 PAY 234 

    0x9ec3b378,// 262 PAY 235 

    0xad21a664,// 263 PAY 236 

    0x34626ce9,// 264 PAY 237 

    0x82e30293,// 265 PAY 238 

    0xa8723299,// 266 PAY 239 

    0x5eecc034,// 267 PAY 240 

    0xa89ed554,// 268 PAY 241 

    0x2cc95da0,// 269 PAY 242 

    0x9039df63,// 270 PAY 243 

    0x4ac03516,// 271 PAY 244 

    0xab99c47c,// 272 PAY 245 

    0xbc23d964,// 273 PAY 246 

    0x6653c79f,// 274 PAY 247 

    0x8d2da086,// 275 PAY 248 

    0x85f3d840,// 276 PAY 249 

    0x8d0cfc16,// 277 PAY 250 

    0x4dfdc3cd,// 278 PAY 251 

    0xde7500fa,// 279 PAY 252 

    0xaf99ded6,// 280 PAY 253 

    0xc9192356,// 281 PAY 254 

    0xa4413ccf,// 282 PAY 255 

    0xc3406903,// 283 PAY 256 

    0xa6d17343,// 284 PAY 257 

    0xff130a95,// 285 PAY 258 

    0x46f30ef4,// 286 PAY 259 

    0x29e2d2f3,// 287 PAY 260 

    0xca73429f,// 288 PAY 261 

    0x789bf9fc,// 289 PAY 262 

    0xd9e583eb,// 290 PAY 263 

    0x714614fe,// 291 PAY 264 

    0x9aa0fdc0,// 292 PAY 265 

    0xe7ee1e86,// 293 PAY 266 

    0xfebbaf76,// 294 PAY 267 

    0x2605f03d,// 295 PAY 268 

    0xb7f61b18,// 296 PAY 269 

    0xfe7652d5,// 297 PAY 270 

    0x11bc0ee9,// 298 PAY 271 

    0x2347d481,// 299 PAY 272 

    0xb7ec0f89,// 300 PAY 273 

    0x52300b84,// 301 PAY 274 

    0x88a0c548,// 302 PAY 275 

    0xba0f5a79,// 303 PAY 276 

    0x87d5d7f4,// 304 PAY 277 

    0xe0f882cf,// 305 PAY 278 

    0xffe03441,// 306 PAY 279 

    0xb6e3a87f,// 307 PAY 280 

    0xc5ae6e58,// 308 PAY 281 

    0x41972784,// 309 PAY 282 

    0xc0cb4a1d,// 310 PAY 283 

    0x6000fc60,// 311 PAY 284 

    0xaa813884,// 312 PAY 285 

    0xd9758572,// 313 PAY 286 

    0xf701494e,// 314 PAY 287 

    0x5c5a00d1,// 315 PAY 288 

    0x0d5fe768,// 316 PAY 289 

    0x713a3f5d,// 317 PAY 290 

    0xc95f23ac,// 318 PAY 291 

    0xa171071b,// 319 PAY 292 

    0xaae811bd,// 320 PAY 293 

    0xd6f988a7,// 321 PAY 294 

    0xbc68e2d0,// 322 PAY 295 

    0xc47522ea,// 323 PAY 296 

    0xab716307,// 324 PAY 297 

    0x9f277ce3,// 325 PAY 298 

    0x2da17ad6,// 326 PAY 299 

    0x0baa2866,// 327 PAY 300 

    0x3f7ce41e,// 328 PAY 301 

    0x46030ffb,// 329 PAY 302 

    0xf7333779,// 330 PAY 303 

    0x93633c62,// 331 PAY 304 

    0x7bff5a9c,// 332 PAY 305 

    0x1be5606c,// 333 PAY 306 

    0x14b4dc54,// 334 PAY 307 

    0xbbd15fa1,// 335 PAY 308 

    0x8cdab726,// 336 PAY 309 

    0x7cd62fa4,// 337 PAY 310 

    0x6942be7c,// 338 PAY 311 

    0xd425c38a,// 339 PAY 312 

    0xc45d72a8,// 340 PAY 313 

    0xc5b12a16,// 341 PAY 314 

    0x5073df78,// 342 PAY 315 

    0x95da2774,// 343 PAY 316 

    0xc5689718,// 344 PAY 317 

    0xf5028929,// 345 PAY 318 

    0x0550939d,// 346 PAY 319 

    0xa5a4acb0,// 347 PAY 320 

    0x7082752b,// 348 PAY 321 

    0x8970e04e,// 349 PAY 322 

    0x26470073,// 350 PAY 323 

    0x37d99eb8,// 351 PAY 324 

    0xeddaa8cf,// 352 PAY 325 

    0x3c8e15b9,// 353 PAY 326 

    0x9ef9dfac,// 354 PAY 327 

    0x629c7040,// 355 PAY 328 

    0x633ce5f2,// 356 PAY 329 

    0xb7f80cb8,// 357 PAY 330 

    0x54bab774,// 358 PAY 331 

    0x11038156,// 359 PAY 332 

    0xc4c11628,// 360 PAY 333 

    0x672516d2,// 361 PAY 334 

    0x76d20d8d,// 362 PAY 335 

    0xbd196e4b,// 363 PAY 336 

    0xfaded000,// 364 PAY 337 

    0xdef49cb4,// 365 PAY 338 

    0xebbd80ff,// 366 PAY 339 

    0x3c745936,// 367 PAY 340 

    0xf5fe9562,// 368 PAY 341 

    0x435af1e2,// 369 PAY 342 

    0xe2515717,// 370 PAY 343 

    0x2034d27e,// 371 PAY 344 

    0x0edced5f,// 372 PAY 345 

    0xaf665941,// 373 PAY 346 

    0x2233895f,// 374 PAY 347 

    0x033623c5,// 375 PAY 348 

    0xc0aa31f8,// 376 PAY 349 

    0xdeec3b4f,// 377 PAY 350 

    0x6f75a30f,// 378 PAY 351 

    0x760e69ec,// 379 PAY 352 

    0x743082aa,// 380 PAY 353 

    0x397094d9,// 381 PAY 354 

    0x41c36e44,// 382 PAY 355 

    0x6ca14635,// 383 PAY 356 

    0xaf4cc738,// 384 PAY 357 

    0x1dc555da,// 385 PAY 358 

    0xbcf88082,// 386 PAY 359 

    0x040dd611,// 387 PAY 360 

    0xb4b910f5,// 388 PAY 361 

    0x3a5a8e3c,// 389 PAY 362 

    0x078c118e,// 390 PAY 363 

    0xbe6c4302,// 391 PAY 364 

    0xfbb658bd,// 392 PAY 365 

    0xb95197ee,// 393 PAY 366 

    0x2824354a,// 394 PAY 367 

    0x5099332b,// 395 PAY 368 

    0x2dab1b3b,// 396 PAY 369 

    0x6b133c95,// 397 PAY 370 

    0x2092cf93,// 398 PAY 371 

    0xb0d4c426,// 399 PAY 372 

    0xc46f2c0e,// 400 PAY 373 

    0x713b04cb,// 401 PAY 374 

    0x773a52e8,// 402 PAY 375 

    0x8a24da9e,// 403 PAY 376 

    0x41ff7065,// 404 PAY 377 

    0x33f0ccb1,// 405 PAY 378 

    0xc4308679,// 406 PAY 379 

    0x7484add5,// 407 PAY 380 

    0x17fe5e64,// 408 PAY 381 

    0x3583a083,// 409 PAY 382 

    0x4d81a68f,// 410 PAY 383 

    0xe74c29db,// 411 PAY 384 

    0xe5e2e467,// 412 PAY 385 

    0xe72da5c4,// 413 PAY 386 

    0x2125cb03,// 414 PAY 387 

    0xcb6e75cb,// 415 PAY 388 

    0x9a6624bb,// 416 PAY 389 

    0xe5dd3f05,// 417 PAY 390 

    0xd5e2fe60,// 418 PAY 391 

    0x17179d60,// 419 PAY 392 

    0x649b74f2,// 420 PAY 393 

    0x837982c9,// 421 PAY 394 

    0xdeaf13cc,// 422 PAY 395 

    0x5c822c41,// 423 PAY 396 

    0x144892c1,// 424 PAY 397 

    0x13d1ba63,// 425 PAY 398 

    0x2ebfe02f,// 426 PAY 399 

    0xf6587f3d,// 427 PAY 400 

    0x5b7d3a09,// 428 PAY 401 

    0xeec3cbf1,// 429 PAY 402 

    0xdeb2b49f,// 430 PAY 403 

    0x993a5ce3,// 431 PAY 404 

    0xd0ddb538,// 432 PAY 405 

    0x17c5f698,// 433 PAY 406 

    0xceb0c676,// 434 PAY 407 

    0x6113ddcd,// 435 PAY 408 

    0xab5badec,// 436 PAY 409 

    0x1e709647,// 437 PAY 410 

    0x9cdab431,// 438 PAY 411 

    0xaa22132a,// 439 PAY 412 

    0x544efb78,// 440 PAY 413 

    0xa1a822d8,// 441 PAY 414 

    0x2d4567d8,// 442 PAY 415 

    0xfdadcfa0,// 443 PAY 416 

    0x30b99a16,// 444 PAY 417 

    0xc3192f3a,// 445 PAY 418 

    0x54782374,// 446 PAY 419 

    0xaac38ab6,// 447 PAY 420 

    0x0de313d7,// 448 PAY 421 

    0x1835f86c,// 449 PAY 422 

    0x920af321,// 450 PAY 423 

    0x7782e009,// 451 PAY 424 

    0xe8390000,// 452 PAY 425 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 168 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf4 

    0x02a0f437 // 453 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt79_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x806428d1,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0xe2db2c84,// 6 SCX   4 

    0xa88ce90e,// 7 SCX   5 

    0xdea63dfb,// 8 SCX   6 

    0x892e6578,// 9 SCX   7 

    0xa92fba19,// 10 SCX   8 

    0x99ff7411,// 11 SCX   9 

    0xb2e9a30b,// 12 SCX  10 

    0x28df1edb,// 13 SCX  11 

    0x612e96e2,// 14 SCX  12 

    0x3e373fea,// 15 SCX  13 

    0x7659fee5,// 16 SCX  14 

    0x5c543882,// 17 SCX  15 

    0x97c5f57f,// 18 SCX  16 

    0x6c0413de,// 19 SCX  17 

    0xa91e7774,// 20 SCX  18 

    0x64c24c51,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1036 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 361 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 361 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 124 

/// BFD (ofst+len)cry  : 180 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 392 

    0x00000169,// 22 BFD   1 

    0x007c0038,// 23 BFD   2 

    0x0188000c,// 24 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 4e 

    0x4e00acdc,// 25 MFM   1 

    0x8f0ef18a,// 26 MFM   2 

    0x94412990,// 27 MFM   3 

    0x2dca029e,// 28 MFM   4 

    0x445f6286,// 29 MFM   5 

    0x02b6b16d,// 30 MFM   6 

    0xc4393847,// 31 MFM   7 

    0x16c958a1,// 32 MFM   8 

    0x78de2044,// 33 MFM   9 

    0xb826a37d,// 34 MFM  10 

    0xc4000000,// 35 MFM  11 

/// BDA is 260 words. 

/// BDA size     is 1036 (0x40c) 

/// BDA id       is 0x4d3 

    0x040c04d3,// 36 BDA   1 

/// PAY Generic Data size   : 1036 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x47abbdde,// 37 PAY   1 

    0x42ca9f58,// 38 PAY   2 

    0x6cef5265,// 39 PAY   3 

    0x54a9aabe,// 40 PAY   4 

    0x9bb72479,// 41 PAY   5 

    0x64ed60da,// 42 PAY   6 

    0xddf3b35f,// 43 PAY   7 

    0x9480271c,// 44 PAY   8 

    0x6f8b9959,// 45 PAY   9 

    0x4f59ec9f,// 46 PAY  10 

    0xbc5145fe,// 47 PAY  11 

    0x8cb55043,// 48 PAY  12 

    0x89317868,// 49 PAY  13 

    0x836899a6,// 50 PAY  14 

    0xa891d6ae,// 51 PAY  15 

    0x0b86cce6,// 52 PAY  16 

    0xe9eb057b,// 53 PAY  17 

    0x6b0bffba,// 54 PAY  18 

    0xc9fc98de,// 55 PAY  19 

    0xa3de6a84,// 56 PAY  20 

    0x92a91bb6,// 57 PAY  21 

    0xc50a3d44,// 58 PAY  22 

    0x1997fdda,// 59 PAY  23 

    0x88272f7b,// 60 PAY  24 

    0xf6883a3b,// 61 PAY  25 

    0xd15af502,// 62 PAY  26 

    0x4a971ae3,// 63 PAY  27 

    0xb805b529,// 64 PAY  28 

    0xaa10e06b,// 65 PAY  29 

    0x710610f6,// 66 PAY  30 

    0x3436aec4,// 67 PAY  31 

    0xd5fea267,// 68 PAY  32 

    0xbc895799,// 69 PAY  33 

    0xca2bbdee,// 70 PAY  34 

    0xe642dce5,// 71 PAY  35 

    0x719d2c78,// 72 PAY  36 

    0x22f9b4a7,// 73 PAY  37 

    0x1468cd11,// 74 PAY  38 

    0x26e4b723,// 75 PAY  39 

    0x1f4aa935,// 76 PAY  40 

    0xfa0d499c,// 77 PAY  41 

    0xd11aaf09,// 78 PAY  42 

    0x5a6e9a50,// 79 PAY  43 

    0xc76a17ca,// 80 PAY  44 

    0x2ee91934,// 81 PAY  45 

    0x35c15f31,// 82 PAY  46 

    0x7017f65b,// 83 PAY  47 

    0xed7c2e18,// 84 PAY  48 

    0xd3dc05e4,// 85 PAY  49 

    0x5fb695ab,// 86 PAY  50 

    0xa8c7062e,// 87 PAY  51 

    0x8baa42bc,// 88 PAY  52 

    0x418d1931,// 89 PAY  53 

    0xfad492cc,// 90 PAY  54 

    0xeb9f3ebe,// 91 PAY  55 

    0x143f8810,// 92 PAY  56 

    0xb9d5270d,// 93 PAY  57 

    0xe0615aeb,// 94 PAY  58 

    0xeb30cc52,// 95 PAY  59 

    0x1486cf9a,// 96 PAY  60 

    0xf00c27fb,// 97 PAY  61 

    0x78c2d862,// 98 PAY  62 

    0x3585e71f,// 99 PAY  63 

    0x508a3576,// 100 PAY  64 

    0x730218d1,// 101 PAY  65 

    0x317ab156,// 102 PAY  66 

    0x7f10e41b,// 103 PAY  67 

    0x36c02d08,// 104 PAY  68 

    0xe016a3eb,// 105 PAY  69 

    0x7e44bf63,// 106 PAY  70 

    0x6e253d43,// 107 PAY  71 

    0x96da5ac1,// 108 PAY  72 

    0x81ea9a2d,// 109 PAY  73 

    0x3b57abd2,// 110 PAY  74 

    0x2a02f90a,// 111 PAY  75 

    0x8f224017,// 112 PAY  76 

    0xc18144c3,// 113 PAY  77 

    0xe0ada1ad,// 114 PAY  78 

    0x3c52aac9,// 115 PAY  79 

    0x39adc753,// 116 PAY  80 

    0xa7c5f334,// 117 PAY  81 

    0x3e3eac07,// 118 PAY  82 

    0xfa9ac5df,// 119 PAY  83 

    0x9d4abf1a,// 120 PAY  84 

    0xa063a1e8,// 121 PAY  85 

    0x8ed1e4c3,// 122 PAY  86 

    0x4f2b5333,// 123 PAY  87 

    0xd1018462,// 124 PAY  88 

    0x3cbec1d5,// 125 PAY  89 

    0xdbca9d94,// 126 PAY  90 

    0x24da9978,// 127 PAY  91 

    0x58b77315,// 128 PAY  92 

    0x097ee72f,// 129 PAY  93 

    0x8d8594b7,// 130 PAY  94 

    0x0bd23b88,// 131 PAY  95 

    0x602dbd28,// 132 PAY  96 

    0x5e8169f3,// 133 PAY  97 

    0xe9bd9bdf,// 134 PAY  98 

    0x7ca98766,// 135 PAY  99 

    0x45a5760f,// 136 PAY 100 

    0x7b6d9c58,// 137 PAY 101 

    0x6007e43b,// 138 PAY 102 

    0x1d1e59a0,// 139 PAY 103 

    0x31ad82d9,// 140 PAY 104 

    0xb4cc9780,// 141 PAY 105 

    0xa35ca08f,// 142 PAY 106 

    0x245fbac0,// 143 PAY 107 

    0xd4f5a7e6,// 144 PAY 108 

    0x07650e70,// 145 PAY 109 

    0x23d959ae,// 146 PAY 110 

    0x43e514dc,// 147 PAY 111 

    0x53d9b803,// 148 PAY 112 

    0xea3e8260,// 149 PAY 113 

    0xd4bccb99,// 150 PAY 114 

    0x622489eb,// 151 PAY 115 

    0x6c345899,// 152 PAY 116 

    0x72015947,// 153 PAY 117 

    0x24d6051d,// 154 PAY 118 

    0xc8b1d46e,// 155 PAY 119 

    0xbad712e4,// 156 PAY 120 

    0x2241c559,// 157 PAY 121 

    0x48f63325,// 158 PAY 122 

    0x265d3696,// 159 PAY 123 

    0x1964dd75,// 160 PAY 124 

    0x6f372d98,// 161 PAY 125 

    0x6d2bd9c0,// 162 PAY 126 

    0x937062ca,// 163 PAY 127 

    0x018cf098,// 164 PAY 128 

    0xa44638b5,// 165 PAY 129 

    0x9c0ac7b9,// 166 PAY 130 

    0x924983b0,// 167 PAY 131 

    0xc8b555a4,// 168 PAY 132 

    0xcc5f6e96,// 169 PAY 133 

    0xcb929aa9,// 170 PAY 134 

    0xf9f95c8d,// 171 PAY 135 

    0xaf86cf1a,// 172 PAY 136 

    0x7c20c8b1,// 173 PAY 137 

    0xb60d0c2b,// 174 PAY 138 

    0x554c8410,// 175 PAY 139 

    0xe312308b,// 176 PAY 140 

    0xa22332cb,// 177 PAY 141 

    0x46a0299d,// 178 PAY 142 

    0xbedcfcad,// 179 PAY 143 

    0xb4988ca4,// 180 PAY 144 

    0xe92bd7de,// 181 PAY 145 

    0xe07436d1,// 182 PAY 146 

    0x7fffcbe2,// 183 PAY 147 

    0xef573017,// 184 PAY 148 

    0x080d119e,// 185 PAY 149 

    0xf9ff2299,// 186 PAY 150 

    0x459a199d,// 187 PAY 151 

    0x48c20eb7,// 188 PAY 152 

    0x257d77a8,// 189 PAY 153 

    0xbaf3f9e7,// 190 PAY 154 

    0x62f1ba5a,// 191 PAY 155 

    0xffb52354,// 192 PAY 156 

    0xa2b300ee,// 193 PAY 157 

    0x7e71d928,// 194 PAY 158 

    0x57a653fc,// 195 PAY 159 

    0x7e6cdb11,// 196 PAY 160 

    0x8f31c6e8,// 197 PAY 161 

    0x8ea549a4,// 198 PAY 162 

    0x6a3709d6,// 199 PAY 163 

    0x50139ec4,// 200 PAY 164 

    0x1a7d2bb8,// 201 PAY 165 

    0x38011b5c,// 202 PAY 166 

    0xe2d84199,// 203 PAY 167 

    0x6c8b92d9,// 204 PAY 168 

    0x18350fe7,// 205 PAY 169 

    0x4866d127,// 206 PAY 170 

    0x6cf89005,// 207 PAY 171 

    0x90eb8da2,// 208 PAY 172 

    0xf86e69d4,// 209 PAY 173 

    0x5ef1e04c,// 210 PAY 174 

    0x2017db81,// 211 PAY 175 

    0x89c25ba0,// 212 PAY 176 

    0xbfbe7e29,// 213 PAY 177 

    0x548b55c6,// 214 PAY 178 

    0xeb2328ba,// 215 PAY 179 

    0xaa31d7ca,// 216 PAY 180 

    0x024a5347,// 217 PAY 181 

    0x5973ad06,// 218 PAY 182 

    0xc8fe7431,// 219 PAY 183 

    0x4507565c,// 220 PAY 184 

    0x7098f236,// 221 PAY 185 

    0x63d52ec1,// 222 PAY 186 

    0x522d50ad,// 223 PAY 187 

    0x5217bac8,// 224 PAY 188 

    0x755afa36,// 225 PAY 189 

    0x8c76222e,// 226 PAY 190 

    0x87a51bfa,// 227 PAY 191 

    0x97cbb919,// 228 PAY 192 

    0x86a6963c,// 229 PAY 193 

    0xd0a80200,// 230 PAY 194 

    0xd3ac23b2,// 231 PAY 195 

    0x58a197e2,// 232 PAY 196 

    0x9b1f2ff7,// 233 PAY 197 

    0x3a015d76,// 234 PAY 198 

    0x11c9e1a2,// 235 PAY 199 

    0x9d69b389,// 236 PAY 200 

    0x6a57ac3e,// 237 PAY 201 

    0xaee271f0,// 238 PAY 202 

    0x872f0268,// 239 PAY 203 

    0xda8af501,// 240 PAY 204 

    0x49de5e7a,// 241 PAY 205 

    0x4aa2722f,// 242 PAY 206 

    0xcf4cc5a3,// 243 PAY 207 

    0x2e6034f9,// 244 PAY 208 

    0x39e5705a,// 245 PAY 209 

    0xe9709a37,// 246 PAY 210 

    0x290729e2,// 247 PAY 211 

    0x7d615457,// 248 PAY 212 

    0x3dbb0e7f,// 249 PAY 213 

    0xe132d046,// 250 PAY 214 

    0x9e63180c,// 251 PAY 215 

    0xf2b0f9a7,// 252 PAY 216 

    0x2977d27d,// 253 PAY 217 

    0x37d0d4ac,// 254 PAY 218 

    0x9d1a77fb,// 255 PAY 219 

    0xbaabdb00,// 256 PAY 220 

    0xe75740ac,// 257 PAY 221 

    0x1a0f9da9,// 258 PAY 222 

    0x588fa845,// 259 PAY 223 

    0x5ca3538b,// 260 PAY 224 

    0x7fe34e16,// 261 PAY 225 

    0xed5286e7,// 262 PAY 226 

    0xb7edc7ab,// 263 PAY 227 

    0x0d6ec339,// 264 PAY 228 

    0x3b4d33c0,// 265 PAY 229 

    0xf2ed4944,// 266 PAY 230 

    0x59f6231c,// 267 PAY 231 

    0x41e7e449,// 268 PAY 232 

    0x232bc02f,// 269 PAY 233 

    0x774fc4c5,// 270 PAY 234 

    0x7af5da5a,// 271 PAY 235 

    0x64080f97,// 272 PAY 236 

    0x94249d76,// 273 PAY 237 

    0x59b79e8e,// 274 PAY 238 

    0xdfa118e3,// 275 PAY 239 

    0xa3039a5e,// 276 PAY 240 

    0x71a97935,// 277 PAY 241 

    0xe6b41db9,// 278 PAY 242 

    0xdb8b7600,// 279 PAY 243 

    0x22055660,// 280 PAY 244 

    0x1a3a3e40,// 281 PAY 245 

    0x6b2fcb9b,// 282 PAY 246 

    0xa5f5e50d,// 283 PAY 247 

    0x0b97dabc,// 284 PAY 248 

    0x40269ca6,// 285 PAY 249 

    0xbc5c691f,// 286 PAY 250 

    0x84b679f6,// 287 PAY 251 

    0x75352ea1,// 288 PAY 252 

    0x6c0b279d,// 289 PAY 253 

    0x2b06bf3a,// 290 PAY 254 

    0x801c45bf,// 291 PAY 255 

    0x0f16b10e,// 292 PAY 256 

    0x4de8bc8f,// 293 PAY 257 

    0x63df05bf,// 294 PAY 258 

    0x2ba1bdda,// 295 PAY 259 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 90 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf 

    0x01690f2d // 296 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt80_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x00000013,// 3 SCX   1 

    0x80662842,// 4 SCX   2 

    0x000033c2,// 5 SCX   3 

    0xb6496f6e,// 6 SCX   4 

    0xcb0e07d3,// 7 SCX   5 

    0xf047cdaf,// 8 SCX   6 

    0x769546c1,// 9 SCX   7 

    0xdca4c844,// 10 SCX   8 

    0x12561828,// 11 SCX   9 

    0xe783c154,// 12 SCX  10 

    0x08c6be86,// 13 SCX  11 

    0x028e0637,// 14 SCX  12 

    0xfdf99d7e,// 15 SCX  13 

    0x7e3d3c3e,// 16 SCX  14 

    0x157b648c,// 17 SCX  15 

    0xbf1f4f87,// 18 SCX  16 

    0x267b2fdc,// 19 SCX  17 

    0x1619dc51,// 20 SCX  18 

    0x2ab359fb,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 796 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 237 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 237 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 224 

/// BFD (ofst+len)cry  : 232 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 500 

    0x000000ed,// 22 BFD   1 

    0x00e00008,// 23 BFD   2 

    0x01f40080,// 24 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x03008e40,// 25 MFM   1 

/// BDA is 200 words. 

/// BDA size     is 796 (0x31c) 

/// BDA id       is 0xcf5d 

    0x031ccf5d,// 26 BDA   1 

/// PAY Generic Data size   : 796 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x6aec1cf3,// 27 PAY   1 

    0x1104cb59,// 28 PAY   2 

    0xafa848ba,// 29 PAY   3 

    0xafbe4e1c,// 30 PAY   4 

    0xa358398a,// 31 PAY   5 

    0x480fdd6b,// 32 PAY   6 

    0xd614d1c8,// 33 PAY   7 

    0x18d7a876,// 34 PAY   8 

    0x5f23aaf1,// 35 PAY   9 

    0x6b141924,// 36 PAY  10 

    0x0aa0ea66,// 37 PAY  11 

    0xc591c2f3,// 38 PAY  12 

    0x3cb01aae,// 39 PAY  13 

    0x809b39e4,// 40 PAY  14 

    0x7c36cec2,// 41 PAY  15 

    0x2f866458,// 42 PAY  16 

    0x1cb3ea1a,// 43 PAY  17 

    0x5844b91c,// 44 PAY  18 

    0xfb8ea100,// 45 PAY  19 

    0x5c4c4e36,// 46 PAY  20 

    0x621c063a,// 47 PAY  21 

    0x8cdd9a48,// 48 PAY  22 

    0x88205c4d,// 49 PAY  23 

    0xbd85dedf,// 50 PAY  24 

    0xc6f7ad66,// 51 PAY  25 

    0x1a33e21d,// 52 PAY  26 

    0xdd97a041,// 53 PAY  27 

    0xaa067ac8,// 54 PAY  28 

    0x703f4bda,// 55 PAY  29 

    0x2cc515e9,// 56 PAY  30 

    0x8f1396a7,// 57 PAY  31 

    0x15bc3ac6,// 58 PAY  32 

    0xe9dd7ea8,// 59 PAY  33 

    0xa8d2d7c1,// 60 PAY  34 

    0x4b90037c,// 61 PAY  35 

    0xcff06688,// 62 PAY  36 

    0xba51025a,// 63 PAY  37 

    0x28f24c2c,// 64 PAY  38 

    0xb6c1461b,// 65 PAY  39 

    0x90dd9497,// 66 PAY  40 

    0x21a497a0,// 67 PAY  41 

    0x8994f48e,// 68 PAY  42 

    0x479e2152,// 69 PAY  43 

    0x7ad6e914,// 70 PAY  44 

    0x37a4f89f,// 71 PAY  45 

    0x161fff15,// 72 PAY  46 

    0x4febdd0c,// 73 PAY  47 

    0x7a921b2a,// 74 PAY  48 

    0xf81906f1,// 75 PAY  49 

    0x9ce8318e,// 76 PAY  50 

    0xe3e93aa7,// 77 PAY  51 

    0xf6f4fe48,// 78 PAY  52 

    0xd50f9b7b,// 79 PAY  53 

    0x950f6b98,// 80 PAY  54 

    0x59f83167,// 81 PAY  55 

    0xf33a362e,// 82 PAY  56 

    0x4c7fbc9c,// 83 PAY  57 

    0x57e49305,// 84 PAY  58 

    0x2a12362c,// 85 PAY  59 

    0x332797c1,// 86 PAY  60 

    0xca0323a5,// 87 PAY  61 

    0x9869a22c,// 88 PAY  62 

    0x37949fce,// 89 PAY  63 

    0x747012f8,// 90 PAY  64 

    0xe2752454,// 91 PAY  65 

    0x7ca15ab7,// 92 PAY  66 

    0x3dd80786,// 93 PAY  67 

    0xdb4e701f,// 94 PAY  68 

    0x030495eb,// 95 PAY  69 

    0xf6e72453,// 96 PAY  70 

    0x16619c7f,// 97 PAY  71 

    0x13825497,// 98 PAY  72 

    0x4523868c,// 99 PAY  73 

    0x3e9896be,// 100 PAY  74 

    0xa438be40,// 101 PAY  75 

    0x792fdde9,// 102 PAY  76 

    0xa14f1635,// 103 PAY  77 

    0xf8108df2,// 104 PAY  78 

    0xc9a7cc97,// 105 PAY  79 

    0x7c7ef94b,// 106 PAY  80 

    0x7ee154a6,// 107 PAY  81 

    0x0ca1a1b5,// 108 PAY  82 

    0x18295151,// 109 PAY  83 

    0x653ee6b0,// 110 PAY  84 

    0x87a96946,// 111 PAY  85 

    0xf6ee4984,// 112 PAY  86 

    0xad570cb0,// 113 PAY  87 

    0x7cd3d0f9,// 114 PAY  88 

    0xdd2feb8a,// 115 PAY  89 

    0x6421ef9e,// 116 PAY  90 

    0x5467c010,// 117 PAY  91 

    0xec8c0cee,// 118 PAY  92 

    0xe0a8b0f2,// 119 PAY  93 

    0x2e8e058d,// 120 PAY  94 

    0xa70b342d,// 121 PAY  95 

    0x974a3dbe,// 122 PAY  96 

    0xe534dc77,// 123 PAY  97 

    0xa2956035,// 124 PAY  98 

    0x32d411b1,// 125 PAY  99 

    0x0792edff,// 126 PAY 100 

    0x7e1d2157,// 127 PAY 101 

    0x167ede4b,// 128 PAY 102 

    0x82c12579,// 129 PAY 103 

    0xe5f0e9b7,// 130 PAY 104 

    0xe5679844,// 131 PAY 105 

    0x71561f0b,// 132 PAY 106 

    0x96b0cf60,// 133 PAY 107 

    0x922cc734,// 134 PAY 108 

    0x3df9d972,// 135 PAY 109 

    0x9f2523fe,// 136 PAY 110 

    0xc0dc78db,// 137 PAY 111 

    0xb687f5f0,// 138 PAY 112 

    0xf495194e,// 139 PAY 113 

    0x1e14d156,// 140 PAY 114 

    0xe853253f,// 141 PAY 115 

    0x2e30bae3,// 142 PAY 116 

    0x75a7d642,// 143 PAY 117 

    0x4856bf40,// 144 PAY 118 

    0x4e828852,// 145 PAY 119 

    0xc00c2bb5,// 146 PAY 120 

    0x9f013d87,// 147 PAY 121 

    0xd386b89a,// 148 PAY 122 

    0x331e3f27,// 149 PAY 123 

    0x9d83da5c,// 150 PAY 124 

    0x4c3a2059,// 151 PAY 125 

    0x2bbdb279,// 152 PAY 126 

    0xea326bc7,// 153 PAY 127 

    0x0f9a702e,// 154 PAY 128 

    0xa98f1905,// 155 PAY 129 

    0x4e493381,// 156 PAY 130 

    0x29813f00,// 157 PAY 131 

    0xdf3477ea,// 158 PAY 132 

    0x94bc7e15,// 159 PAY 133 

    0xce0866c2,// 160 PAY 134 

    0x7f9392c7,// 161 PAY 135 

    0xb865ac53,// 162 PAY 136 

    0x6fc18f5c,// 163 PAY 137 

    0x2a00af5b,// 164 PAY 138 

    0x064d91d0,// 165 PAY 139 

    0xba474c0b,// 166 PAY 140 

    0xd1852ae6,// 167 PAY 141 

    0x3cae2e3b,// 168 PAY 142 

    0x9a207571,// 169 PAY 143 

    0xdfafa284,// 170 PAY 144 

    0x88bfd2fd,// 171 PAY 145 

    0x3cfda6d4,// 172 PAY 146 

    0x62bb7f2d,// 173 PAY 147 

    0xa2ef8256,// 174 PAY 148 

    0x9725e4ce,// 175 PAY 149 

    0xb625ebb3,// 176 PAY 150 

    0x855efbef,// 177 PAY 151 

    0xbd57465b,// 178 PAY 152 

    0xe8c62ecc,// 179 PAY 153 

    0xbbd8f474,// 180 PAY 154 

    0x0ede70b0,// 181 PAY 155 

    0x8037aa34,// 182 PAY 156 

    0xbfe763f7,// 183 PAY 157 

    0xd82c6041,// 184 PAY 158 

    0x9cb77aaf,// 185 PAY 159 

    0x6b07030f,// 186 PAY 160 

    0x71a9e0c1,// 187 PAY 161 

    0xfc16af52,// 188 PAY 162 

    0x90fad0e0,// 189 PAY 163 

    0x404d7117,// 190 PAY 164 

    0xfcad76ed,// 191 PAY 165 

    0x0e52ac3c,// 192 PAY 166 

    0xa39cfa71,// 193 PAY 167 

    0x1a06ba1d,// 194 PAY 168 

    0x61171d94,// 195 PAY 169 

    0x381136e9,// 196 PAY 170 

    0xe4c8bf67,// 197 PAY 171 

    0x2ac84ddb,// 198 PAY 172 

    0xf050aa7d,// 199 PAY 173 

    0xeae7fab5,// 200 PAY 174 

    0x72448868,// 201 PAY 175 

    0x8c566ade,// 202 PAY 176 

    0x3304b6b2,// 203 PAY 177 

    0x63f8bbf3,// 204 PAY 178 

    0xd7294ebf,// 205 PAY 179 

    0xed496946,// 206 PAY 180 

    0x76e17145,// 207 PAY 181 

    0xdd795993,// 208 PAY 182 

    0xcb109386,// 209 PAY 183 

    0x7cd5471a,// 210 PAY 184 

    0x81f0705c,// 211 PAY 185 

    0x8e999e2a,// 212 PAY 186 

    0x9e947300,// 213 PAY 187 

    0x33fb580d,// 214 PAY 188 

    0xd81fe3bf,// 215 PAY 189 

    0x6959841b,// 216 PAY 190 

    0x14c428db,// 217 PAY 191 

    0x12fca66c,// 218 PAY 192 

    0x249250c0,// 219 PAY 193 

    0x7a63746f,// 220 PAY 194 

    0xeb90817e,// 221 PAY 195 

    0xa6fd5a28,// 222 PAY 196 

    0x3f954111,// 223 PAY 197 

    0x666c5738,// 224 PAY 198 

    0xc89f41cc,// 225 PAY 199 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 255 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4 

    0x03fc0485 // 226 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt81_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8061281c,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0xadf4ebc4,// 6 SCX   4 

    0x478bf908,// 7 SCX   5 

    0xcec20a19,// 8 SCX   6 

    0x137a53f9,// 9 SCX   7 

    0xb81adaa1,// 10 SCX   8 

    0x2dee0860,// 11 SCX   9 

    0x25964cc2,// 12 SCX  10 

    0x3c3ff92f,// 13 SCX  11 

    0xadeffe81,// 14 SCX  12 

    0xdc04592c,// 15 SCX  13 

    0x3d2055c0,// 16 SCX  14 

    0x6a73ff56,// 17 SCX  15 

    0x4aa18627,// 18 SCX  16 

    0xbb9467f2,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1168 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 796 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 796 

/// BFD lencrypto      : 96 

/// BFD ofstcrypto     : 312 

/// BFD (ofst+len)cry  : 408 

/// BFD ofstiv         : 212 

/// BFD ofsticv        : 836 

    0x0000031c,// 20 BFD   1 

    0x01380060,// 21 BFD   2 

    0x034400d4,// 22 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5f 

    0x5f001f11,// 23 MFM   1 

    0x51c4ca48,// 24 MFM   2 

    0x14fffbfd,// 25 MFM   3 

    0x86adfe55,// 26 MFM   4 

    0xdb73dcff,// 27 MFM   5 

    0x06e015e2,// 28 MFM   6 

    0xaa03ea4d,// 29 MFM   7 

    0xdd366313,// 30 MFM   8 

    0xca7e8304,// 31 MFM   9 

    0x6471b5a0,// 32 MFM  10 

    0x9d006b95,// 33 MFM  11 

    0x0c267717,// 34 MFM  12 

    0x04300000,// 35 MFM  13 

/// BDA is 293 words. 

/// BDA size     is 1168 (0x490) 

/// BDA id       is 0xe599 

    0x0490e599,// 36 BDA   1 

/// PAY Generic Data size   : 1168 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x42b5993a,// 37 PAY   1 

    0x1e6551e9,// 38 PAY   2 

    0xcba0a303,// 39 PAY   3 

    0x1b6a29a4,// 40 PAY   4 

    0x24814d27,// 41 PAY   5 

    0xff2ddce5,// 42 PAY   6 

    0x6b9c5b6e,// 43 PAY   7 

    0x42ce5930,// 44 PAY   8 

    0x903048a5,// 45 PAY   9 

    0xd4bac7d6,// 46 PAY  10 

    0x70a0b83d,// 47 PAY  11 

    0x96dc2828,// 48 PAY  12 

    0x78d1733c,// 49 PAY  13 

    0x0f4af923,// 50 PAY  14 

    0xe892aa0e,// 51 PAY  15 

    0xf708a57c,// 52 PAY  16 

    0x7787b579,// 53 PAY  17 

    0x36e4218d,// 54 PAY  18 

    0xa0aa2b15,// 55 PAY  19 

    0x6a7fd9ef,// 56 PAY  20 

    0x9a97b9ac,// 57 PAY  21 

    0x02a9b47c,// 58 PAY  22 

    0xbbbbac6b,// 59 PAY  23 

    0x5fe8ff30,// 60 PAY  24 

    0xd560f6bf,// 61 PAY  25 

    0x8b66d100,// 62 PAY  26 

    0xe96a19c0,// 63 PAY  27 

    0x51078bb5,// 64 PAY  28 

    0xea2651b0,// 65 PAY  29 

    0x0bd2c585,// 66 PAY  30 

    0x57e4e379,// 67 PAY  31 

    0x239c1167,// 68 PAY  32 

    0x157d14d5,// 69 PAY  33 

    0x17b08f07,// 70 PAY  34 

    0x00fd8b2d,// 71 PAY  35 

    0x9e483079,// 72 PAY  36 

    0x7c373aa8,// 73 PAY  37 

    0x17f447c1,// 74 PAY  38 

    0x4a0ee021,// 75 PAY  39 

    0x6858a7dd,// 76 PAY  40 

    0x5e73874f,// 77 PAY  41 

    0xe438b112,// 78 PAY  42 

    0x9080980d,// 79 PAY  43 

    0xab0b1fac,// 80 PAY  44 

    0x69094b5e,// 81 PAY  45 

    0x5f124273,// 82 PAY  46 

    0x9e78029f,// 83 PAY  47 

    0x6d634055,// 84 PAY  48 

    0xa2b21bdf,// 85 PAY  49 

    0x9297a65f,// 86 PAY  50 

    0xc2dcbf2b,// 87 PAY  51 

    0xce4c57c6,// 88 PAY  52 

    0x8ab2796f,// 89 PAY  53 

    0x3f19c5ea,// 90 PAY  54 

    0x39d7f4d1,// 91 PAY  55 

    0x65195c72,// 92 PAY  56 

    0x1db263fc,// 93 PAY  57 

    0x2a3e856e,// 94 PAY  58 

    0x31e5f23b,// 95 PAY  59 

    0x95eb6adb,// 96 PAY  60 

    0x0942e7a1,// 97 PAY  61 

    0xc534d88c,// 98 PAY  62 

    0xe8c34a88,// 99 PAY  63 

    0x35cd6497,// 100 PAY  64 

    0x57a40935,// 101 PAY  65 

    0x9d39e3f3,// 102 PAY  66 

    0xfa1fb6db,// 103 PAY  67 

    0x107dc17e,// 104 PAY  68 

    0xd348cb50,// 105 PAY  69 

    0x442e25e8,// 106 PAY  70 

    0xd736e9ac,// 107 PAY  71 

    0xd5020fdf,// 108 PAY  72 

    0x8cfa6e8f,// 109 PAY  73 

    0x30da5818,// 110 PAY  74 

    0x726309de,// 111 PAY  75 

    0xbf14593f,// 112 PAY  76 

    0x2defe2d0,// 113 PAY  77 

    0x2e399f9d,// 114 PAY  78 

    0xd4468944,// 115 PAY  79 

    0x5ad5ecef,// 116 PAY  80 

    0x784b1ff8,// 117 PAY  81 

    0xd20df312,// 118 PAY  82 

    0x79b9b958,// 119 PAY  83 

    0x9c9a4113,// 120 PAY  84 

    0x8d5aeb68,// 121 PAY  85 

    0x3387f034,// 122 PAY  86 

    0x75a40ee8,// 123 PAY  87 

    0x9a5f12f3,// 124 PAY  88 

    0xb3e6715f,// 125 PAY  89 

    0x7ce3dde3,// 126 PAY  90 

    0x7e3381f2,// 127 PAY  91 

    0x5bcba0c8,// 128 PAY  92 

    0x549bea55,// 129 PAY  93 

    0x8b9b0e8e,// 130 PAY  94 

    0x2f3809cd,// 131 PAY  95 

    0x52b0ad94,// 132 PAY  96 

    0xda4818f7,// 133 PAY  97 

    0xa0be9926,// 134 PAY  98 

    0x6306691f,// 135 PAY  99 

    0xb4d83382,// 136 PAY 100 

    0xdd209c02,// 137 PAY 101 

    0xdc5b3bfd,// 138 PAY 102 

    0x6bf32684,// 139 PAY 103 

    0x4df690f7,// 140 PAY 104 

    0x3ce938ad,// 141 PAY 105 

    0x34e7e8fe,// 142 PAY 106 

    0x61f4896f,// 143 PAY 107 

    0x79cb9fc9,// 144 PAY 108 

    0xe4a43220,// 145 PAY 109 

    0x5cad8f01,// 146 PAY 110 

    0x0d4204c4,// 147 PAY 111 

    0xa0e740e3,// 148 PAY 112 

    0x5df32d68,// 149 PAY 113 

    0x46a2b342,// 150 PAY 114 

    0x373a5ec7,// 151 PAY 115 

    0xf7beabea,// 152 PAY 116 

    0xddce95c5,// 153 PAY 117 

    0xcc85f1ab,// 154 PAY 118 

    0x8ef0c9bc,// 155 PAY 119 

    0x788b00ca,// 156 PAY 120 

    0x02b419e6,// 157 PAY 121 

    0x31f68080,// 158 PAY 122 

    0x39ed5859,// 159 PAY 123 

    0x7b2db9e6,// 160 PAY 124 

    0x3dece79b,// 161 PAY 125 

    0xa792193a,// 162 PAY 126 

    0x98e40185,// 163 PAY 127 

    0xe734ffb1,// 164 PAY 128 

    0xb5151117,// 165 PAY 129 

    0xe0d84119,// 166 PAY 130 

    0xeefee000,// 167 PAY 131 

    0xec93acdd,// 168 PAY 132 

    0xf1f16cdb,// 169 PAY 133 

    0x5a683189,// 170 PAY 134 

    0x54e427cb,// 171 PAY 135 

    0x669d7a51,// 172 PAY 136 

    0xaa2b9705,// 173 PAY 137 

    0xd3df2694,// 174 PAY 138 

    0xcd72a0fc,// 175 PAY 139 

    0xc600ccd9,// 176 PAY 140 

    0x4411dff2,// 177 PAY 141 

    0xe8e0ebc8,// 178 PAY 142 

    0x7e88e415,// 179 PAY 143 

    0xfeacf916,// 180 PAY 144 

    0x4741a800,// 181 PAY 145 

    0x90f38208,// 182 PAY 146 

    0x91771327,// 183 PAY 147 

    0xe04e8491,// 184 PAY 148 

    0x0e1c7a93,// 185 PAY 149 

    0x344c9291,// 186 PAY 150 

    0x9e9b6a4f,// 187 PAY 151 

    0xe7620d50,// 188 PAY 152 

    0x1787f7f0,// 189 PAY 153 

    0x0a736e27,// 190 PAY 154 

    0x0bc8e65f,// 191 PAY 155 

    0x869e4f2a,// 192 PAY 156 

    0xb92333c9,// 193 PAY 157 

    0x322aa4d9,// 194 PAY 158 

    0x69698dad,// 195 PAY 159 

    0x229be6ba,// 196 PAY 160 

    0xaf19c359,// 197 PAY 161 

    0x0822641e,// 198 PAY 162 

    0xcc0289f9,// 199 PAY 163 

    0xcc6031ef,// 200 PAY 164 

    0x92aeebc2,// 201 PAY 165 

    0x8077e8c3,// 202 PAY 166 

    0x6d0202af,// 203 PAY 167 

    0x50a40237,// 204 PAY 168 

    0x9e75ec88,// 205 PAY 169 

    0x2d29edfc,// 206 PAY 170 

    0x20d6193a,// 207 PAY 171 

    0x46b6e152,// 208 PAY 172 

    0xf48fb614,// 209 PAY 173 

    0xb718da96,// 210 PAY 174 

    0x321fff2c,// 211 PAY 175 

    0x06312dca,// 212 PAY 176 

    0x28494580,// 213 PAY 177 

    0x4a72e939,// 214 PAY 178 

    0xa65ab225,// 215 PAY 179 

    0xca096c90,// 216 PAY 180 

    0x64954055,// 217 PAY 181 

    0xe408bde3,// 218 PAY 182 

    0xb7a4b33d,// 219 PAY 183 

    0x552aaa56,// 220 PAY 184 

    0x404f62c9,// 221 PAY 185 

    0x02b87584,// 222 PAY 186 

    0x1cc291f1,// 223 PAY 187 

    0x18d9cd6a,// 224 PAY 188 

    0xc39bdc6b,// 225 PAY 189 

    0xfaa1a7e3,// 226 PAY 190 

    0xa5f167da,// 227 PAY 191 

    0x098f675e,// 228 PAY 192 

    0x03fc1325,// 229 PAY 193 

    0x67c89bb4,// 230 PAY 194 

    0xc358d625,// 231 PAY 195 

    0x6d53f4c2,// 232 PAY 196 

    0x79fbe6f8,// 233 PAY 197 

    0x814ce051,// 234 PAY 198 

    0xf52eb3a2,// 235 PAY 199 

    0xd05c20b6,// 236 PAY 200 

    0x25f3dd49,// 237 PAY 201 

    0x7ed5fe7d,// 238 PAY 202 

    0xe7bdbaab,// 239 PAY 203 

    0x08a209d8,// 240 PAY 204 

    0xd62b09cd,// 241 PAY 205 

    0xbacb1c94,// 242 PAY 206 

    0x80147eab,// 243 PAY 207 

    0xce81bdd3,// 244 PAY 208 

    0x46676d12,// 245 PAY 209 

    0xf0726e6a,// 246 PAY 210 

    0x3532ec2f,// 247 PAY 211 

    0x07df397d,// 248 PAY 212 

    0xb6f82621,// 249 PAY 213 

    0x4287e84c,// 250 PAY 214 

    0xa9598565,// 251 PAY 215 

    0x5109af92,// 252 PAY 216 

    0x6b400e45,// 253 PAY 217 

    0xacc4b7fe,// 254 PAY 218 

    0x7dfed360,// 255 PAY 219 

    0xbda9225e,// 256 PAY 220 

    0xfab7e432,// 257 PAY 221 

    0x998e3d34,// 258 PAY 222 

    0x39883c6f,// 259 PAY 223 

    0x0c6ca656,// 260 PAY 224 

    0x0a3cc909,// 261 PAY 225 

    0xe3bc8fe0,// 262 PAY 226 

    0x9e90a8bf,// 263 PAY 227 

    0x78699dcc,// 264 PAY 228 

    0x085612cd,// 265 PAY 229 

    0x75c6b123,// 266 PAY 230 

    0x0124bf35,// 267 PAY 231 

    0x0e94f33c,// 268 PAY 232 

    0x06ff0e99,// 269 PAY 233 

    0x2bbe6802,// 270 PAY 234 

    0x6cfabeb0,// 271 PAY 235 

    0x0c00d9d5,// 272 PAY 236 

    0xb4462514,// 273 PAY 237 

    0x95aee21e,// 274 PAY 238 

    0xbe65953f,// 275 PAY 239 

    0x1c051e8b,// 276 PAY 240 

    0x801897fe,// 277 PAY 241 

    0xa2602899,// 278 PAY 242 

    0xd8ab51b5,// 279 PAY 243 

    0x4a3f7156,// 280 PAY 244 

    0xa0d33201,// 281 PAY 245 

    0xecaca6fb,// 282 PAY 246 

    0xa62d7cc4,// 283 PAY 247 

    0xda2c11b3,// 284 PAY 248 

    0x39373a96,// 285 PAY 249 

    0x37ef946e,// 286 PAY 250 

    0x21db3408,// 287 PAY 251 

    0xc3c3f108,// 288 PAY 252 

    0x81d70531,// 289 PAY 253 

    0x5d62bc13,// 290 PAY 254 

    0x598c908b,// 291 PAY 255 

    0x54ca15d6,// 292 PAY 256 

    0x5ef1de5a,// 293 PAY 257 

    0xbfad2d2f,// 294 PAY 258 

    0xb85e81c7,// 295 PAY 259 

    0xb0e36874,// 296 PAY 260 

    0xa7cca493,// 297 PAY 261 

    0x54869c12,// 298 PAY 262 

    0x32b3cc1d,// 299 PAY 263 

    0x6b7d68b9,// 300 PAY 264 

    0xe530861a,// 301 PAY 265 

    0x881009d1,// 302 PAY 266 

    0x3a71a58b,// 303 PAY 267 

    0x299e8633,// 304 PAY 268 

    0x3f53d2fd,// 305 PAY 269 

    0x224ee610,// 306 PAY 270 

    0x54a4d05e,// 307 PAY 271 

    0xbe14449e,// 308 PAY 272 

    0x84756a47,// 309 PAY 273 

    0xd23ee597,// 310 PAY 274 

    0x0ad201b3,// 311 PAY 275 

    0x6c4f11bd,// 312 PAY 276 

    0xefb11912,// 313 PAY 277 

    0x93beda38,// 314 PAY 278 

    0x42030f1b,// 315 PAY 279 

    0x0b11bd76,// 316 PAY 280 

    0x50375203,// 317 PAY 281 

    0xf5504fa5,// 318 PAY 282 

    0xeaee5c66,// 319 PAY 283 

    0x493bb7ff,// 320 PAY 284 

    0x3a15e554,// 321 PAY 285 

    0xd93522ae,// 322 PAY 286 

    0xfd6e13b2,// 323 PAY 287 

    0xc7114be5,// 324 PAY 288 

    0xab40ace4,// 325 PAY 289 

    0xfca1a272,// 326 PAY 290 

    0x3b88b3da,// 327 PAY 291 

    0x3a8ea39e,// 328 PAY 292 

/// STA is 1 words. 

/// STA num_pkts       : 210 

/// STA pkt_idx        : 251 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1f 

    0x03ed1fd2 // 329 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt82_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x806228ab,// 4 SCX   2 

    0x00000300,// 5 SCX   3 

    0x8f277c0a,// 6 SCX   4 

    0x12a933ea,// 7 SCX   5 

    0x2d365d71,// 8 SCX   6 

    0x461512a6,// 9 SCX   7 

    0xfd097baa,// 10 SCX   8 

    0x1401f307,// 11 SCX   9 

    0x0e35b84d,// 12 SCX  10 

    0x232fe176,// 13 SCX  11 

    0xe17ba53e,// 14 SCX  12 

    0xaa64462a,// 15 SCX  13 

    0xa46d50fe,// 16 SCX  14 

    0x652a7ec0,// 17 SCX  15 

    0xa61693d3,// 18 SCX  16 

    0xe550a9a5,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 678 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 313 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 313 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 264 

/// BFD (ofst+len)cry  : 296 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 340 

    0x00000139,// 20 BFD   1 

    0x01080020,// 21 BFD   2 

    0x0154009c,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x110063cb,// 23 MFM   1 

    0x23b6fbab,// 24 MFM   2 

    0x7c83c000,// 25 MFM   3 

/// BDA is 171 words. 

/// BDA size     is 678 (0x2a6) 

/// BDA id       is 0x8517 

    0x02a68517,// 26 BDA   1 

/// PAY Generic Data size   : 678 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x5f5d8290,// 27 PAY   1 

    0x26b8969c,// 28 PAY   2 

    0x1faf59f4,// 29 PAY   3 

    0x2ddf1acc,// 30 PAY   4 

    0x5a92d801,// 31 PAY   5 

    0x9c38897b,// 32 PAY   6 

    0x749a2521,// 33 PAY   7 

    0x4dbb4fc6,// 34 PAY   8 

    0xb04b5bfd,// 35 PAY   9 

    0xd9d7d590,// 36 PAY  10 

    0xea2e48bb,// 37 PAY  11 

    0x6885c108,// 38 PAY  12 

    0x65294ced,// 39 PAY  13 

    0x6c8be1b7,// 40 PAY  14 

    0x3007ac7e,// 41 PAY  15 

    0xacc53174,// 42 PAY  16 

    0xc44e2672,// 43 PAY  17 

    0x79aa7101,// 44 PAY  18 

    0x5e2b9a61,// 45 PAY  19 

    0x157873db,// 46 PAY  20 

    0xb5f9b1e0,// 47 PAY  21 

    0xebd9dfa9,// 48 PAY  22 

    0x74fd9937,// 49 PAY  23 

    0x0a1b2c33,// 50 PAY  24 

    0xfc932084,// 51 PAY  25 

    0x4c075bdf,// 52 PAY  26 

    0xc3558a20,// 53 PAY  27 

    0xcda700cd,// 54 PAY  28 

    0xf8a0f3ec,// 55 PAY  29 

    0xf1a6b214,// 56 PAY  30 

    0x722fbc6c,// 57 PAY  31 

    0xdbf37a00,// 58 PAY  32 

    0x09c2434e,// 59 PAY  33 

    0xc714f3cc,// 60 PAY  34 

    0xfa0fb82d,// 61 PAY  35 

    0xc7b7d619,// 62 PAY  36 

    0x33037434,// 63 PAY  37 

    0x92fc8467,// 64 PAY  38 

    0x1a342875,// 65 PAY  39 

    0xe85aafe7,// 66 PAY  40 

    0x398c50e6,// 67 PAY  41 

    0xd3024423,// 68 PAY  42 

    0x7b01b4eb,// 69 PAY  43 

    0x96b9a6d0,// 70 PAY  44 

    0x19782474,// 71 PAY  45 

    0xc3b32ffe,// 72 PAY  46 

    0x0e3883db,// 73 PAY  47 

    0x3f38026d,// 74 PAY  48 

    0xe4b8703f,// 75 PAY  49 

    0x750fe484,// 76 PAY  50 

    0xb550fd68,// 77 PAY  51 

    0x305b7778,// 78 PAY  52 

    0x0d5ffaf1,// 79 PAY  53 

    0x31f95267,// 80 PAY  54 

    0xcd837f05,// 81 PAY  55 

    0x8dd49460,// 82 PAY  56 

    0x2f6088b9,// 83 PAY  57 

    0x168c0702,// 84 PAY  58 

    0x9e7ce4d3,// 85 PAY  59 

    0x401cfc87,// 86 PAY  60 

    0x3d371a6a,// 87 PAY  61 

    0x06c6fc32,// 88 PAY  62 

    0xfce9edb3,// 89 PAY  63 

    0x6b393a89,// 90 PAY  64 

    0x681e1498,// 91 PAY  65 

    0x6af2f8ad,// 92 PAY  66 

    0x26ec44a9,// 93 PAY  67 

    0x699535a6,// 94 PAY  68 

    0x7eb90300,// 95 PAY  69 

    0x00128cbb,// 96 PAY  70 

    0x7cf24f48,// 97 PAY  71 

    0x673d93b7,// 98 PAY  72 

    0x77f240f8,// 99 PAY  73 

    0xd04fd628,// 100 PAY  74 

    0x812804f9,// 101 PAY  75 

    0xb128b209,// 102 PAY  76 

    0x8eca133e,// 103 PAY  77 

    0x8e391398,// 104 PAY  78 

    0x0642ae4a,// 105 PAY  79 

    0x2b03acfd,// 106 PAY  80 

    0xa3c88df9,// 107 PAY  81 

    0x2c0746ef,// 108 PAY  82 

    0x107aff09,// 109 PAY  83 

    0xcf2a31b3,// 110 PAY  84 

    0xd8901bff,// 111 PAY  85 

    0x4711f3ad,// 112 PAY  86 

    0x1d5f1e3c,// 113 PAY  87 

    0x7eb5691b,// 114 PAY  88 

    0xf8f5241e,// 115 PAY  89 

    0xf95318d2,// 116 PAY  90 

    0xefcd6568,// 117 PAY  91 

    0xcdac554c,// 118 PAY  92 

    0xffce896e,// 119 PAY  93 

    0x9da1a8af,// 120 PAY  94 

    0x9529482b,// 121 PAY  95 

    0xbb00810e,// 122 PAY  96 

    0x569c2792,// 123 PAY  97 

    0x9e59d3a1,// 124 PAY  98 

    0x6a9f26bf,// 125 PAY  99 

    0xfebfac20,// 126 PAY 100 

    0x4502417d,// 127 PAY 101 

    0xbaf8de61,// 128 PAY 102 

    0xd8009212,// 129 PAY 103 

    0x5885bca8,// 130 PAY 104 

    0xc9647a60,// 131 PAY 105 

    0xb4493643,// 132 PAY 106 

    0x243d5ecc,// 133 PAY 107 

    0xdebc3d76,// 134 PAY 108 

    0x6f24e230,// 135 PAY 109 

    0x63bd8933,// 136 PAY 110 

    0x0b946ec6,// 137 PAY 111 

    0x83ef235e,// 138 PAY 112 

    0xaede92cc,// 139 PAY 113 

    0x7510d96c,// 140 PAY 114 

    0x65ff2e16,// 141 PAY 115 

    0xd36fdfd5,// 142 PAY 116 

    0xcdc3b1c5,// 143 PAY 117 

    0xda2f3bd6,// 144 PAY 118 

    0x5595aacf,// 145 PAY 119 

    0x4a2fed41,// 146 PAY 120 

    0x4d3768a5,// 147 PAY 121 

    0xa55eaacb,// 148 PAY 122 

    0x4ec9f68a,// 149 PAY 123 

    0x19a2368e,// 150 PAY 124 

    0xc8801f43,// 151 PAY 125 

    0x0927de40,// 152 PAY 126 

    0xc4ab8bd8,// 153 PAY 127 

    0x60dfe6a8,// 154 PAY 128 

    0x0a9ba76d,// 155 PAY 129 

    0x3715475d,// 156 PAY 130 

    0xa44eb991,// 157 PAY 131 

    0xea21eb45,// 158 PAY 132 

    0x289ab71b,// 159 PAY 133 

    0xd0c141ce,// 160 PAY 134 

    0x52982cb3,// 161 PAY 135 

    0x3dd1f213,// 162 PAY 136 

    0xdfde137e,// 163 PAY 137 

    0x42a3a472,// 164 PAY 138 

    0x31410465,// 165 PAY 139 

    0x3491fbe0,// 166 PAY 140 

    0x1c7491d2,// 167 PAY 141 

    0x4ffcac54,// 168 PAY 142 

    0x5033e5e0,// 169 PAY 143 

    0x8d516ba4,// 170 PAY 144 

    0x432bc37d,// 171 PAY 145 

    0xc5149b1d,// 172 PAY 146 

    0x8da90d64,// 173 PAY 147 

    0x312d5991,// 174 PAY 148 

    0x1a09df1c,// 175 PAY 149 

    0x8020b641,// 176 PAY 150 

    0x33e0d04a,// 177 PAY 151 

    0x9a3b48c3,// 178 PAY 152 

    0x3dca9bc4,// 179 PAY 153 

    0x5ed9c417,// 180 PAY 154 

    0x8d9b3e3a,// 181 PAY 155 

    0xaa226e02,// 182 PAY 156 

    0x99196241,// 183 PAY 157 

    0x6fed8bc0,// 184 PAY 158 

    0xc7223205,// 185 PAY 159 

    0xbc2b1411,// 186 PAY 160 

    0xaa0e8489,// 187 PAY 161 

    0x0dba8ee2,// 188 PAY 162 

    0xc07cd2a4,// 189 PAY 163 

    0xe6f59b47,// 190 PAY 164 

    0x9f0ca412,// 191 PAY 165 

    0x58685b4e,// 192 PAY 166 

    0x46566cd4,// 193 PAY 167 

    0x342c09f6,// 194 PAY 168 

    0x17f03722,// 195 PAY 169 

    0xbcfc0000,// 196 PAY 170 

/// STA is 1 words. 

/// STA num_pkts       : 81 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdc 

    0x03dcdc51 // 197 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt83_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x80642853,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0x79977ea9,// 6 SCX   4 

    0xf1e2ae03,// 7 SCX   5 

    0xb9050b61,// 8 SCX   6 

    0xa888e3b0,// 9 SCX   7 

    0x32fd3cf7,// 10 SCX   8 

    0xc851297e,// 11 SCX   9 

    0xc939c3fd,// 12 SCX  10 

    0x1e093ebb,// 13 SCX  11 

    0xac556439,// 14 SCX  12 

    0x1c99c023,// 15 SCX  13 

    0xc4d05a51,// 16 SCX  14 

    0x8580ace4,// 17 SCX  15 

    0xbaef0004,// 18 SCX  16 

    0x5b965402,// 19 SCX  17 

    0xde70bc25,// 20 SCX  18 

    0x39eb700d,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1056 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 945 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 945 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 676 

/// BFD (ofst+len)cry  : 828 

/// BFD ofstiv         : 220 

/// BFD ofsticv        : 980 

    0x000003b1,// 22 BFD   1 

    0x02a40098,// 23 BFD   2 

    0x03d400dc,// 24 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 60 

    0x600064ff,// 25 MFM   1 

    0x6369059b,// 26 MFM   2 

    0x04ff76c2,// 27 MFM   3 

    0x437715ba,// 28 MFM   4 

    0xe691f52c,// 29 MFM   5 

    0xace808c6,// 30 MFM   6 

    0x5c54ab6d,// 31 MFM   7 

    0x7b09583e,// 32 MFM   8 

    0x27da02b0,// 33 MFM   9 

    0xa1894116,// 34 MFM  10 

    0x3fbd0879,// 35 MFM  11 

    0xd6bf8555,// 36 MFM  12 

    0xf5c10000,// 37 MFM  13 

/// BDA is 265 words. 

/// BDA size     is 1056 (0x420) 

/// BDA id       is 0x8d6d 

    0x04208d6d,// 38 BDA   1 

/// PAY Generic Data size   : 1056 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x4f6bf28c,// 39 PAY   1 

    0x54e5c017,// 40 PAY   2 

    0xbc86ac8c,// 41 PAY   3 

    0x6db3e34b,// 42 PAY   4 

    0x1f8b8b0b,// 43 PAY   5 

    0xb9944e08,// 44 PAY   6 

    0x5c140254,// 45 PAY   7 

    0x87d7dc6d,// 46 PAY   8 

    0x82734e90,// 47 PAY   9 

    0xcda1b2d0,// 48 PAY  10 

    0x0a3bef63,// 49 PAY  11 

    0xd9efa2a6,// 50 PAY  12 

    0xb7e7116d,// 51 PAY  13 

    0xfab3442b,// 52 PAY  14 

    0xa5ce6fc9,// 53 PAY  15 

    0x5f3fdfcd,// 54 PAY  16 

    0xa654ec39,// 55 PAY  17 

    0xe0f41f3a,// 56 PAY  18 

    0x044e3c29,// 57 PAY  19 

    0x5cc25e1a,// 58 PAY  20 

    0x6f0962ab,// 59 PAY  21 

    0x9cab752e,// 60 PAY  22 

    0xbb70973d,// 61 PAY  23 

    0xcfd74dd6,// 62 PAY  24 

    0xbb449320,// 63 PAY  25 

    0x23f1d905,// 64 PAY  26 

    0xa13803f5,// 65 PAY  27 

    0x1ea95a2b,// 66 PAY  28 

    0xa36fed93,// 67 PAY  29 

    0x5d542d88,// 68 PAY  30 

    0x83da026a,// 69 PAY  31 

    0x27fd083c,// 70 PAY  32 

    0xa56a32aa,// 71 PAY  33 

    0x5c32bb9c,// 72 PAY  34 

    0x173f3a08,// 73 PAY  35 

    0xd19e2d4a,// 74 PAY  36 

    0xd8b0d123,// 75 PAY  37 

    0xa5eedcee,// 76 PAY  38 

    0x9e740923,// 77 PAY  39 

    0x36631632,// 78 PAY  40 

    0xc9dddbf3,// 79 PAY  41 

    0x677bc030,// 80 PAY  42 

    0xe13f2994,// 81 PAY  43 

    0x02a188ee,// 82 PAY  44 

    0xe51612af,// 83 PAY  45 

    0xb7632e5e,// 84 PAY  46 

    0x2a4d315e,// 85 PAY  47 

    0x33da3066,// 86 PAY  48 

    0x97c81f0d,// 87 PAY  49 

    0x7e155595,// 88 PAY  50 

    0xe7880ab7,// 89 PAY  51 

    0xd6d9312d,// 90 PAY  52 

    0x17093299,// 91 PAY  53 

    0x3af2917a,// 92 PAY  54 

    0x946bfea1,// 93 PAY  55 

    0x6f84a6a7,// 94 PAY  56 

    0x6973fb7a,// 95 PAY  57 

    0xa3df6ee8,// 96 PAY  58 

    0x10b230bb,// 97 PAY  59 

    0x06b735a6,// 98 PAY  60 

    0x3287b62d,// 99 PAY  61 

    0x07cf70a8,// 100 PAY  62 

    0x56882d87,// 101 PAY  63 

    0x8ffba09a,// 102 PAY  64 

    0x9126ea3f,// 103 PAY  65 

    0x10ef6e75,// 104 PAY  66 

    0x131e15f9,// 105 PAY  67 

    0x7e845747,// 106 PAY  68 

    0xe34b0f13,// 107 PAY  69 

    0x6fc20ee2,// 108 PAY  70 

    0xf535a79c,// 109 PAY  71 

    0x0f8d8822,// 110 PAY  72 

    0x274a2f08,// 111 PAY  73 

    0x90e860a7,// 112 PAY  74 

    0x9dd23bcb,// 113 PAY  75 

    0x7e2ecfe2,// 114 PAY  76 

    0x8aef6ea9,// 115 PAY  77 

    0xfd3e00f3,// 116 PAY  78 

    0x2d64c4aa,// 117 PAY  79 

    0xb1986218,// 118 PAY  80 

    0x1e4a87d2,// 119 PAY  81 

    0x1533151b,// 120 PAY  82 

    0xd1eab7a3,// 121 PAY  83 

    0x99992885,// 122 PAY  84 

    0x8b173a1f,// 123 PAY  85 

    0x90e03134,// 124 PAY  86 

    0x4b21ac2f,// 125 PAY  87 

    0x4fd92492,// 126 PAY  88 

    0x00aee959,// 127 PAY  89 

    0xbc5b57de,// 128 PAY  90 

    0x65021a58,// 129 PAY  91 

    0x612b9ce1,// 130 PAY  92 

    0xd9526e2f,// 131 PAY  93 

    0x4934eaf4,// 132 PAY  94 

    0xf784d333,// 133 PAY  95 

    0x315e2285,// 134 PAY  96 

    0xc2ec6e28,// 135 PAY  97 

    0x5551070a,// 136 PAY  98 

    0x71e3a827,// 137 PAY  99 

    0xf2e494f5,// 138 PAY 100 

    0xc5960fcc,// 139 PAY 101 

    0x2d95f0a5,// 140 PAY 102 

    0x1fe2fdd8,// 141 PAY 103 

    0x7304bdb5,// 142 PAY 104 

    0xc46c87f6,// 143 PAY 105 

    0xc2be0acc,// 144 PAY 106 

    0x324ed126,// 145 PAY 107 

    0x869d9b29,// 146 PAY 108 

    0xa924dc56,// 147 PAY 109 

    0xf79c9271,// 148 PAY 110 

    0xc2161add,// 149 PAY 111 

    0xdb6875eb,// 150 PAY 112 

    0x60adb534,// 151 PAY 113 

    0x49c59c04,// 152 PAY 114 

    0x67fa44a7,// 153 PAY 115 

    0x9b15507b,// 154 PAY 116 

    0x8ee55fda,// 155 PAY 117 

    0x2535f865,// 156 PAY 118 

    0x20aac7cb,// 157 PAY 119 

    0x596df16d,// 158 PAY 120 

    0x4c22e5d8,// 159 PAY 121 

    0x0ce3fa30,// 160 PAY 122 

    0xb09b60ca,// 161 PAY 123 

    0xcfb2b9ed,// 162 PAY 124 

    0x5b0c5945,// 163 PAY 125 

    0xafec8c22,// 164 PAY 126 

    0x7fa65812,// 165 PAY 127 

    0x43d9c939,// 166 PAY 128 

    0x1a2a9f16,// 167 PAY 129 

    0xd9ba4777,// 168 PAY 130 

    0x27e89b45,// 169 PAY 131 

    0x6e94c58f,// 170 PAY 132 

    0xcb500881,// 171 PAY 133 

    0xa7151ba1,// 172 PAY 134 

    0xa180653f,// 173 PAY 135 

    0xbd32f4a1,// 174 PAY 136 

    0x4aff7516,// 175 PAY 137 

    0x4d7e8f1b,// 176 PAY 138 

    0xb1b336df,// 177 PAY 139 

    0x1a14e000,// 178 PAY 140 

    0x4036ba76,// 179 PAY 141 

    0x3e9e099e,// 180 PAY 142 

    0x3825dcbe,// 181 PAY 143 

    0x96f7e76d,// 182 PAY 144 

    0xb32d12b3,// 183 PAY 145 

    0x724b129c,// 184 PAY 146 

    0x6fc1fe39,// 185 PAY 147 

    0xf2f85f51,// 186 PAY 148 

    0x6aaaf13b,// 187 PAY 149 

    0xd84c7f35,// 188 PAY 150 

    0x627b5866,// 189 PAY 151 

    0xda6db5fd,// 190 PAY 152 

    0x6fdaa956,// 191 PAY 153 

    0x6d09fcd6,// 192 PAY 154 

    0x91de973c,// 193 PAY 155 

    0x62c31f61,// 194 PAY 156 

    0xbfa746c0,// 195 PAY 157 

    0x5d517778,// 196 PAY 158 

    0x0777882e,// 197 PAY 159 

    0x0e05a6e7,// 198 PAY 160 

    0x465b26a2,// 199 PAY 161 

    0xac424019,// 200 PAY 162 

    0x1eec525a,// 201 PAY 163 

    0x0f491e70,// 202 PAY 164 

    0x806509e4,// 203 PAY 165 

    0xb85ba1a3,// 204 PAY 166 

    0x5abf9bf2,// 205 PAY 167 

    0xf55ec72d,// 206 PAY 168 

    0xf3f1e51d,// 207 PAY 169 

    0xb2ff66a6,// 208 PAY 170 

    0xdff12490,// 209 PAY 171 

    0xaf93995b,// 210 PAY 172 

    0x4c64b16a,// 211 PAY 173 

    0x55cc7033,// 212 PAY 174 

    0x220f94b2,// 213 PAY 175 

    0x0f3a9112,// 214 PAY 176 

    0x9b4ab535,// 215 PAY 177 

    0x29fa772a,// 216 PAY 178 

    0xe188de3c,// 217 PAY 179 

    0x0169ab42,// 218 PAY 180 

    0x26546a92,// 219 PAY 181 

    0x248ca199,// 220 PAY 182 

    0xb95562b6,// 221 PAY 183 

    0x303e23c4,// 222 PAY 184 

    0x4fff2197,// 223 PAY 185 

    0x6026fe0d,// 224 PAY 186 

    0x13d2cbfa,// 225 PAY 187 

    0x890b4589,// 226 PAY 188 

    0x22a4b6b8,// 227 PAY 189 

    0xe7850f1e,// 228 PAY 190 

    0xe8a93684,// 229 PAY 191 

    0x2e318b5b,// 230 PAY 192 

    0xcccace3d,// 231 PAY 193 

    0x5ef9a060,// 232 PAY 194 

    0xa04176e1,// 233 PAY 195 

    0x20b61c3f,// 234 PAY 196 

    0x0882f174,// 235 PAY 197 

    0x18a854f0,// 236 PAY 198 

    0xea1efdc7,// 237 PAY 199 

    0xaf041fa7,// 238 PAY 200 

    0x33b75432,// 239 PAY 201 

    0x8beabbb1,// 240 PAY 202 

    0xb6d126d2,// 241 PAY 203 

    0x9988512c,// 242 PAY 204 

    0x1b493397,// 243 PAY 205 

    0xed1d7898,// 244 PAY 206 

    0xbc2b73e2,// 245 PAY 207 

    0xd254bab7,// 246 PAY 208 

    0x0fecc96d,// 247 PAY 209 

    0xcb28cc26,// 248 PAY 210 

    0x42a8b206,// 249 PAY 211 

    0xd6efc660,// 250 PAY 212 

    0x69eff2d3,// 251 PAY 213 

    0x575b2f64,// 252 PAY 214 

    0x78bd8f64,// 253 PAY 215 

    0x0926ff4b,// 254 PAY 216 

    0xd0de100f,// 255 PAY 217 

    0xf5300a84,// 256 PAY 218 

    0x87601744,// 257 PAY 219 

    0x126d12e6,// 258 PAY 220 

    0xd2851cc4,// 259 PAY 221 

    0x27bc9817,// 260 PAY 222 

    0x16ea8017,// 261 PAY 223 

    0x46be7527,// 262 PAY 224 

    0x1ca9c4a7,// 263 PAY 225 

    0x6a7a0c0d,// 264 PAY 226 

    0xdbb3c718,// 265 PAY 227 

    0x1eb68c0b,// 266 PAY 228 

    0x3f09a9fe,// 267 PAY 229 

    0xcbaf63ed,// 268 PAY 230 

    0x760ee7e8,// 269 PAY 231 

    0x0f305afa,// 270 PAY 232 

    0x9013fd8d,// 271 PAY 233 

    0x4732d5cc,// 272 PAY 234 

    0xcdfe0ef4,// 273 PAY 235 

    0xb4cf9445,// 274 PAY 236 

    0xb41eb56e,// 275 PAY 237 

    0xc22e4aaf,// 276 PAY 238 

    0xb15c946c,// 277 PAY 239 

    0xa8530b88,// 278 PAY 240 

    0xa8e23b3f,// 279 PAY 241 

    0xe07c6510,// 280 PAY 242 

    0x8752761c,// 281 PAY 243 

    0x05bb1029,// 282 PAY 244 

    0xae52a23c,// 283 PAY 245 

    0x79c88b27,// 284 PAY 246 

    0x4910a0b7,// 285 PAY 247 

    0x627af672,// 286 PAY 248 

    0x37b6fdf9,// 287 PAY 249 

    0x5b8fd88c,// 288 PAY 250 

    0x1fbf0d37,// 289 PAY 251 

    0x4eca03a9,// 290 PAY 252 

    0x47a92f98,// 291 PAY 253 

    0xf33f088d,// 292 PAY 254 

    0x7803ad71,// 293 PAY 255 

    0x1ca66cc2,// 294 PAY 256 

    0x3de4ad17,// 295 PAY 257 

    0xd924dc9c,// 296 PAY 258 

    0xe3d29f33,// 297 PAY 259 

    0xb461950b,// 298 PAY 260 

    0x629d6742,// 299 PAY 261 

    0xb81b9fa1,// 300 PAY 262 

    0xcc8730c3,// 301 PAY 263 

    0x966d05ad,// 302 PAY 264 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 206 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x16 

    0x03391649 // 303 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt84_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x08000011,// 3 SCX   1 

    0x8060287c,// 4 SCX   2 

    0x00005300,// 5 SCX   3 

    0x7c784d68,// 6 SCX   4 

    0xe38a76ac,// 7 SCX   5 

    0xece11010,// 8 SCX   6 

    0xbc101ef9,// 9 SCX   7 

    0xd7e5108c,// 10 SCX   8 

    0xcdbe1d5f,// 11 SCX   9 

    0x747f5c5f,// 12 SCX  10 

    0x3b1b3d44,// 13 SCX  11 

    0x748a411c,// 14 SCX  12 

    0xb7d450df,// 15 SCX  13 

    0x1bc898f9,// 16 SCX  14 

    0x42ace1b7,// 17 SCX  15 

    0xa20947f4,// 18 SCX  16 

    0xa3b0e55d,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 901 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 565 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 565 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 524 

/// BFD (ofst+len)cry  : 556 

/// BFD ofstiv         : 496 

/// BFD ofsticv        : 732 

    0x00000235,// 20 BFD   1 

    0x020c0020,// 21 BFD   2 

    0x02dc01f0,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c000f06,// 23 MFM   1 

    0x0c046a46,// 24 MFM   2 

    0xafc68996,// 25 MFM   3 

    0x2a95ecc1,// 26 MFM   4 

    0x3854449e,// 27 MFM   5 

    0xa920cc10,// 28 MFM   6 

    0x4de8d743,// 29 MFM   7 

    0x4d0f69e4,// 30 MFM   8 

    0xd145a3fb,// 31 MFM   9 

    0x88d697f2,// 32 MFM  10 

    0xcdaa99ec,// 33 MFM  11 

    0xce59f903,// 34 MFM  12 

    0xdaaa56a5,// 35 MFM  13 

    0xeb95fb70,// 36 MFM  14 

    0x60264850,// 37 MFM  15 

    0x346c8565,// 38 MFM  16 

/// BDA is 227 words. 

/// BDA size     is 901 (0x385) 

/// BDA id       is 0x8ef 

    0x038508ef,// 39 BDA   1 

/// PAY Generic Data size   : 901 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x85100d80,// 40 PAY   1 

    0x63c54be0,// 41 PAY   2 

    0xc0340fdb,// 42 PAY   3 

    0x991d9a64,// 43 PAY   4 

    0x780acfd6,// 44 PAY   5 

    0xc24f033c,// 45 PAY   6 

    0x5bcf08bc,// 46 PAY   7 

    0xc024443a,// 47 PAY   8 

    0x2f05c192,// 48 PAY   9 

    0x08b99921,// 49 PAY  10 

    0x3359bd07,// 50 PAY  11 

    0x83124194,// 51 PAY  12 

    0x4a21c7fa,// 52 PAY  13 

    0xe7b84476,// 53 PAY  14 

    0x58ac643e,// 54 PAY  15 

    0x1bfa324e,// 55 PAY  16 

    0x4124c99f,// 56 PAY  17 

    0x79747ae8,// 57 PAY  18 

    0xcc500337,// 58 PAY  19 

    0xe98d61ba,// 59 PAY  20 

    0x634cda54,// 60 PAY  21 

    0x4797bc1c,// 61 PAY  22 

    0x97ff7c5f,// 62 PAY  23 

    0xd6a38b1e,// 63 PAY  24 

    0x548b5b14,// 64 PAY  25 

    0x20b75f17,// 65 PAY  26 

    0x30ba6400,// 66 PAY  27 

    0xddd43c1e,// 67 PAY  28 

    0x387e7571,// 68 PAY  29 

    0xabb171c2,// 69 PAY  30 

    0x950bb682,// 70 PAY  31 

    0xe986c476,// 71 PAY  32 

    0xb87f8eea,// 72 PAY  33 

    0x00184067,// 73 PAY  34 

    0x40c74f95,// 74 PAY  35 

    0x48bdcf13,// 75 PAY  36 

    0x660f8a5f,// 76 PAY  37 

    0xdb28890a,// 77 PAY  38 

    0xb3a4ec21,// 78 PAY  39 

    0x6813792d,// 79 PAY  40 

    0xb5b7f189,// 80 PAY  41 

    0xdff12800,// 81 PAY  42 

    0x622642c2,// 82 PAY  43 

    0x872f2844,// 83 PAY  44 

    0x81affe59,// 84 PAY  45 

    0x0fba94a1,// 85 PAY  46 

    0x33990d43,// 86 PAY  47 

    0x97e8913e,// 87 PAY  48 

    0x51734ad3,// 88 PAY  49 

    0xfb8ab4eb,// 89 PAY  50 

    0x83bdc52a,// 90 PAY  51 

    0xd38b8483,// 91 PAY  52 

    0x4d591778,// 92 PAY  53 

    0xf8c32e54,// 93 PAY  54 

    0x10fca49d,// 94 PAY  55 

    0xbcf4392b,// 95 PAY  56 

    0x11242553,// 96 PAY  57 

    0xd300fc03,// 97 PAY  58 

    0x05a7e4fd,// 98 PAY  59 

    0x922de5b0,// 99 PAY  60 

    0x379cdc02,// 100 PAY  61 

    0x21edaf16,// 101 PAY  62 

    0x3ab895fe,// 102 PAY  63 

    0x09559159,// 103 PAY  64 

    0x49b57881,// 104 PAY  65 

    0x4b586049,// 105 PAY  66 

    0x73c0052f,// 106 PAY  67 

    0xd3bdc4d4,// 107 PAY  68 

    0xf180a643,// 108 PAY  69 

    0x849264f0,// 109 PAY  70 

    0x07795755,// 110 PAY  71 

    0x1ac0b079,// 111 PAY  72 

    0xe2b8b4f0,// 112 PAY  73 

    0x44806f06,// 113 PAY  74 

    0xb6e4ef5c,// 114 PAY  75 

    0xa4b924ed,// 115 PAY  76 

    0xc366a765,// 116 PAY  77 

    0x48c3f211,// 117 PAY  78 

    0x8ec4b88c,// 118 PAY  79 

    0x6795990d,// 119 PAY  80 

    0x6ffc4a70,// 120 PAY  81 

    0xe0c69247,// 121 PAY  82 

    0x1cd5f59d,// 122 PAY  83 

    0x1f4571b2,// 123 PAY  84 

    0x1bb82823,// 124 PAY  85 

    0xed7bac26,// 125 PAY  86 

    0xdddf8b60,// 126 PAY  87 

    0xd2afa44f,// 127 PAY  88 

    0x112fb103,// 128 PAY  89 

    0xef887df9,// 129 PAY  90 

    0xe0ca6ffc,// 130 PAY  91 

    0x6855b46a,// 131 PAY  92 

    0x6a9070b0,// 132 PAY  93 

    0xa7fc897b,// 133 PAY  94 

    0x312a179b,// 134 PAY  95 

    0x476e8d63,// 135 PAY  96 

    0x5ef5fb7e,// 136 PAY  97 

    0x005764ba,// 137 PAY  98 

    0x4f58cdb3,// 138 PAY  99 

    0x4a3965b4,// 139 PAY 100 

    0xf6900a8d,// 140 PAY 101 

    0xd6423a49,// 141 PAY 102 

    0x8e7469be,// 142 PAY 103 

    0xc7443611,// 143 PAY 104 

    0x2f4d2943,// 144 PAY 105 

    0xc8f26b56,// 145 PAY 106 

    0x58bdcd04,// 146 PAY 107 

    0xd52db8dd,// 147 PAY 108 

    0xd4f0bb7e,// 148 PAY 109 

    0xb4c14021,// 149 PAY 110 

    0xf3e11b10,// 150 PAY 111 

    0xa3de78a4,// 151 PAY 112 

    0xd2fd495d,// 152 PAY 113 

    0xe48fb4cb,// 153 PAY 114 

    0x3696e254,// 154 PAY 115 

    0xe37cf27c,// 155 PAY 116 

    0xaec10fe6,// 156 PAY 117 

    0x81a2d3b2,// 157 PAY 118 

    0x8af770c8,// 158 PAY 119 

    0xe73cb39d,// 159 PAY 120 

    0x490dfbc9,// 160 PAY 121 

    0x835f77b1,// 161 PAY 122 

    0x35105e96,// 162 PAY 123 

    0x3f40b00a,// 163 PAY 124 

    0xdfd1e824,// 164 PAY 125 

    0x110ba00e,// 165 PAY 126 

    0xbbb908c2,// 166 PAY 127 

    0xa3adb4fd,// 167 PAY 128 

    0x2a4bc648,// 168 PAY 129 

    0x7a822d15,// 169 PAY 130 

    0xd4458b6d,// 170 PAY 131 

    0xb3c82cb8,// 171 PAY 132 

    0x94026060,// 172 PAY 133 

    0xbd9b756f,// 173 PAY 134 

    0xbaf945a5,// 174 PAY 135 

    0xeba18a64,// 175 PAY 136 

    0x8422ac19,// 176 PAY 137 

    0x9d617d4d,// 177 PAY 138 

    0x4757e3ee,// 178 PAY 139 

    0xb01db8fc,// 179 PAY 140 

    0xc5bc3a0c,// 180 PAY 141 

    0xa183e3f4,// 181 PAY 142 

    0x7344fe49,// 182 PAY 143 

    0x897c0588,// 183 PAY 144 

    0xada5b8f3,// 184 PAY 145 

    0x14181eae,// 185 PAY 146 

    0xf96f9905,// 186 PAY 147 

    0x56e75513,// 187 PAY 148 

    0xaef59fcf,// 188 PAY 149 

    0x52f6d1f5,// 189 PAY 150 

    0x864032e2,// 190 PAY 151 

    0x182e8803,// 191 PAY 152 

    0xea68f07a,// 192 PAY 153 

    0x1945b9c9,// 193 PAY 154 

    0xe1d9b0c8,// 194 PAY 155 

    0xd4f6262a,// 195 PAY 156 

    0x94a0f6ec,// 196 PAY 157 

    0xb4abb6a3,// 197 PAY 158 

    0x289bb28f,// 198 PAY 159 

    0x0e14c402,// 199 PAY 160 

    0xa3ef2e26,// 200 PAY 161 

    0xc3d52946,// 201 PAY 162 

    0xe42245b0,// 202 PAY 163 

    0x4ec3fbd5,// 203 PAY 164 

    0x3d44e06b,// 204 PAY 165 

    0x12ea2e9e,// 205 PAY 166 

    0x2164aba6,// 206 PAY 167 

    0x9cebfc8a,// 207 PAY 168 

    0xbc5de34b,// 208 PAY 169 

    0x5d54c7c9,// 209 PAY 170 

    0x1eeb1d8b,// 210 PAY 171 

    0x54adb716,// 211 PAY 172 

    0x91595072,// 212 PAY 173 

    0xbb416e7c,// 213 PAY 174 

    0x4a562c2a,// 214 PAY 175 

    0xebb2d9ef,// 215 PAY 176 

    0x38d4d8eb,// 216 PAY 177 

    0x48bcd044,// 217 PAY 178 

    0x0665d844,// 218 PAY 179 

    0x79189ee0,// 219 PAY 180 

    0x1def1323,// 220 PAY 181 

    0x44ffdc79,// 221 PAY 182 

    0xade654d7,// 222 PAY 183 

    0xb9256920,// 223 PAY 184 

    0x621f25d8,// 224 PAY 185 

    0x9b8ce5fc,// 225 PAY 186 

    0x4dd25f69,// 226 PAY 187 

    0x0812de14,// 227 PAY 188 

    0xd3d3e3f2,// 228 PAY 189 

    0x821bcf82,// 229 PAY 190 

    0xe15e6e90,// 230 PAY 191 

    0x4e6fa30d,// 231 PAY 192 

    0x2991ee29,// 232 PAY 193 

    0x0e1d47c2,// 233 PAY 194 

    0x8246fccc,// 234 PAY 195 

    0x7aef5ae3,// 235 PAY 196 

    0x17b4e94d,// 236 PAY 197 

    0xd933da6e,// 237 PAY 198 

    0x4fd95c06,// 238 PAY 199 

    0xa1623311,// 239 PAY 200 

    0x75601988,// 240 PAY 201 

    0xb225ade6,// 241 PAY 202 

    0x4ee01029,// 242 PAY 203 

    0x10003ca7,// 243 PAY 204 

    0xaae10b5a,// 244 PAY 205 

    0xe26bc0a3,// 245 PAY 206 

    0xd11f6e9c,// 246 PAY 207 

    0xf91533ed,// 247 PAY 208 

    0x060d7413,// 248 PAY 209 

    0x1d3dae7b,// 249 PAY 210 

    0x294a23d8,// 250 PAY 211 

    0x76ac0404,// 251 PAY 212 

    0xc9c5f018,// 252 PAY 213 

    0xb9b78485,// 253 PAY 214 

    0xa9756d9a,// 254 PAY 215 

    0xec6cd481,// 255 PAY 216 

    0x6cbbf150,// 256 PAY 217 

    0xc848a996,// 257 PAY 218 

    0xf30ca2b7,// 258 PAY 219 

    0x1d232061,// 259 PAY 220 

    0x57654e31,// 260 PAY 221 

    0x34479af6,// 261 PAY 222 

    0x3c3b7cbb,// 262 PAY 223 

    0xcf5730c3,// 263 PAY 224 

    0xd750d82a,// 264 PAY 225 

    0x4d000000,// 265 PAY 226 

/// STA is 1 words. 

/// STA num_pkts       : 53 

/// STA pkt_idx        : 49 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb4 

    0x00c4b435 // 266 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt85_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x8065287f,// 4 SCX   2 

    0x000014c2,// 5 SCX   3 

    0xf286fac9,// 6 SCX   4 

    0x72c1f7fe,// 7 SCX   5 

    0xfe4c4405,// 8 SCX   6 

    0xe7011972,// 9 SCX   7 

    0x3322cb8b,// 10 SCX   8 

    0xcd8063d9,// 11 SCX   9 

    0x78be647e,// 12 SCX  10 

    0xf4e82fd5,// 13 SCX  11 

    0x523b4d56,// 14 SCX  12 

    0x5db2c84e,// 15 SCX  13 

    0x474cd0b2,// 16 SCX  14 

    0x72f4ab28,// 17 SCX  15 

    0x56b4277d,// 18 SCX  16 

    0x2778d9da,// 19 SCX  17 

    0x8d438263,// 20 SCX  18 

    0x4fe17b55,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 1997 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1141 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1141 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 892 

/// BFD (ofst+len)cry  : 916 

/// BFD ofstiv         : 576 

/// BFD ofsticv        : 1736 

    0x00000475,// 22 BFD   1 

    0x037c0018,// 23 BFD   2 

    0x06c80240,// 24 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c0023ad,// 25 MFM   1 

    0x32252a33,// 26 MFM   2 

    0xfa9a5be8,// 27 MFM   3 

    0xcf2a7c65,// 28 MFM   4 

    0x9442aca9,// 29 MFM   5 

    0x5fa823c8,// 30 MFM   6 

    0xe6075814,// 31 MFM   7 

    0x7672f034,// 32 MFM   8 

    0x3862eed3,// 33 MFM   9 

    0xc6e9a909,// 34 MFM  10 

    0xbe816e6e,// 35 MFM  11 

    0x19573981,// 36 MFM  12 

    0x5d829ed4,// 37 MFM  13 

    0x05a0051e,// 38 MFM  14 

    0x9d4edee6,// 39 MFM  15 

    0x460c5f1d,// 40 MFM  16 

/// BDA is 501 words. 

/// BDA size     is 1997 (0x7cd) 

/// BDA id       is 0xca9 

    0x07cd0ca9,// 41 BDA   1 

/// PAY Generic Data size   : 1997 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2c08faf8,// 42 PAY   1 

    0x39f740e4,// 43 PAY   2 

    0xc1e3d278,// 44 PAY   3 

    0xfc962da2,// 45 PAY   4 

    0x04033476,// 46 PAY   5 

    0xba39f6c4,// 47 PAY   6 

    0x1f307497,// 48 PAY   7 

    0x884574b6,// 49 PAY   8 

    0x635f18c7,// 50 PAY   9 

    0xde264c77,// 51 PAY  10 

    0x4732b862,// 52 PAY  11 

    0x3b91f0dd,// 53 PAY  12 

    0xc80312c2,// 54 PAY  13 

    0x0915cc14,// 55 PAY  14 

    0x35943c20,// 56 PAY  15 

    0x995f6c93,// 57 PAY  16 

    0x50594e51,// 58 PAY  17 

    0x4b5d8f2e,// 59 PAY  18 

    0x56fbc12d,// 60 PAY  19 

    0x944b7ebc,// 61 PAY  20 

    0x51c2d709,// 62 PAY  21 

    0xd9d95426,// 63 PAY  22 

    0xcba00c62,// 64 PAY  23 

    0x63c0e979,// 65 PAY  24 

    0x0a028882,// 66 PAY  25 

    0x59911d53,// 67 PAY  26 

    0x81217b4e,// 68 PAY  27 

    0x78c568c0,// 69 PAY  28 

    0xe96df748,// 70 PAY  29 

    0x1e6fd184,// 71 PAY  30 

    0xf5c0b2e6,// 72 PAY  31 

    0x6d967f18,// 73 PAY  32 

    0xd7edadc5,// 74 PAY  33 

    0x9a2ddec2,// 75 PAY  34 

    0xe515affa,// 76 PAY  35 

    0xe755b4eb,// 77 PAY  36 

    0x93656266,// 78 PAY  37 

    0x107336cc,// 79 PAY  38 

    0x0cc9ad16,// 80 PAY  39 

    0xff0bd07e,// 81 PAY  40 

    0x979a7b90,// 82 PAY  41 

    0x24853716,// 83 PAY  42 

    0x0362db59,// 84 PAY  43 

    0x7b3a7e30,// 85 PAY  44 

    0x8661bf6e,// 86 PAY  45 

    0x5ba02c50,// 87 PAY  46 

    0x44787274,// 88 PAY  47 

    0x2087cbf0,// 89 PAY  48 

    0xd08e9cd4,// 90 PAY  49 

    0x949251fc,// 91 PAY  50 

    0x02df3435,// 92 PAY  51 

    0xb8163cac,// 93 PAY  52 

    0x0bda4a97,// 94 PAY  53 

    0x3dcbedd2,// 95 PAY  54 

    0x00988fe3,// 96 PAY  55 

    0x770b4849,// 97 PAY  56 

    0xaf774cd3,// 98 PAY  57 

    0x2c40d3cc,// 99 PAY  58 

    0xff9a8e57,// 100 PAY  59 

    0x75f27f59,// 101 PAY  60 

    0x5015a05e,// 102 PAY  61 

    0xec399f06,// 103 PAY  62 

    0x15a33a46,// 104 PAY  63 

    0x5c9ecf67,// 105 PAY  64 

    0xc776eb66,// 106 PAY  65 

    0xcdee9cbd,// 107 PAY  66 

    0x6230f2e9,// 108 PAY  67 

    0x18b8d48a,// 109 PAY  68 

    0x57dbe6ba,// 110 PAY  69 

    0x68cbdffe,// 111 PAY  70 

    0x898c3b92,// 112 PAY  71 

    0x0360091a,// 113 PAY  72 

    0x1bceeb47,// 114 PAY  73 

    0x71ca1a0c,// 115 PAY  74 

    0x95a8a34a,// 116 PAY  75 

    0x9b9a04c6,// 117 PAY  76 

    0xf25e742a,// 118 PAY  77 

    0xba7017ee,// 119 PAY  78 

    0x22c16305,// 120 PAY  79 

    0x2ca4d41d,// 121 PAY  80 

    0xddee6527,// 122 PAY  81 

    0xba2b29ab,// 123 PAY  82 

    0x1ebc7565,// 124 PAY  83 

    0xdb094193,// 125 PAY  84 

    0x0f8012c2,// 126 PAY  85 

    0x6ddae70e,// 127 PAY  86 

    0x3e9dc1f3,// 128 PAY  87 

    0xe63acc4c,// 129 PAY  88 

    0x365c3be3,// 130 PAY  89 

    0x7a3abdaa,// 131 PAY  90 

    0x8464bfe7,// 132 PAY  91 

    0x09c0e809,// 133 PAY  92 

    0xe5307516,// 134 PAY  93 

    0xa8c84596,// 135 PAY  94 

    0x03246ea4,// 136 PAY  95 

    0xcbc7592a,// 137 PAY  96 

    0x36dc0f5c,// 138 PAY  97 

    0xe4c8b61b,// 139 PAY  98 

    0x31d91536,// 140 PAY  99 

    0xb016bbf4,// 141 PAY 100 

    0x90a5f955,// 142 PAY 101 

    0x88d4e711,// 143 PAY 102 

    0x9db17ab5,// 144 PAY 103 

    0xad449f9e,// 145 PAY 104 

    0x292e7b21,// 146 PAY 105 

    0x7486dcc0,// 147 PAY 106 

    0xe0fa86d8,// 148 PAY 107 

    0x9b72939b,// 149 PAY 108 

    0x99402dee,// 150 PAY 109 

    0x93804a5d,// 151 PAY 110 

    0xda3217e6,// 152 PAY 111 

    0x97d7c005,// 153 PAY 112 

    0xe3d6095a,// 154 PAY 113 

    0xcf884b0f,// 155 PAY 114 

    0xd0095a68,// 156 PAY 115 

    0xb528602a,// 157 PAY 116 

    0x59d290b7,// 158 PAY 117 

    0x490dcc6c,// 159 PAY 118 

    0x1eb91476,// 160 PAY 119 

    0x17f09b38,// 161 PAY 120 

    0x2a5b3e7f,// 162 PAY 121 

    0x8e342218,// 163 PAY 122 

    0xcab2b610,// 164 PAY 123 

    0x113c97cc,// 165 PAY 124 

    0x08ee2f74,// 166 PAY 125 

    0xb3b7f18b,// 167 PAY 126 

    0x64242487,// 168 PAY 127 

    0xbf23fc13,// 169 PAY 128 

    0x9d7b9bb6,// 170 PAY 129 

    0x684782d2,// 171 PAY 130 

    0xea416f87,// 172 PAY 131 

    0x3edc4314,// 173 PAY 132 

    0xa13040a7,// 174 PAY 133 

    0x372b5406,// 175 PAY 134 

    0x135757ff,// 176 PAY 135 

    0x52cbb5dc,// 177 PAY 136 

    0x83006b8f,// 178 PAY 137 

    0xe18c914c,// 179 PAY 138 

    0x13fc0b6c,// 180 PAY 139 

    0x1d401038,// 181 PAY 140 

    0xf232d9c4,// 182 PAY 141 

    0x2d251337,// 183 PAY 142 

    0xf1c7a9f1,// 184 PAY 143 

    0xb9c1fd46,// 185 PAY 144 

    0xf82ea63a,// 186 PAY 145 

    0xbe41a74c,// 187 PAY 146 

    0x007c799e,// 188 PAY 147 

    0x876ca738,// 189 PAY 148 

    0xca5862f5,// 190 PAY 149 

    0x6566ac5e,// 191 PAY 150 

    0xcb259acf,// 192 PAY 151 

    0xeeafdf22,// 193 PAY 152 

    0x3b39706d,// 194 PAY 153 

    0x23e5c72b,// 195 PAY 154 

    0xbd5edce5,// 196 PAY 155 

    0xda6488d8,// 197 PAY 156 

    0xaf8ed06d,// 198 PAY 157 

    0xfa992f35,// 199 PAY 158 

    0x6935044b,// 200 PAY 159 

    0xdcf6f4a9,// 201 PAY 160 

    0xf925f9d9,// 202 PAY 161 

    0xb6642cbe,// 203 PAY 162 

    0x1654f63f,// 204 PAY 163 

    0xdedb3b57,// 205 PAY 164 

    0x31dc8ee6,// 206 PAY 165 

    0x9e7e3505,// 207 PAY 166 

    0x23ad48a1,// 208 PAY 167 

    0x464cb102,// 209 PAY 168 

    0x4c82bd54,// 210 PAY 169 

    0x42484f9c,// 211 PAY 170 

    0xfead2285,// 212 PAY 171 

    0x11ffbd75,// 213 PAY 172 

    0x88c85ebb,// 214 PAY 173 

    0xce497c5b,// 215 PAY 174 

    0xc7649772,// 216 PAY 175 

    0x6dc01a2c,// 217 PAY 176 

    0x86dcebb5,// 218 PAY 177 

    0x941c5b30,// 219 PAY 178 

    0x7dc771bc,// 220 PAY 179 

    0x8324547b,// 221 PAY 180 

    0x318d0a90,// 222 PAY 181 

    0x662c14f7,// 223 PAY 182 

    0x769c77f8,// 224 PAY 183 

    0x11acf37d,// 225 PAY 184 

    0x5c7865cf,// 226 PAY 185 

    0xe1bf0fa5,// 227 PAY 186 

    0x0ec9ba25,// 228 PAY 187 

    0xe906f9da,// 229 PAY 188 

    0x7b8d2a24,// 230 PAY 189 

    0xfb741fe8,// 231 PAY 190 

    0xefa61b68,// 232 PAY 191 

    0x8df342b2,// 233 PAY 192 

    0x69c92aa1,// 234 PAY 193 

    0xb2f92f4e,// 235 PAY 194 

    0x4f3e3a3b,// 236 PAY 195 

    0xd67949c1,// 237 PAY 196 

    0x2a5f2927,// 238 PAY 197 

    0x16fdf7fc,// 239 PAY 198 

    0xc7e5a0c9,// 240 PAY 199 

    0xc8bcd42d,// 241 PAY 200 

    0xfab67935,// 242 PAY 201 

    0xf48c16ba,// 243 PAY 202 

    0xd988788a,// 244 PAY 203 

    0x88697738,// 245 PAY 204 

    0x96c0e8bf,// 246 PAY 205 

    0x18834df7,// 247 PAY 206 

    0xad5b163f,// 248 PAY 207 

    0xa20a9405,// 249 PAY 208 

    0xc4e3530b,// 250 PAY 209 

    0xa4815b32,// 251 PAY 210 

    0x06220567,// 252 PAY 211 

    0xc83b3e39,// 253 PAY 212 

    0xe4840966,// 254 PAY 213 

    0x7e18622e,// 255 PAY 214 

    0xddde866c,// 256 PAY 215 

    0x8e448dc9,// 257 PAY 216 

    0xfb8d51a3,// 258 PAY 217 

    0xf07b7470,// 259 PAY 218 

    0xee2e661b,// 260 PAY 219 

    0xc56bf53f,// 261 PAY 220 

    0x551aaf17,// 262 PAY 221 

    0x92327589,// 263 PAY 222 

    0xd4a59a11,// 264 PAY 223 

    0xf5bb0b0f,// 265 PAY 224 

    0x663daeb3,// 266 PAY 225 

    0x9f94b18f,// 267 PAY 226 

    0x96f99a24,// 268 PAY 227 

    0x7e9db1c6,// 269 PAY 228 

    0xfc6842b8,// 270 PAY 229 

    0xba340ac8,// 271 PAY 230 

    0x2d488251,// 272 PAY 231 

    0x370da4a3,// 273 PAY 232 

    0xbd2f6847,// 274 PAY 233 

    0x688d5a54,// 275 PAY 234 

    0x3ee28453,// 276 PAY 235 

    0xbcf2d16d,// 277 PAY 236 

    0x308cdf6e,// 278 PAY 237 

    0x95cb0436,// 279 PAY 238 

    0xa1cc0897,// 280 PAY 239 

    0x578dce5f,// 281 PAY 240 

    0x9e14e78f,// 282 PAY 241 

    0x2c046c5f,// 283 PAY 242 

    0x3d9d21db,// 284 PAY 243 

    0x484309f9,// 285 PAY 244 

    0x1c54143c,// 286 PAY 245 

    0x3242af52,// 287 PAY 246 

    0x7ed3a3e7,// 288 PAY 247 

    0x182a9e19,// 289 PAY 248 

    0x3870b9e1,// 290 PAY 249 

    0xcac12dc2,// 291 PAY 250 

    0xc8a2d2c8,// 292 PAY 251 

    0x6a8bb317,// 293 PAY 252 

    0xe792e2f7,// 294 PAY 253 

    0x762bccff,// 295 PAY 254 

    0x3cc91118,// 296 PAY 255 

    0x47578617,// 297 PAY 256 

    0x8c742c85,// 298 PAY 257 

    0x2acbf70f,// 299 PAY 258 

    0xf5f4378b,// 300 PAY 259 

    0xdd4c9b92,// 301 PAY 260 

    0xf64d9c6b,// 302 PAY 261 

    0x1f0877c4,// 303 PAY 262 

    0x17316e4e,// 304 PAY 263 

    0xbd9f60ae,// 305 PAY 264 

    0xe168efe8,// 306 PAY 265 

    0x201e18ea,// 307 PAY 266 

    0xb6be696b,// 308 PAY 267 

    0x26d1bf9b,// 309 PAY 268 

    0x56c3bfa0,// 310 PAY 269 

    0xcf302eb4,// 311 PAY 270 

    0x0e30f959,// 312 PAY 271 

    0x44220191,// 313 PAY 272 

    0x72ffcca6,// 314 PAY 273 

    0x85e8e7e4,// 315 PAY 274 

    0x26a36b52,// 316 PAY 275 

    0x9d4660d7,// 317 PAY 276 

    0x7106584a,// 318 PAY 277 

    0xb7a77bf4,// 319 PAY 278 

    0xb03aec67,// 320 PAY 279 

    0x9583e68e,// 321 PAY 280 

    0x6c761c7c,// 322 PAY 281 

    0xa721fb50,// 323 PAY 282 

    0xd482ed86,// 324 PAY 283 

    0x4095d279,// 325 PAY 284 

    0x85e1000c,// 326 PAY 285 

    0xc04a1a5c,// 327 PAY 286 

    0xcbfb6eae,// 328 PAY 287 

    0x49e54a93,// 329 PAY 288 

    0x1cee031c,// 330 PAY 289 

    0x9f632453,// 331 PAY 290 

    0xf7e9470e,// 332 PAY 291 

    0x9c020c45,// 333 PAY 292 

    0x3227fc3d,// 334 PAY 293 

    0x9e8a0fe7,// 335 PAY 294 

    0x84c83bdc,// 336 PAY 295 

    0xa176eea1,// 337 PAY 296 

    0x8af0b079,// 338 PAY 297 

    0xe068ee4e,// 339 PAY 298 

    0x274fba59,// 340 PAY 299 

    0xa93e9ee2,// 341 PAY 300 

    0x71dcb54c,// 342 PAY 301 

    0x01980e08,// 343 PAY 302 

    0x66ab7e5a,// 344 PAY 303 

    0x2174e03c,// 345 PAY 304 

    0x6f7719ae,// 346 PAY 305 

    0x51d6f47f,// 347 PAY 306 

    0x48b6d299,// 348 PAY 307 

    0xe0117d0c,// 349 PAY 308 

    0xacb1c578,// 350 PAY 309 

    0x1be9aad3,// 351 PAY 310 

    0x54d806f7,// 352 PAY 311 

    0x9b01eac1,// 353 PAY 312 

    0x02edebd4,// 354 PAY 313 

    0x3ef34c60,// 355 PAY 314 

    0x9be1fbf7,// 356 PAY 315 

    0x482b3e85,// 357 PAY 316 

    0xa61b26ad,// 358 PAY 317 

    0xf79debf2,// 359 PAY 318 

    0x39abb782,// 360 PAY 319 

    0x49043f9b,// 361 PAY 320 

    0xa0ed345d,// 362 PAY 321 

    0xc19299e8,// 363 PAY 322 

    0xda82b3d5,// 364 PAY 323 

    0xd1798287,// 365 PAY 324 

    0xae7cae37,// 366 PAY 325 

    0x4b9c1051,// 367 PAY 326 

    0x3cecf81c,// 368 PAY 327 

    0x2a46f716,// 369 PAY 328 

    0x884b2474,// 370 PAY 329 

    0xa13a5776,// 371 PAY 330 

    0x799451c1,// 372 PAY 331 

    0x5ddb1714,// 373 PAY 332 

    0xd6328035,// 374 PAY 333 

    0x40ee3941,// 375 PAY 334 

    0x18f8c0be,// 376 PAY 335 

    0x609ffd5e,// 377 PAY 336 

    0xd465c598,// 378 PAY 337 

    0x8273755b,// 379 PAY 338 

    0x437afbc1,// 380 PAY 339 

    0x94d7f7f4,// 381 PAY 340 

    0xc73104ed,// 382 PAY 341 

    0xcc60bd6b,// 383 PAY 342 

    0x3217fed0,// 384 PAY 343 

    0x6c015a9d,// 385 PAY 344 

    0x691bed09,// 386 PAY 345 

    0xd487584e,// 387 PAY 346 

    0x36ce2fb7,// 388 PAY 347 

    0x960ddaac,// 389 PAY 348 

    0x1a38e754,// 390 PAY 349 

    0x4f85cd47,// 391 PAY 350 

    0x3b7769a3,// 392 PAY 351 

    0x3c292992,// 393 PAY 352 

    0x1c596e3e,// 394 PAY 353 

    0x5d72d9bb,// 395 PAY 354 

    0xe949f9de,// 396 PAY 355 

    0x7d9238ec,// 397 PAY 356 

    0x8d20709b,// 398 PAY 357 

    0xf16ba776,// 399 PAY 358 

    0x37ee35f7,// 400 PAY 359 

    0xfce72a3f,// 401 PAY 360 

    0x62c00fe9,// 402 PAY 361 

    0xd93f44a1,// 403 PAY 362 

    0x88a0675a,// 404 PAY 363 

    0x3cb21dc2,// 405 PAY 364 

    0x348db55e,// 406 PAY 365 

    0x538f88c5,// 407 PAY 366 

    0x894437d1,// 408 PAY 367 

    0xfb553156,// 409 PAY 368 

    0xf702b54c,// 410 PAY 369 

    0x197211a8,// 411 PAY 370 

    0xedd9af4a,// 412 PAY 371 

    0xbc28328d,// 413 PAY 372 

    0xd86f9873,// 414 PAY 373 

    0x773cbc0b,// 415 PAY 374 

    0x01f161b5,// 416 PAY 375 

    0x89614a0f,// 417 PAY 376 

    0x8fa6b2ad,// 418 PAY 377 

    0x1b7f8bf2,// 419 PAY 378 

    0x87ffd5f5,// 420 PAY 379 

    0xb88715cd,// 421 PAY 380 

    0x71a43545,// 422 PAY 381 

    0xcd6e2561,// 423 PAY 382 

    0x60223309,// 424 PAY 383 

    0x48c53c8a,// 425 PAY 384 

    0xac0c211b,// 426 PAY 385 

    0x624ee381,// 427 PAY 386 

    0xc0097bc3,// 428 PAY 387 

    0x3c1d74a8,// 429 PAY 388 

    0x6f89b449,// 430 PAY 389 

    0xec0018fd,// 431 PAY 390 

    0x977a52ef,// 432 PAY 391 

    0xe3bb7cfc,// 433 PAY 392 

    0x2e56a8d4,// 434 PAY 393 

    0xef5e05f8,// 435 PAY 394 

    0xfddd61e9,// 436 PAY 395 

    0x84322ed4,// 437 PAY 396 

    0x56e1fff9,// 438 PAY 397 

    0x634f1d73,// 439 PAY 398 

    0xb6f042f8,// 440 PAY 399 

    0x9c754e20,// 441 PAY 400 

    0xa527b7e4,// 442 PAY 401 

    0x64097978,// 443 PAY 402 

    0xf27caa08,// 444 PAY 403 

    0x7fb9ceba,// 445 PAY 404 

    0x762e4eb3,// 446 PAY 405 

    0x1dd1b64a,// 447 PAY 406 

    0x3f55444b,// 448 PAY 407 

    0xdb92f00a,// 449 PAY 408 

    0x1c973711,// 450 PAY 409 

    0x52652dff,// 451 PAY 410 

    0xe03fd1c8,// 452 PAY 411 

    0x5f9ccdc3,// 453 PAY 412 

    0x24c13386,// 454 PAY 413 

    0x9fd22ac0,// 455 PAY 414 

    0xa8b84ffc,// 456 PAY 415 

    0xb02e9a3b,// 457 PAY 416 

    0x2cc0ed1f,// 458 PAY 417 

    0x666ba837,// 459 PAY 418 

    0xd234d0d9,// 460 PAY 419 

    0xbe96a59c,// 461 PAY 420 

    0x70b3a743,// 462 PAY 421 

    0xccb088ff,// 463 PAY 422 

    0x56cd3919,// 464 PAY 423 

    0xa3946e78,// 465 PAY 424 

    0x9fe74185,// 466 PAY 425 

    0xd2e8070a,// 467 PAY 426 

    0x8d95a628,// 468 PAY 427 

    0x39edc4fd,// 469 PAY 428 

    0xc2578bd0,// 470 PAY 429 

    0xa521599c,// 471 PAY 430 

    0x320f5694,// 472 PAY 431 

    0x91ffe11f,// 473 PAY 432 

    0xeaf8a0fd,// 474 PAY 433 

    0x9792a92d,// 475 PAY 434 

    0x4185a8ee,// 476 PAY 435 

    0x7e4ce430,// 477 PAY 436 

    0x282d1760,// 478 PAY 437 

    0x0feb0843,// 479 PAY 438 

    0x4d725ce4,// 480 PAY 439 

    0x66e420e8,// 481 PAY 440 

    0x09096b85,// 482 PAY 441 

    0xac0bbd21,// 483 PAY 442 

    0xc0191a3d,// 484 PAY 443 

    0x34584775,// 485 PAY 444 

    0xcf24edbb,// 486 PAY 445 

    0xba02727f,// 487 PAY 446 

    0x21889932,// 488 PAY 447 

    0x3773d834,// 489 PAY 448 

    0x227fef74,// 490 PAY 449 

    0x2d53b5c1,// 491 PAY 450 

    0x7677f90c,// 492 PAY 451 

    0xeb32b454,// 493 PAY 452 

    0xcb7777eb,// 494 PAY 453 

    0x13bccb8d,// 495 PAY 454 

    0x257e353d,// 496 PAY 455 

    0x16a20b2a,// 497 PAY 456 

    0x8efe0509,// 498 PAY 457 

    0x567af12d,// 499 PAY 458 

    0x5ddb0157,// 500 PAY 459 

    0x702a3bd3,// 501 PAY 460 

    0xe6c18379,// 502 PAY 461 

    0xc4f58f20,// 503 PAY 462 

    0x3e4abd62,// 504 PAY 463 

    0xef77c193,// 505 PAY 464 

    0x57281e7f,// 506 PAY 465 

    0x0fb91165,// 507 PAY 466 

    0x9ae8fc9c,// 508 PAY 467 

    0x431cb11e,// 509 PAY 468 

    0x91a8d1b3,// 510 PAY 469 

    0xb344ca6b,// 511 PAY 470 

    0x8d17d051,// 512 PAY 471 

    0x06272cbd,// 513 PAY 472 

    0x9eb1a991,// 514 PAY 473 

    0x46347585,// 515 PAY 474 

    0xae7c11e3,// 516 PAY 475 

    0xe99b3791,// 517 PAY 476 

    0x08b5c582,// 518 PAY 477 

    0xb0eaa131,// 519 PAY 478 

    0x4ac907ae,// 520 PAY 479 

    0x06ac7f2b,// 521 PAY 480 

    0xbd51ed4c,// 522 PAY 481 

    0x2f74715a,// 523 PAY 482 

    0x2677abf5,// 524 PAY 483 

    0x968ae67d,// 525 PAY 484 

    0x5f67caa1,// 526 PAY 485 

    0x35c25061,// 527 PAY 486 

    0xa6781d07,// 528 PAY 487 

    0xb21f6f28,// 529 PAY 488 

    0xf25a8bd0,// 530 PAY 489 

    0xbf1b2863,// 531 PAY 490 

    0xa0dcc397,// 532 PAY 491 

    0x773b16f4,// 533 PAY 492 

    0xe2beffef,// 534 PAY 493 

    0x330c9d0f,// 535 PAY 494 

    0xd2a971be,// 536 PAY 495 

    0x1a9f7b18,// 537 PAY 496 

    0x7196bd64,// 538 PAY 497 

    0x10e874a6,// 539 PAY 498 

    0x5958fbf7,// 540 PAY 499 

    0x81000000,// 541 PAY 500 

/// STA is 1 words. 

/// STA num_pkts       : 126 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5e 

    0x00d55e7e // 542 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt86_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0x8066289e,// 4 SCX   2 

    0x00000382,// 5 SCX   3 

    0x26382622,// 6 SCX   4 

    0x6b5a6271,// 7 SCX   5 

    0xaec469b4,// 8 SCX   6 

    0x1e5663fb,// 9 SCX   7 

    0xc25b1539,// 10 SCX   8 

    0x1e2e2429,// 11 SCX   9 

    0x0242650f,// 12 SCX  10 

    0xa9a5c84f,// 13 SCX  11 

    0x47630619,// 14 SCX  12 

    0x4fd94ff9,// 15 SCX  13 

    0xbc8b5793,// 16 SCX  14 

    0x2a415e32,// 17 SCX  15 

    0xa7fc30a2,// 18 SCX  16 

    0x8c60fbe5,// 19 SCX  17 

    0xe289b74a,// 20 SCX  18 

    0x9dcaee4f,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 323 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 123 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 123 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 120 

/// BFD ofstiv         : 64 

/// BFD ofsticv        : 228 

    0x0000007b,// 22 BFD   1 

    0x00580020,// 23 BFD   2 

    0x00e40040,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : a 

    0x0a001dae,// 25 MFM   1 

    0x80213e00,// 26 MFM   2 

/// BDA is 82 words. 

/// BDA size     is 323 (0x143) 

/// BDA id       is 0xf6c2 

    0x0143f6c2,// 27 BDA   1 

/// PAY Generic Data size   : 323 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xc59bbf0d,// 28 PAY   1 

    0x0225f841,// 29 PAY   2 

    0x502c9168,// 30 PAY   3 

    0xc611e4eb,// 31 PAY   4 

    0x6e942304,// 32 PAY   5 

    0x256d8bcc,// 33 PAY   6 

    0x388443b2,// 34 PAY   7 

    0x4b86da18,// 35 PAY   8 

    0xdf920289,// 36 PAY   9 

    0xe5a13042,// 37 PAY  10 

    0x95880083,// 38 PAY  11 

    0x015f8dd8,// 39 PAY  12 

    0x4a57ff18,// 40 PAY  13 

    0x7053c84c,// 41 PAY  14 

    0x1a225ddf,// 42 PAY  15 

    0x92f3575e,// 43 PAY  16 

    0x80d5506b,// 44 PAY  17 

    0xb79b498e,// 45 PAY  18 

    0x56aaf465,// 46 PAY  19 

    0x763f5164,// 47 PAY  20 

    0x3cc00cac,// 48 PAY  21 

    0xac93b60e,// 49 PAY  22 

    0xb7c20f8c,// 50 PAY  23 

    0xbf2b9f97,// 51 PAY  24 

    0xa0a1272d,// 52 PAY  25 

    0x190c716b,// 53 PAY  26 

    0x41488f93,// 54 PAY  27 

    0x3e976ca8,// 55 PAY  28 

    0x7e05f3e2,// 56 PAY  29 

    0x3820a54d,// 57 PAY  30 

    0x83f3f9b9,// 58 PAY  31 

    0x41ecebc5,// 59 PAY  32 

    0xd1a91e8c,// 60 PAY  33 

    0x3287a68a,// 61 PAY  34 

    0x1469c2a8,// 62 PAY  35 

    0x5e9fd187,// 63 PAY  36 

    0x1512760f,// 64 PAY  37 

    0xb4b5415d,// 65 PAY  38 

    0x2b4fce6c,// 66 PAY  39 

    0x94459f14,// 67 PAY  40 

    0x3d6f76a8,// 68 PAY  41 

    0x9f3a4ba3,// 69 PAY  42 

    0x485cf66e,// 70 PAY  43 

    0x7cf0c646,// 71 PAY  44 

    0xdc8dfd79,// 72 PAY  45 

    0xd453fd7d,// 73 PAY  46 

    0x0d46d79d,// 74 PAY  47 

    0x722a97eb,// 75 PAY  48 

    0xbad4ffef,// 76 PAY  49 

    0xd7009fab,// 77 PAY  50 

    0x533df91f,// 78 PAY  51 

    0xeefbde53,// 79 PAY  52 

    0x1f5c008d,// 80 PAY  53 

    0x2522f7a4,// 81 PAY  54 

    0xaa2c3f4d,// 82 PAY  55 

    0xe058b36a,// 83 PAY  56 

    0x15d0bdfe,// 84 PAY  57 

    0x1baa9cba,// 85 PAY  58 

    0x946dc64c,// 86 PAY  59 

    0xe5c24e0c,// 87 PAY  60 

    0x1ced85a9,// 88 PAY  61 

    0xead2b6cd,// 89 PAY  62 

    0x73799a5d,// 90 PAY  63 

    0x61e056ae,// 91 PAY  64 

    0xaa357f8a,// 92 PAY  65 

    0x31d7ec6a,// 93 PAY  66 

    0x8435b859,// 94 PAY  67 

    0x9bef4ef2,// 95 PAY  68 

    0x0e68677b,// 96 PAY  69 

    0x1079e7d1,// 97 PAY  70 

    0xf8958ce1,// 98 PAY  71 

    0xa764a0fe,// 99 PAY  72 

    0x32681d81,// 100 PAY  73 

    0xb6a9f3ab,// 101 PAY  74 

    0xda714def,// 102 PAY  75 

    0xc312e702,// 103 PAY  76 

    0x9aeddcda,// 104 PAY  77 

    0x25ad37dc,// 105 PAY  78 

    0xdc98a148,// 106 PAY  79 

    0x0b783d1b,// 107 PAY  80 

    0xc6123100,// 108 PAY  81 

/// STA is 1 words. 

/// STA num_pkts       : 233 

/// STA pkt_idx        : 239 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x03bc5be9 // 109 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 80 (0x50) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt87_tmpl[] = {
    0xb8010050,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 19 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : AUTH_ENC 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x08000013,// 3 SCX   1 

    0xc06628c1,// 4 SCX   2 

    0x00007482,// 5 SCX   3 

    0x150db8b7,// 6 SCX   4 

    0x374b9ba6,// 7 SCX   5 

    0x7fb51a42,// 8 SCX   6 

    0xcc87124a,// 9 SCX   7 

    0x8aaee1be,// 10 SCX   8 

    0x65b87c45,// 11 SCX   9 

    0x6705fe33,// 12 SCX  10 

    0x90247ff8,// 13 SCX  11 

    0x93621e70,// 14 SCX  12 

    0x94d10773,// 15 SCX  13 

    0xba888c29,// 16 SCX  14 

    0xca0a04ee,// 17 SCX  15 

    0x1b014072,// 18 SCX  16 

    0x316b3969,// 19 SCX  17 

    0x1ae4536a,// 20 SCX  18 

    0xde25d16d,// 21 SCX  19 

/// BFD is 3 words. 

/// BFD tot_len        : 258 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 40 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 40 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 32 

/// BFD (ofst+len)cry  : 40 

/// BFD ofstiv         : 16 

/// BFD ofsticv        : 196 

    0x00000028,// 22 BFD   1 

    0x00200008,// 23 BFD   2 

    0x00c40010,// 24 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x0700c28e,// 25 MFM   1 

    0x44700000,// 26 MFM   2 

/// BDA is 66 words. 

/// BDA size     is 258 (0x102) 

/// BDA id       is 0x316c 

    0x0102316c,// 27 BDA   1 

/// PAY Generic Data size   : 258 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xf992bb71,// 28 PAY   1 

    0xd30abd4e,// 29 PAY   2 

    0x07511a45,// 30 PAY   3 

    0xa1eafe6b,// 31 PAY   4 

    0xe178ba9c,// 32 PAY   5 

    0xcefbc0c7,// 33 PAY   6 

    0xbb8427a6,// 34 PAY   7 

    0x1327f589,// 35 PAY   8 

    0x5b5ff651,// 36 PAY   9 

    0x362da254,// 37 PAY  10 

    0xf449527b,// 38 PAY  11 

    0x96287b2b,// 39 PAY  12 

    0x74ab2ca7,// 40 PAY  13 

    0xc00938a6,// 41 PAY  14 

    0x45c18ff1,// 42 PAY  15 

    0xfd646c6c,// 43 PAY  16 

    0x8276b1d5,// 44 PAY  17 

    0x7ddb86a7,// 45 PAY  18 

    0x78992c6f,// 46 PAY  19 

    0xfe4f6ec9,// 47 PAY  20 

    0x1b2f045e,// 48 PAY  21 

    0xe6a32a56,// 49 PAY  22 

    0xfbda0ea2,// 50 PAY  23 

    0x39c51962,// 51 PAY  24 

    0x1cd48ab5,// 52 PAY  25 

    0x8366407d,// 53 PAY  26 

    0x869bcdc3,// 54 PAY  27 

    0xfee07a8b,// 55 PAY  28 

    0xdcc25534,// 56 PAY  29 

    0xf69c3851,// 57 PAY  30 

    0xb23491a0,// 58 PAY  31 

    0xcd44c768,// 59 PAY  32 

    0xff08f18b,// 60 PAY  33 

    0xc453c019,// 61 PAY  34 

    0xf04cab9e,// 62 PAY  35 

    0x7d37a884,// 63 PAY  36 

    0xf9a53e13,// 64 PAY  37 

    0x57420112,// 65 PAY  38 

    0x284ed7d0,// 66 PAY  39 

    0x8d2a964a,// 67 PAY  40 

    0xc898c630,// 68 PAY  41 

    0xb07bc2bc,// 69 PAY  42 

    0xa704cfc3,// 70 PAY  43 

    0x17fc1ce5,// 71 PAY  44 

    0xde6e036a,// 72 PAY  45 

    0x891a9ce7,// 73 PAY  46 

    0xe9ab26ed,// 74 PAY  47 

    0xeab29391,// 75 PAY  48 

    0x010c3a35,// 76 PAY  49 

    0x6939e17e,// 77 PAY  50 

    0xe84cc0b3,// 78 PAY  51 

    0xc5730547,// 79 PAY  52 

    0x3e8888d5,// 80 PAY  53 

    0xe3fc863b,// 81 PAY  54 

    0x9d0493c2,// 82 PAY  55 

    0xf1e8bebf,// 83 PAY  56 

    0x9b8954ba,// 84 PAY  57 

    0x02dd5d00,// 85 PAY  58 

    0xac59bb95,// 86 PAY  59 

    0x15547158,// 87 PAY  60 

    0x1e0dbe22,// 88 PAY  61 

    0x6bbe6d53,// 89 PAY  62 

    0x24ce6ab9,// 90 PAY  63 

    0x204ed858,// 91 PAY  64 

    0x0ede0000,// 92 PAY  65 

/// STA is 1 words. 

/// STA num_pkts       : 189 

/// STA pkt_idx        : 136 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcb 

    0x0220cbbd // 93 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des3_md5_pkt88_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES3 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 24 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x00000011,// 3 SCX   1 

    0x806028de,// 4 SCX   2 

    0x00007100,// 5 SCX   3 

    0x910ab7e3,// 6 SCX   4 

    0xa781b159,// 7 SCX   5 

    0x2764691c,// 8 SCX   6 

    0x59f0ef92,// 9 SCX   7 

    0xcbdc858c,// 10 SCX   8 

    0xaf69f3f2,// 11 SCX   9 

    0x686228d0,// 12 SCX  10 

    0xc46652c4,// 13 SCX  11 

    0xbb4a302f,// 14 SCX  12 

    0x2820e97f,// 15 SCX  13 

    0xfc1598fc,// 16 SCX  14 

    0xcf0bfb30,// 17 SCX  15 

    0xe5b5cf92,// 18 SCX  16 

    0xe2d3646c,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1983 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1516 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1516 

/// BFD lencrypto      : 816 

/// BFD ofstcrypto     : 168 

/// BFD (ofst+len)cry  : 984 

/// BFD ofstiv         : 72 

/// BFD ofsticv        : 1632 

    0x000005ec,// 20 BFD   1 

    0x00a80330,// 21 BFD   2 

    0x06600048,// 22 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 3a 

    0x3a00518c,// 23 MFM   1 

    0xe8c2c2cd,// 24 MFM   2 

    0x4f6f935c,// 25 MFM   3 

    0x88406155,// 26 MFM   4 

    0x05f9562d,// 27 MFM   5 

    0x0513eff5,// 28 MFM   6 

    0x70826ea4,// 29 MFM   7 

    0x8fa2a400,// 30 MFM   8 

/// BDA is 497 words. 

/// BDA size     is 1983 (0x7bf) 

/// BDA id       is 0x441 

    0x07bf0441,// 31 BDA   1 

/// PAY Generic Data size   : 1983 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xdb4bbc4c,// 32 PAY   1 

    0x035a6412,// 33 PAY   2 

    0x2b44f83e,// 34 PAY   3 

    0xb135c302,// 35 PAY   4 

    0x7e2249e9,// 36 PAY   5 

    0xf2df3f20,// 37 PAY   6 

    0xbe0f4a58,// 38 PAY   7 

    0x60f19455,// 39 PAY   8 

    0x8a0c66d4,// 40 PAY   9 

    0x8a0cc0b0,// 41 PAY  10 

    0xb2c9c9bd,// 42 PAY  11 

    0xec6f50fb,// 43 PAY  12 

    0xa84afffb,// 44 PAY  13 

    0x7de1c23b,// 45 PAY  14 

    0xb6da6bd7,// 46 PAY  15 

    0xe5bab197,// 47 PAY  16 

    0x80b2d08d,// 48 PAY  17 

    0x3fdeac9f,// 49 PAY  18 

    0x8aad85a2,// 50 PAY  19 

    0x36977b71,// 51 PAY  20 

    0x9f9e79de,// 52 PAY  21 

    0x39bcdee4,// 53 PAY  22 

    0x3a7e3af4,// 54 PAY  23 

    0xfd7e3238,// 55 PAY  24 

    0x76d059f6,// 56 PAY  25 

    0x42b88940,// 57 PAY  26 

    0xedb4b2cf,// 58 PAY  27 

    0xfda78aa0,// 59 PAY  28 

    0xa7882a0f,// 60 PAY  29 

    0xafc60964,// 61 PAY  30 

    0x2262a9b3,// 62 PAY  31 

    0xcfdf8061,// 63 PAY  32 

    0xae36b1f4,// 64 PAY  33 

    0xab69e80e,// 65 PAY  34 

    0xee852db2,// 66 PAY  35 

    0x6279d550,// 67 PAY  36 

    0xe4ca4f93,// 68 PAY  37 

    0x46777a9f,// 69 PAY  38 

    0x3c330961,// 70 PAY  39 

    0xd5a722fa,// 71 PAY  40 

    0xbbb03d76,// 72 PAY  41 

    0xdd7a13ea,// 73 PAY  42 

    0xc574fd3c,// 74 PAY  43 

    0xd4276132,// 75 PAY  44 

    0x6ad0ca35,// 76 PAY  45 

    0x52074e23,// 77 PAY  46 

    0x09829186,// 78 PAY  47 

    0xe88b547d,// 79 PAY  48 

    0xa6267e12,// 80 PAY  49 

    0xb4be85dc,// 81 PAY  50 

    0x628561b2,// 82 PAY  51 

    0xf9dcba1d,// 83 PAY  52 

    0x890053cd,// 84 PAY  53 

    0xa5e36088,// 85 PAY  54 

    0x0ae440fa,// 86 PAY  55 

    0xadcafaa7,// 87 PAY  56 

    0x47db23f6,// 88 PAY  57 

    0xf050b571,// 89 PAY  58 

    0x537868d0,// 90 PAY  59 

    0xbcfd7d33,// 91 PAY  60 

    0xe9335d48,// 92 PAY  61 

    0xbaf8ac72,// 93 PAY  62 

    0x5b75029f,// 94 PAY  63 

    0x1c46df93,// 95 PAY  64 

    0x5901947d,// 96 PAY  65 

    0xb3e0bce5,// 97 PAY  66 

    0x3279267f,// 98 PAY  67 

    0x25c94d8c,// 99 PAY  68 

    0x0c747f3c,// 100 PAY  69 

    0xee1e17b1,// 101 PAY  70 

    0x6dcf54b6,// 102 PAY  71 

    0xa2522c43,// 103 PAY  72 

    0xd3d8478f,// 104 PAY  73 

    0x5aaeee56,// 105 PAY  74 

    0xe701f7e5,// 106 PAY  75 

    0x5b2a5167,// 107 PAY  76 

    0x03f2dd0f,// 108 PAY  77 

    0xbdbf0a5a,// 109 PAY  78 

    0xbaf64160,// 110 PAY  79 

    0x50d0c5c7,// 111 PAY  80 

    0xfd59ac41,// 112 PAY  81 

    0xe01b0657,// 113 PAY  82 

    0xe79b35b5,// 114 PAY  83 

    0x320123b8,// 115 PAY  84 

    0xd27e6f57,// 116 PAY  85 

    0x03bfaba8,// 117 PAY  86 

    0x08e75c8e,// 118 PAY  87 

    0x9e02478b,// 119 PAY  88 

    0x453deb54,// 120 PAY  89 

    0x08c15e50,// 121 PAY  90 

    0x1a56d7f8,// 122 PAY  91 

    0xd8eda94f,// 123 PAY  92 

    0x453ce1a3,// 124 PAY  93 

    0x84a82521,// 125 PAY  94 

    0x49379774,// 126 PAY  95 

    0xd7b44212,// 127 PAY  96 

    0xec5441c5,// 128 PAY  97 

    0xba4bdadc,// 129 PAY  98 

    0xe0500dd6,// 130 PAY  99 

    0x1a333c5e,// 131 PAY 100 

    0x95463007,// 132 PAY 101 

    0x8565f4aa,// 133 PAY 102 

    0x26f50ee2,// 134 PAY 103 

    0x97eb7a62,// 135 PAY 104 

    0x093f57e2,// 136 PAY 105 

    0xfaff5346,// 137 PAY 106 

    0x7697a72b,// 138 PAY 107 

    0x5876fcf1,// 139 PAY 108 

    0x03804eb6,// 140 PAY 109 

    0x49174e8e,// 141 PAY 110 

    0x927a4ef4,// 142 PAY 111 

    0x64f4aa45,// 143 PAY 112 

    0xa3f34530,// 144 PAY 113 

    0xb2a2b841,// 145 PAY 114 

    0xf18e7691,// 146 PAY 115 

    0xfd5b069f,// 147 PAY 116 

    0xec0aa191,// 148 PAY 117 

    0x8a72ba3a,// 149 PAY 118 

    0x6c57a447,// 150 PAY 119 

    0xaee85dff,// 151 PAY 120 

    0xa808f473,// 152 PAY 121 

    0x9d84473b,// 153 PAY 122 

    0x4ddb07c8,// 154 PAY 123 

    0x2458b179,// 155 PAY 124 

    0xf7450dda,// 156 PAY 125 

    0x2693e865,// 157 PAY 126 

    0xf77b3225,// 158 PAY 127 

    0xbf1e50c9,// 159 PAY 128 

    0x2ac30de7,// 160 PAY 129 

    0x6ad5e1f3,// 161 PAY 130 

    0xdd4220ef,// 162 PAY 131 

    0xe84b28e9,// 163 PAY 132 

    0x480c8f78,// 164 PAY 133 

    0x7efc87ff,// 165 PAY 134 

    0x7bad0fd4,// 166 PAY 135 

    0x96188f8c,// 167 PAY 136 

    0xbc78126f,// 168 PAY 137 

    0xc651c8e5,// 169 PAY 138 

    0x99380a40,// 170 PAY 139 

    0xb98a41fd,// 171 PAY 140 

    0x2a104e17,// 172 PAY 141 

    0x9c57e04d,// 173 PAY 142 

    0x6ce08930,// 174 PAY 143 

    0x50e8039b,// 175 PAY 144 

    0x512085fb,// 176 PAY 145 

    0xa3163d82,// 177 PAY 146 

    0x6cccd638,// 178 PAY 147 

    0xc968f243,// 179 PAY 148 

    0xc1413e5b,// 180 PAY 149 

    0x9a65b779,// 181 PAY 150 

    0x49a2c808,// 182 PAY 151 

    0xe0582e1b,// 183 PAY 152 

    0x3e871c46,// 184 PAY 153 

    0x0546652a,// 185 PAY 154 

    0x42bc1826,// 186 PAY 155 

    0x47ced7cd,// 187 PAY 156 

    0xb2a103b2,// 188 PAY 157 

    0xac6e0f11,// 189 PAY 158 

    0xbf2f554d,// 190 PAY 159 

    0xd40e7edb,// 191 PAY 160 

    0x5ddded30,// 192 PAY 161 

    0x50fa6c8a,// 193 PAY 162 

    0x97a6ced7,// 194 PAY 163 

    0xda3f2095,// 195 PAY 164 

    0xf4395d0a,// 196 PAY 165 

    0x57a0f2be,// 197 PAY 166 

    0xb7cbaeda,// 198 PAY 167 

    0x5f2befeb,// 199 PAY 168 

    0xbdaf2751,// 200 PAY 169 

    0xe8a266e3,// 201 PAY 170 

    0x2201ee02,// 202 PAY 171 

    0xac2976fc,// 203 PAY 172 

    0x63277ca0,// 204 PAY 173 

    0x21227de7,// 205 PAY 174 

    0x9bc520ae,// 206 PAY 175 

    0xddf14914,// 207 PAY 176 

    0xe0ea9f9d,// 208 PAY 177 

    0x7ce77fb9,// 209 PAY 178 

    0xbf3cf6ec,// 210 PAY 179 

    0x605e0686,// 211 PAY 180 

    0xd651d2a4,// 212 PAY 181 

    0x46e65fb4,// 213 PAY 182 

    0x9075067d,// 214 PAY 183 

    0x37953f1a,// 215 PAY 184 

    0x7c71007b,// 216 PAY 185 

    0x73a657fe,// 217 PAY 186 

    0xb430f9d9,// 218 PAY 187 

    0xcc89595b,// 219 PAY 188 

    0x76a786a3,// 220 PAY 189 

    0xcdc5015c,// 221 PAY 190 

    0x443777ad,// 222 PAY 191 

    0xa994cd8b,// 223 PAY 192 

    0x0c8c1253,// 224 PAY 193 

    0x730066f2,// 225 PAY 194 

    0x2b89f520,// 226 PAY 195 

    0x28ff2c05,// 227 PAY 196 

    0x889f84a4,// 228 PAY 197 

    0x1220f9b2,// 229 PAY 198 

    0xd0b4d12c,// 230 PAY 199 

    0x4771884d,// 231 PAY 200 

    0x7fbafda5,// 232 PAY 201 

    0x820068c8,// 233 PAY 202 

    0xc065f87e,// 234 PAY 203 

    0x39220e04,// 235 PAY 204 

    0x6f1c43f4,// 236 PAY 205 

    0xf84800e7,// 237 PAY 206 

    0x682c6d96,// 238 PAY 207 

    0xc2d4cf73,// 239 PAY 208 

    0x12f0a0b9,// 240 PAY 209 

    0x8403cda1,// 241 PAY 210 

    0x6008847a,// 242 PAY 211 

    0x33c5f276,// 243 PAY 212 

    0x6645c608,// 244 PAY 213 

    0x23e91b4c,// 245 PAY 214 

    0x43da12ba,// 246 PAY 215 

    0xb08c4f36,// 247 PAY 216 

    0x3e1ca6cd,// 248 PAY 217 

    0x30d57e1d,// 249 PAY 218 

    0xe271f33b,// 250 PAY 219 

    0xb77d2d7a,// 251 PAY 220 

    0x693db0d1,// 252 PAY 221 

    0xc2d1220e,// 253 PAY 222 

    0x0c09f10b,// 254 PAY 223 

    0x1d5f7c19,// 255 PAY 224 

    0xa317eba1,// 256 PAY 225 

    0x1dac4cdd,// 257 PAY 226 

    0x49cc607c,// 258 PAY 227 

    0x32a95ae2,// 259 PAY 228 

    0x2046a609,// 260 PAY 229 

    0x16bf9204,// 261 PAY 230 

    0x8c4d404a,// 262 PAY 231 

    0x81802fef,// 263 PAY 232 

    0xb28f70a0,// 264 PAY 233 

    0x88eb7406,// 265 PAY 234 

    0x7a8abaac,// 266 PAY 235 

    0xddec80cc,// 267 PAY 236 

    0xf85931c8,// 268 PAY 237 

    0xebc46fb6,// 269 PAY 238 

    0xdf18bf09,// 270 PAY 239 

    0x98e51192,// 271 PAY 240 

    0x5af5cac0,// 272 PAY 241 

    0x9a463754,// 273 PAY 242 

    0xd5e1c3e6,// 274 PAY 243 

    0x0c1e8e2c,// 275 PAY 244 

    0x49f7c100,// 276 PAY 245 

    0x32a40f7a,// 277 PAY 246 

    0x1c74eb5a,// 278 PAY 247 

    0x62f273d8,// 279 PAY 248 

    0x37fa9063,// 280 PAY 249 

    0xed9f424a,// 281 PAY 250 

    0xf5a970fe,// 282 PAY 251 

    0x5f165cc4,// 283 PAY 252 

    0xe16a270c,// 284 PAY 253 

    0x0b3c2733,// 285 PAY 254 

    0xd5745bb8,// 286 PAY 255 

    0x0ee00a28,// 287 PAY 256 

    0x06733a55,// 288 PAY 257 

    0x428b7432,// 289 PAY 258 

    0x74d23e01,// 290 PAY 259 

    0x2be56125,// 291 PAY 260 

    0x8a400792,// 292 PAY 261 

    0x028ae596,// 293 PAY 262 

    0xb20875b3,// 294 PAY 263 

    0xc00bf066,// 295 PAY 264 

    0x21477532,// 296 PAY 265 

    0x62261918,// 297 PAY 266 

    0xd33b9a9f,// 298 PAY 267 

    0xd0d3ab74,// 299 PAY 268 

    0xb1d22169,// 300 PAY 269 

    0x13dec11e,// 301 PAY 270 

    0x39318545,// 302 PAY 271 

    0xe6e4505b,// 303 PAY 272 

    0x941ff45e,// 304 PAY 273 

    0x66063f3a,// 305 PAY 274 

    0x150466df,// 306 PAY 275 

    0x181ce2cd,// 307 PAY 276 

    0x4a52a3a8,// 308 PAY 277 

    0x9c7f3a54,// 309 PAY 278 

    0xe52031d9,// 310 PAY 279 

    0xd5d053b7,// 311 PAY 280 

    0xfa09ad09,// 312 PAY 281 

    0x22ccfadc,// 313 PAY 282 

    0xda0417bf,// 314 PAY 283 

    0x791e92a1,// 315 PAY 284 

    0xf21c84b9,// 316 PAY 285 

    0x47343679,// 317 PAY 286 

    0xdc2991b8,// 318 PAY 287 

    0x98003b30,// 319 PAY 288 

    0x60f6bc5b,// 320 PAY 289 

    0x08c3a8b5,// 321 PAY 290 

    0x58926b5d,// 322 PAY 291 

    0xf41cacb8,// 323 PAY 292 

    0x72b746bd,// 324 PAY 293 

    0xd9a0e195,// 325 PAY 294 

    0x0c6769e9,// 326 PAY 295 

    0x9743a9c5,// 327 PAY 296 

    0x5ce5e368,// 328 PAY 297 

    0x81c83c23,// 329 PAY 298 

    0x8558720b,// 330 PAY 299 

    0xde035db5,// 331 PAY 300 

    0x578c71dc,// 332 PAY 301 

    0x0bbb207f,// 333 PAY 302 

    0x971f810c,// 334 PAY 303 

    0x51b19796,// 335 PAY 304 

    0x3451cf20,// 336 PAY 305 

    0xe181a70f,// 337 PAY 306 

    0xf79503ad,// 338 PAY 307 

    0xb3747ef8,// 339 PAY 308 

    0x40bb9587,// 340 PAY 309 

    0x72c92e6e,// 341 PAY 310 

    0xc2a4e70a,// 342 PAY 311 

    0xe75805b1,// 343 PAY 312 

    0x07366d59,// 344 PAY 313 

    0xd1364d5c,// 345 PAY 314 

    0xc948b566,// 346 PAY 315 

    0xaba2c65c,// 347 PAY 316 

    0x9b22ceb0,// 348 PAY 317 

    0x96122060,// 349 PAY 318 

    0x0395e378,// 350 PAY 319 

    0x70cce60e,// 351 PAY 320 

    0xb4817395,// 352 PAY 321 

    0xb4c3760b,// 353 PAY 322 

    0xe11f99cc,// 354 PAY 323 

    0xd6467866,// 355 PAY 324 

    0x72975ebf,// 356 PAY 325 

    0x21322092,// 357 PAY 326 

    0xbbea0325,// 358 PAY 327 

    0x167ed5df,// 359 PAY 328 

    0xd0ad3359,// 360 PAY 329 

    0xd6a5bf45,// 361 PAY 330 

    0x33a8421b,// 362 PAY 331 

    0x006dccbd,// 363 PAY 332 

    0x459835f2,// 364 PAY 333 

    0x67ca43db,// 365 PAY 334 

    0xa36cba42,// 366 PAY 335 

    0x723184f1,// 367 PAY 336 

    0xa482902c,// 368 PAY 337 

    0x1b2b20d1,// 369 PAY 338 

    0x8691c5de,// 370 PAY 339 

    0xce49e9c3,// 371 PAY 340 

    0x42268132,// 372 PAY 341 

    0x783261be,// 373 PAY 342 

    0xa3277dde,// 374 PAY 343 

    0xb6b2c76f,// 375 PAY 344 

    0x4c5e5568,// 376 PAY 345 

    0x951e0a48,// 377 PAY 346 

    0x39559662,// 378 PAY 347 

    0xaed2ddd3,// 379 PAY 348 

    0x78e3fa26,// 380 PAY 349 

    0x2bf77fa6,// 381 PAY 350 

    0xa941e93a,// 382 PAY 351 

    0xc3fad5ba,// 383 PAY 352 

    0xb35004a6,// 384 PAY 353 

    0x2102bb5e,// 385 PAY 354 

    0xd8556deb,// 386 PAY 355 

    0x6e7c3ef5,// 387 PAY 356 

    0x0246f9dd,// 388 PAY 357 

    0x6201407d,// 389 PAY 358 

    0xa0abf3ff,// 390 PAY 359 

    0xae296958,// 391 PAY 360 

    0xf5277b33,// 392 PAY 361 

    0xdf8f7de9,// 393 PAY 362 

    0x30ddfa26,// 394 PAY 363 

    0x9134daaa,// 395 PAY 364 

    0x33fda7f6,// 396 PAY 365 

    0x62d65833,// 397 PAY 366 

    0xc2bc7eea,// 398 PAY 367 

    0xc37dadf8,// 399 PAY 368 

    0x32b3958b,// 400 PAY 369 

    0x5bd124cc,// 401 PAY 370 

    0x40202be2,// 402 PAY 371 

    0x871ca3b1,// 403 PAY 372 

    0x52e10f42,// 404 PAY 373 

    0x532ae8f9,// 405 PAY 374 

    0x5d94e2c3,// 406 PAY 375 

    0xcbce1a58,// 407 PAY 376 

    0x581f66b7,// 408 PAY 377 

    0x0a78793d,// 409 PAY 378 

    0x2e96d97e,// 410 PAY 379 

    0x28ba7b18,// 411 PAY 380 

    0xc0bd634c,// 412 PAY 381 

    0xe04a2b40,// 413 PAY 382 

    0xd72aac08,// 414 PAY 383 

    0xdf59188c,// 415 PAY 384 

    0x0f193466,// 416 PAY 385 

    0x2558bf65,// 417 PAY 386 

    0xb235b584,// 418 PAY 387 

    0xa9d25c1a,// 419 PAY 388 

    0x338fec95,// 420 PAY 389 

    0x8d513bfc,// 421 PAY 390 

    0xe8cb4bc9,// 422 PAY 391 

    0xb5345f33,// 423 PAY 392 

    0x9aa018fd,// 424 PAY 393 

    0xcbb903aa,// 425 PAY 394 

    0x28bf8045,// 426 PAY 395 

    0xee8a344f,// 427 PAY 396 

    0x53e596b2,// 428 PAY 397 

    0x1a90ef55,// 429 PAY 398 

    0x084eb40a,// 430 PAY 399 

    0xe26da42f,// 431 PAY 400 

    0x726b9135,// 432 PAY 401 

    0x557df7f9,// 433 PAY 402 

    0xae74a4dd,// 434 PAY 403 

    0x2c547c38,// 435 PAY 404 

    0x907a554b,// 436 PAY 405 

    0x9a9574de,// 437 PAY 406 

    0x714c6744,// 438 PAY 407 

    0xf8447635,// 439 PAY 408 

    0x065121e7,// 440 PAY 409 

    0x74ed8e94,// 441 PAY 410 

    0x2014fb0b,// 442 PAY 411 

    0x7acd71f9,// 443 PAY 412 

    0x4ab88662,// 444 PAY 413 

    0x31b826cf,// 445 PAY 414 

    0x93237164,// 446 PAY 415 

    0xd5cc49bf,// 447 PAY 416 

    0x10a5c0ec,// 448 PAY 417 

    0x07323f93,// 449 PAY 418 

    0xeab13545,// 450 PAY 419 

    0x02d90285,// 451 PAY 420 

    0x38e8dbb3,// 452 PAY 421 

    0x44688343,// 453 PAY 422 

    0x6fbb2117,// 454 PAY 423 

    0xf983960e,// 455 PAY 424 

    0xc66fb6cf,// 456 PAY 425 

    0x41a431a2,// 457 PAY 426 

    0x5c527e83,// 458 PAY 427 

    0xffd6f94d,// 459 PAY 428 

    0x607e4a59,// 460 PAY 429 

    0x73d369b1,// 461 PAY 430 

    0xb3be0c3d,// 462 PAY 431 

    0x70dfde56,// 463 PAY 432 

    0x529b3b06,// 464 PAY 433 

    0x17606de1,// 465 PAY 434 

    0x3b7f4b90,// 466 PAY 435 

    0x0b8bdf45,// 467 PAY 436 

    0x2656bc66,// 468 PAY 437 

    0x65ec4d3f,// 469 PAY 438 

    0x1c6020e6,// 470 PAY 439 

    0x0091151d,// 471 PAY 440 

    0x0ad7afb1,// 472 PAY 441 

    0x5817367c,// 473 PAY 442 

    0x4c7cd746,// 474 PAY 443 

    0xd0f9bc1e,// 475 PAY 444 

    0x292d8e96,// 476 PAY 445 

    0x9492dc16,// 477 PAY 446 

    0xddd3263e,// 478 PAY 447 

    0x63503b3b,// 479 PAY 448 

    0xbceb53c9,// 480 PAY 449 

    0xa07e6ae9,// 481 PAY 450 

    0x70499c8b,// 482 PAY 451 
