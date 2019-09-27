#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int a = 8;
    double n;

    do {
        int b;
        cout << "Please enter a number!\n" ;
        cin >> b;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000000000000000000, '\n');
            cout << "This is not a number!" << endl;
        }else if (b < a) {
            cout << "My number is higher!" << endl;
        } else if (b > a) {
            cout << "My number is lower!" << endl;
        } else {
            cout << "You found my number! " << endl;
            break;
        }
    }while (n != a);
    return 0;
}