#include "node.h"


Node::Node() {
    textLine_ = "";
    next_ = nullptr;
}


Node::Node(string inText) {
    textLine_ = inText;
    next_ = nullptr;
}


Node::Node(string inText, Node *inNodeptr) {
    textLine_ = inText;
    next_ = inNodeptr;
}

void Node::InsertAfter(Node *inNewFirstNode) {
   inNewFirstNode->next_ = this->next_; 
   this->next_ = inNewFirstNode;
}


void Node::Print() const {
    cout << "Node text: " << this->textLine_ << endl;
}

string Node::GetTextLine() const {
    return textLine_;
}

Node *Node::GetNext() {
    return next_;
}



