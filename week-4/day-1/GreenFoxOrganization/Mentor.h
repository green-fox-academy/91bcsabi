
#ifndef GREENFOXORGANIZATION_MENTOR_H
#define GREENFOXORGANIZATION_MENTOR_H

#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"

using namespace std;

enum class Level{
    SENIOR,
    JUNIOR,
    INTERMEDIATE
};


class Mentor : public Person {
public:
    Mentor(Level level) : Person(), _level(level){}

    Mentor();

    Mentor(const char string[7], int i, Gender gender, Level level);

    void getGoal();
    void introduce();
    string levelAsString();

protected:
   Level _level;

};


#endif //GREENFOXORGANIZATION_MENTOR_H
