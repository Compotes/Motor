#include <motor.h>

Motor m;

void setup() {
  
}

void loop() {
  m.go(1, 1, 255); // motor 1, direction 1, speed 255
  m.go_pair(1,2,1,255); // motor 1, motor 2, direction 1, speed 255
  m.stop(1,2); // motor 1,2 // You can use it with different motors
  m.rotate(1, 255); // direction 1, speed 2 // all motors are spinning to one direction
}
