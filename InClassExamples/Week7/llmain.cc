#include<iostream>
#include<string>
#include<node.h>

using namespace std;

int main() {
    string constantName;
    double constantValue;
    // We'll need the head of a linked list, I think!

    do {
        cout << "Give me the name of a cool constant (or 'quit' to end): ";
        cin >> constantName;
        if (constantName != "quit") {
            cout << "What's it's value? ";
            cin >> constantValue;

            Node* myNewCoolNode = new Node(constantValue, constantName, nullptr);
            // Here we want to wire this into a linked list!
        }        
        cout << endl;
    } while (constantName != "quit");

    // Down here, I'm going to spin through the linked list and print everything
    
    // This program is done!
    return 0;
}