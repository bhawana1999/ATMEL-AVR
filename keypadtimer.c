#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/keypad.h>

void main()
{

timer_ctc_init();

DDRA=0b00000000;



while(1)
{
 int f=100;
 

 if((PINA&0b00000001)==0)
 f+=5;

 if((PINA&0b00000100)==0)
 f-=5;

 if((PINA&0b00000010)==0)
 {
   OCR0=f;
   _delay_ms(2000);

  }


  }
  }
