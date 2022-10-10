#include "FruitNode.h"
#include<iostream>
#include<string>

using namespace std;


int main() {
  FruitNode *dummyHeader = new FruitNode();
  string userFruitName;

  do {
    cout << endl << "Name a fruit (or 'DONE' if finished): ";
    cin >> userFruitName;

    if (userFruitName != "DONE") {
        FruitNode *newNode = new FruitNode(userFruitName);

        // Save off dummy header's next ptr
        FruitNode *oldRealFirstNode = dummyHeader->GetNextNode();

        // Connect the dummy header to the new node
        dummyHeader->SetNextNode(newNode);

        // Connect the new node to the old first node
        newNode->SetNextNode(oldRealFirstNode);
    }
  } while (userFruitName != "DONE");


  cout << endl << "Here are your fruits:" << endl;
  FruitNode *current = dummyHeader->GetNextNode();
  while (current != NULL) {
    cout << "  " << current->GetFruitName() << endl;
    current = current->GetNextNode();
  }

  delete dummyHeader;
  dummyHeader = NULL;
  
  // The program ran correctly
  return 0;
}