#include "library.h"
void InitUSART(uint16_t ubrr_value){
UBRR0L = ubrr_value;
UBRR0H=(ubrr_value>>8)&0x00ff;
UCSR0C=(1<<UCSZ00)|(1<<UCSZ01);
UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

