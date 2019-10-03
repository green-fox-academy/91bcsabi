//
// Created by Csabi on 02/10/2019.
//

#include <iostream>
#include <vector>

using namespace std;

int CowsAndBulls(){

    cout << "Let's play Bulls and Cows...Guess a 4 digit number!" << endl;

    vector<int> vecOfRandomNums(4);

    generate(vecOfRandomNums.begin(), vecOfRandomNums.end(), []() {
        return rand() % 9;
    });


    }
    string guess;
    cin >> guess;

    if(guess == myNum){
        cout << "4 COWS!" << endl;
    }else if(guess != myNum){
        cout << "N cows" << endl;
    }
    return 0;
}
