#include <iostream>
//
// Created by Csabi on 26/09/2019.
//
#include <vector>
#include "Station.h"

int main() {

    Station gasStation;

    Car car1(10, 50);
    Car car2(20, 50);
    Car car3(30, 50);
    Car car4(40, 50);
    Car car5(50, 50);

    std::vector<Car> cars = {car1, car2, car3, car4, car5};

    for (int i = 0; i < cars.size(); ++i) {
        gasStation.fill(cars[i]);
    }
    return 0;
}