#include <node.h>

Node::Node() {
    interestingConstant_ = 0.0;
    nameOfConstant_ = "DUMMY";
    nextPtr_ = nullptr;
}

Node::Node(double inConstant, string inName, Node* inPtr) {
    interestingConstant_ = inConstant;
    nameOfConstant_ = inName;
    nextPtr_ = inPtr;
}

// Accessor methods

double Node::GetConstantValue() const {
    return interestingConstant_;
}

string Node::GetNameOfConstant() const {
    return nameOfConstant_;
}

Node*   Node::GetNextPtr() const {
  return nextPtr_;
}

// Mutator method

void Node::SetConstant(string inName, double inValue) {
    interestingConstant_ = inValue;
    nameOfConstant_ = inName;
}

void Node::SetNextPtr(Node* inPtr) {
    nextPtr_ = inPtr;
}


// Other Methods

void Node::Print() const {
    cout << nameOfConstant_ << " : " 
         << interestingConstant_ << "  [ "
         << this << " ==> " << nextPtr_ << " ]"
         << endl;
}
