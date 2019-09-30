#ifndef GREENFOXORGANIZATION_PERSON_H
#define GREENFOXORGANIZATION_PERSON_H

#include <iostream>
#include <vector>
using namespace std;

enum Gender {
    MALE,
    FEMALE
};


class Person {
public:
    Person(string name , int age , Gender gender) : _name(name), _age(age), _gender(gender){}
    Person();

    void introduce();
    void getGoal();
    string genderAsString();

protected:
    string _name;
    int _age;
    Gender _gender;
};


#endif //GREENFOXORGANIZATION_PERSON_H
