#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[]){

    string example("In a dishwasher far far away");
    cout << "Before the replace was : " << example << endl;
    example.replace(5, 10, "galaxy");

    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    cout << "After the replace is : " << example << endl;
    return 0;
}