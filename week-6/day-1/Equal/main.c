#include <stdio.h>

// Create a program which asks for two integers and stores them separatly
// Create a function which takes two numbers as parameters and
// returns 1 if they are equal and returns 0 otherwise

int is_equal(int a, int b)
{
    if (a == b)
        return 1;
    else
        return 0;
}

int main() {
    int a;
    int b;

    printf("Please enter two numbers(separate numbers with space):\n");
    scanf("%d %d", &a, &b);

    if (is_equal(a, b))
        printf("Your numbers are equal.");
    else
        printf("Your numbers are not equal.");
    return 0;
}