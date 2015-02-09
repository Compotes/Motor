#ifndef motor_h
#define motor_h
#include "Arduino.h"

class Motor {
	public:
		Motor();
		void stop(int number, int number2 = 0, int number3 = 0, int number4 = 0);
		void idz(int number, int dir, int speed);
		void kolecko(int dir, int speed);
		void idzteVeDvu(int number1, int number2, int dir, int speed);
};


#endif
