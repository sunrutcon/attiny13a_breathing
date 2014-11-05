attiny13a_breathing
===================

This is small project for testing Attiny13a with Arduino IDE.

It made is for testing tiny's pwm capability.

Attiny13a has 2 pwm pins, pwm0 and pwm1 as shown:

// ATMEL ATTINY13 / ARDUINO
//
//                  +-\/-+
// Ain0 (D 5) PB5  1|    |8  Vcc
// Ain3 (D 3) PB3  2|    |7  PB2 (D 2)  Ain1
// Ain2 (D 4) PB4  3|    |6  PB1 (D 1) pwm1
//            GND  4|    |5  PB0 (D 0) pwm0
//                  +----+



Fritzing project with schematic, breadboard and pcb can be found at:

http://fritzing.org/projects/breathing-led

