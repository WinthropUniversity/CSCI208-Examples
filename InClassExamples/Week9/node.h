#ifndef NODE_H_
#define NODE_H_

class Node {
public:
  Node();
  Node(double inNum);

  double GetNumber() const;
  Node *GetNext();
  void SetNext(Node *inPtr);

private:
  double number_;
  Node *next_;
};

#endif
