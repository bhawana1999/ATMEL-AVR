#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include<avr/timer.h>

void pink()
{

PORTB=0b111111111;
   _delay_ms(100);
   
  for(int i=80; i<100; i++)
  {
  
   OCR0=i;    //blue
   OCR2=255-i;  //red
   _delay_ms(10);
}

for(int i=100; i>80; i--)
  {
  
   OCR0=i;
   OCR2=255-i;
   _delay_ms(10);
}
}





void main()

{

 DDRB=0xff;
 timer_pwm_init();
	timer2_pwm_init();
//	timer1_pwm_init();


 while(1)
 {
   pink();


	  }
	  }

