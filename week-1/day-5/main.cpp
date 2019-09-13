#include <iostream>
using namespace std;

void determineAreaRec();

int main() {

    determineAreaRec();
    system("pause");

    return 0;
}
void determineAreaRec(){
    int length = 0, width = 0;
    cout << "Please enter length and width";
    cin >> length >> width;
    cout << "The area is:" << length * width << "." << endl;
}