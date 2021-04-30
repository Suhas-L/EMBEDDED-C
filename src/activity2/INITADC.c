#include "Activity_2.h"
void INITADC(){
ADMUX=(1<<REFS0);
ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

