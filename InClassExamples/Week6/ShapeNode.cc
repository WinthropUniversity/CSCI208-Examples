#include "ShapeNode.h"


ShapeNode::ShapeNode() {
    shapename_ = "NOTHING";
    next_ = nullptr;
}

ShapeNode::ShapeNode(string inName) {
    SetName(inName);
    next_ = nullptr;
}

string ShapeNode::GetName() const {
    return shapename_;
}


void ShapeNode::SetName(string inName) {
    shapename_ = inName;
}

ShapeNode* ShapeNode::GetNext() {
    return next_;
}

void ShapeNode::SetNext(ShapeNode* inNext) {
    next_ = inNext;
}


void ShapeNode::PrintShape() const {
    cout << "Shape: " << GetName() << " ("
         << this << " ==>> " << this->GetNext() << ")"  << endl;
}


