//
// Created by Csabi on 01/10/2019.
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument {
public:
    string sound() override;
    Violin(string name, int numberOfStrings);
    Violin(string name, int numberOfStrings, int numb);
protected:

};


#endif //INSTRUMENTS_VIOLIN_H
