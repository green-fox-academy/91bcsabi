//
// Created by Csabi on 01/10/2019.
//
#include <iostream>
#include <numeric>
#include <vector>
#include "myClass.h"

std::string getApple()
{
    return "apple";
}

int getSum()
{
    int arr[] = {1, 2, 3};

    int sum = std::accumulate(std::begin(arr), std::end(arr), 0, std::plus<int>());

    return sum;

}

bool Anagram()
{
    std::string str1 = "test";
    std::string str2 = "ttes";

    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

int letterCounter()
{
    std::string s="kutya";
    int cou = count(s.begin(),s.end(),'k');

    return cou;
}

int fibonacci(int index) {
    if (index < 2) {
        return 1;
    } else if(index) {
        std::vector<int> fibonacci;
        fibonacci.push_back(1);
        fibonacci.push_back(1);

        for (int i = 2; i < index; ++i) {
            fibonacci.push_back(fibonacci[i - 2] + fibonacci[i - 1]);
        }
        return fibonacci[index - 1];
    }
    else {
        return 0;
    }
}


    /*
    std::vector<int>::iterator it;

    int index = 7;

    it = std::find (a.begin(), a.end(), index);

    return it - a.begin() ;
    */




