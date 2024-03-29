#include <iostream>
#include <string>
using namespace std;

// - Create a two dimensional array
//   which can contain the different shades of specified colors
// - In `colors[0]` store the shades of green:
//   `"lime", "forest green", "olive", "pale green", "spring green"`
// - In `colors[1]` store the shades of red:
//   `"orange red", "red", "tomato"`
// - In `colors[2]` store the shades of pink:
//   `"orchid", "violet", "pink", "hot pink"`

int main(int argc, char* args[]) {

    string colors[3];

    colors[0] = "lime, forest green, olive, pale green, spring green";
    colors[1] = "orange red, red, tomato";
    colors[2] = "orchid, violet, pink, hot pink";

    for(int i = 0; i < sizeof(colors)/sizeof(colors[0]); i++) {

        cout << colors[i] << endl;
    }
    return 0;
}