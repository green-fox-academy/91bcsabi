//
// Created by Csabi on 01/10/2019.
//

#include "ElectricGuitar.h"


ElectricGuitar::ElectricGuitar(string name, int numberOfStrings) : StringedInstrument(name, numberOfStrings) {
    _numberOfStrings = 6;
    _name = "Electric Guitar";
}
string ElectricGuitar::sound(){
    return "Twanng";
}
ElectricGuitar::ElectricGuitar(string name, int numberOfStrings, int numb) : StringedInstrument(name, numberOfStrings) {
    _numberOfStrings  = numb;
    _name = "Electric Guitar";
}
