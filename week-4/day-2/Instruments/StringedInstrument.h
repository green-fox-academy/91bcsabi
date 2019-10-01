//
// Created by Csabi on 01/10/2019.
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"


class StringedInstrument : Instrument {
public:
    StringedInstrument(string name, int numberOfStrings);

    virtual void sound() = 0;
protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
