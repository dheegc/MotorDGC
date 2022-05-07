#include "MotorDGC.h"

MotorDGC::MotorDGC(byte IN_1,byte IN_2,byte IN_3,byte IN_4) {
  this->IN_1 = IN_1;
  this->IN_2 = IN_2;
  this->IN_3 = IN_3;
  this->IN_4 = IN_4;
  init();
}

void MotorDGC::init() {
  pinMode(IN_1, OUTPUT);
  pinMode(IN_2, OUTPUT);
  pinMode(IN_3, OUTPUT);
  pinMode(IN_4, OUTPUT);
  Stop();
}

void MotorDGC::Front() {
  digitalWrite(IN_1, HIGH);
  digitalWrite(IN_2, LOW);
  digitalWrite(IN_3, HIGH);
  digitalWrite(IN_4, LOW);
}

void MotorDGC::Back() {
  digitalWrite(IN_1, LOW);
  digitalWrite(IN_2, HIGH);
  digitalWrite(IN_3, LOW);
  digitalWrite(IN_4, HIGH);
}

void MotorDGC::Left() {
  digitalWrite(pin, LOW);
  digitalWrite(pin, HIGH);
  digitalWrite(pin, HIGH);
  digitalWrite(pin, LOW);
}

void MotorDGC::Right() {
  digitalWrite(IN_1, HIGH);
  digitalWrite(IN_2, LOW);
  digitalWrite(IN_3, LOW);
  digitalWrite(IN_4, HIGH);
}

void MotorDGC::Stop() {
  digitalWrite(IN_1, LOW);
  digitalWrite(IN_2, LOW);
  digitalWrite(IN_3, LOW);
  digitalWrite(IN_4, LOW);
}