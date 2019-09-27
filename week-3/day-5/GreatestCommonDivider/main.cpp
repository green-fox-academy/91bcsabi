#include <iostream>
//Find the greatest common divisor of two numbers using recursion.
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    else return gcd(a, b-a);
}
int main() {
    int a = 112, b = 98;
    cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
    return 0;
}