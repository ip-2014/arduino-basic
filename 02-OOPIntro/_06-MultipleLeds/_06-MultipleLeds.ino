
#include "SimpleLibrary.h"

DigitalLED led[3];
TimingManager interval[3];
Sweeper toggler;
const int DELAY = 250;
int x;

void setup() {
  
  toggler.New(0, 2, NORMAL);
  
  interval[0].New(DELAY);
  interval[1].New(2*DELAY);
  interval[2].New(4*DELAY);

  led[0].New(3);
  led[1].New(9);
  led[2].New(11);
}


void loop() {
  x = toggler.Next(1);
  if(interval[x].Tick())
    led[x].Toggle();
}
