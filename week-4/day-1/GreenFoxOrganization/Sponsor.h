#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"

using namespace std;

#ifndef GREENFOXORGANIZATION_SPONSOR_H
#define GREENFOXORGANIZATION_SPONSOR_H


class Sponsor : public Person{
public:
    Sponsor(string company, int hiredStudents) : Person(), _company(company), _hiredStudents(hiredStudents){}
    Sponsor();

    void introduce();
    void hire();
    void getGoal();
protected:
    string _company;
    int _hiredStudents;
};


#endif //GREENFOXORGANIZATION_SPONSOR_H
