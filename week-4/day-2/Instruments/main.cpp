#include <iostream>
using namespace std;

#include "Instrument.h"
#include "ElectricGuitar.h"
#include "BassGuitar.h"
#include "Violin.h"

//Test 1 Play
//Electric Guitar, a 6-stringed instrument that goes Twang
//Bass Guitar, a 4-stringed instrument that goes Duum-duum-duum
//Violin, a 4-stringed instrument that goes Screech
//Test 2, create Electric, Bass Guitar with 7 and 5 strings.
//Test 2 Play
//Electric Guitar, a 7-stringed instrument that goes Twangg
//Bass Guitar, a 5-stringed instrument that goes Duum-duum-duum

int main( int argc, char* args[] )
{

    cout << "Test 1, create Electric Guitar, Bass Guitar and Violin with default strings." << endl;
    ElectricGuitar guitar(string(), 0);
    BassGuitar bassGuitar(string(), 0);
    Violin violin(string(), 0);

    cout<< "Test 1 Play" << endl;
    guitar.play();
    bassGuitar.play();
    violin.play();

    cout << "Test 2, create Electric Guitar, Bass Guitar with 7 and 5 strings ." << endl;
    ElectricGuitar guitar2(string(), 0, 7);
    BassGuitar bassGuitar2(string(), 0, 5);

    cout << "Test 2 Play" << endl;
    guitar2.play();
    bassGuitar2.play();
}