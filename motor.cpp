#include "Arduino.h"
#include "motor.h"

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

void Motor::stop(int motor, int motor2, int motor3, int motor4) {
    int arr[] = {motor, motor2, motor3, motor4};
    for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
        analogWrite(arr[i] * 2, 0);
        analogWrite(arr[i] * 2 + 1, 0);
    }
}

void Motor::go(int motor, int dir, int speed) {
    if (dir == 1) {
        analogWrite(motor * 2, speed);
        analogWrite(motor * 2 + 1, 0);
    } else {
        analogWrite(motor * 2, 0);
        analogWrite(motor * 2 + 1, speed);
    }
}

void Motor::go_pair(int motor1, int motor2, int dir, int speed) {
    if (dir == 1) {
            Motor::go(motor1, 1, speed);
            Motor::go(motor2, 0, speed);
    } else {
        Motor::go(motor1, 0, speed);
        Motor::go(motor2, 1, speed);
    }
}

void Motor::rotate(int dir, int speed) {
    for (int i = 1; i < 5; i++) {
        if (dir == 1) {
            analogWrite(i * 2, speed);
            analogWrite(i * 2 + 1, 0);
        } else {
            analogWrite(i * 2, 0);
            analogWrite(i * 2 + 1, speed);
        }
    }
}
