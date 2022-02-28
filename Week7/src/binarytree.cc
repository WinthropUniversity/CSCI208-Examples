#include<binarytree.h>

/**
* The constructor for the binary tree initializes the top
* pointer of the tree to NULL.
**/
BinaryTree::BinaryTree() : topNode_(NULL) {}


/**
* Create a node to store the key and data, then put
* it in the correct place in the binary tree.
*  @param inKey Key to add to the tree
*  @param inData Data to add to the tree
**/
void BinaryTree::InsertData(string inKey, string inData) {
  // Create our new node (note that its left and right are NULL)
  TreeNode *newNode = new TreeNode(inKey, inData);

  // If the list is currently empty, make the new node the top node
  if (IsEmpty())
    topNode_ = newNode;

  // Otherwise, find a place for it in the tree
  else {
    // Find an empty leaf
    TreeNode *parent = NULL; // We'll need to remember this ...
    TreeNode *current = topNode_;
    while (current != NULL) {
      parent = current;
      current = current->GetNextNode(newNode->GetKey());
    }

    // Set that leaf to the new node
    parent->SetNextNode(newNode);
  }
}


/**
* Traverse the tree to find the record of the
* specified key.  Return an empty string if
* that data was not found.
*  @param inKey The key with which to search
*  @return The data string of the record found
**/
string BinaryTree::FindData(string inKey) {
  string returnData = "";

  // If the list is not empty, go find the record
  if (!IsEmpty()) {
    bool found = false;
    TreeNode *current = topNode_;
    while (!found && (current != NULL)) {
      if (current->GetKey() == inKey) {
        returnData = current->GetData();
        found = true;
      }
      current = current->GetNextNode(inKey);
    }
  }

  return returnData;
}


/**
* Return whether or not there are any records stored in the tree.
*  @return A Boolean indicating whether or not there are records in the tree.
**/
bool BinaryTree::IsEmpty() const {
  return (topNode_ == NULL);
}


/**
* Print the tree in sorted order.  You can make it look kind of
* like a tree if you pass a string as a prefix.
*  @param prefix The string to use to space out nodes to look like a tree.
**/
void BinaryTree::PrintInOrder(string prefix) const {
  cout << "Printing contents of binary tree in order:" << endl;
  cout << "------------------------------------------" << endl;
  this->RecursivePrintNode(topNode_, prefix);
}


/**
* Internal member method for handing the print using a recursive routine.
* This will either format it in tree for or not, depending on whether
* the prefix is more than an empty string.  It performs an in-fix
* DFS traversal.
*  @param current Pointer to the current node to conisder
**/
void BinaryTree::RecursivePrintNode(TreeNode *current, string prefix) const {
  if (current != NULL) {
    if (current->GetLeft()  != NULL) this->RecursivePrintNode(current->GetLeft(), prefix+prefix);
    cout << prefix << "  " << current->GetKey() << " :: " << current->GetData() << endl;
    if (current->GetRight() != NULL) this->RecursivePrintNode(current->GetRight(), prefix+prefix);
  }
}




// Perform unit tests if the unit test flag is on
#ifdef MAINbinarytree
int main() {
  BinaryTree tree;

  cout << "Loading the list ..." << endl;
  tree.InsertData("Bold", "This should be the second item");
  tree.InsertData("Dark", "This should be the fourth item");
  tree.InsertData("Arty", "This should be the first item");
  tree.InsertData("Cafe", "This should be the third item");
  tree.InsertData("Edge", "This should be the fifth item");
  tree.PrintInOrder("");

  cout << endl;
  cout << "Look for 'Arty' ..." << endl;
  cout << "Tree['Arty'] = " << tree.FindData("Arty") << endl << endl;

  cout << "Look for 'Frank' ..." << endl;
  cout << "Tree['Frank'] = " << tree.FindData("Frank") << endl << endl;

  cout << endl << endl << "Make it look like a tree?." << endl;
  tree.PrintInOrder("-");

  cout << endl;

  return 0;
}
#endif
