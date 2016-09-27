# SWseriale

// Created by Davide Cavaliere
// E-mail: dadez87@gmail.com
// Website: www.monocilindro.com
// 27 September 2016

This is a Software serial library for Arduino (equipped with Atmel ATmega328 microcontroller and similar).
In its standard configuration, the serial communication works at 9600 baud using PIN 3 (RX) and PIN 4 (TX). 
It makes use of INT1 interrupt and Timer2 8 bit timer.
Both sending and receiving operations use Timer2 for the bit timing: it is not possible to send and receive at the same time. Therefore, the communication can be only half-duplex.

How to use the library to send and receive data:
1) Include "SWseriale.h" to your program (#include "SWseriale.h")
2) Include function call "SWseriale.begin()" into the Setup() function of Arduino sketch
3) Read serial data using functions "SWseriale.available()" and "SWseriale.read()"
4) Send serial data using function "SWseriale.write()"
