#ifndef BINARYTREE_
#define BINARYTREE_

#include<iostream>
#include<string>
#include<treenode.h>

using namespace std;

class BinaryTree {
public:
  BinaryTree();

  void InsertData(string inKey, string inData);
  string FindData(string inKey);
  
  bool IsEmpty() const;

  void PrintInOrder(string prefix) const;

  //static void UnitTest();

private:
  TreeNode *topNode_;

  void RecursivePrintNode(TreeNode *current, string prefix) const;
};


#endif
