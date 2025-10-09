#include "Node.h"

Node::Node() {
    amount = 0.0;
    next = nullptr;
}

Node::Node(double inAmount, Node *inNext) {
    amount = inAmount;
    next = inNext;
}


double Node::GetAmount() const {
    return amount;
}

void Node::SetAmount(double inAmount) {
    amount = inAmount;
}

Node *Node::GetNext() {
    return next;
}

void Node::SetNext(Node *inNext) {
    next = inNext;
}


void InsertToFront(Node *headPtr, Node *newNode) {
    newNode->SetNext(headPtr->GetNext());
    headPtr->SetNext(newNode);
}


// Linear Search
Node *FindValueInList(Node *headPtr, double val) {
    Node *current = headPtr->GetNext();
    Node *found = nullptr;

    while ((current != nullptr) && (found == nullptr)) {
        if (current->GetAmount() == val) found = current;
        current = current->GetNext();
    }

    return found;
}
