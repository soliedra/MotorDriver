/*
 * 
 * Provides an homogeneous interface to deal with a variety of pwm motor drivers in Arduino.
 * All PWM motor drivers control the speed and direction of a DC motor using different number of
 * pins. The aim of this class is to provide an homogeneous interface for an Arduino program to
 * be able to control the speed and direction of a DC Motor.
 * 
 * A particular implementation of a driver has to extend this class coding
 * the  virtual methods to behave as defined above.
 * 
 * Created by Javier Casado July 2016
 * Licence CC BY
 */
#ifndef MotorDriver_h
#define MotorDriver_h

#include "Arduino.h"

class MotorDriver
{
   public:
   		
      virtual ~MotorDriver(){};
      
      // pure virtual function. 
      // 0 <= pwMSpeed <= 255
      virtual void writePWM(int pwmSpeed) = 0;
      
      // pure virtual function
      virtual void setDirectionCW() = 0;
      
      // pure virtual function
      virtual void setDirectionCCW() = 0;
      
      // pure virtual function
      virtual void setBrake() = 0;
      
       // pure virtual function
      virtual float getCurrent() = 0;
};
#endif
