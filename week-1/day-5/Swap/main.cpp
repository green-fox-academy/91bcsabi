#include <iostream>
using namespace std;


void swap (int& x, int& y);

int main() {
    int a = 15;
    int b = 23;
    cout << a << ", " << b << endl;

    swap(a, b);
    cout << a << ", " << b << endl;

    return 0;
}

void swap (int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}