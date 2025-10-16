#include "Node.h"


Node::Node() {
    favoriteNumber_ = 0.0;
    next_ = nullptr;
}

Node::Node(double inNum) {
    favoriteNumber_ = inNum;
    next_ = nullptr;
}



double Node::GetFavoriteNumber() const {
    return favoriteNumber_;
}

void Node::SetFavoriteNumber(double inNum) {
    favoriteNumber_ = inNum;
}

Node *Node::GetNext() {
    return next_;
}

void Node::SetNext(Node *inNodePtr) {
    next_ = inNodePtr;
}

void Node::Print() const {
    cout << "Favorite Number (" << this << "): " << GetFavoriteNumber() << " (next: " << next_ << ")" << endl;
}
