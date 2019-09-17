#include <iostream>

using namespace std;

int main (){

    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int* aPointer;
    double* bPointer;
    string* BobPointer;

    cout << aPointer << " , " << bPointer << " , " << BobPointer << endl;

    aPointer = &a;
    bPointer = &b;
    BobPointer = (string *) "&Bob";

    cout << aPointer << " , " << bPointer << " , " << BobPointer << endl;

    return 0;
}