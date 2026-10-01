#include "Node.h"

Node::Node() {
  shapename_ = "None";
  next_ = nullptr;
}

Node::Node(string inName) {
  shapename_ = inName;
  next_ = nullptr;
}

Node::Node(string inName, Node *inPtr) {
  shapename_ = inName;
  next_ = inPtr;
}


string Node::GetShapeName() const {
    return shapename_;
}

void Node::SetShapeName(string inName) {
  shapename_ = inName;
}


Node *Node::GetNext() const {
  return next_;
}


void Node::SetNext(Node *inPtr) {
  next_ = inPtr;
}


void Node::Print() const {
  cout << "Shape: " << GetShapeName() << endl;
}
