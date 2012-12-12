#include <msp430.h> 

//Original code for testing from
//
//http://everyonelovesleds.blogspot.co.uk/2011/05/standalone-project-basic-pov-example.html
//

void delay(unsigned int delayTime);
void main(void) {
   WDTCTL = WDTPW + WDTHOLD;    //Hold the WDT (WatchDog Timer)

   P1DIR = 0xff; //Set Port 1 (P1) to output.

   unsigned int i=250; //This is the delay value between each column (found by trial and error)

   while(1){

    P1OUT = 0x00;
    delay(i);
    P1OUT = 0x7C; //Mr GreenFace's first column.
    delay(i); //The delay
    P1OUT = 0x82;
    delay(i);
    P1OUT = 0xA9;
    delay(i);
    P1OUT = 0xA1;
    delay(i);
    P1OUT = 0xA9;
    delay(i);
    P1OUT = 0x82;
    delay(i);
    P1OUT = 0x7C; //Mr GreenFace's last column.
    delay(i);
    P1OUT = 0x00;
    delay(i);

   }

}

void delay(unsigned int delayTime){
int x;
for (x=0;x<delayTime;x++){
x=x*1;
}
}
