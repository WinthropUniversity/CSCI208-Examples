#include "Node.h"



Node::Node(string inName, Node *inNext) {
    name_ = inName;
    next_ = inNext;
}

Node *Node::GetNext() const {
    return next_;
}

void Node::SetNext(Node *inNext) {
    next_ = inNext;
}

string Node::GetString() const {
    return name_;
}

bool Node::IsTerminal() const {
    return (next_ == nullptr);
}