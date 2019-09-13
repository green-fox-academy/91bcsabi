#include <iostream>
using namespace std;

// - Create (dynamically) a two dimensional array
//   with the following matrix. Use a loop!
//   by dynamically, we mean here that you can change the size of the matrix
//   by changing an input value or a parameter or this combined
//
//   1 0 0 0
//   0 1 0 0
//   0 0 1 0
//   0 0 0 1
//
// - Print this two dimensional array to the output

int main(int argc, char* args[]) {

    int numList[] = {3, 4, 5, 6, 7};

    for(int i = 0; i < sizeof(numList)/sizeof(numList[0]); i++) {
        cout << numList[i] << endl;

    return 0;
}