#include <iostream>
#include <string>
using namespace std;
#include <cmath>


int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << "!" ;

    // Write a program that asks for a double that is a distance in miles,
    // then it converts that value to kilometers and prints it

    float miles;
    cout << "Please enter a number of miles!\n";
    cin >> miles;
    double kilometers = miles * 1.6;
    cout << miles << " Miles " << " = " << kilometers << " Kilometers \n";

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int num;
    cout << "Please enter a number!\n";
    cin >> num;
    if (num %2== 0) {
        cout << "Your number is even" << endl;
    }else {
        cout << "Your number is odd" << endl;
    }

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot

    int number;
    cout << "Please enter another number!\n";
    cin >> number;
    if (number <= 0){
        cout << "Not enough!" << endl;
    }else if (number == 1){
        cout << "One!" << endl;
    }else if (number == 2){
        cout << "Two!" << endl;
    }else if ( number > 2){
        cout << "A lot!" << endl;
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

    int girlsnum, boysnum;
    cout << "Please give me a number for girls!" <<endl;
    cin >> girlsnum;
    cout << "Please give me a number for boys!" <<endl;
    cin >> boysnum;

    if ( girlsnum == boysnum && girlsnum+boysnum >= 20 ){
        cout << "The party is excellent!" << endl;
    }else if(girlsnum != boysnum && girlsnum+boysnum >= 20 && girlsnum > 0){
        cout << "Quite cool party!" << endl;
    }else if(girlsnum+boysnum < 20 && girlsnum > 0) {
        cout << "Average party..." << endl;
    }else if(girlsnum == 0){
        cout << "Sausage party!" << endl;
    }


    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    cout << "Please give me two numbers for chickens and pigs(put space between numbers)!" << endl;
    int chickenNumber;
    int pigNumber ;
    cin >> chickenNumber >> pigNumber ;

    cout << "Chickens have " << chickenNumber * 2 << " legs, and Pigs have " << pigNumber * 4 << " legs " << endl;

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4


    cout << "Please give me 5 numbers (put space between numbers)!" << endl;

    int a;
    int b;
    int c;
    int d;
    int e;

    cin >> a >> b >> c >> d >> e ;

    int sum = a+b+c+d+e;
    float average = (a+b+c+d+e) / 5;

    cout << "Sum: " << sum << " Average: " << average << endl;


        return 0;
}