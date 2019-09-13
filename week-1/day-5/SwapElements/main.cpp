#include <iostream>
#include <string>
using namespace std;

// - Create an array variable named `abc`
//   with the following content: `["first", "second", "third"]`
// - Swap the first and the third element of `abc`

int main(int argc, char* args[]) {

    string abc[3] = {"first", "second", "third"};

    string temp;
    temp = abc[0];
    abc[0] = abc[2];
    abc[2] = temp;


    for(int i = 0; i < sizeof(abc)/sizeof(abc[0]); i++) {

        cout << abc[i] << endl;
    }

    return 0;
}