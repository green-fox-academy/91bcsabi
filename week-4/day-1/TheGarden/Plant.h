#ifndef OOPEXAMPLE_PLANT_H
#define OOPEXAMPLE_PLANT_H

#include <string>


class Plant {
public:
    Plant(std::string);

    virtual void waterMe(float) = 0;
    virtual bool needWater() = 0;

protected:
    std::string _name;
    float _waterAmount;
};


#endif //OOPEXAMPLE_PLANT_H
