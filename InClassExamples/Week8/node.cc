#include "node.h"

Node::Node() {
    number_ = 0.0;
    next_ = nullptr;
}


Node::Node(double inNumber) {
    number_ = inNumber;
    next_ = nullptr;
}

double Node::GetNumber(){
    return number_;
}

Node *Node::GetNext() {
    return next_;
}

void Node::InsertAtFront(Node *inDummyHeadPtr, Node *newFirstNodePtr) {
    Node *oldFirstNodePtr = inDummyHeadPtr->GetNext();
    inDummyHeadPtr->next_ = newFirstNodePtr;
    newFirstNodePtr->next_ = oldFirstNodePtr;
}
