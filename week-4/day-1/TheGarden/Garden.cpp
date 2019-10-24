
#include "Garden.h"


void Garden::plantPlant(Plant *plant) {
    _plants.push_back(plant);
}

void Garden::waterPlants(float waterAmount) {
    int needyPlants = 0;
    for (int i = 0; i < _plants.size(); ++i) {
        if(_plants[i]->needWater()) needyPlants++;
    }

    float waterPerPlant = waterAmount / needyPlants;
    for (int i = 0; i < _plants.size(); ++i) {
        if(_plants[i]->needWater()) _plants[i]->waterMe(waterPerPlant);
    }
}
