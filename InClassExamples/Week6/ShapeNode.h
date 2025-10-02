#ifndef SHAPENODE_H_
#define SHAPENODE_H_

#include<iostream>
#include<string>

using namespace std;


class ShapeNode {
public:
    ShapeNode();
    ShapeNode(string inName);

    string GetName() const;
    void SetName(string inName);

    ShapeNode* GetNext();
    void SetNext(ShapeNode* inNext);

    void PrintShape() const;

private:
    string shapename_;
    ShapeNode* next_;
};


#endif


