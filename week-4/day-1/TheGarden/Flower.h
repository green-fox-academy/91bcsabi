//
// Created by Csabi on 30/09/2019.
//

#ifndef THEGARDEN_FLOWER_H
#define THEGARDEN_FLOWER_H

#include <iostream>
using namespace std;


class Flower {
public:
    Flower();
    Flower(string blueFlower, string yellowFlower,int waterAmount) : _blueFlower(blueFlower),_yellowFlower(yellowFlower), _waterAmount(waterAmount){}

    void watering();

protected:
    string _blueFlower;
    string _yellowFlower;
    int _waterAmount;

};


#endif //THEGARDEN_FLOWER_H
