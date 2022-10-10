#include "FruitNode.h"
#include<iostream>
#include<string>

using namespace std;


int main() {
  FruitNode *dummyHeader = new FruitNode();

  cout << "Dummy Header: " << dummyHeader << endl;
  cout << "Header's Fruit:  [" << dummyHeader->GetFruitName() << "]" << endl;
  // The program ran correctly
  return 0;
}