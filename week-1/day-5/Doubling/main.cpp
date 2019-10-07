#include <iostream>
#include <string>
using namespace std;

// - Create an integer variable named `baseNum` and assign the value `123` to it
// - Create a function called `doubling` that doubles it's input parameter and returns with an integer
// - Print the result of `doubling(baseNum)`

int doubling( int x) {
    x = 2 * x;
    return x;
}

int main(int argc, char* args[]){

    int baseNum = 123;
    cout << doubling(baseNum) << endl;

    return 0;
}