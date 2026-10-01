#ifndef NODE_H_
#define NODE_H_

#include<string>
#include<iostream>

using namespace std;


class Node {
  Node();
  Node(string inName);
  Node(string inName, Node *inPtr);

  string GetShapeName() const;
  void SetShapeName(string inName);

  Node *GetNext() const;
  void SetNext(Node *inPtr);

  void Print() const;

private:
  string shapename_;
  Node *next_;

};



#endif

