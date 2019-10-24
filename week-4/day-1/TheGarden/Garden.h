
#ifndef OOPEXAMPLE_GARDEN_H
#define OOPEXAMPLE_GARDEN_H

#include <vector>
#include "Plant.h"


class Garden {
public:
    void plantPlant(Plant* plant);
    void waterPlants(float waterAmount);

private:
    std::vector<Plant*> _plants;
};


#endif //OOPEXAMPLE_GARDEN_H
