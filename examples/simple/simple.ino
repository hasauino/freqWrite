#include "freqWrite.h"

Frequency freq;


void setup() {
freq.config();
}

void loop() {

freq.write(100); 

while(1);
}

