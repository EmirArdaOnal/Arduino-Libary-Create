#include "MotorControl.h"

MotorControl::MotorControl(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void MotorControl::Oku() {
  digitalWrite(_pin, HIGH);
}

void MotorControl::Yaz(int value) {
  digitalWrite(_pin, value);
}
