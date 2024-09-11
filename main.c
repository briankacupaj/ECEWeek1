#include <msp430.h>
#define RED_LED BIT0 //P1.0
#define GREEN_LED BIT6 //P6.6
#define BUTTON1 BIT1 //push button P4.1
#define BUTTON2 BIT3 //push button P2.3



void main(void)
{
WDTCTL = WDTPW | WDTHOLD;
P1OUT &= ~BIT0;  //p1.0 red led
P6OUT &= ~BIT6; //p6.6 greenled
P1DIR |= BIT0;
P6DIR |= BIT6;


P4DIR &= ~BIT1;//clear P4.1(s1)
P4REN |= BIT1;//Enable pull up/down resistor
P4OUT |= BIT1;//Make resistor a pull up

P2DIR &= ~BIT3;//clear P2.3(s2)
P2REN |= BIT3;//Enable pull up/down resistor
P2OUT |= BIT3;//Make resistor a pull up



PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                           // to activate previously configured port settings
int count = 0;
while(1){
        if((P4IN & BUTTON1) == 0x00){
        _delay_cycles(5000);
        if((P4IN & BUTTON1) == 0x00){
            P1OUT ^= RED_LED;
            } while((P4IN & BUTTON1) == 0x00);
        }

       else if((P2IN & BUTTON2) == 0x00){
         _delay_cycles(5000);
        if((P2IN & BUTTON2) == 0x00){
            P6OUT ^= GREEN_LED;
            }
        while((P2IN & BUTTON2) == 0x00);}


}
//return 0;
}
