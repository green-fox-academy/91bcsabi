//
// Created by Csabi on 01/10/2019.
//

#include "Violin.h"

string Violin::sound(){
    return  "Screech";
}

Violin::Violin(string name, int numberOfStrings) : StringedInstrument(name, numberOfStrings) {
    _numberOfStrings = 4;
    _name = "Violin";
}

Violin::Violin(string name, int numberOfStrings, int numb) : StringedInstrument(name, numberOfStrings) {
    _numberOfStrings = numb;
    _name = "Violin";
}