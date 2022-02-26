/*
 * Drivers.c
 *
 * Created: 23-Feb-22 6:27:18 PM
 * Author : lenovo
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "UTILS.h"
#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "HB_Interface.h"

int main(void)
{
    
    while (1) 
    {
		DC_MotorCW();
		_delay_ms(1500);
		DC_MotorACW();
		_delay_ms(1500);
		DC_MotorStop();
		_delay_ms(1500);
    }
}

