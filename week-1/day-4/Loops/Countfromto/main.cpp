#include <iostream>
using namespace std;

int main() {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int first , second;
    cout << "Give me a number!";
    cin >> first;
    cout << "Give me another number!";
    cin >> second;
        while(first >= second) {
            cout << "The second number should be bigger! ";
            cin >> second;
        }
            for (int i = first; i <= second; ++i) {
                cout << i << endl;
            }

            return 0;
        }