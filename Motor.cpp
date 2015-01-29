#include "Arduino.h"
#include "Motor.h"
Motor::Motor() {
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);

	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);

	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);

	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
}


void Motor::stop(int number) {
	analogWrite(number * 2, 0);
	analogWrite(number * 2 + 1, 0);	
}


void Motor::idz(int number, int dir, int speed) {
	if(dir == 1) {
		analogWrite(number * 2, speed);
		analogWrite(number * 2 + 1, 0);
	} else {
		analogWrite(number * 2, 0);
		analogWrite(number * 2 + 1, speed);
	}
}

void Motor::idzteVeDvu(int number1, int number2, int dir, int speed) { 
	if(dir == 1) {
		idz(number1, 1, speed);
		idz(number2, 0, speed);
	} else {
		idz(number1, 0, speed);
		idz(number2, 1, speed);
	}
}
