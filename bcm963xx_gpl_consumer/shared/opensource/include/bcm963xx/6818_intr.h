/*
    <:copyright-BRCM:2011:DUAL/GPL:standard
    
       Copyright (c) 2011 Broadcom Corporation
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

#ifndef __6818_INTR_H
#define __6818_INTR_H

#ifdef __cplusplus
    extern "C" {
#endif

#define INTERRUPT_ID_SOFTWARE_0           0
#define INTERRUPT_ID_SOFTWARE_1           1

/*=====================================================================*/
/* BCM6818 Timer Interrupt Level Assignments                          */
/*=====================================================================*/
#define MIPS_TIMER_INT                  7

/*=====================================================================*/
/* Peripheral ISR Table Offset                                              */
/*=====================================================================*/
#define INTERNAL_ISR_TABLE_OFFSET       8
#define INTERNAL_HIGH_ISR_TABLE_OFFSET  (INTERNAL_ISR_TABLE_OFFSET + 32)

/*=====================================================================*/
/* Logical Peripheral Interrupt IDs                                    */
/*=====================================================================*/

#define INTERRUPT_ID_TIMER               (INTERNAL_ISR_TABLE_OFFSET + 0)
#define INTERRUPT_ID_SPI                 (INTERNAL_ISR_TABLE_OFFSET + 1)
#define INTERRUPT_ID_UART                (INTERNAL_ISR_TABLE_OFFSET + 2)
#define INTERRUPT_ID_UART1               (INTERNAL_ISR_TABLE_OFFSET + 3)
#define INTERRUPT_ID_DG                  (INTERNAL_ISR_TABLE_OFFSET + 4)
#define INTERRUPT_ID_USBH                (INTERNAL_ISR_TABLE_OFFSET + 5)
#define INTERRUPT_ID_IPSEC               (INTERNAL_ISR_TABLE_OFFSET + 6)
#define INTERRUPT_ID_USBH20              (INTERNAL_ISR_TABLE_OFFSET + 7)
#define INTERRUPT_ID_USBS                (INTERNAL_ISR_TABLE_OFFSET + 8)
#define INTERRUPT_ID_RING_OSC            (INTERNAL_ISR_TABLE_OFFSET + 9)
#define INTERRUPT_ID_NAND_FLASH          (INTERNAL_ISR_TABLE_OFFSET + 10)
#define INTERRUPT_ID_GPON                (INTERNAL_ISR_TABLE_OFFSET + 11)
#define INTERRUPT_ID_APM                 (INTERNAL_ISR_TABLE_OFFSET + 12)
#define INTERRUPT_ID_GMAC                (INTERNAL_ISR_TABLE_OFFSET + 13)
#define INTERRUPT_ID_GPHY                (INTERNAL_ISR_TABLE_OFFSET + 14)
#define INTERRUPT_ID_PCIE_EP             (INTERNAL_ISR_TABLE_OFFSET + 15)
#define INTERRUPT_ID_PCIE_RC             (INTERNAL_ISR_TABLE_OFFSET + 16)
#define INTERRUPT_ID_USB_SOFT_SHUTDOWN   (INTERNAL_ISR_TABLE_OFFSET + 17)
#define INTERRUPT_ID_FAP_0               (INTERNAL_ISR_TABLE_OFFSET + 18)
#define INTERRUPT_ID_FAP_1               (INTERNAL_ISR_TABLE_OFFSET + 19)
#define INTERRUPT_ID_EXTERNAL_0          (INTERNAL_ISR_TABLE_OFFSET + 20)
#define INTERRUPT_ID_EXTERNAL_1          (INTERNAL_ISR_TABLE_OFFSET + 21)
#define INTERRUPT_ID_EXTERNAL_2          (INTERNAL_ISR_TABLE_OFFSET + 22)
#define INTERRUPT_ID_EXTERNAL_3          (INTERNAL_ISR_TABLE_OFFSET + 23)
#define INTERRUPT_ID_EXTERNAL_4          (INTERNAL_ISR_TABLE_OFFSET + 24)
#define INTERRUPT_ID_EXTERNAL_5          (INTERNAL_ISR_TABLE_OFFSET + 25)
#define INTERRUPT_ID_USB_CNTL_RX_DMA     (INTERNAL_ISR_TABLE_OFFSET + 26)
#define INTERRUPT_ID_USB_CNTL_TX_DMA     (INTERNAL_ISR_TABLE_OFFSET + 27)
#define INTERRUPT_ID_USB_BULK_RX_DMA     (INTERNAL_ISR_TABLE_OFFSET + 28)
#define INTERRUPT_ID_USB_BULK_TX_DMA     (INTERNAL_ISR_TABLE_OFFSET + 29)
#define INTERRUPT_ID_USB_ISO_RX_DMA      (INTERNAL_ISR_TABLE_OFFSET + 30)
#define INTERRUPT_ID_USB_ISO_TX_DMA      (INTERNAL_ISR_TABLE_OFFSET + 31)
#define INTERRUPT_ID_ENETSW_RX_DMA_0     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 0)
#define INTERRUPT_ID_ENETSW_RX_DMA_1     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 1)
#define INTERRUPT_ID_ENETSW_RX_DMA_2     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 2)
#define INTERRUPT_ID_ENETSW_RX_DMA_3     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 3)
#define INTERRUPT_ID_ENETSW_TX_DMA_0     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 4)
#define INTERRUPT_ID_ENETSW_TX_DMA_1     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 5)
#define INTERRUPT_ID_ENETSW_TX_DMA_2     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 6)
#define INTERRUPT_ID_ENETSW_TX_DMA_3     (INTERNAL_HIGH_ISR_TABLE_OFFSET + 7)
#define INTERRUPT_ID_FAP_0_AGAIN         (INTERNAL_HIGH_ISR_TABLE_OFFSET + 8)
#define INTERRUPT_ID_FAP_1_AGAIN         (INTERNAL_HIGH_ISR_TABLE_OFFSET + 9)
#define INTERRUPT_ID_EPHY_ENERGY_0       (INTERNAL_HIGH_ISR_TABLE_OFFSET + 12)
#define INTERRUPT_ID_EPHY_ENERGY_1       (INTERNAL_HIGH_ISR_TABLE_OFFSET + 13)
#define INTERRUPT_ID_GPON_DMA_0          (INTERNAL_HIGH_ISR_TABLE_OFFSET + 14)
#define INTERRUPT_ID_GPON_DMA_1          (INTERNAL_HIGH_ISR_TABLE_OFFSET + 15)
#define INTERRUPT_ID_APM_DMA_0           (INTERNAL_HIGH_ISR_TABLE_OFFSET + 16)
#define INTERRUPT_ID_APM_DMA_1           (INTERNAL_HIGH_ISR_TABLE_OFFSET + 17)
#define INTERRUPT_ID_APM_DMA_2           (INTERNAL_HIGH_ISR_TABLE_OFFSET + 18)
#define INTERRUPT_ID_APM_DMA_3           (INTERNAL_HIGH_ISR_TABLE_OFFSET + 19)
#define INTERRUPT_ID_APM_DMA_4           (INTERNAL_HIGH_ISR_TABLE_OFFSET + 20)
#define INTERRUPT_ID_APM_DMA_5           (INTERNAL_HIGH_ISR_TABLE_OFFSET + 21)
#define INTERRUPT_ID_IPSEC_DMA_0         (INTERNAL_HIGH_ISR_TABLE_OFFSET + 28)
#define INTERRUPT_ID_IPSEC_DMA_1         (INTERNAL_HIGH_ISR_TABLE_OFFSET + 29)
#define INTERRUPT_ID_I2C                 (INTERNAL_HIGH_ISR_TABLE_OFFSET + 31)

#define INTERRUPT_ID_LAST                INTERRUPT_ID_I2C

#ifdef __cplusplus
    }
#endif                    

#endif  /* __BCM6818_H */


