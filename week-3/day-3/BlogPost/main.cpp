#include <iostream>
using namespace std;
#include "BlogPost.h"

int main() {
    BlogPost myObj;
    myObj.AuthorName = "John Doe";
    myObj.title = "Lorem Ipsum";
    myObj.text = "Lorem ipsum dolor sit amet.";
    myObj.publicationDate = "2000.05.04.";

    cout << myObj.title << " Titled by " << myObj.AuthorName << " posted at " << myObj.publicationDate <<endl;
    cout << myObj.text <<endl;



    return 0;
}