#include <iostream>
using namespace std;

// - Create an array variable named `numList`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Double all the values in the array

int main(int argc, char* args[]) {

    int numList[] = {3, 4, 5, 6, 7};

    for(int i = 0; i < sizeof(numList)/sizeof(numList[0]); i++){

        cout << 2 * numList[i] << endl;
    }
        return 0;
}