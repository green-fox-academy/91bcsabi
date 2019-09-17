#include <iostream>

using namespace std;

// Create a function which swaps the values of 'a' and 'b' variables.
// This time use a void function and pointers.

void num_exchange(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 10;
    int b = 316;

    num_exchange(&a, &b);

    cout << "num1 =" << a << endl;
    cout << "num2 =" << b << endl;

    return 0;
}