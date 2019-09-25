#include <iostream>
using namespace std;

int main() {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int a = 8;
    double n;

        while( cout << "Guess my number\n"
               && ! (cin >> n) )
        {
            cin.clear();
            string line;
            getline(cin, line);
            cout << "I am sorry, but '" << line << "' is not a number\n";
        }do{
            if(n < a) {
            cout << "My number is higher!\n";
            }else if(n > a) {
            cout << "My number is lower!\n" ;
            }else{
            cout << "You found my number! " << endl;
            }
        } while (n != a);

    return 0;
}