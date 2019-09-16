#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
    string todoText = "My todo:\n - Buy milk\n"" - Download games\n""    - Diablo";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    cout << todoText << endl;

    return 0;
}