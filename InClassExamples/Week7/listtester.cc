#include "Node.h"

#include<iostream>
#include<string>

using namespace std;

int main() {
    string doneYet = "No";
    Node *headPtr;
    headPtr = new Node();

    //cout << "Awesome Node's amount: " << headPtr->GetAmount() << endl;
    //cout << "Awesome Node's next: "   << headPtr->GetNext() << endl;

    while (doneYet[0] == 'n' || doneYet[0] == 'N') {
        double val;
        cout << "Enter an amount: ";
        cin >> val;

        Node *mynode = new Node(val, nullptr);
        InsertToFront(headPtr, mynode);

        cout << "Are you done? (y/n): ";
        cin >> doneYet;
    }

    double val;
    cout << "Give me a number to look for: ";
    cin >> val;
    Node *foundNode = FindValueInList(headPtr, val);

    if (foundNode == nullptr) cerr << "ERROR:  There is no " << val << " in the list!!" << endl;
    else cout << "Yep, it's there!" << endl;

    Node *current = headPtr->GetNext();
    while ( current != nullptr ) {
        cout << current->GetAmount() << endl;
        current = current->GetNext();
    }

    return 0;
}