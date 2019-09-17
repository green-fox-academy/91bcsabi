#include <iostream>
using namespace std;


int main(){

    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int* aPointer;
    int* bPointer;

    aPointer = &a;
    bPointer = &b;

    cout << *aPointer + *bPointer << endl;

    return 0;
}

