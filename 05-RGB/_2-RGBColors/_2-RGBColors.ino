
#include "SimpleLibrary.h"

RGB rgb;
Sweeper sweeper;
TimingManager interval;
int maxCount = 12; 

void setup() {
  rgb.New(11,10,9);
  sweeper.New(0, maxCount, NORMAL);
  interval.New(500);
}

void loop() {
  rgb.Color(sweeper.Next(interval.Tick()));
}

