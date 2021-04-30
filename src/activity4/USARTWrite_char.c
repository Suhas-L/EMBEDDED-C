#include "library.h"
void USARTWrite_char(char data){
    while (!(UCSR0A & (1<<UDRE0)));
   UDR0=data;
}

