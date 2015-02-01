#ifndef Motor_h
#define Motor_h
#include <Arduino.h>

class Motor {
	public:
		Motor();
		void stop(int number);
		void idz(int number, int dir, int speed);
		void kolecko(int dir, int speed);
		void idzteVeDvu(int number1, int number2, int dir, int speed);
};


#endif
