#ifndef NODE_H_
#define NODE_H_

#include<iostream>

using namespace std;

class Node {
public:
	Node();
	Node(double inNumber, Node *inPtr);

	Node *GetNext() const;
	void SetNext(Node *inPtr);

	double GetFavoriteNumber() const;
	void SetFavoriteNumber(double inNumber);

	void PrintInfo() const;

private:
	double favoriteNumber_;
	Node *next_;
};

#endif
