#include "lib.h"
void pwm_out(uint16_t temp){
  if(temp<=200)
        {
            PWM_TempValue=51;
        }
        else if(temp<=500 && temp>=210)
        {
            PWM_TempValue=102;
         }
        else if(temp<=700 && temp>=510)
        {
            PWM_TempValue=179;
        }
        else if(temp<=1024 && temp>=710)
        {
            PWM_TempValue=242;
         }
 }
