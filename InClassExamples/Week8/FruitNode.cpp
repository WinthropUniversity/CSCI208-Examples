#include "FruitNode.h"
#include<iostream>

// Default Constructor
FruitNode::FruitNode() {
  fruitName_ = "";
  nextNode_ = NULL;
}


// Initialization Constructor
FruitNode::FruitNode(string inName) {
  fruitName_ = inName;
  nextNode_ = NULL;    
}


// Destructor
FruitNode::~FruitNode() {
  cout << "XX Deleting node: " << fruitName_ << endl;
  if ( GetNextNode() != NULL ) {
    delete nextNode_;
    nextNode_ = NULL;
  }
}


// Accessor and Mutator Methods

string FruitNode::GetFruitName() const {
  return fruitName_;
}


void FruitNode::SetFruitName(string inName) {
  fruitName_ = inName;
}


FruitNode *FruitNode::GetNextNode() const {
  return nextNode_;
}


void FruitNode::SetNextNode(FruitNode *inNext) {
    nextNode_ = inNext;
}