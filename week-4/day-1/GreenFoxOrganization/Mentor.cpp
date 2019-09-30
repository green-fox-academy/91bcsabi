#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"

using namespace std;

#include "Mentor.h"

Mentor::Mentor() {
    levelAsString();
}
void Mentor::getGoal() {
    cout << "My goal is: Educate brilliant junior software developers." << endl;
}
void Mentor::introduce() {
    cout << "Hi, I'm " << _name <<" , a " << _age << " year old" << _gender << " " << levelAsString() << " mentor." << endl;
}
string Mentor::levelAsString() {
    switch(_level){
        case Level::INTERMEDIATE:
            return "Intermediate";
        case Level::SENIOR:
            return "Senior";
        case Level::JUNIOR:
            return "Junior";
        default:
            return "error";
    }
}

Mentor::Mentor(const char *string, int i, Gender gender, Level level) {

}
