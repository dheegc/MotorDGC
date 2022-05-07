#ifndef MotorDGC_H
#define MotorDGC_H

#include <Arduino.h>

class MotorDGC {
  
  private:
    byte IN_1;byte IN_2;byte IN_3;byte IN_4;
    
  public:
    // Setup all pins and call init()
    MotorDGC(byte IN_1,byte IN_2,byte IN_3,byte IN_4);

    // Setup the all pin as OUTPUT
    // and LOW all the pins - default state
    void init();
    
    // Front 
    void Front();

    // Back
    void Back();

    // Left
    void Left();

    // Right
    void Right();

    // Stop
    void Stop();
};

#endif