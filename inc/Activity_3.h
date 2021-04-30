#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
/**
 * @file activity_3.h
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
 * @brief Function to initialize the PWM
 * 
 */
void SETPWM();

/**
 * @brief Function to initialize the USART
 * 
 * @param The Baud rate Value
 */

void OUT_PWM(uint16_t );

#endif /* __Activity_3_H__ */
