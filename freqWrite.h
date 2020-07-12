/* Hassan Umari, July 2018
 * Arduino Megga only. Function for writing different frequencies (0.5 Hz to 1 MHz) with 50% duty cycle
*/

#ifndef FreqWrite_h 
#define FreqWrite_h 
#endif
#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"




class Frequency{
private:
 
 float PRE_SCALAR[5]={1.0,8.0,65.0,256.0,1024.0};

public:
  
  Frequency();

  void config();//configuring timers

  void write(float hz);//Generate a 50% duty cycle PWM, with a frequency between 0.5 Hz - 1 MHz
  
  };//class
#endif
