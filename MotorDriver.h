/*
 * 
 * Provides an homogeneous interface to deal with a variety of pwm motor drivers in Arduino.
 * All PWM motor drivers control the speed and direction of a DC motor using different number of
 * pins. The aim of this class is to provide an homogeneous interface for an Arduino program to
 * be able to control the speed and direction of a DC Motor.
 *
 * It contains just one method called writePWM(int pwmSpeed) where -255 <= pwmSpeed <= 255, positive
 * values will cause the motor to turn CW and negative CCW.
 * 
 * A particular implementation of a driver has to extend this class coding
 * the  writePWM method to behave as defined above.
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
      // pure virtual function
      virtual void writePWM(int pwmSpeed) = 0;
};
#endif
