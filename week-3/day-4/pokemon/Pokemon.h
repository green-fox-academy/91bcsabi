//#include <iostream>
//using namespace std;
// Created by Csabi on 26/09/2019.
//

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <iostream>

class Pokemon {
public:
    Pokemon(const string& name, const string& type, const string& effectiveAgainst);
    bool isEffectiveAgainst(Pokemon anotherPokemon);

    string _name;
    string _type;
    string _effectiveAgainst;
};

#endif //POKEMON_POKEMON_H
