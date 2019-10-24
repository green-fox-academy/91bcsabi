
#include "Flower.h"
#include "Tree.h"
#include "Garden.h"

int main() {


    Flower f1("Yellow");
    Flower f2("Blue");
    Tree t1("Purple");
    Tree t2("Orange");

    Garden g;
    g.plantPlant(&f1);
    g.plantPlant(&f2);
    g.plantPlant(&t1);
    g.plantPlant(&t2);

    g.waterPlants(40.0f);
    g.waterPlants(70.0f);

    return 0;
}