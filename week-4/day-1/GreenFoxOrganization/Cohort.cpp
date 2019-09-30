#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"

using namespace std;

#include "Cohort.h"

void Cohort::addStudent(Student *student) {
    _students.push_back(student);
}
void Cohort::addMentor(Mentor *mentor) {
    _mentors.push_back(mentor);
}
void Cohort::info() {
    cout << "The "<< _name << " cohort has" << _students.size() << " students and " << _mentors.size() << " mentors." << endl;
}
Cohort::Cohort(string name) : _name(name) {
    _students.clear();
    _mentors.clear();
}
