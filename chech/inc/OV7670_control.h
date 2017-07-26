/*
*	==========================================================================
*   OV7670_control.h
*   Camera wiring:
*   3V3		-	3V		;		GND		-	GND
*   SIOC	-	PB8		;		SIOD	-	PB9
*   VSYNC -	PB7		;		HREF	-	PA4
*   PCLK	-	PA6		;		XCLK	-	PA8
*   D7		-	PE6		;		D6		-	PE5
*   D5		-	PB6		;		D4		-	PE4
*   D3		-	PC9		;		D2		-	PC8
*   D1		-	PC7		;		D0		-	PC6
*   RESET	-	/			;		PWDN	-	/
*
*	==========================================================================
*/

// Includes
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_i2c.h"
#include "stm32f4xx_dma.h"
#include "stm32f4xx_dcmi.h"
#include "lcd_ili9341.h"
#include <stdbool.h>

// SCCB write address
#define SCCB_REG_ADDR 			0x01

// OV7670 camera settings
#define OV7670_REG_NUM 			122
#define OV7670_WRITE_ADDR 	0x42

// Image settings
#define IMG_ROWS   					320
#define IMG_COLUMNS   			240

// Image buffer
extern volatile uint16_t frame_buffer[IMG_ROWS*IMG_COLUMNS];

/*
* Initialize MCO1 (XCLK)
*/
extern void MCO1_init(void);

/*
* Initialize SCCB
*/
extern void SCCB_init(void);

/*
* Initialize OV7670 camera
*/
extern bool OV7670_init(void);

/*
* Initialize DCMI bus, DMA transfer
*/
extern void DCMI_DMA_init(void);
