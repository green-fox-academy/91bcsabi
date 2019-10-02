//
// Created by Csabi on 02/10/2019.
//

#include <iostream>
using namespace std;

int CowsAndBulls(){

    cout << "Let's play Bulls and Cows...Guess a 4 digit number!" << endl;
    char* myNum = "0917";
    string guess;
    cin >> guess;

    if(guess == myNum){
        cout << "4 COWS!" << endl;
    }else if(guess != myNum){
        cout << "N cows" << endl;
    }
    return 0;
}
