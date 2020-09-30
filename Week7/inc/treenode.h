#ifndef TREENODE_
#define TREENODE_

#include<string>

using namespace std;


/**
 * This defines a node class to use in a BinaryTree data structure.
 **/
class TreeNode {
public:
  TreeNode(string inKey, string inData);

  void SetNextNode(TreeNode *inNode);
  TreeNode *GetNextNode(string inKey) const;

  TreeNode *GetLeft() const;
  TreeNode *GetRight() const;
  string GetKey() const;
  string GetData() const;
  
private:
  TreeNode *left_;
  TreeNode *right_;
  string key_;
  string data_; // In a real LL, this will be more general
  };

#endif
