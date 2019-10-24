#include <iostream>

//
// Created by Csabi on 26/09/2019.
//
#include "Car.h"

Car::Car(std::string name, int gasAmount, int capacity) : _name(name), _gasAmount(gasAmount), _capacity(capacity){

}

bool Car::isFull() {
    return (_gasAmount == _capacity);
}

void Car::fill() {
    _gasAmount++;
}

void Car::status() {
    std::cout << _name << " has " << _gasAmount << " of gas" << std::endl;
}
