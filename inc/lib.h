
#ifndef __LIB_H__
#define __LIB_H__
/**
 * @file lib.h
 * @author Suhas L
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#define LED_setup DDRB|=(1<<PB0);
#define Heater_ON !(PIND&(1<<PD1))
#define PersonSeated !(PIND&(1<<PD2))
#define LED_ON PORTB|=(1<<PB0);
#define LED_OFF PORTB&=~(1<<PB0);
#define PWM_TempValue OCR0A

/**
 * @brief Function to initialize the Buttons
 * 
 */
void Button_setup();

/**
 * @brief Function to intialize the Temperature sensor(ADC)
 * 
 */
void InitADC();

/**
 * @brief Funtion to read the Temperature Value(ADC value)
 * 
 * @return uint16_t Value of Temperature value
 */
uint16_t ReadADC(uint8_t );

/**
 * @brief Function to initialize the PWM
 * 
 */
void pwmSet();

/**
 * @brief Function to initialize the USART
 * 
 * @param The Baud rate Value
 */
void InitUSART(uint16_t );

/**
 * @brief Function to write the character
 * 
 * @param The character need to be print
 */
void USARTWrite_char(char );

#endif /* __LIB_H__ */


