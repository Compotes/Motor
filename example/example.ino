#include <Motor.h>

Motor m;

void setup() {
  
}

void loop() {
  m.idz(1, 1, 255); // motor 1, direction 1, speed 255
  m.idzteVeDvu(1,2,1,255); // motor 1, motor 2, direction 1, speed 255
  m.stop(1); // motor 1
}
