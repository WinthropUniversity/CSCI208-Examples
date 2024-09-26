#ifndef LIST_H_
#define LIST_H_

#include<string>
#include<iostream>

#include "Node.h"

using namespace std;

class List {
public:
    List();

    void InsertAtFront(string inName);
    void PrintList() const;
    string PeekAtFront() const;

private:
    Node *front_;
};

#endif