
#ifndef OOPEXAMPLE_TREE_H
#define OOPEXAMPLE_TREE_H

#include <iostream>
#include "Plant.h"


class Tree : public Plant {
public:
    Tree(std::string);
    void waterMe(float) override;
    bool needWater() override;
};


#endif //OOPEXAMPLE_TREE_H
