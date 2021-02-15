#ifndef NODE_
#define NODE_

#include<string>

using namespace std;

class Node {
public:
  Node(string inData, Node *inNext);

  Node *GetNextNode() const;
  string GetData() const;

  bool IsTerminalNode() const;

private:
  Node *next_;
  string data_; // In a real LL, this will be more general
};

#endif
