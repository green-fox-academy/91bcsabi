#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    map <string, string> myMap {
            {"978-1-60309-452-8", "A Letter to Jo"},
            {"978-1-60309-459-7","Lupus"},
            {"978-1-60309-444-3","Red Panda and Moon Bear"},
            {"978-1-60309-461-0","The Lab"}
    };

    for (map<string, string>::iterator it = myMap.begin(); it != myMap.end(); it++ ) {
        cout << it->second << " (ISBN: " << it->first << ")" <<endl;
    }

    myMap.erase("978-1-60309-444-3");
    myMap.erase("The Lab");

    myMap.insert(pair<string, string>("978-1-60309-450-4","They Called Us Enemy"));
    myMap.insert(pair<string, string>("978-1-60309-453-5","Why Did We Trust Him?"));

    myMap.find("478-0-61159-424-8");





    return 0;
}