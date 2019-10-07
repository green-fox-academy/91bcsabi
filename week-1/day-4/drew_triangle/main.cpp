#include <iostream>

// Write a program that reads a number from the standard input, then draws a
// triangle like this:
//
// *
// **
// ***
// ****
//
// The triangle should have as many lines as the number was

int main() {
    int number;
    std::cout << "Enter a number" << std::endl;
    std::cin >> number;

    for (int i=1; i<=number; i = i + 1 ){
        for (int j=1; j<=i; j = j + 1 ){
            std::cout << "*";
        }
        std::cout << "\n";
    }

}