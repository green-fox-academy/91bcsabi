#include <iostream>
using namespace std;//
// Created by Csabi on 26/09/2019.
//

#include "Pokemon.h"

Pokemon::Pokemon(const string& name, const string& type, const string& effectiveAgainst)
{
    _name = name;
    _type = type;
    _effectiveAgainst = effectiveAgainst;
}

bool Pokemon::isEffectiveAgainst(Pokemon anotherPokemon)
{
    return _effectiveAgainst == anotherPokemon._type;
}