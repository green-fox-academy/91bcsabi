#include <iostream>
using namespace std;

#include "Instrument.h"

Instrument::Instrument(string name) : _name(name) {

}

void Instrument::play() {
    cout << "a " << numberOfInstruments << "instrument that goes " << sound << endl;
}
