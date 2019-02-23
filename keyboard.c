#include<avr/io.h>
#include<util/delay.h>
#include<avr/keypad.h>
#include<avr/timer.h>
void main()

{
 timer_ctc_init();
 float C=236.952,C_=223.695,D=211.177,D_=199.356,E=188.19,F=177.653,F_=167.700,G=158.301;
 float G_=149.426,A=141.045,A_=133.132,B=125.658,C1=118;
 DDRA=0b00000000;
 DDRD=0b11111111;
 DDRB=0;

 while(1)
{
 int x = key();
 if(x==0)
 {DDRB=(1<<3);
  OCR0=C;
  _delay_ms(400);
  DDRB=0;
  
 }
 if(x==1)
 {DDRB=(1<<3);
  OCR0=C_;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==2)
 {DDRB=(1<<3);
  OCR0=D;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==3)
 {DDRB=(1<<3);
  OCR0=D_;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==4)
 {DDRB=(1<<3);
  OCR0=E;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==5)
 {DDRB=(1<<3);
  OCR0=F;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==6)
 {DDRB=(1<<3);
  OCR0=F_;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==7)
 {DDRB=(1<<3);
  OCR0=G;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==8)
 {DDRB=(1<<3);
  OCR0=G_;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==9)
 {DDRB=(1<<3);
  OCR0=A;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==10)
 {DDRB=(1<<3);
  OCR0=A_;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==11)
 {DDRB=(1<<3);
  OCR0=B;
  _delay_ms(400);
  DDRB=0;
 }
 else if(x==12)
 {DDRB=(1<<3);
  OCR0=C1;
  _delay_ms(400);
  DDRB=0;
  }
}
}
