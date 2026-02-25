#include<iostream>
#include<string>

#include "Node.h"

using namespace std;

int main() {
	Node *headPtr;
	Node *tailPtr = nullptr;
	headPtr = new Node();

	// FIRST INSERT:
	Node *myNodePtr;
	myNodePtr = new Node("Paul", 54, "Music, Math, Reading, Woodworking");

	// Insert to front:
	//headPtr->SetNext(myNodePtr); 
	
	//Insert to back:
	headPtr->SetNext(myNodePtr); 
	tailPtr = myNodePtr;


	// SECOND INSERT:
	myNodePtr = new Node("Wyatt", 20, "Giving Dr. Wiegand a hard time, weight lifting");

	// Insert to front:
	//myNodePtr->SetNext(headPtr->GetNext());
	//headPtr->SetNext(myNodePtr);

	// Insert to back:
	tailPtr->SetNext(myNodePtr);
	tailPtr = myNodePtr;

	Node *currPtr;
	currPtr = headPtr->GetNext();
	while (currPtr != nullptr) {
		currPtr->Print();
		currPtr = currPtr->GetNext();
	}

	return 0;
}