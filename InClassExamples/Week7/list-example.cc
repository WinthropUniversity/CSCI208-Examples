#include<iostream>
#include<string>
#include "node.h"

using namespace std;

TriangleNode *promptUserForTriangle() {
    TriangleNode *myTrianglePtr;
    double base;
    double height;

    cout << "Enter the base of your triangle: ";
    cin >> base;
    cout << "Enter the height of your triangle: ";
    cin >> height;

    myTrianglePtr = new TriangleNode(height, base);

    return myTrianglePtr;
}


int main() {
    // This isn't need for the linked list example, just to 
    // understand how we indicate fields in an object
    TriangleNode myNode;  // myNode is an object
    myNode.wiegandInteger = 314;


    // Now let's build a linked list ...

    // Build am empty node
    TriangleNode *headPtr = new TriangleNode();

    cout << "headPtr's address is:    " << headPtr << endl;
    cout << "headPtr triangle base:   " << headPtr->GetBase() << endl;
    cout << "headPtr triangle height: " << headPtr->GetHeight() << endl;
    cout << "headPtr triangle next:   " << headPtr->GetNext() << endl << endl;

    string done="no";
    do {
        TriangleNode *newTriangle = promptUserForTriangle();
        headPtr->InsertAfter(newTriangle);

        cout << "Are you done? ";
        cin >> done;
    } while (done != "yes");

    cout << endl << "Here's your triangles!" << endl;
    cout << "The header ptr is:  " << headPtr << endl;
    cout << "The head's next is: " << headPtr->GetNext() << endl;
    
    // Traverse the linked list
    // Have some data variable holding the start
    TriangleNode *currentPtr = headPtr->GetNext();
    while (currentPtr != nullptr) {
        currentPtr-> Print();
        // Move that variable to the next node
        currentPtr = currentPtr->GetNext();
    }

    // Everything is okay
    return 0;
}