#include "Node.h"


Node::Node() {
	favoriteNumber_ = 0.0;
	next_ = nullptr;
}

Node::Node(double inNumber, Node *inPtr) {
	favoriteNumber_ = inNumber;
	next_ = inPtr;
}


Node *Node::GetNext() const {
	return next_;
}

void Node::SetNext(Node *inPtr) {
	next_ = inPtr;
}

double Node::GetFavoriteNumber() const {
	return favoriteNumber_;
}

void Node::SetFavoriteNumber(double inNumber) {
	favoriteNumber_ = inNumber;
}


void Node::PrintInfo() const {
	cout << "Node [" << this << "]:" << endl;
	cout << "   Number=" << GetFavoriteNumber() << endl;
	cout << "   Next=" << GetNext() << endl << endl;
}