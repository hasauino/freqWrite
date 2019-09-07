# freqWrite
Arduino library for generating a variable square wave.

It currently supports Arduino Mega only.

It generates a square wave of a frequency ranging from 0.5 Hz up to 1 MHz on Pin 46.


```c++
#include <freqWrite.h>

Frequency freq;


void setup() {
freq.config();
}

void loop() {

freq.write(100); //  100 Hz PWM with 50% duty cycle

while(1);
}
```
