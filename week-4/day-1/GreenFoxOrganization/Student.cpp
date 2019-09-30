#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

#include "Student.h"

void Student::getGoal() {
    cout << "My goal is:Be a junior software developer" << endl;
}
void Student::introduce() {
    cout << "Hi, I'm " << _name << ", a "<< _age << "year old " <<_gender << "from " << _previousOrganization << "who skipped "<<_skippedDays << " days from the course already." << endl;
}
void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}
Student::Student(){
    _skippedDays = 0;
    _previousOrganization = "The School of Life";
}





