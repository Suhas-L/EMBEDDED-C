#include "Activity_1.h"
void Button(){
    DDRD&=~(6<<PD0);
    PORTD|=(6<<PD0);
}

