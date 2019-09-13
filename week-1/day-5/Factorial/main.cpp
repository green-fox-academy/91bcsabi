#include <iostream>
#include <string>
using namespace std;

// - Create a function called `factorio`
//   it should calculate its input's factorial.
//   it should not return it, but take an additional integer parameter and overwrite its value.

int factorio(int factorial, int& value );
int main(int argc, char* args[]) {

    int num = 0;
    int a = 0;
    cout << "Give me a number under 10";
    cin >> num;
    factorio(num,a);
    cout << a;

    return 0;
}

int factorio( int factorial, int& value){
    value = 1;
    for (int i = 1; i <= factorial ; i++) {
        value = i * value;
    }
}