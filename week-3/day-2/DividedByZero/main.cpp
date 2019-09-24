#include <iostream>
#include <fstream>
using namespace std;

// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0.
// Solve the excercise without using exceptions!


int main() {

    int number;
    cout << "Enter a number " << endl;
    cin >> number ;
    if ( number > 0) {
        cout << number / 10 << endl;
    } else {
        cout << "FAIL" << endl;
    }
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0.
    // Solve the excercise using exceptions!
    // Hint: The try-catch block should be in main().

    try{
        int number;
        cout << "Enter a number " << endl;
        cin >> number ;
        if ( number > 0) {
            cout << number / 10 << endl;
        } else {
            throw string("FAIL");
        }catch(string e){
            cout << "All good" << endl;
        }
    }
    return 0;
}



