#ifndef FRUITNODE_H_
#define FRUITNODE_H_

#include<string>

using namespace std;


class FruitNode {
public:
  FruitNode();
  FruitNode(string inName);
  ~FruitNode();

  string GetFruitName() const;
  void SetFruitName(string inName);
  FruitNode *GetNextNode() const;
  void SetNextNode(FruitNode *inNext);

private:
  string fruitName_;
  FruitNode* nextNode_;
};


#endif
