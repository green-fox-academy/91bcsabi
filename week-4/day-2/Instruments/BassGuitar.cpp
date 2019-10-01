//
// Created by Csabi on 01/10/2019.
//

#include "BassGuitar.h"

std::string BassGuitar::sound(){
    return "Duum-duum-duum";
}

BassGuitar::BassGuitar(string name, int numberOfStrings) : StringedInstrument(name, numberOfStrings) {
    _numberOfStrings = 4;
    _name = "Bass Guitar";
}
BassGuitar::BassGuitar(string name, int numberOfStrings, int numb) : StringedInstrument(name, numberOfStrings) {
    _numberOfStrings = numb;
    _name = "Bass Guitar";
}
