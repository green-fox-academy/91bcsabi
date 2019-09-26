#include <iostream>
//
// Created by Csabi on 26/09/2019.
//
#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H


class Car {
public:
    Car(int gasAmount,int Capacity);

    void fill();
    bool isFull();

private:
    int _gasAmount;
    int _capacity;
};


#endif //PETROLSTATION_CAR_H
