#include "FruitNode.h"
#include<iostream>
#include<string>

using namespace std;


int main() {
  FruitNode *dummyHeader = new FruitNode();

  cout << "Dummy Header: " << dummyHeader << endl;
  cout << "Header's Fruit:  [" << dummyHeader->GetFruitName() << "]" << endl;

  string userFruitName;

  do {
    cout << "Name a fruit (or 'DONE' if finished): ";
    cin >> userFruitName;

    FruitNode *newNode = new FruitNode(userFruitName);

    // Save off dummy header's next ptr
    FruitNode *oldRealFirstNode = dummyHeader->GetNextNode()

    // Connect the dummy header to the new node
    dummyHeader->SetNextNode(newNode);

    // Connect the new node to the old first node
    newNode->SetNextNode(oldRealFirstNode);
  } while (userFruitName != "DONE");


  cout << endl << "Here are your fruits:" << endl;
  FruitNode *current = dummyHeader->GetNextNode();
  while (current != NULL) {
    cout << "  " << current->GetFruitName() << endl;
    current = current->GetNextNode();
  }
  // The program ran correctly
  return 0;
}