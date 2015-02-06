/*
 * solder_iron.c
 *
 * Created: Do 29. Jan 14:23:00 CET 2015
 * Author: Karsten Hinz <k.hinz tu-bs.de>
 */ 

#include <util/delay.h>
#include "includes/uart.h"
#include "includes/display.h"
#include "includes/tip.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "config.h"
#include "buttons.h"

static int count = 0;
void plus(void)
{
  if (count != TEMP_MAX) {
  	count++;
    
  }
}

void minus(void)
{
  if (count != TEMP_MIN) {
    count--;
  }
}

void zero(void)
{
	count=0;
}
void one(void)
{
	count=1;
}

int main(void)
{
	uart_init(19200, one_stop_bit_e, no_parity_e);
	buttons_init(&plus, &minus, &zero, &one);

	display_init();

	sei();
	printf_P(PSTR("\r\nMicLab Soldering Iron v0.1\r\n "));

	_delay_ms(100);

	while(1)
	{
	}
}
