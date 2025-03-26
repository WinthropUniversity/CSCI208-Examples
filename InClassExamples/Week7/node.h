#ifndef NODE_H_
#define NODE_H_

#include<string>
#include<iostream>

using namespace std;

class Node {
public:
    Node();
    Node(string inText);
    Node(string inText, Node *inNodeptr);
    //~Node();

    void InsertAfter(Node *inNewFirstNode);
    void Print() const;

    string GetTextLine() const;
    Node *GetNext();

private:
    string textLine_;
    Node *next_;
};

#endif