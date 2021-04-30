#include "library.h"
void Button_setup(){
    DDRD&=~(6<<PD0);
    PORTD|=(6<<PD0);
}

