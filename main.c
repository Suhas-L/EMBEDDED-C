

#include "lib.h"

int main(void)
{
    DDRB|=(1<<PB0);
    DDRD&=~(2<<PD0);
    DDRD&=~(4<<PD0);
    PORTD|=(2<<PD0);
    PORTD|=(4<<PD0);

    while(1)
{
    if(!(PIND&(2<<PD0)) && !(PIND&(4<<PD0)))
    {PORTB|=(1<<PB0);
    _delay_ms(200);}
    else{
    PORTB&=~(1<<PB0);
    _delay_ms(200);}

}

    return 0;
}

