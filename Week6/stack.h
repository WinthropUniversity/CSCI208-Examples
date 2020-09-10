#ifndef STACK_
#define STACK_

#include<iostream>
#include<string>
#include<node.h>

using namespace std;

class Stack {
public:
  Stack();

  void Push(string data);
  string Pop();

  bool IsEmpty() const;
  void Clear();

  void PrintStack() const;

private:
  Node *front_;
};


#endif
