#include <iostream>
#include <string>
using namespace std;



int main(int argc, char* args[]){

    cout << "Name?" << endl;
    string reply;
    getline(cin, reply);
    cout << "hello " << reply << endl;

    return 0;
}