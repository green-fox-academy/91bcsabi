#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"

using namespace std;

#ifndef GREENFOXORGANIZATION_COHORT_H
#define GREENFOXORGANIZATION_COHORT_H


class Cohort {
public:
    Cohort(string);
    string _name;
    vector<Student*> _students;
    vector<Mentor*> _mentors;

    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();
};


#endif //GREENFOXORGANIZATION_COHORT_H
