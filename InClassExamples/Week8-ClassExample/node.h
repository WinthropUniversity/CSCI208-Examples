#ifndef NODE_H_
#define NODE_H_

#include<string>

using namespace std;

class Node {
public:
  Node();
  Node(string inName, int inRating);

  string GetVideoGame() const;
  int GetRating() const;
  Node* GetNextNodeRef() const;
  void SetVideoGame(string inName);
  void SetRating(int inRating);
  void SetNextNodeRef(Node *inNextNodeRef);


private:
  string videoGame_;
  int    rating_; 
  Node*  nextNodeRef_;
};

#endif