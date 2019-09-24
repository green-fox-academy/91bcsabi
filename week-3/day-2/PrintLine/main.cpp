#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file first.

    ifstream CsabiFile;
    CsabiFile.open ("my-file.txt");
    string line;
    int count = 0;

    if(CsabiFile.is_open()) {
        while (getline(CsabiFile, line))
            count++;

        cout << "Numbers of lines in the file : " << count << endl;
    }

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file.
    return 0;
}
