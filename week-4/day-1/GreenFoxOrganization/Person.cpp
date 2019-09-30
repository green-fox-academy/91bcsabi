#include <iostream>
#include <vector>
using namespace std;

#include "Person.h"

void Person::introduce() {
    cout << "Hi, I am " << _name << ", a "<< _age << " year old " << _gender << endl;
}
void Person::getGoal() {
    cout << "My Goal is:Live for the moment!" << endl;
}

string Person::genderAsString() {
    switch(_gender){
        case Gender::MALE:
            return "Male";
        case Gender::FEMALE:
            return "Female";
        default:
            return "error";
    }
}


