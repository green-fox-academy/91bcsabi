#include <stdio.h>

// Create a program which asks for a number and stores it
// Create a function which takes a number as a parameter and
// returns 1 if that number is even and returns 0 otherwise
// (in this case 0 is an even number)

int is_oddOrEven(int a)
{
    if (a%2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int a;

    printf("Please enter a number:\n");
    scanf("%d", &a);

    if (is_oddOrEven(a))
        printf("Your number is even.");
    else
        printf("Your number is odd.");
    return 0;
}