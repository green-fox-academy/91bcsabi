#include <iostream>
using namespace std;
//
// Created by Csabi on 01/10/2019.
//

#include "StringedInstrument.h"
#include "Instrument.h"

StringedInstrument::StringedInstrument(string name, int numberOfStrings) : Instrument(name),
                                                                           _numberOfStrings(numberOfStrings) {
}

void StringedInstrument::play(){
    cout << _name << ", a " << _numberOfStrings << " stringed instrument that goes " << sound() << endl;

}
