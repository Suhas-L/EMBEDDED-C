#include "lib.h"
uint16_t ReadADC(uint8_t CH){
ADMUX&=0xf8;
CH=CH&0x03;
ADMUX|=CH;
ADCSRA|=(1<<ADSC);
while(!(ADCSRA&(1<<ADIF)));
ADCSRA|=(1<<ADIF);
return(ADC);
}

