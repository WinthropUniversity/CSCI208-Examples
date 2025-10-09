#ifndef NODE_H_
#define NODE_H_

#include<iostream>
#include<string>

using namespace std;

class Node {
public:
    Node();
    Node(double inAmount, Node *inNext);

    double GetAmount() const;
    void SetAmount(double inAmount);

    Node *GetNext();
    void SetNext(Node *inNext);

private:
  double amount;
  Node *next;
};


void InsertToFront(Node *headPtr, Node *newNode);
Node *FindValueInList(Node *headPtr, double val);

#endif