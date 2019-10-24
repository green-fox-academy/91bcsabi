#include <iostream>
//
// Created by Csabi on 26/09/2019.
//
#include <vector>
#include "Station.h"

int main() {

    Station gasStation;

    Car fiat("Scudo", 20, 30);
    Car opel("Astra", 30, 30);
    Car toyota("Yaris", 10, 40);

    fiat.status();
    fiat.isFull();

    opel.status();
    opel.isFull();

    toyota.status();
    toyota.isFull();

    std::vector<Car> cars = {fiat, opel, toyota};

    for (int i = 0; i < cars.size(); ++i) {
        gasStation.fill(cars[i]);
    }

    return 0;
}