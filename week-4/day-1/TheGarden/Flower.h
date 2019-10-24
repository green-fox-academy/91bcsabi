#ifndef OOPEXAMPLE_FLOWER_H
#define OOPEXAMPLE_FLOWER_H

#include <iostream>
#include "Plant.h"


class Flower : public Plant {
public:
    Flower(std::string);
    void waterMe(float) override;
    bool needWater() override;
};


#endif //OOPEXAMPLE_FLOWER_H
