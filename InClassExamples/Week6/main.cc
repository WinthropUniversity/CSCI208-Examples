#include<iostream>
#include<string>

#include "Node.h"

using namespace std;

int main() {
  string input = "";
  Node *headPtr = new Node();

  do {
    cout << "Name a shape (or type 'DONE'): ";
    cin >> input;

    // Create a node and connect it
    if (input != "DONE") {
      Node *oldFirstNodePtr = headPtr->GetNext();

      Node *shapeNodePtr = new Node(input);
      headPtr->SetNext( shapeNodePtr );
      shapeNodePtr->SetNext(oldFirstNodePtr);
    }
  } while (input != "DONE");


  Node *current = headPtr->GetNext();
  while (current != nullptr) {
    current->Print();
    current = current->GetNext();
  }
  return 0;
}
