#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"


#define MOTOR_NUM 4 
#define MOTOR_FORWARD 0
#define MOTOR_BACKWARD 1

class Motor {
    public:
        Motor();
        void stop(int motor, int motor2 = 0, int motor3 = 0, int motor4 = 0);
        void go(int motor, int dir, int speed);
        void rotate(int dir, int speed);
        void go_pair(int motor1, int motor2, int dir, int speed);
        void go_all(int speeds[], int directions[]);
};


#endif  // MOTOR_H
