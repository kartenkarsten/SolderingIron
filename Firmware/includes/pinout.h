#pragma once

#include "../config.h"

#if (HW_VERSION == 1)
	#define LED_DDR   DDRC
	#define LED_PORT  PORTC
	#define LED0      (1<<PC3)
	#define LED1      (1<<PC4)
	#define LED2      (1<<PC5)

	#define DISP_DDR  DDRB
	#define DISP_PORT PORTB
	#define DISP_DOT  (1<<PB0)
	#define DISP_BR   (1<<PB1)
	#define DISP_BL   (1<<PB6)
	#define DISP_UR   (1<<PB3)
	#define DISP_UL   (1<<PB4)
	#define DISP_UP   (1<<PB5)
	#define DISP_MID  (1<<PB2)
	#define DISP_BOT  (1<<PB7)

	#define SENS0     PC0 // ADC0
	#define HALL      PC1 // ADC1

	#define PWR0      PD4

	#define BUTTON_TRIGGER_TYPE ISR
	#define BUTTON_DDR DDRD
	#define BUTTON_PORT PORTD
	#define BUTTON_UP (1<<PD2) // INT0
	#define BUTTON_DN (1<<PD3) // INT1
	#define BUTTON_UP_ISR INT0_vect
	#define BUTTON_DN_ISR INT1_vect

// not used
//	#define J11       ADC7
//	#define J21       PD0 // RX
//	#define J22       PD1 // TX
//	#define J41       PD5
//	#define J42       PD6
//	#define J43       PD7
#endif
