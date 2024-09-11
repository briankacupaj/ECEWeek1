#include <msp430.h>
#include "GPIO_driver.h"
#define RED_LED BIT0 //P1.0
#define GREEN_LED BIT6 //P6.6
#define BUTTON1 BIT1 //push button P4.1
#define BUTTON2 BIT3 //push button P2.3



int main(void)
{
WDTCTL = WDTPW | WDTHOLD;

PM5CTL0 &= ~LOCKLPM5;

gpioInitIn(4,BIT1); 
gpioInitIn(2,BIT3); 
gpioInitOut(1,BIT0); 
gpioInitOut(6,BIT6); 

unsigned char value = 0;
while(1){
    value = gpioInitStatus(4, BIT1);

        if(value == 0x00){
            _delay_cycles(5000);
            gpioWrite(1, BIT0, 1); 
        }

        else
            gpioWrite(1, BIT0, 0);
        _delay_cycles(5000);
}
return 0;
}
