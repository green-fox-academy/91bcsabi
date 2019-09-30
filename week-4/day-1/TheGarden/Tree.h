//
// Created by Csabi on 30/09/2019.
//

#ifndef THEGARDEN_TREE_H
#define THEGARDEN_TREE_H

#include <iostream>
using namespace std;


class Tree {
public:
    Tree(string purpleTree, string orangeTree) : _purpleTree(purpleTree), _orangeTree(orangeTree){}
    Tree();

    void watering();

protected:
    string _purpleTree;
    string _orangeTree;

};


#endif //THEGARDEN_TREE_H
