#include<treenode.h>

/**
 * Constructor to initialize the key and data.  The left and
 * right pointers are initialized to NULL.
 *  @param inKey The incoming key
 *  @param inData The incoming data
 **/
TreeNode::TreeNode(string inKey, string inData) : key_(inKey), data_(inData), left_(NULL), right_(NULL) {}


/**
 * Set the next node, either to the left or to the right based on the
 * key of the incoming node.  BE CAREFUL.  If you overwrite the
 * existing left or right, part of the tree may be lost.  
 *  @param inNode pointer to another tree node to add to this one
 **/
void TreeNode::SetNextNode(TreeNode *inNode) {
  // If the key as at least as small as the node's key, put inNode on left
  if (inNode->GetKey() <= this->GetKey()) this->left_ = inNode;

  // Otherwise, put inNode on the right
  else this->right_ = inNode;
  
}


/**
 * Get the next node, either to the left or to the right based on 
 * the in-coming key.  The value can be NULL.
 *  @param inKey the string to compare to get the next node
 *  @return A pointer to the tree node on the left or right based on the key
 **/
TreeNode *TreeNode::GetNextNode(string inKey) const {
  TreeNode *returnPtr;

  // If the key as at least as small as the node's key, go left
  if (inKey <= this->GetKey()) returnPtr = this->left_;

  // If the key is bigger than the node's key, go right
  else returnPtr = this->right_;

  return returnPtr;
}


/**
 * Return the left pointer stored in the tree node
 *  @return The node's left pointer
 **/
TreeNode *TreeNode::GetLeft() const {
  return left_;
}


/**
 * Return the right pointer stored in the tree node
 *  @return The node's right pointer
 **/
TreeNode *TreeNode::GetRight() const {
  return right_;
}


/**
 * Return the key stored in the tree node
 *  @return The node's key (as a string)
 **/
string TreeNode::GetKey() const {
  return key_;
}


/**
 * Return the data stored in the tree node
 *  @return The node's data (as a string)
 **/
string TreeNode::GetData() const {
  return data_;
}
