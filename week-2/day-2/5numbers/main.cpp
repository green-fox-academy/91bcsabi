#include <iostream>
using namespace std;

// Create a program which accepts five integers from the console (given by the user)
// and store them in an array
// print out the values of that array using pointers again

int main() {
    int numbers[5];
    int numbersSize = 5;
    cout << "Enter 5 numbers" << endl;

    for (int i = 0; i < numbersSize; ++i) {
        cin >> numbers[i];
    }

    int *numbersPointer = &numbers[0];

    for (int j = 0; j < numbersSize; ++j) {
        cout <<"The " << j + 1 << ". value of the number you entered is " << *(numbersPointer + j) << endl;
    }
    return 0;
}