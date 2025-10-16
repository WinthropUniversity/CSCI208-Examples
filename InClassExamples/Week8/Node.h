#ifndef NODE_H_
#define NODE_H_

#include<iostream>

using namespace std;

class Node {
public:
    Node();
    Node(double inNum);

    double GetFavoriteNumber() const;
    void SetFavoriteNumber(double inNum);

    Node *GetNext();
    void SetNext(Node *inNodePtr);

    void Print() const;

private:
    double favoriteNumber_;
    Node *next_;
};

#endif