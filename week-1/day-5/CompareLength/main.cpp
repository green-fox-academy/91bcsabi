#include <iostream>

using namespace std;

int main() {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print "p2 is longer" if `p2` has more elements than `p1`

    int p1[] = {1, 2, 3};
    int p2[] = {4, 5,};

    if(int i = 0;sizeof(p1) < sizeof(p2)){
        cout << "p2 is longer" << endl;
    }else{
        cout << "p2 is no longer" << endl;
    }

    return 0;
}