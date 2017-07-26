// Includes
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_tim.h"
#include "stm32f4xx_gpio.h"

// LED
#define LED_GREEN					GPIO_Pin_13
#define LED_RED						GPIO_Pin_14
#define LED_PORT					GPIOG

// Button
#define BUTTON_PIN				GPIO_Pin_0
#define BUTTON_PORT				GPIOA

/*
* Initialize LED signalization
*/
extern void STM_LedInit(void);

/*
* Initialize USER button
*/
extern void STM_ButtonInit(void);

/*
* Turn on LED
*/
extern void STM_LedOn(uint16_t led);

/*
* Turn off LED
*/
extern void STM_LedOff(uint16_t led);

/*
* State of USER button
*/
extern uint8_t STM_ButtonPressed(void);

/*
* Initialize Timer 3, Timer 4
*/
extern void STM_TimerInit(void);
