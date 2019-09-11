
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number" << std::endl;
    std::cin >> number;

    for (int i=1; i<=number; i = i + 2 ){
        for (int j=1; j<=i; j = j +2){
            std::cout << "+";
        }
        std::cout << "\n";
    }

}