#include <iostream>
#include <string>
#include <cmath>


int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user
    std::string name;
    std::cout << "Your name: "; // Type a number and press enter
    std::cin >> name; // Get user input from the keyboard
    std::cout << "Hello " << name << "!" ; // Display the input value

    // Write a program that asks for a double that is a distance in miles,
    // then it converts that value to kilometers and prints it


    float miles;
    std::cout << "Please enter miles:";
    std::cin >> miles;
    double kilometers = miles * 1.6;
    std::cout << kilometers << " Kilometers";




        return 0;


    return 0;
}