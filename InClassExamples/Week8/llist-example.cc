#include<iostream>
#include "node.h"

using namespace std;

int main() {
    Node *headNodePtr = new Node();
    Node *currNodePtr;

    int count=0;
    cout << "How many numbers to store? ";
    cin >> count;

    for (int idx=0; idx<count; idx++) {
        double value = 0.0;
        cout << "Enter a number: ";
        cin >> value;

        currNodePtr = new Node(value);
        headNodePtr->InsertAtFront(headNodePtr, currNodePtr);
    }

    // Print the list:
    cout << "List: ";
    currNodePtr = headNodePtr->GetNext();
    while (currNodePtr == nullptr) {
        cout << currNodePtr->GetNumber();
        currNodePtr = currNodePtr->GetNext();
    }
    cout << endl;

    return 0;
}