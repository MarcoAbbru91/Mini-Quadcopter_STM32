/*
 * ISR.c
 *
 *  Created on: 24 feb 2026
 *      Author: marco91
 */

#include "Timer.h"


void TIM4_IRQHandler(void)
{
    if(TIM4_SR & (1 << TIM4_SR_UIF_OFFSET))
    {
        TIM4_SR &= ~(0x01UL << TIM4_SR_UIF_OFFSET); // Reset the "Update Interrupt Flag" which was set due to overflow on Timer4
    }
}
