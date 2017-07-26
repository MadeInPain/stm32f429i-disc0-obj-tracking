#ifndef LCD_FONTS_H
#define LCD_FONTS_H

// Includes
#include "stm32f4xx.h"

// Font struct
typedef struct {
	uint8_t FontWidth;
	uint8_t FontHeight;
	const uint16_t *data;
} LCD_FontDef_t;

#endif
