/*
 * HB_Prog.c
 *
 * Created: 23-Feb-22 7:31:01 PM
 *  Author: lenovo
 */ 
#include "HB_Interface.h"

void DC_MotorCW (void)
{
	DIO_SetPinDirection(PORT_B,PIN0,OUTPUT);
	DIO_SetPinDirection(PORT_B,PIN1,OUTPUT);
	DIO_SetPinDirection(PORT_B,PIN2,OUTPUT);
	DIO_SetPinValue(PORT_B,PIN0,HIGH);
	DIO_SetPinValue(PORT_B,PIN1,HIGH);
	DIO_SetPinValue(PORT_B,PIN2,LOW);
}

void DC_MotorACW (void)
{
	DIO_SetPinDirection(PORT_B,PIN0,OUTPUT);
	DIO_SetPinDirection(PORT_B,PIN1,OUTPUT);
	DIO_SetPinDirection(PORT_B,PIN2,OUTPUT);
	DIO_SetPinValue(PORT_B,PIN0,HIGH);
	DIO_SetPinValue(PORT_B,PIN1,LOW);
	DIO_SetPinValue(PORT_B,PIN2,HIGH);
}

void DC_MotorStop(void)
{
	DIO_SetPinDirection(PORT_B,PIN0,OUTPUT);
	DIO_SetPinValue(PORT_B,PIN0,LOW);
}


