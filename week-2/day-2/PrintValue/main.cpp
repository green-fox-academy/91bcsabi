#include <iostream>

using namespace std;


int main (){

    // Print out the value of the variable called 'age' using a pointer
    // (you have to create the pointer first)

    int age = 31;
    int* agePointer;
    agePointer = &age;

    cout << "age is " << *agePointer << endl;

    return 0;
}
