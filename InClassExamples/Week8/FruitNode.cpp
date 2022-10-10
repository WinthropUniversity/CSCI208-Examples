#include "FruitNode.h"

// Default Constructor
FruitNode::FruitNode() {
  this->fruitName_ = "";
  this->nextNode = NULL;
}


// Initialization Constructor
FruitNode::FruitNode(string inName) {
  fruitName_ = inName;
  nextNode = NULL;    
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