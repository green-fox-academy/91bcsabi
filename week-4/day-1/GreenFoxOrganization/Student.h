#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

#ifndef GREENFOXORGANIZATION_STUDENT_H
#define GREENFOXORGANIZATION_STUDENT_H


class Student : public Person {
public:
    Student(string name, int age, string gender, string previousOrganization) : Person(), _previousOrganization(previousOrganization){}

    Student();

    void getGoal();
    void introduce();
    void skipDays(int numberOfDays);

protected:
    string _previousOrganization;
    int _skippedDays;
};


#endif //GREENFOXORGANIZATION_STUDENT_H
