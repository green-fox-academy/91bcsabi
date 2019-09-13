#include <iostream>
using namespace std;

int main(int argc, char* args[]) {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`

    int numbers[] = {4, 5, 6, 7};

    for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        cout << numbers[i] << endl;
    }

    return 0;
}