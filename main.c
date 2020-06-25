/*
 * File:   main.c
 * Author: ELDEMELAWY
 *
 * Created on June 25, 2020, 3:19 PM
 */


#include <avr/io.h>
#define led2 3
#define led1 7
#define led0 2
#define relay 2
#define bazzer 3

int main(void) {
    /* Replace with your application code */
    DDRD |= (1<<led2);
    //to set the bin number 3 is output
    PORTD |= (1<<led2);
    //to set the bin number 3 is on 
     DDRC |= (1<<led1);
    //to set the bin number 7 is output
    PORTC |= (1<<led1);
    //to set the bin number 7 is on 
     DDRC |= (1<<led0);
    //to set the bin number 2 is output
    PORTC |= (1<<led0);
    //to set the bin number 2 is on
     DDRA |= (1<<relay);
    //to set the bin number 2 is output
    PORTA |= (1<<relay);
    //to set the bin number 2 is on 
  //   DDRA |= (1<<bazzer);
    //to set the bin number 3 is output
   // PORTA |= (1<<bazzer);
    //to set the bin number 3 is on
    // mohamed mahmoued moahmed eldemellawy 
    while (1) {
    }
}
