#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    srand(time(NULL));
    string play="yes";
    int nums=4;       // number of values in an answer (must NOT exceed 10)
    vector<int> answer;


    while (play=="yes" || play=="YES" || play=="Y" || play=="Yes" || play=="y") { //plays the game

        answer.push_back(rand()%10+1);
        do {                              //fills vector with unique random numbers
            for (int i=1; i<nums; i++) {
                answer.push_back(rand()%10+1);
                if (answer[i]==answer[i-1]) {
                    i=i-1;
                    continue;
                }
            }
        } while (answer.size()!=nums);

        for (int i=0; i<nums; i++) {
            cout<<answer[i];
        }

        cout<<"Do you want to play again?"<<'\n';
        cin>>play;
        answer.clear();
    } //game ends


    if (play=="no" || play=="n" || play=="No" || play=="NO" || play=="N") { //terminates and checks for exceptions
        cout<<"Thank you for playing!"<<'\n';
        return 0;
    } else {
        cerr<<"Error: wrong input. Terminating."<<'\n';
        return 0;
    }

    return 0; //safety return
}