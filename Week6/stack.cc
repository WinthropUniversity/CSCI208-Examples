#include<stack.h>
#include<node.h>


/**
 * Initialize the stack so that it is empty.
 * Here the front (head) pointer ponts directly
 * to the first node ... when empty, it points
 * to NULL.
 **/
Stack::Stack() : front_(NULL) {}


/**
 * Put a new item on the front of the stack.
 *  @param data A string holding data we want to keep.
 **/
void Stack::Push(string data) {
  Node *newNode = new Node(data, front_);
  front_ = newNode;
}

/**
 * Get the value of the first node in the list, remove that
 * node, and return the value.  This frees memory associated 
 * with the node.
 *  @return The value from the front of the list
 **/
string Stack::Pop() {
  string returnData = "";

  if (!IsEmpty()) {
    Node *current = front_;          // Get the first real node
    returnData = current->GetData(); // Grab its data
    front_ = current->GetNextNode(); // Shortcut around that node
    delete current;                  // Deallocate the node
  }
  
  return (returnData);
}



/**
 * Return an indicator as to whether the stack is empty or not.
 *  @return Boolean indicating the stack is empty.
 **/
bool Stack::IsEmpty() const {
  return (front_ == NULL); 
}


/**
 * Pop off the stack until it is empty
 **/
void Stack::Clear() {
  while (!IsEmpty()) Pop();
}

/**
 * Print the contents of the stack so that the top-most printed 
 * value represents the "front" of the stack.
 **/
void Stack::PrintStack() const {
  Node *current = front_;

  // Header
  cout << "Printing Content of Stack:" << endl;
  cout << "---------------------------------------------------" << endl;

  // Traverse the stack in order until you reach the NULL pointer,
  // printing the data each time.
  while (current != NULL) {
    cout << "  " << current->GetData() << endl;
    current = current->GetNextNode();
  }
}


// Perform unit tests if the unit test flag is on
#ifdef UNITTEST
int main() {
  Stack stack;

  cout << endl << "Loading the stack ..." << endl << endl;
  stack.Push("This will be at the end");
  stack.Push("This will be in the penultimate place");
  stack.Push("Almost the top ...");
  stack.Push("The most recent goes on top!");
  stack.PrintStack();

  cout << endl << "Pop a couple items from the stack ... " << endl;
  cout << "  First pop:  " << stack.Pop() << endl;
  cout << "  Second pop: " << stack.Pop() << endl;
  cout << endl;
	  
  stack.PrintStack();

  cout << endl;
  cout << "Now totally clear the stack ..." << endl;
  stack.Clear();
  cout << endl;
  
  stack.PrintStack();

  cout << endl;
  
  return 0;
}
#endif
