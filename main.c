#include "Activity_1.h"
#include "Activity_2.h"
#include "Activity_3.h"
#include "Activity_4.h"
int main(void)
{
   Button(); //Configure the Buttons.
   Led(); //Configure the LED.
   INITADC(); //Configure the ADC.
   uint16_t temp;//To store the ADC value.
   SETPWM(); //Configure the PWM Output.
   INITUSART(103); // Setup for USART protocol. 
while(1)
{
    if(Heater && PersonSitting)
    {
        ON_LED;
        temp=ReadADC(0); //reading the adjusted temp value.
        OUT_PWM(temp);  //pwm generation.
        USARTDISPLAY(temp);

    }
    else
    {
        OFF_LED;
        _delay_ms(200);
        PWM_TempValue = 0; //make pwm out zero.
    }

}

    return 0;
}

