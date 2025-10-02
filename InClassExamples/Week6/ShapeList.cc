#include "ShapeList.h"
#include "ShapeNode.h"

ShapeList::ShapeList() {
    front_ = nullptr;
}

void ShapeList::InsertShape(string inShapeName) {
   ShapeNode* newShape = new ShapeNode(inShapeName);
   newShape->SetNext( front_ );
   front_ = newShape;
}

void ShapeList::PrintList() const {
    ShapeNode* current = front_;
    while (current != nullptr) {
        current->PrintShape();
        current = current->GetNext();
    }
}

void ShapeList::Clear() {
    ShapeNode* current = front_;
    ShapeNode* old = nullptr;

    while (current != nullptr) {
        old = current->GetNext();
        delete current;
        current = old;
    }
}
