//
// Created by Csabi on 01/10/2019.
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    string sound() override;
    BassGuitar(string name, int numberOfStrings, int numb);
    BassGuitar(string name, int numberOfStrings);
protected:

};


#endif //INSTRUMENTS_BASSGUITAR_H
