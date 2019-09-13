#include <iostream>
#include <string>
using namespace std;

// Write a function called `sum` that returns the sum of numbers from zero to the given parameter

int sum(int);

int main(int argc, char* args[]) {

    int number;
    cout << "enter a number : "<< endl;
    cin >> number;

    cout << "The sum from 0 to your number is : " << sum(number);

    return 0;
}

int sum( int x ){
    int sum = 0;
    for (int i = 1; i <= x ; ++i) {
        sum += i;
    }
    return sum;
}