#include <iostream>
using namespace std;

// Create a program which first asks for a number
// this number indicates how many integers we want to store in an array
// and than asks for numbers till the user fills the array
// It should print out the biggest number in the given array and the memory address of it

int FindMax (int *arr, int num);

int main() {

    cout << "Enter a number" << endl;
    int numbersSize;
    cin >> numbersSize;

    int numbers[numbersSize];

    cout << "Enter " << numbersSize << " number" << endl;

    for (int i = 0; i < numbersSize; ++i) {
        std::cin >> numbers[i];
    }
    int *ptrNumbers = &numbers[0];
    int j = FindMax(ptrNumbers, numbersSize);

    cout << "The biggest number is: " << numbers[j] << " and its memory address is: " << &numbers[j] << endl;

    return 0;
}
int FindMax (int *arr, int num) {
    int max = *arr;
    int j = 0;
    for (int i = 0; i < num; ++i) {
        if (*(arr + i) > max) {
            max = *(arr + i);
            j = i;
        }
    }
    return j;
}