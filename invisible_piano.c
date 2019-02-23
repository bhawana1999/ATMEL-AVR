#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
void main()
{
 	timer_ctc_init();
 	int C=236.952,C_=223.695,D=211.177,D_=199.356,E=188.19,F=177.653,F_=167.700,G=158.301;
 	int G_=149.426,A=141.045,A_=133.132,B=125.658,C1=118,C_1=111.938,D1=102.140,D_1=96.393,E1=90.961,F1=86;
 	DDRA=0x00;
 	//DDRD=0x00;
	DDRB=0;
 	while(1)
 		{
  		 if((PINA&0b00000001)==0b00000001)
  		 {
		 	 //DDRB=(1<<3);
   			 OCR0=C;
  		 }
  		 else if((PINA&0b00000010)==0b00000010)
  		 {
		  DDRB=(1<<3);
   		  OCR0=D;
  		 }
  		 else if((PINA&0b00000100)==0b00000100)
  		 {
		  //DDRB=(1<<3);
   		  OCR0=E;
  		 }
  		 else if((PINA&0b11111111)==0b00001000)
  		 {
		  DDRB=(1<<3);
   		  OCR0=F;
  		 }
  		 else if((PINA&0b11111111)==0b00010000)
  		 {
		  //DDRB=(1<<3);
   		  OCR0=G;
  		 }
  		 else if((PINA&0b11111111)==0b00100000)
  		 {
		  //DDRB=(1<<3);
   		  OCR0=A;
  		 }
  		 else if((PINA&0b11111111)==0b01000000)
  		 {
		  //DDRB=(1<<3);
   		  OCR0=B;
  		 }
  		 else if((PINA&0b11111111)==0b10000000)
  		 {
		  //DDRB=(1<<3);
   		  OCR0=C1;
  		}
  /*if((PIND&0b11111111)==0b00000001)
  {DDRB=(1<<3);
   OCR0=G_;
   _delay_ms(300);
   DDRB=0;
  }
  if((PIND&0b11111111)==0b00000010)
  {DDRB=(1<<3);
   OCR0=A;
   _delay_ms(300);
   DDRB=0;
  }
  if((PIND&0b11111111)==0b00000100)
  {DDRB=(1<<3);
   OCR0=A_;
   _delay_ms(300);
   DDRB=0;
  }
  if((PIND&0b11111111)==0b00001000)
  {DDRB=(1<<3);
   OCR0=B;
   _delay_ms(300);
   DDRB=0;
  }
  if((PIND&0b11111111)==0b00010000)
  {DDRB=(1<<3);
   OCR0=C1;
   _delay_ms(300);
   DDRB=0;
  }
  if((PIND&0b11111111)==0b00100000)
  {DDRB=(1<<3);
   OCR0=C_1;
   _delay_ms(300);
   DDRB=0;
  }
  if((PIND&0b11111111)==0b01000000)
  {DDRB=(1<<3);
   OCR0=D1;
   _delay_ms(300);
   DDRB=0;
  }
  
  if((PIND&0b11111111)==0b10000000)
  {DDRB=(1<<3);
   OCR0=D_1;
   _delay_ms(300);
   DDRB=0;
  }*/
  		 else if((PINA&0b11111111)==0b00000000)
  		 {
   		  DDRB=0;
  		 }
  
 	}
  
}
