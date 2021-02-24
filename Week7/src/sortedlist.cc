#include<sortedlist.h>

SortedList::SortedList() {
  front_ = new ListNode("FRONT","FRONT");
}


/**
 * Find the first position where a node's key can be inserted in
 * alphabetical order, then modify the linked list to insert the
 * node there.  In the worst case, insert at the end.
 *  @param key  The key of the new node to insert
 *  @param data The string data to insert with the associated key
 **/
void SortedList::InsertData(string key, string data) {
  ListNode *currentNode = front_;
  ListNode *previousNode = front_;
  bool found=false;

  // Create a new node with the specified key and data
  ListNode *newNode = new ListNode(key, data);

  while ( (!found)  && (!currentNode->IsTerminalListNode()) ) {
    previousNode = currentNode;
    currentNode = currentNode->GetNextListNode();

    if (currentNode->GetKey() > key) {
      // Wire it in by having the previous node point to the new node
      // and the new node point to the current node
      previousNode->PointToListNode(newNode);
      newNode->PointToListNode(currentNode);

      // Make sure we exit with a 'true' status
      found = true;
    }
  }

  // If we did not find the node in the list and we are done
  // with the loop, then the current node must be the last
  // node.  Point it to the new node.  The new node is set
  // as terminal node.
  if (!found) {
    currentNode->PointToListNode(newNode);
    newNode->SetAsTerminalListNode();
  }
}


/**
 * Find the first node matching the specified key, then
 * remove it from the linked list.  Free up the memory
 * associated with that node.
 *  @return Return whether or not a node was found and removed.
 **/
bool SortedList::DeleteData(string key) {
  ListNode *currentNode = front_;
  ListNode *previousNode = front_;
  bool found=false;

  while ( (!found)  && (!currentNode->IsTerminalListNode()) ) {
    previousNode = currentNode;
    currentNode = currentNode->GetNextListNode();

    if (currentNode->GetKey() == key) {
      // Short circuit around the current node
      if (currentNode->GetNextListNode() == NULL)
	previousNode->SetAsTerminalListNode();
      else
        previousNode->PointToListNode(currentNode->GetNextListNode());

      // Free up the memory of the current node
      delete currentNode;

      // Make sure we exit with a 'true' status
      found = true;
    }
  }

  return found;
}



/**
 * Look for the node with the same key as the specified key,
 * then return the data string associated.  If you do not find it,
 * return an empty string.
 *  @return Data string for the node with the associated key
 **/
string SortedList::FindData(string key) {
  ListNode *currentNode = front_;
  string data = "";

  while ( (data == "")  && (!currentNode->IsTerminalListNode()) ) {
    currentNode = currentNode->GetNextListNode();

    if (currentNode->GetKey() == key)
      data = currentNode->GetData();
  }

  return data;
}


/**
 * Return a flag indicating whether or not the
 * list is empty.
 *  @return Boolean indicating empty status of list
 **/
bool SortedList::IsEmpty() const {
  return (front_->IsTerminalListNode());
}


/**
 * Delete all items but the dummy front.
 **/
void SortedList::ClearList() {
  ListNode *currentNode = front_;
  ListNode *previousNode = front_;

  while (!currentNode->IsTerminalListNode()) {
    previousNode = currentNode;
    currentNode = currentNode->GetNextListNode();

    delete previousNode;
  }

  front_->SetAsTerminalListNode();
}


/**
 * List the contents of the linked list from the first node to the end.
 **/
void SortedList::PrintInOrder() const {
  ListNode *currentNode = front_;

  // Print a header
  cout << endl << "Linked List content:" << endl;
  cout << "------------------------------------------------" << endl;

  // Traverse list in order, print key and data each time
  while (!currentNode->IsTerminalListNode()) {
    currentNode = currentNode->GetNextListNode();
    cout << "Key:  " << currentNode->GetKey() << endl;
    cout << "Data: " << currentNode->GetData() << endl;
    cout << endl;
  }
}



// Perform unit tests if the unit test flag is on
#ifdef MAINsortedlist
int main() {
  SortedList list;

  cout << "Loading the list ..." << endl;
  list.InsertData("Bold", "This should be the second item");
  list.InsertData("Dark", "This should be the fourth item");
  list.InsertData("Arty", "This should be the first item");
  list.InsertData("Cafe", "This should be the third item");
  list.PrintInOrder();

  cout << endl;
  cout << "Look for 'Arty' ..." << endl;
  cout << "List['Arty'] = " << list.FindData("Arty") << endl << endl;

  cout << "Look for 'Edge' ..." << endl;
  cout << "List['Edge'] = " << list.FindData("Edge") << endl << endl;

  cout << "Delete 'Dark' and 'Bold', then insert 'Blah' ..." << endl;
  list.DeleteData("Dark");
  list.DeleteData("Bold");
  list.InsertData("Blah", "Now this should be second");
  list.PrintInOrder();

  cout << endl << endl << "Clearing the list ..." << endl;
  list.ClearList();
  list.PrintInOrder();

  cout << endl;

  return 0;
}
#endif
