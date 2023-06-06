#ifndef MotorControl_h
#define MotorControl_h

#include "Arduino.h"

class MotorControl {
  public:
    MotorControl(int pin);
    void Oku();
    void Yaz(int value);
  
  private:
    int _pin;
};

#endif
