# MotorDriver

Provides an homogeneous interface to deal with a variety of pwm motor drivers in Arduino.

All PWM motor drivers control the speed and direction of a DC motor using different number of
pins. The aim of this class is to provide an homogeneous interface for an Arduino program to
be able to control the speed of a DC Motor.

It contains the following methods:

writePWM(int pwmSpeed), sets the motor speed where 0 <= pwmSpeed <= 255

setDirectionCW() sets the CW direction
      
setDirectionCCW() sets the CCW direction;
      
setBrake() brakes the motor;

float getCurrent() returns the Amps through the motor.

This class has to be extended to implement the behavior of the virtual methods defined above
