#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @file activity_1.h
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

/**
 * @brief Function to intialize the Temperature sensor ie (ADC)
 * 
 */
void INITADC();

/**
 * @brief Funtion to read the Temperature Value(ADC value)
 * 
 * @return uint16_t Value of Temperature value
 */
uint16_t READADC(uint8_t );

#endif /* __ACTIVITY_2_H__ */

