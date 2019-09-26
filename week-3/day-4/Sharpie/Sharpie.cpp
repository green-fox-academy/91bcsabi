//
// Created by Csabi on 26/09/2019.
//
#include <iostream>
using namespace std;
#include "Sharpie.h"

Sharpie::Sharpie(string color,float width) : _color(color), _width(width), _inkAmount(100) {

}
void Sharpie::use() {
    _inkAmount--;
    if (_inkAmount < 0) _inkAmount = 0;
}
