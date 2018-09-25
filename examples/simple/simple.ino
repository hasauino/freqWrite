#include <freqWrite.h>

Frequency freq;


void setup() {
freq.config();
}

void loop() {

freq.write(100); //  100 Hz PWM with 50% duty cycle

while(1);
}


