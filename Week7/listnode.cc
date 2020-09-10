#include<listnode.h>

/**
 * Constuctor for a node *must* take the key and data.
 * It's important for the list maintenance that the key
 * never change ... maybe it's okay if the data does.
 *  @param inKey  The key to use for this node list traversal
 *  @param inData  The data string to use for this node to store
 **/
ListNode::ListNode(string inKey, string inData) : key_(inKey), data_(inData), next_(NULL) {}


/**
 * Point the next pointer in this list to the specified node, unless that
 * node is the NULL pointer.  We'll use a separate method for that to help
 * stop errors.  Let's also prevent someone from looping a node to point
 * back at itself.
 *  @param toListNode Pointer to another (valid) node object
 **/
void ListNode::PointToListNode(ListNode *toListNode) {
  if ( (toListNode != NULL) && (toListNode != this) ) next_ = toListNode;
}


/**
 * If this is the terminal node, then set the next_ to NULL.
 **/
void ListNode::SetAsTerminalListNode() {
  next_ = NULL;
}


/**
 * Tell the caller whether this node's next pointer is NULL
 * or not.
 *  @return A boolean indicating whether this is the next node or not.
 **/
bool ListNode::IsTerminalListNode() const {
  return ( next_ == NULL );
}




/** 
 * Get the pointer to the next node.  Used for traversal.
 **/
ListNode *ListNode::GetNextListNode() const {
  return next_;
}


/**
 * Get a copy of the key string.
 *  @return Key string the node uses for traversal
 **/
string ListNode::GetKey() const {
  return key_;
}


/**
 * Get a copy of the data string.  A real linked-list would have a more
 * general structure here, or a pointer to something, etc.
 *  @return Data string used for storage.
 **/
string ListNode::GetData() const {
  return data_;
}
