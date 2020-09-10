#ifndef SIMPLESTACK_
#define SIMPLESTACK_

#include<iostream>
#include<string>
#include<node.h>

using namespace std;

class SimpleStack {
public:
  SimpleStack();

  void Push(string data);
  string Pop();

  bool IsEmpty() const;
  void Clear();

  void PrintStack() const;

private:
  Node *front_;
};


#endif
