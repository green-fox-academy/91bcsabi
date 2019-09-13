#include <iostream>
using namespace std;

// - Create an array variable named `s`
//   with the following content: `[1, 2, 3, 8, 5, 6]`
// - Change the 8 to 4
// - Print the fourth element

int main(int argc, char* args[]){

    int s[6] = {1, 2, 3, 8, 5, 6};
    int temp;
    temp = s[3];
    s[3] = s[5];
    s[5] = temp;

    cout << s[3] << endl;

    return 0;
}