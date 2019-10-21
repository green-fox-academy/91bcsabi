#include <stdio.h>

// Create a program which asks for the age of the user and stores it
// Create a function which takes that age as a parameter and returns if the user is
// old enough to buy himself alcohol in Hungary

int main()
{
    printf("What is your age?\n");
    int age = 0;
    scanf("%d", &age);
    int is_user = 18;

    if (is_user > age) {
        printf("You are not allowed to buy alcohol");
    } else {
        printf("You can buy alcohol");
    }

    return 0;
}