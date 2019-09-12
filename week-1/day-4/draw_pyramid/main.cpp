
#include <iostream>

int main() {

    int symbol;
    std::cout << "enter a number" << std::endl;
    std::cin >> symbol;
    for ( int i = 0; i < symbol; i++ )
    {
        for (int j= (symbol + 1) - i ; j > 0 ; j--)
            std::cout << " ";
        for( int a = 0; a < i * 2 + 1; a++)
            std::cout << "+";
        std::cout<< std::endl;

    }

    return 0;
}