#include<iostream>
#include "node.h"

using namespace std;

int main() {
  double input1 = 0.0;
  Node* node1ptr = new Node();
  
  cin >> input1;
  while (input1 != -999) {
    Node *node2ptr = new Node(input1);
    node2ptr->SetNext(node1ptr->GetNext());
    node1ptr->SetNext(node2ptr);
    cin >> input1;
  }

  cout << endl << "Head: " << node1ptr << endl;
  Node *node3ptr = node1ptr->GetNext();
  while(node3ptr) {
    cout << node3ptr << ", " << node3ptr->GetNumber() 
         << ", next=" << node3ptr->GetNext() << endl;
    node3ptr = node3ptr->GetNext();
  }
  cout << endl;

  return 0;
}

