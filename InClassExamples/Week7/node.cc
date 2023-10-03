#include "node.h"
#include <iostream>

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