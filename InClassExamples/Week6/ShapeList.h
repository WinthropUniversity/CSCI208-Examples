#ifndef SHAPELIST_H_
#define SHAPELIST_H_

#include<iostream>
#include<string>

#include "ShapeNode.h"

using namespace std;

class ShapeList {
public:
    ShapeList();
    
    void InsertShape(string inShapeName);
    void PrintList() const;
    void Clear();

private:
    ShapeNode* front_;
};

#endif