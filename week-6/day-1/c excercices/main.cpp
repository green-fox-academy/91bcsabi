#include <stdio.h>
#include <string>

int main() {
    // Modify this program to greet you instead of the World!
    printf("Hello Csaba!\n");
    //Greet 3 of your classmates with this program, in three separate lines
    printf("Hello Levi!\n""Hello Tomi!\n""Hello Laci!\n");
    //Write a program that prints a few details to the terminal window about you
    std::string name = "Csaba";
    int age = 28;
    int height = 170;
    printf("%s is %d years old and %d meter tall", name.c_str(), age, height);
    printf("\n");
    //Create a program that prints a few operations on two numbers: 22 and 13
    int a = 22;
    int b = 13;
    int c = a + b;
    printf("%d", c);
    printf("\n");
    //Write a program that stores a number, and the user has to figure it out.
    int myNum = 21;
    int num = 0;
    do {
        printf("Guess my number!\n");
        scanf("%d", &num);
    if (myNum > num) {
        printf("My number is higher\n");
    } else if (myNum < num) {
        printf("My number is lower\n");
    } else {
        printf("You found my number!\n");
    }
    } while (myNum != num);

    return 0;
}