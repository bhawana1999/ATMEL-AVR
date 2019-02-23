#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/interrupt.h>
#include<avr/lcd.h>
#include<avr/keypad.h>
unsigned int count=0;

void main()
{
DDRA=0;
//PORTA|=(1<<0);

TCCR0|=((1<<WGM01)|(1<<WGM00)|(1<<COM01)|(1<<CS01));
DDRB|=(1<<3);

while(1)
{

if((PINA&0b00000001)==0b00000001)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=245.952;

		     _delay_ms(250);
			 OCR0=0;
			 dis_cmd(0x8f);
			 dis_data('1');


          }

          else if((PINA&0b00000010)==0b00000010)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=190.700;
			 _delay_ms(250);
			 OCR0=0;
			// _delay_ms(1000);
			 dis_cmd(0x8f);
			 dis_data('2');

                                                                                                                        
          }

		 else if((PINA&0b00000100)==0b00000100)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=133.132;
			 _delay_ms(250);
			 OCR0=0;
			// _delay_ms(1000);
			 dis_cmd(0x8f);
			 dis_data('3');


          }

		  else if((PINA&0b00001000)==0b00001000)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=50.96;
			 _delay_ms(250);
			 OCR0=0;
			// _delay_ms(1000);
			 dis_cmd(0x8f);
			 dis_data('3');



          }

 }         

}
/*
OCR0=125;
_delay_ms(1000);
OCR0=150;
_delay_ms(1000);
*/
  
  
