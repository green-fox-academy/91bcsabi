#include <iostream>
#include <string>
using namespace std;
#include <cmath>


int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user
/*
    std::string name;
    cout << "What is your name?: ";
    cin >> name;
    cout << "Hello " << name << "!" ;

    // Write a program that asks for a double that is a distance in miles,
    // then it converts that value to kilometers and prints it

    float miles;
    std::cout << "Please enter miles!:";
    std::cin >> miles;
    double kilometers = miles * 1.6;
    std::cout << miles << " Miles " << std::endl;
    std::cout << kilometers << " Kilometers " << std::endl;

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int num;
    std::cout << "Please enter your number!";
    std::cin >> num;
    if (num %2== 0) {
        std::cout << "Your number is even" << std::endl;
    } else {
        std::cout << "Your number is odd" << std::endl;
        }

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot

    int number;
    std::cout << "Please enter another number!";
    std::cin >> number;
    if (number <= 0){
        std::cout << "Not enough!" << std::endl;
    }else if (number == 1){
        std::cout << "One!" << std::endl;
    }else if (number == 2){
        std::cout << "Two!" << std::endl;
    }else if ( number > 2){
        std::cout << "A lot!" << std::endl;
    }

    // Write a program that asks for two numbers
    // The first number represents the number of girls that comes to a party, the
    // second the boys
    // It should print: The party is excellent!
    // If the the number of girls and boys are equal and 20 or more people are coming to the party
    //
    // It should print: Quite cool party!
    // If there are 20 or more people coming to the party but the girl - boy ratio is not 1-1
    //
    // It should print: Average party...
    // If there are less people coming than 20
    //
    // It should print: Sausage party
    // If no girls are coming, regardless the count of the people
*/
    int girlsnum, boysnum;
    std::cout << "Please give me a number for girls!" <<endl;
    std::cin >> girlsnum;
    std::cout << "Please give me a number for boys!" <<endl;
    std::cin >> boysnum;

    if ( girlsnum == boysnum && girlsnum+boysnum >= 20 ){
        std::cout << "The party is excellent!" << std::endl;
    }else if(girlsnum != boysnum && girlsnum+boysnum >= 20 && girlsnum > 0){
        std::cout << "Quite cool party!" << std::endl;
    }else if(girlsnum+boysnum < 20 && girlsnum > 0) {
        std::cout << "Average party..." << std::endl;
    }else if(girlsnum == 0){
        std::cout << "Sausage party!" << std::endl;
    }






        return 0;


    return 0;
}