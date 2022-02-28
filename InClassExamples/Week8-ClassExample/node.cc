#include "node.h"

#include<iostream>

// Default Constructor
Node::Node() {
  videoGame_ = "";
  rating_ = 1;
  nextNodeRef_ = NULL;
}

// Initialization Constructor
Node::Node(string inName, int inRating) {
  SetVideoGame(inName);
  SetRating(inRating);
  SetNextNodeRef(NULL);
}

string Node::GetVideoGame() const {
  return this->videoGame_;
}

int Node::GetRating() const {
    return this->rating_;
}

void Node::SetVideoGame(string inName) {
  this->videoGame_ = inName;
}

void Node::SetRating(int inRating) {
    if (inRating < 1) inRating = 1;
    if (inRating > 10) inRating = 10;

    this->rating_ = inRating;
}

Node* Node::GetNextNodeRef() const {
    return nextNodeRef_;
}

void Node::SetNextNodeRef(Node *inNextNodeRef) {
    this->nextNodeRef_ = inNextNodeRef;
}

