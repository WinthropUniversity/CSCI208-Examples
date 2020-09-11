#ifndef SORTEDLIST_
#define SORTEDLIST_

#include<iostream>
#include<string>
#include<listnode.h>

using namespace std;

class SortedList {
public:
  SortedList();

  void InsertData(string key, string data);
  bool DeleteData(string key);
  string FindData(string key);
  
  bool IsEmpty() const;
  void ClearList();

  void PrintInOrder() const;

  //static void UnitTest();

private:
  ListNode *front_;
};


#endif
