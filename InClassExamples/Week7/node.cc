#include "node.h"
#include <iostream>

using namespace std;

// Default constructor
TriangleNode::TriangleNode() {
    base_ = 1.0;
    height_ = 1.0;
    next_ = nullptr;
}

// Initialization constructor
TriangleNode::TriangleNode(double inHeight, double inBase){
    base_ = inBase;
    height_ = inHeight;
    next_ = nullptr;
}

// Accessor methods    
double TriangleNode::GetHeight() const {
    return height_;
}


double TriangleNode::GetBase() const {
    return base_;
}

TriangleNode *TriangleNode::GetNext() const {
    return next_;
}

void TriangleNode::InsertAfter(TriangleNode *inNewNodeToInsert) {
    // Method 1:  Temporarily remember the old next ptr
    //TriangleNode *temp = this->next_;
    //this->next_ = inNewNodeToInsert;
    //inNewNodeToInsert->next_ = temp; 

    // Method 2:  Do the assignments in reverse order
    inNewNodeToInsert->next_ = this->next_;
    this->next_ = inNewNodeToInsert;
}

void TriangleNode::Print() const {
  cout << "Base:   " << base_ << endl;
  cout << "Height: " << height_ << endl;
  cout << "My memory address is:             " << this << endl;
  cout << "The memory address of my next is: " << next_ << endl << endl;
}
