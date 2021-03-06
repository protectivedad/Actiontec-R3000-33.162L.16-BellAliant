/*
* <:copyright-BRCM:2012:DUAL/GPL:standard
* 
*    Copyright (c) 2012 Broadcom Corporation
*    All Rights Reserved
* 
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License, version 2, as published by
* the Free Software Foundation (the "GPL").
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* 
* A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
* writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
* Boston, MA 02111-1307, USA.
* 
* :> 
*/

/***************************************************************************/
/*                                                                         */
/* Timer driver                                                            */
/*                                                                         */
/*                                                                         */
/***************************************************************************/

#include <linux/module.h>
#include <linux/irqflags.h>
#include <linux/interrupt.h>
#include <linux/irqreturn.h>
#include <linux/spinlock.h>
#include <bcm_map_part.h>
#include <bcm_intr.h>
#include <bcm_ext_timer.h>

typedef struct
{
    int allocated; /* if non-zero this timer is in use */
#if defined(CONFIG_ARM)
    unsigned int irq;
#endif
    unsigned int *timer_ctrl_reg;
    unsigned int *timer_cnt_reg;
    unsigned int callback_arg;
    ExtTimerHandler callback;
}TimerT ;

static TimerT   timers[EXT_TIMER_NUM];
static int      initialized = 0;

#if defined(CONFIG_BCM_WATCHDOG_TIMER) && !defined(INTERRUPT_ID_WDTIMER)
static ExtTimerHandler watchdog_callback = NULL;
#endif
static DEFINE_SPINLOCK(timer_spinlock);

irqreturn_t ext_timer_isr(int irq, unsigned int param)
{
    unsigned long flags;
#if !defined(CONFIG_ARM)
    uint32 int_status, i;
#endif

    spin_lock_irqsave(&timer_spinlock, flags); 

#if defined(CONFIG_ARM)
    /* param given is not right, we will obtain timer_num based on irq */
    if (unlikely(param >= EXT_TIMER_NUM))
        param = irq - INTERRUPT_ID_TIMER0;

    /* clear the interrupt */
    TIMER->TimerInts |= (TIMER0 << param);

    if (timers[param].allocated && timers[param].callback)
        timers[param].callback(timers[param].callback_arg);
#else
    /* retrieve timer int */
    int_status = TIMER->TimerInts;

    /* clear the interrupt */
    TIMER->TimerInts |= (int_status & EXT_TIMER_INT_MASK);
#if defined(CONFIG_BCM_WATCHDOG_TIMER) && !defined(INTERRUPT_ID_WDTIMER)
    TIMER->TimerInts |= (int_status & WATCHDOG);
#endif
    BcmHalInterruptEnable(INTERRUPT_ID_TIMER);

    /* get which timer produced the interrupt */
    for (i = 0; i < EXT_TIMER_NUM; i++) {
        if (int_status & (TIMER0EN << i)) {
            /* call the appropriate function */
            if (timers[i].allocated && timers[i].callback)
                timers[i].callback(timers[i].callback_arg);
        }
    }

#if defined(CONFIG_BCM_WATCHDOG_TIMER) && !defined(INTERRUPT_ID_WDTIMER)
    /* check watchdog timer interrupt */
    if ((int_status & WATCHDOG) && watchdog_callback)
    {
        watchdog_callback(0);
    }
#endif
#endif

    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return IRQ_HANDLED;
}

/***************************************************************************/
/*     Initialize external timers mechanism                                     */
/***************************************************************************/
int init_hw_timers(void)
{
    unsigned long flags;

    if(initialized)
        return -1;

    spin_lock_irqsave(&timer_spinlock, flags); 

    timers[0].allocated = 0;
    timers[1].allocated = 0;
    timers[2].allocated = 0;
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148)
    if (EXT_TIMER_NUM > 3)
        timers[3].allocated = 0;
#endif

    /* mask external timer interrupts */
    TIMER->TimerMask = 0;

    /* clear external timer interrupts */
    TIMER->TimerInts |= EXT_TIMER_INT_MASK;

    timers[0].timer_ctrl_reg = (unsigned int*)&(TIMER->TimerCtl0);
    timers[1].timer_ctrl_reg = (unsigned int*)&(TIMER->TimerCtl1);
    timers[2].timer_ctrl_reg = (unsigned int*)&(TIMER->TimerCtl2);
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148)
    if (EXT_TIMER_NUM > 3)
        timers[3].timer_ctrl_reg = (unsigned int*)&(TIMER->TimerCtl3);
#endif

    timers[0].timer_cnt_reg = (unsigned int*)&(TIMER->TimerCnt0);
    timers[1].timer_cnt_reg = (unsigned int*)&(TIMER->TimerCnt1);
    timers[2].timer_cnt_reg = (unsigned int*)&(TIMER->TimerCnt2);
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148)
    if (EXT_TIMER_NUM > 3)
        timers[3].timer_cnt_reg = (unsigned int*)&(TIMER->TimerCnt3);
#endif

#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148)
    timers[0].irq = INTERRUPT_ID_TIMER0;
    timers[1].irq = INTERRUPT_ID_TIMER1;
    timers[2].irq = INTERRUPT_ID_TIMER2;
    timers[3].irq = INTERRUPT_ID_TIMER3;
#endif

#if !defined(CONFIG_ARM)
    /* Connect and enable interrupt */
    if (BcmHalMapInterrupt((FN_HANDLER)ext_timer_isr, INTERRUPT_ID_TIMER, INTERRUPT_ID_TIMER))
    {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }
    BcmHalInterruptEnable(INTERRUPT_ID_TIMER);
#endif

    initialized = 1;

    spin_unlock_irqrestore(&timer_spinlock, flags); 

    return 0;
}
EXPORT_SYMBOL(init_hw_timers);


/*=========================================================================
                     HW TIMER INTERFACE
 ==========================================================================*/


/***************************************************************************/
/*    allocated and start new HW timer                                     */
/*    timer_period is in microseconds                                      */
/***************************************************************************/
int ext_timer_alloc(EXT_TIMER_NUMBER timer_num, unsigned int timer_period, ExtTimerHandler timer_callback, unsigned int param)
{
    unsigned long flags;
    unsigned long timer_count;

    if(timer_num >= EXT_TIMER_NUM)
    {
        return -1;
    }

    spin_lock_irqsave(&timer_spinlock, flags); 

    if(timer_num < 0)
    {
        for(timer_num = EXT_TIMER_NUM-1; timer_num >= 0 ; timer_num--)
        {
            if(!timers[timer_num].allocated)
              break;
        }
    }

    if( (timer_num < 0) || timers[timer_num].allocated )
    {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    timers[timer_num].callback = timer_callback;
    timers[timer_num].callback_arg = param;

    // FIXME! the following timer count is wrong? need people to verify
//    timer_count = ((timer_period-20))*1000/20; //rbus_freq=50MHz
    timer_count = 50 * timer_period - 1;
    if (timer_count > TIMER_CNT_MAX)
        timer_count = TIMER_CNT_MAX;
    *(timers[timer_num].timer_ctrl_reg) = timer_count;
    if (timers[timer_num].callback != NULL) {
#if defined(CONFIG_ARM)
        if (BcmHalMapInterrupt((FN_HANDLER)ext_timer_isr, timer_num, timers[timer_num].irq)) {
            spin_unlock_irqrestore(&timer_spinlock, flags);
            return -1;
        }
#endif
       TIMER->TimerMask |= (TIMER0EN << timer_num);
    }
    *(timers[timer_num].timer_ctrl_reg) |= TIMERENABLE ;
    timers[timer_num].allocated = 1;

    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return timer_num;

}
EXPORT_SYMBOL(ext_timer_alloc);

/***************************************************************************/
/*    allocated but not start a new HW timer                               */
/***************************************************************************/
int ext_timer_alloc_only(EXT_TIMER_NUMBER timer_num, ExtTimerHandler timer_callback, unsigned int param)
{
    unsigned long flags;

    if (timer_num >= EXT_TIMER_NUM)
        return -1;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if (timer_num < 0) {
        for (timer_num = EXT_TIMER_NUM-1; timer_num >= 0 ; timer_num--) {
            if (!timers[timer_num].allocated)
              break;
        }
    }

    if ((timer_num < 0) || timers[timer_num].allocated) {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    timers[timer_num].callback = timer_callback;
    timers[timer_num].callback_arg = param;

#if defined(CONFIG_ARM)
    if (timers[timer_num].callback != NULL) {
        if (BcmHalMapInterrupt((FN_HANDLER)ext_timer_isr, timer_num, timers[timer_num].irq)) {
            spin_unlock_irqrestore(&timer_spinlock, flags);
            return -1;
        }
    }
#endif

    timers[timer_num].allocated = 1;

    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return timer_num;

}
EXPORT_SYMBOL(ext_timer_alloc_only);


/***************************************************************************/
/*     Free previously allocated timer                                     */
/***************************************************************************/
int ext_timer_free(EXT_TIMER_NUMBER timer_num)
{
    unsigned long flags;

    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if ( !timers[timer_num].allocated )
    {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    timers[timer_num].callback = NULL;
#if defined(CONFIG_ARM)
    if (timers[timer_num].callback != NULL) {
        free_irq(timers[timer_num].irq, (void *)timer_num);
    }
#endif
    /* disable the timer */
    *(timers[timer_num].timer_ctrl_reg) &= ~TIMERENABLE ;
    /* mask the interrupt */
    TIMER->TimerMask &= ~(TIMER0EN << timer_num);
    /* clear interrupt */
    TIMER->TimerInts |= (TIMER0 << timer_num);
    timers[timer_num].allocated = 0;

    spin_unlock_irqrestore(&timer_spinlock, flags); 

    return 0;
}
EXPORT_SYMBOL(ext_timer_free);

/***************************************************************************/
/*     Stop the timer                                                      */ 
/***************************************************************************/
int ext_timer_stop(EXT_TIMER_NUMBER timer_num)
{
    unsigned long flags;

    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if ( !timers[timer_num].allocated )
    {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    /* disable the timer */
    *(timers[timer_num].timer_ctrl_reg) &= ~TIMERENABLE ;
    /* mask the interrupt */
    TIMER->TimerMask &= ~(TIMER0EN << timer_num);
    /* clear interrupt */
    TIMER->TimerInts |= (TIMER0 << timer_num);

    spin_unlock_irqrestore(&timer_spinlock, flags); 

    return 0;

}
EXPORT_SYMBOL(ext_timer_stop);


/***************************************************************************/
/*     Start timer                                                         */
/***************************************************************************/
int ext_timer_start(EXT_TIMER_NUMBER timer_num)
{
    unsigned long flags;

    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if ( !timers[timer_num].allocated )
    {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    /* enable the timer */
    *(timers[timer_num].timer_ctrl_reg) |= TIMERENABLE;
    /* unmask the interrupt */
    if (timers[timer_num].callback != NULL)
        TIMER->TimerMask |= (TIMER0EN << timer_num);

    spin_unlock_irqrestore(&timer_spinlock, flags); 

    return 0;


}
EXPORT_SYMBOL(ext_timer_start);

/***************************************************************************/
/*     allows to access count register of the allocated timer              */
/***************************************************************************/
int  ext_timer_read_count(EXT_TIMER_NUMBER timer_num, unsigned int* count)
{
    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;


    if (!timers[timer_num].allocated)
        return -1;

    *count = *(timers[timer_num].timer_cnt_reg) & TIMER_COUNT_MASK;

    return 0;
}
EXPORT_SYMBOL(ext_timer_read_count);

/***************************************************************************/
/*     set up the new timercount on the timer                              */ 
/***************************************************************************/
int ext_timer_set_count(EXT_TIMER_NUMBER timer_num, unsigned int count)
{
    unsigned long flags;

    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;

    if (count > TIMER_CNT_MAX)
        count = TIMER_CNT_MAX;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if (!timers[timer_num].allocated) {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    *(timers[timer_num].timer_ctrl_reg) &= ~(TIMER_COUNT_MASK);
    *(timers[timer_num].timer_ctrl_reg) |= count;

    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return 0;
}
EXPORT_SYMBOL(ext_timer_set_count);

/***************************************************************************/
/*     set up the new period on the timer                                  */ 
/***************************************************************************/
int ext_timer_set_period(EXT_TIMER_NUMBER timer_num, unsigned int timer_period)
{
    unsigned long flags, timer_count;

    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;

    timer_count = 50 * timer_period - 1;
    if (timer_count > TIMER_CNT_MAX)
        timer_count = TIMER_CNT_MAX;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if (!timers[timer_num].allocated) {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    *(timers[timer_num].timer_ctrl_reg) &= ~(TIMER_COUNT_MASK);
    *(timers[timer_num].timer_ctrl_reg) |= timer_count;

    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return 0;
}
EXPORT_SYMBOL(ext_timer_set_period);

/***************************************************************************/
/*     set the timer mode to truely periodic or not                        */
/***************************************************************************/
int ext_timer_set_mode(EXT_TIMER_NUMBER timer_num, unsigned int mode)
{
    unsigned long flags;

    if( (timer_num >= EXT_TIMER_NUM) || (timer_num < 0) )
        return -1;

    spin_lock_irqsave(&timer_spinlock, flags); 

    if (!timers[timer_num].allocated) {
        spin_unlock_irqrestore(&timer_spinlock, flags); 
        return -1;
    }

    if (mode == EXT_TIMER_MODE_PERIODIC)
        *(timers[timer_num].timer_ctrl_reg) &= ~(RSTCNTCLR);
    else if (mode == EXT_TIMER_MODE_ONESHOT)
        *(timers[timer_num].timer_ctrl_reg) |= RSTCNTCLR;

    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return 0;
}
EXPORT_SYMBOL(ext_timer_set_mode);

#if defined(CONFIG_BCM_WATCHDOG_TIMER) && !defined(INTERRUPT_ID_WDTIMER)
/***************************************************************************/
/*     set watchdog interrupt handler                                      */
/***************************************************************************/
int watchdog_callback_register(ExtTimerHandler callback)
{
    unsigned long flags;

    spin_lock_irqsave(&timer_spinlock, flags); 
    watchdog_callback = callback;
    spin_unlock_irqrestore(&timer_spinlock, flags); 
    return 0;
}
EXPORT_SYMBOL(watchdog_callback_register);
#endif
