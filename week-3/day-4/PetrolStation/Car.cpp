#include <iostream>
//
// Created by Csabi on 26/09/2019.
//
#include "Car.h"

Car::Car(int gasAmount, int capacity) {
    _gasAmount = gasAmount;
    _capacity = capacity;
}

bool Car::isFull() {
    return (_gasAmount == _capacity);
}

void Car::fill() {
    _gasAmount++;
}
