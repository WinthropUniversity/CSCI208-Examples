#ifndef NODE_H__
#define NODE_H__

#include<iostream>

using namespace std;

class Node {
public:
  Node();
  Node(double inNumber);

  double GetNumber();
  Node* GetNext();

  void InsertAtFront(Node *inDummyHeadPtr, Node *newFirstNodePtr);

private:
  double number_;
  Node *next_;
};

#endif