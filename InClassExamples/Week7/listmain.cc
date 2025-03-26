#include<iostream>

#include "node.h"

using namespace std;

int main() {
    string textInput;
    Node *headPtr = new Node();
    Node *lastPtr = headPtr;

    do {
        cout << "Enter some text (quit to end): ";
        getline(cin, textInput);
        if (textInput != "quit") {
            Node *newNode = new Node(textInput);
            // Either insert after the head
            //headPtr->InsertAfter( newNode );
            // Or insert at the end
            lastPtr->InsertAfter( newNode );
            lastPtr = newNode;
        }
    } while (textInput != "quit");

    cout << endl << "These were your strings:" << endl;
    Node *currPtr = headPtr->GetNext();
    while (currPtr != nullptr) {
        currPtr->Print();
        currPtr = currPtr->GetNext();
    }
    
    //delete headPtr;

    return 0;
}