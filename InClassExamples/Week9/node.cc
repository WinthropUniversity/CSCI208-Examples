#include "node.h"

Node::Node() {
  number_ = 0.0;
  next_ = nullptr;
}

Node::Node(double inNum) {
  number_ = inNum;
  next_ = nullptr;
}

double Node::GetNumber() const {
  return number_;
}

Node *Node::GetNext() {
  return next_;
}

void Node::SetNext(Node *inPtr) {
  next_ = inPtr;
}
