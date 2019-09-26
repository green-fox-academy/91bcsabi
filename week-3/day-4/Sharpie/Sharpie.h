//
// Created by Csabi on 26/09/2019.
//
#include <iostream>
using namespace std;
#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


class Sharpie {

public:
    Sharpie(string ,float );

    void use();

private:
    int _inkAmount;
    string _color;
    float _width;
};


#endif //SHARPIE_SHARPIE_H
