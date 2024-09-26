#ifndef NODE_H_
#define NODE_H_

#include<string>

using namespace std;


class Node {
public:
  Node(string inName, Node *inNext);

  Node *GetNext() const;
  void SetNext(Node *inNext);
  
  string GetString() const;

  bool IsTerminal() const;

private:
 Node*  next_;
 string name_; 
};


#endif