#include<iostream>
#include<string>
#include<node.h>

using namespace std;

void insertNewNode(Node *dummyHeadPtr, Node *nodeToAddPtr) {
    nodeToAddPtr->SetNextPtr(dummyHeadPtr->GetNextPtr());
    dummyHeadPtr->SetNextPtr(nodeToAddPtr);
}


int main() {
    Node *headNodePtr = new Node();
    string constantName;
    double constantValue;

    // Get interesting constants from the user and store them in a list!!
    do {
        // Get user input here
        cout << "Give me the name of a cool constant (or 'quit' to end): ";
        cin >> constantName;
        if (constantName != "quit") {
            cout << "What's it's value? ";
            cin >> constantValue;

            // Create and node and put it into the list
            Node* newNodePtr = new Node(constantValue, constantName, nullptr);
            insertNewNode(headNodePtr, newNodePtr);
        }        
        cout << endl;
    } while (constantName != "quit");

    // Print the list!!
    cout << endl << "List Contents:" << endl << "---------------" << endl;
    cout << "HeadPtr:  [" << headNodePtr << " ==> " << headNodePtr->GetNextPtr() << " ]" << endl;
    Node *currNodePtr = headNodePtr->GetNextPtr();;   // Initialize
    while ( currNodePtr != nullptr ) {
        //(*currNodePtr).Print();
        currNodePtr->Print();
        currNodePtr = currNodePtr->GetNextPtr();  // Step
    }
    cout << endl;

    // This program is done!
    return 0;
}