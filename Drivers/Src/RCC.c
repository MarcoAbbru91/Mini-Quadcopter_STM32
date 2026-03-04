/*
 * RCC.c
 *
 *  Created on: 5 feb 2026
 *      Author: marco91
 */
#include "RCC.h"


void RCC_Init()
{

#ifdef HSI_CLOCK
/* The HSI configuration is actually not required since the HSI clock is automatically selected after system reset */
	/* Initialize MCO1 (Microcontroller Clock Output) */
	RCC_CFGR &= ~(0x03UL << RCC_CFGR_MCO1_OFFSET); // Clear bits 21 and 22 to select HSI clock source
	/* Initialize MCO1PRE (Microcontroller Clock Output Prescaler) */
	RCC_CFGR &= ~(0x07UL << RCC_CFGR_MCO1PRE_OFFSET); // Clear bits 24, 25 and 26 to have no division done by the prescaler

#elif defined (PLL_CLOCK)
	/* Initialitze PLL Source */
	RCC_PLLCFGR &= ~(0x01UL << RCC_PLLCFGR_PLLSRC_OFFSET); // Clear bit 22 to set HSI as source
	/* Enable Main PLL */
	RCC_CR     |=  (0x01UL << RCC_CR_PLLON_OFFSET); // Sets PLL ON bit

#endif
}
