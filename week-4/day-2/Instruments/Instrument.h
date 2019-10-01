//
// Created by Csabi on 01/10/2019.
//

#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H

#include <iostream>
using namespace std;


class Instrument {
public:
    explicit Instrument(string name);

    virtual void play() = 0;
protected:
    string _name;

};


#endif //INSTRUMENTS_INSTRUMENT_H
