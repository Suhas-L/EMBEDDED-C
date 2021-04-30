#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
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
#define Led DDRB|=(1<<PB0);
#define Heater !(PIND&(1<<PD1))
#define PersonSitting !(PIND&(1<<PD2))
#define ON_LED PORTB|=(1<<PB0);
#define OFF_LED PORTB&=~(1<<PB0);

/**
 * @brief Function to SetUp the Buttons
 * 
 */
void Button();

#endif/*__ACTIVITY_1_H__*/
