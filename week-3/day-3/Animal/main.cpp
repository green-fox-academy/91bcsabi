#include <iostream>
using namespace std;
#include "Animal.h"

/*
Create an Animal class
Every animal has a hunger value, which is a whole number
Every animal has a thirst value, which is a whole number
when creating a new animal object these values are created with the default 50 value
Every animal can eat() which decreases their hunger by one
Every animal can drink() which decreases their thirst by one
Every animal can play() which increases both by one
*/

int main() {

    Animal dog1;

    dog1.play();

    cout << dog1.getHunger() << endl;
    cout << dog1.getThirsty() << endl;

    dog1.eat();

    cout << dog1.getHunger() << endl;

    dog1.drink();
    dog1.drink();
    cout << dog1.getThirsty() << endl;

    return 0;
}