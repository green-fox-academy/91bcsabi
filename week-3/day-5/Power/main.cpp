#include <iostream>
// Given base and n that are both 1 or more,
// compute recursively (no loops) the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

using namespace std;

int powerN(int base, int q);
int main()
{
    int base;
    int q;
    cout << "Enter a positive integer: ";
    cin >> base;
    cout << "Enter another positive integer: ";
    cin >> q;
    cout << powerN(base, q) << endl;
    return 0;
}
int powerN(int base, int q)
{
    if(q != 0)
        return (base*powerN(base,q - 1));
    else{
        return 1;
    }
}

