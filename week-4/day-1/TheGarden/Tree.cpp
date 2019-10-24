
#include "Tree.h"


Tree::Tree(std::string name) : Plant(name) {}

void Tree::waterMe(float waterAmount) {
    float absorbedWater = waterAmount * 0.4f;
    _waterAmount += absorbedWater;
    std::cout << "I am a Tree, my name is: " << _name
              << " and I am being watered with " << waterAmount << " liters of water"
              << ", of which I can absorb " << absorbedWater << " liters. "
              << "Now I have " << _waterAmount << " liters of water. And I'm happy! :)"
              << std::endl << std::endl;
}

bool Tree::needWater() {
    return _waterAmount < 10.0f;
}
