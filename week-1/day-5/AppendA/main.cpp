#include <iostream>
#include <string>
using namespace std;

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

int main(int argc, char* args[]) {

    string animals[3] = {"koal", "pand", "zebr"};

    for(int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {

        cout << animals[i] << "a" << endl;
    }
    return 0;
}