#include "library.h"
int main(void)
{
   Button_setup();
   LED_setup;
   InitADC();
   uint16_t temp;
   pwmSet();
while(1)
{
    if(Heater_ON && PersonSeated)
    {
        LED_ON;
       InitUSART(103);
        temp=ReadADC(0);
        pwm_out(temp);
       USARTDisplay(temp);

    }
    else
    {
        LED_OFF;
        _delay_ms(200);
    }

}

    return 0;
}

