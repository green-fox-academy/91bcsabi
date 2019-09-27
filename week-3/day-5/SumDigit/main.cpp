#include <iostream>

//Given a non-negative integer n, return the sum of its digits recursively (without loops).
//Divide (/) by 10 removes the rightmost digit (e.g. 126 / 10 is 12).

using namespace std;

int add(int n);
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << add(n);
    return 0;
}
int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}