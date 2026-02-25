#include<iostream>
#include<string>

using namespace std;

class Node {
public:
	Node();
	Node(string inName, int inAge, string inHobbies);

	string GetName() const;
	int GetAge() const;
	string GetHobbies() const;

	// Set methods??
	Node *GetNext();
	void SetNext(Node *inPtr);

	void Print() const;

private:
	string name_;
	int age_;
	string hobbies_;
	Node *next_;
};