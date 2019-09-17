#include <iostream>

using namespace std;

void passByValue (int x){
    x = 0;
}

int main (){

    // Print out the value of the variable called 'age' using a pointer
    // (you have to create the pointer first)

    int age = 31;
    passByValue(age);

    cout << "age is " << age << endl;

    return 0;
}
