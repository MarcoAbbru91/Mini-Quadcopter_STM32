/*
 * GPIO.h
 *
 *  Created on: 1 mar 2026
 *      Author: marco91
 */

#ifndef DRIVERS_INC_GPIO_H_
#define DRIVERS_INC_GPIO_H_

/****************************************************************************
DEFINES
****************************************************************************/

/* Initialize GPIO peripheral.
   Required for configuring GPIO for exploiting it to drive the PWM. */

/* Define base address */
#define GPIOB_BASE_ADDRESS      (0x40020400UL)


/* GPIO Mode Register offset */
#define GPIOB_MODER_OFFSET         (0UL) /* GPIOB Mode Register address */
#define GPIOB_MODER_ADDRESS        (GPIOB_BASE_ADDRESS + GPIOB_MODER_OFFSET)
#define GPIOB_MODER                (* (volatile uint32_t *)(GPIOB_MODER_ADDRESS)) // typecast and dereference
/* GPIO Mode Register PB6 bits */
#define GPIOB_MODER_6_OFFSET  (12UL) // 2 bits

/* GPIO AFRL - Alternate Function Low Register offset */
#define GPIOB_AFRL_OFFSET         (0x20UL) /* GPIOB Alternate Function Register address */
#define GPIOB_AFRL_ADDRESS        (GPIOB_BASE_ADDRESS + GPIOB_AFRL_OFFSET)
#define GPIOB_AFRL                (* (volatile uint32_t *)(GPIOB_AFRL_ADDRESS)) // typecast and dereference
/* GPIO Alternate Function Register PB6 bits */
#define GPIOB_AFRL_6_OFFSET  (24UL) // 2 bits

/****************************************************************************
FUNCTIONS PROTOTYPES
****************************************************************************/

/* Initialize RCC peripheral */
void GPIO_Init();

#endif /* DRIVERS_INC_GPIO_H_ */
