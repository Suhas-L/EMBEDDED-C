#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity_4.h
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
#define PWM_TempValue OCR0A

/**
 * @brief Function to intialize the Temperature sensor(ADC)
 * 
 */
void INITUSART(uint16_t );

/**
 * @brief Function to write the character
 * 
 * @param The character need to be print
 */
void USARTWRITE_CHAR(char );

/**
 * @brief Function to Display the character
 * 
 * @param The temperature ADC value
 */
void USARTDISPLAY(uint16_t );

#endif /* __ACTIVITY_4_H__ */
