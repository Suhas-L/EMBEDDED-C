#include "lib.h"
void USARTDisplay (uint16_t temp)
{ uint16_t i;
  if(temp<=200)
        {
            char temp_value[33] = "Temperature value=20 deg Celsius";
            for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);

        }
        else if(temp<=500 && temp>=210)
        {
            char temp_value[33] = "Temperature value=25 deg Celsius";
            for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);
        }
        else if(temp<=700 && temp>=510)
        {
           char temp_value[33] ="Temperature value=29 deg Celsius";
            for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);
        }
        else if(temp<=1024 && temp>=710)
        {
            char temp_value[33] = "Temperature value=33 deg Celsius";
           for(i=0;i<33;i++){USARTWrite_char(temp_value[i]);}
            _delay_ms(200);
        }
}
