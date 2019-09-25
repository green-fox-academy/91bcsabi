#include <iostream>
using namespace std;
#include "PostIt.h"
#include "BlogPost.h"

int main() {

        PostIt myobj;
        myobj.backgroundcolor = "orange";
        myobj.textcolor = "blue";
        myobj.text = "Idea1";

        cout << myobj.backgroundcolor << " " << myobj.textcolor << " " << myobj.text <<endl;

    return 0;
}