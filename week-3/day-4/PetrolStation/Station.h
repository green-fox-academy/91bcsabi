#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H
//
// Created by Csabi on 26/09/2019.
//
#include "Car.h"

class Station {

public:
    Station();
    void fill(Car &car);

private:
    int _gasAmount;
};


#endif //PETROLSTATION_STATION_H
