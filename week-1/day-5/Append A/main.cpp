#include <iostream>
#include <string>
using namespace std;

// - Create a string variable named `typo` and assign the value `Chinchill` to it
// - Write a function called `appendAFunc` that gets a string as an input,
//   appends an 'a' character to its end and returns with a string
// - Print the result of `appendAFunc(typo)

void appendAFunc(string x){

    cout << x << "a" << endl;
}

int main(int argc, char* args[]) {

    string typo = "Chinchill";

    appendAFunc(typo);

    return 0;
}