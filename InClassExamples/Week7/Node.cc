#include "Node.h"

Node::Node() {
	name_ = "NONAME";
	age_ = 0;
	hobbies_ = "NONE";
	next_ = nullptr;
}


Node::Node(string inName, int inAge, string inHobbies) {
	name_ = inName;
	age_ = inAge;
	hobbies_ = inHobbies;
	next_ = nullptr;
}


string Node::GetName() const {
	return name_;
}

int Node::GetAge() const {
	return age_;
}

string Node::GetHobbies() const {
	return hobbies_;
}


Node *Node::GetNext() {
	return next_;
}

void Node::SetNext(Node *inPtr) {
	next_ = inPtr;
}


void Node::Print() const {
	cout << GetName() << " (" << GetAge() << ") likes: " << GetHobbies() << endl;
}