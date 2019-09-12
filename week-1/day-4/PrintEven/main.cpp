#include <iostream>
#include <string>
using namespace std;

int main() {

    // Create a program that prints all the even numbers between 0 and 500

    int i;

    for(i = 1; i <= 500; i++){

        if(i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}