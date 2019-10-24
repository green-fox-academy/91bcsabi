#include <iostream>
#include <string>
//
// Created by Csabi on 26/09/2019.
//
#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H


class Car {
public:
    Car(std::string name,int gasAmount,int Capacity);

    void fill();
    bool isFull();
    void status();

private:
    std::string _name;
    int _gasAmount;
    int _capacity;
};


#endif //PETROLSTATION_CAR_H
