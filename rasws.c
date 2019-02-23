#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/lcd.h>
void main()
{   DDRC=0xff;
 	timer_ctc_init();
	lcd_init();
 	int C=236.952,C_=223.695,D=211.177,D_=199.356,E=188.19,F=177.653,F_=167.700,G=158.301;
 	int G_=149.426,A=141.045,A_=133.132,B=125.658,C1=118,C_1=111.938,D1=102.140,D_1=96.393,E1=90.961,F1=86;
 	DDRA=0x00;
 	//PORTA=0xff;
	//DDRB=0;
 	while(1)
 		{
  		 if((PINA&0b00000001)==0b00000001)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=100;
			 dis_cmd(0x8f);
			 dis_data('1');


          }

          else if((PINA&0b00000010)==0b00000010)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=125;
			 dis_cmd(0x8f);
			 dis_data('2');

                                                                                                                        
          }

		 else if((PINA&0b00000100)==0b00000100)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=150;
			 dis_cmd(0x8f);
			 dis_data('3');


          }

		  else if((PINA&0b00001000)==0b00001000)
  		 {
		 	 //DDRB=(1<<3);
			 OCR0=175;
			 dis_cmd(0x8f);
			 dis_data('4');


          }

 }     }    
