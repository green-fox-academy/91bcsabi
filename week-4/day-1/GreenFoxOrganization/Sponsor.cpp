#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"

using namespace std;

#include "Sponsor.h"

void Sponsor::introduce() {
    cout << "Hi, I'm "<< _name << ", a " << _age << " year old " << _gender << " who represents " << _company <<
    "and hired " << _hiredStudents << " students so far." << endl;
}
void Sponsor::hire() {
    _hiredStudents += +1;
}
void Sponsor::getGoal() {
    cout << "My goal is: Hire brilliant junior software developers." <<endl;
}
Sponsor::Sponsor() {
    _hiredStudents = 0;
    _company = "Google";
}
