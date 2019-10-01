//
// Created by Csabi on 01/10/2019.
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H


#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar(string name, int numberOfStrings);
    ElectricGuitar(string name, int numberOfStrings, int numb);
    string sound() override ;
protected:

};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
