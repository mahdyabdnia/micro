/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 11/10/2019
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

int hit=0;

void wait(int time){
int t;
for( t=0;t<time;++t){
delay_ms(1);

}
}

void ledblink(int prnum){
PORTB.1=0x1;
PORTB.0=0x1;
if(prnum==0)  {
  PORTB.0=PORTB.1^0x1;}
  
else if(prnum==1){
PORTB.1=PORTB.1^0x1;

 }  


}

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization


while (1)
      {
      // Place your code here

      }
}
