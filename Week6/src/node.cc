#include<node.h>

/**
 * Constuctor for a node *must* take the key and data.
 * It's important for the list maintenance that the key
 * never change ... maybe it's okay if the data does.
 *  @param inData  The data string to use for this node to store
 **/
Node::Node(string inData, Node *inNext)  {
  data_ = inData;
  next_ = inNext;
}


/** 
 * Get the pointer to the next node.  Used for traversal.
 **/
Node *Node::GetNextNode() const {
  return next_;
}


/**
 * Tell the caller whether this node's next pointer is NULL
 * or not.
 *  @return A boolean indicating whether this is the next node or not.
 **/
bool Node::IsTerminalNode() const {
  return ( next_ == nullptr );
}



/**
 * Get a copy of the data string.  A real linked-list would have a more
 * general structure here, or a pointer to something, etc.
 *  @return Data string used for storage.
 **/
string Node::GetData() const {
  return data_;
}
