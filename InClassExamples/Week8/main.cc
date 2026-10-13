#include<iostream>
#include<string>

#include <Node.h>

using namespace std;

int main() {
	int count=0;
	Node *headPtr;
	Node *tailPtr;
	
	cout << "How many numbers to store? ";
	cin >> count;

	// Initialize our linked list
	headPtr = new Node(); // Dummy head node
	tailPtr = headPtr;

	// Insert into the linked list
	for (int idx=0; idx<count; idx++) {
		double number;

		cout << "What's a good number? ";
		cin >> number;

		// Store this in the list
		Node *newNodePtr = new Node(number, nullptr);
		tailPtr->SetNext(newNodePtr);
		tailPtr = newNodePtr;
	}

	// Traverse list and print
	cout << endl << endl;
	cout << "Head: " << headPtr << " ==> " << headPtr->GetNext() << endl << endl;
	Node *currPtr = headPtr->GetNext(); // Init
	while (currPtr != nullptr) {        // Condition
		currPtr->PrintInfo();           // Work
		currPtr = currPtr->GetNext();   // Interate
	}
	return 0;
}