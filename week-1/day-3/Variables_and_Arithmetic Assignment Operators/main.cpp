#include <iostream>
#include <string>

int main() {

    // Store your favorite number in a variable (as an integer)
    // And print it like this: "My favorite number is: 8"

    int number = 21;

    std::cout << "My favourite number is ";
    std::cout << number << std::endl;

    // Swap the values of the variables

    int x = 123;
    int y = 526;
    int z = 1;
    z = x;
    x = y;
    y = z;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    // Define several things as a variable then print their values

    std::string name = "Balazsi Csaba";
    std::cout << name << std::endl;
    int age = 28;
    std::cout << age << std::endl;
    double height = 1.70;
    std::cout << height << std::endl;
    bool married = false;
    std::cout << married << std::endl;

    // make the "a" variable's value bigger by 10

    int a;
    a = 3;
    std::cout << a + 10 << std::endl;

    // make b smaller by 7

    int b = 100;
    std::cout << b - 7 << std::endl;

    // please double c's value

    int c = 44;
    std::cout << 2 * c << std::endl;

    // please divide by 5 d's value

    int d = 125;
    std::cout << d / 5 << std::endl;

    // please cube of e's value

    int e = 8;
    std::cout << e * e * e << std::endl;

    // tell if f1 is bigger than f2 (print as a boolean)

    int f1 = 123;
    int f2 = 345;
    if (f1 > f2){
        std::cout << ("yes") << std::endl;
    }else {
        std::cout << ("no") << std::endl;
    }

    // tell if the double of g2 is bigger than g1 (print as a boolean)

    int g1 = 350;
    int g2 = 200;
    if (g1 * 2 < g2 * 2){
        std::cout << ("yes") << std::endl;
    }else {
        std::cout << ("no") << std::endl;
    }

    // tell if it has 11 as a divisor (print as a boolean)

    int h = 135798745;
    if (h%11==0){
        std::cout << "true" << std::endl;
    }else {
        std::cout << "false" << std::endl;
    }

    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    int i1 = 10;
    int i2 = 3;
    if (i1 > i2 * i2){
        std::cout << ("yes") << std::endl;
    }else {
        std::cout << ("no") << std::endl;
    }
    if (i1 > i2 * i2){
        std::cout << ("yes") << std::endl;
    }else {
        std::cout << ("no") << std::endl;
    }

    // tell if j is dividable by 3 or 5 (print as a boolean)

    int j = 1521;
    if (j%3==0){
        std::cout << "dividable by 3" << std::endl;
    }else {
        std::cout << "not dividable by 3" << std::endl;
    }
    if (j%5==0){
        std::cout << "dividable by 5" << std::endl;
    }else {
        std::cout << "not dividable by 5" << std::endl;
    }


    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    std::cout << currentSeconds << std::endl;



    return 0;
}