#ifndef NODE_H_
#define NODE_H_

#include<iostream>
#include<string>

using namespace std;

class Node {
public:
    Node();
    Node(double inConstant, string inName, Node* inPtr);

    double GetConstantValue() const;
    string GetNameOfConstant() const;
    Node*  GetNextPtr() const;

    void SetConstant(string inName, double inValue);
    void SetNextPtr(Node* inPtr);

    void Print() const;
    
private:
    double interestingConstant_;
    string nameOfConstant_;
    Node* nextPtr_;
};


#endif