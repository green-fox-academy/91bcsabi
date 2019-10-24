
#include "Flower.h"

Flower::Flower(std::string name) : Plant(name) {}

void Flower::waterMe(float waterAmount) {
    float absorbedWater = waterAmount * 0.75f;
    _waterAmount += absorbedWater;
    std::cout << "I am a Flower, my name is: " << _name
              << " and I am being watered with " << waterAmount << " liters of water"
              << ", of which I can absorb " << absorbedWater << " liters. "
              << "Now I have " << _waterAmount << " liters of water. And I'm depressed! :("
              << std::endl << std::endl;
}

bool Flower::needWater() {
    return _waterAmount < 5.0f;
}