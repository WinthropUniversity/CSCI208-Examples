#include<iostream>
#include<string>

#include "Node.h"

using namespace std;

int main() {
    //Node foobar(42.0);

    //foobar.SetFavoriteNumber(32.32);
    //foobar.SetNext(nullptr);

    //cout << "The value in the node is: " << foobar.GetFavoriteNumber() << endl;
    //foobar.Print();

    Node *headPtr = new Node();
    Node *lastPtr = headPtr;

    string input = "Yes";
    while (input[0] == 'Y' || input[0] == 'y') {
        double num;
        cout << "Number: ";
        cin >> num;

        // Create a node at end and store that value
        Node *nodeToAdd = new Node(num);
        lastPtr->SetNext(nodeToAdd);
        lastPtr = nodeToAdd;

        cout << "Keep going? ";
        cin >> input;
    }
    
    cout << endl << "Your Numbers Were: "<< endl;
    Node *current = headPtr->GetNext();
    while (current != nullptr) {
        current->Print();
        current = current->GetNext();
    }

    return 0;
}