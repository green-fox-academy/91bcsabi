#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
    string url("https//www.reddit.com/r/nevertellmethebots");

    url.insert(5, ":");
    url.replace(39, 4, "odds");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    cout << url << endl;

    return 0;
}