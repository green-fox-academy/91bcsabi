#include <iostream>
using namespace std;

int fibonacci(int x) {
    if ((x==1)||(x==0)) {
        return x;
    } else {
        return(fibonacci(x-1)+fibonacci(x-2));
    }
}
int main()
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "Fibonacci sequence containing " << x << " element(s)" << endl;
    for (int i = 0; i < x; ++i) {
        cout << fibonacci(i) << " ";
    }
}