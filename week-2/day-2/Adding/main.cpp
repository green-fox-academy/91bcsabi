#include <iostream>
using namespace std;

void passByValues(int x, int y){
    x = 20;
    y = 17;
}

int main(){
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    passByValues(a, b);

    cout << a + b << endl;

    return 0;
}

