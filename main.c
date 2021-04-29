#include "lib.h"
int main(void)
{
   Button_setup();
   LED_setup;
   InitADC();
   uint16_t temp,i;
   pwmSet();
while(1)
{
    if(Heater_ON && PersonSeated)
    {
        LED_ON;
       InitUSART(103);
        temp=ReadADC(0);
        if(temp<=200)
        {
            PWM_TempValue=51;
            char temp_value[33] = "Temperature value=20 deg Celsius";
            for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);

        }
        else if(temp<=500 && temp>=210)
        {
            PWM_TempValue=102;
            char temp_value[33] = "Temperature value=25 deg Celsius";
            for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);
        }
        else if(temp<=700 && temp>=510)
        {
            PWM_TempValue=179;
           char temp_value[33] ="Temperature value=29 deg Celsius";
            for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);
        }
        else if(temp<=1024 && temp>=710)
        {
            PWM_TempValue=242;
            char temp_value[33] = "Temperature value=33 deg Celsius";
           for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);
        }

    }
    else
    {
        LED_OFF;
        _delay_ms(200);
    }

}

    return 0;
}

