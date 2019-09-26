#include <iostream>
//
// Created by Csabi on 26/09/2019.
//
#include "Station.h"
#include "Car.h"

Station::Station() {
    _gasAmount = 200;
}

void Station::fill(Car &car) {

    std::cout << "Filling car..." << std::endl;

    while (!car.isFull()) {
        car.fill();
        _gasAmount--;
    }
    std::cout << "Car filled. Fuel remaining: " << _gasAmount << std::endl;
}
