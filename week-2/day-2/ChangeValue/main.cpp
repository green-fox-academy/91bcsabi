#include <iostream>

using namespace std;


int main (){

    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float* tempPointer;
    tempPointer = &temperature;


    cout << "Temperature is changed to " << *tempPointer + 1 << endl;

    return 0;
}

