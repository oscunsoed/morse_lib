/*
  Morse.h - Library for flashing Morse code.
  Created by OSC, October 26, 2024.
  Released into the public domain.
*/

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void begin();
    void dot();
    void dash();
  private:
    int _pin;
};

#endif