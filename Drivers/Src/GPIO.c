/*
 * GPIO.c
 *
 *  Created on: 1 mar 2026
 *      Author: marco91
 */

#include "GPIO.h"
#include "RCC.h"


void GPIO_Init(void)
{
	/* Enable Clock for GPIOB peripheral */
	RCC_AHB1 |= (0x01UL << RCC_AHB1_GPIOB_EN);

	/* Clear and Set port to Alternate Function mode */
	GPIOB_MODER &= ~(0x3UL << GPIOB_MODER_6_OFFSET);
	GPIOB_MODER |=  (0x2UL << GPIOB_MODER_6_OFFSET);
	/* Clear and Set Alternate Function 2 for PB6 port */
	GPIOB_AFRL &= ~(0xFUL << GPIOB_AFRL_6_OFFSET);
	GPIOB_AFRL |=  (0x2UL << GPIOB_AFRL_6_OFFSET);
}

