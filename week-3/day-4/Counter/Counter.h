#include <iostream>
using namespace std;//
// Created by Csabi on 26/09/2019.
//
#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {

public:
    Counter();
    explicit Counter(int x);

    void add();
    void add(int x);
    int get();
    void reset();

private:
    int _initialValue;
    int _value;
};


#endif //COUNTER_COUNTER_H
