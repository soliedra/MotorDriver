#ifndef MotorDriver_h
#define MotorDriver_h

#include "Arduino.h"

class MotorDriver
{
   public:
      // pure virtual function
      virtual void writePWM(int pwmSpeed) = 0;
};
#endif
