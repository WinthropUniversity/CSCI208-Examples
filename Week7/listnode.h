#ifndef LISTNODE_
#define LISTNODE_

#include<string>

using namespace std;

class ListNode {
public:
  ListNode(string inKey, string inData);

  void PointToListNode(ListNode *toListNode);
  void SetAsTerminalListNode();
  
  ListNode *GetNextListNode() const;

  bool IsTerminalListNode() const;
  string GetKey() const;
  string GetData() const;
  
private:
  ListNode *next_;
  string key_;
  string data_; // In a real LL, this will be more general
  };

#endif
