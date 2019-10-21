#include <stdio.h>

// Create a program which asks for a number and stores it
// Create a function which takes a number as a parameter
// and returns 1 if the number is a prime number and 0 otherwise
// (in this case 0 is not considered as a prime number)

int is_prime(int input)
{
    int prime_indicator = 0;
    for (int i = 2; i < input; ++i) {
        if (input % i) {
            ++prime_indicator;
        }
    }
    if (input == prime_indicator + 2)
        return 1;
    else
        return 0;
}

int main()
{
    int input_number;
    printf("Please enter a number:\n");
    scanf("%d", &input_number);

    if (is_prime(input_number))
        printf("Your number is a prime!\n");
    else
        printf("Your number is not a prime!\n");
    return 0;
}