#include "List.h"


List::List() {
    front_ = nullptr;
}

void List::InsertAtFront(string inName) {
    Node *nodeToAdd = new Node(inName, front_);
    front_ = nodeToAdd;
}


void List::PrintList() const {
    cout << endl;
    cout << "NAME LIST: " << endl;
    cout << "-----------" << endl;

    Node *current = front_;  //Init
    while ( current != nullptr ) { // Condit
      cout << current->GetString() << endl;
      current = current->GetNext();  // "Increment"
    }

    cout << endl;
}


string List::PeekAtFront() const {
    string returnString = "";

    if (front_ != nullptr) 
        returnString = front_->GetString();

    return returnString;
}
