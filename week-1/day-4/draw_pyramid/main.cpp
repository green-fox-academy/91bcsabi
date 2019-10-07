#include <iostream>

// Write a program that reads a number from the standard input, then draws a
// pyramid like this:
//
//
//    *
//   ***
//  *****
// *******
//
// The pyramid should have as many lines as the number was

int main() {
/*
    int symbol;
    std::cout << "enter a number" << std::endl;
    std::cin >> symbol;
    for ( int i = 0; i < symbol; i++ )
    {
        for ( int j= (symbol + 1) - i ; j > 0 ; j--)
            std::cout << " ";
        for ( int a = 0; a < i * 2 + 1; a++)
            std::cout << "*";
        std::cout<< std::endl;
    }
    */

    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was

    int symbol;
    std::cout << "enter an odd number" << std::endl;
    std::cin >> symbol;

    for ( int i = 0; i < symbol /2; i++ )
    {
        for ( int j= (symbol/2 + 1) - i ; j > 0 ; j--)
            std::cout << " ";
        for ( int a = 0; a < i * 2 + 1; a++)
            std::cout << "*";
            std::cout << std::endl;
    }
    for ( int i = 0; i <= symbol /2; i++ )
    {
        for ( int j= (symbol/2 + 1) - i ; j > 0 ; j--)
            std::cout << " ";
        for ( int a = 0; a < i * 2 + 1; a++)
            std::cout << "*";
        std::cout << std::endl;
    }
    return 0;
}