#include <iostream>
using namespace std;

    // - Create an array variable named `t`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element

int main(int argc, char* args[]) {

    int t[] = { 1, 2, 3, 4, 5};

    cout << ++t[2] << endl;

    return 0;
}