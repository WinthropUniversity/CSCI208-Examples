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
  } while (userFruitName != "DONE");

  // The program ran correctly
  return 0;
}