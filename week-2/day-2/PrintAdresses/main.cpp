#include <iostream>
using namespace std;

// Create a program which accepts five integers from the console (given by the user)
// and store them in an array
// print out the memory addresses of the elements in the array

int main(){

    int numbers[5] = {};
    cout << "Enter 5 numbers";
    for (int i = 0; i < 5 ; ++i) {
        cin >> numbers[i];
    }
    for (int j = 0; j < 5 ; ++j) {
        cout << "The "<< j + 1 << ". element's memory address is " <<&numbers[j] << endl;
    }

    return 0;
}
