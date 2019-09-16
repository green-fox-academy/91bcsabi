#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
    string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    quote.insert(21, "always takes longer than ");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    cout << quote << endl;

    return 0;
}