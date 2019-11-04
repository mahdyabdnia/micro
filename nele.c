/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 11/3/2019
Author  : 
Company : 
Comments: 


Chip type               : ATmega16A
Program type            : Application
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16a.h>
        #include <delay.h>
// Declare your global variables here

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
 DDRA.1=0x1;
 PORTA.1=0x1; 
 DDRB.1=0x0;
 DDRB.7=0x0;

while (1)
      {
      
      if(PINB.1==0){
      PORTA.1=0x0;
      
      }
      
      else if(PINB.1==1){
      
      
      if(PINB.7==0){
               PORTA.1=0x0;
      delay_ms(200) ;   
      PORTA.1=0x1;
      delay_ms(200) ;
      } 
      
      else if(PINB.7==1){
      
            PORTA.1=0x0;
      delay_ms(2000) ;   
      PORTA.1=0x1;
      delay_ms(2000) ;
      
      
      
      }
      
      
      }
      
      
      
      
      



      }
}
