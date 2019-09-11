#include <iostream>

int main(int argc, char const *argv[]) {

    //Prints "Hello, Csaba!" to the terminal window.
    std::cout << "Hello, Csaba!" << std::endl;

    // Modify this program to print Humpty Dumpty riddle correctly

    std::cout << "Humpty Dumpty sat on a wall," << std::endl;
    std::cout << "Humpty Dumpty had a great fall." << std::endl;
    std::cout << "All the king's horses and all the king's men" << std::endl;
    std::cout << "Couldn't put Humpty together again." << std::endl;

    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.

    std::cout << "Balazsi Csaba" << std::endl;
    std::cout << 28 << std::endl;
    std::cout << 170.5 << std::endl;

    // Create a program that prints a few operations on two numbers: 22 and 13

    int a = 22;
    int b = 13;

    std::cout << a + b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl;

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long

    int hoursperday = 6;
    int semesterweeks = 17;
    int weeklyhours = 52;

    std::cout << semesterweeks * 5 / hoursperday << std::endl;
    std::cout << semesterweeks % weeklyhours << std::endl;

    return 0;
}