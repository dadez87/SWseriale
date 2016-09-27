// Created by Davide Cavaliere
// E-mail: dadez87@gmail.com
// Website: www.monocilindro.com
// 27 September 2016

// SWseriale example
// Standard settings: 
// RX -> Pin 3
// TX -> Pin 4

#include "SWseriale/SWseriale.h" // SWseriale library

void setup() {
  
  SWseriale.begin(); // Initialize INT1, Timer2, Pin 3 (Input, Pull-up) and Pin 4 (Output)
  
}

void loop() {
  
  while (SWseriale.available()){ // Checks if any character has been received
    uint8_t temp = SWseriale.read(); // Reads one character from SWseriale received data buffer
    SWseriale.write(&temp, 1); // Send one character using SWseriale
  }

  delay(10); // Wait 10 ms, optional
  
}
