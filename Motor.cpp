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

void Motor::stop(int number, int number2, int number3, int number4) {
    int arr[] = {number, number2, number3, number4};
    for(int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
        analogWrite(arr[i] * 2, 0);
        analogWrite(arr[i] * 2 + 1, 0);
    }
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
            Motor::idz(number1, 1, speed);
            Motor::idz(number2, 0, speed);
	} else {
            Motor::idz(number1, 0, speed);
            Motor::idz(number2, 1, speed);
	}
}

void Motor::kolecko(int dir, int speed) {
	for(int i = 1; i < 5; i++) {
		if(dir == 1) {
			analogWrite(i * 2, speed);
			analogWrite(i * 2 + 1, 0);
		} else {
			analogWrite(i * 2, 0);
			analogWrite(i * 2 + 1, speed);
		}
	}
}
