#include "Activity_4.h"
void USARTWRITE_CHAR(char data){
    while (!(UCSR0A & (1<<UDRE0)));
   UDR0=data;
}

