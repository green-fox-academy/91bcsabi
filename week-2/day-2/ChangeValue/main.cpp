#include <iostream>

using namespace std;

void passByReference (float *x){
    *x = 22.5;
}

int main (){
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    passByReference(&temperature);

    cout << "Temperature is changed to " << temperature << endl;

    return 0;
}

