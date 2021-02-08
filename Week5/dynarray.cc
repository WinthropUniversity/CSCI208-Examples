// Simple example of how to use pointers for arrays that
// can be sized dynamically
//
//   R. Paul Wiegand

#include<iostream>

using namespace std;


/**
 * This is the main of a program that...
 **/
int main() {
  int *numberlist;  // Pointer to an integer
  int listsize;     // An actual integer

  cout << "Let's make a list of numbers.  How many will you have? ";
  cin >> listsize;

  // Allocate listsize amount of contiguous space for integers
  // and give me back the address to that space
  numberlist = new int[listsize];

  for (int idx=0; idx<listsize; idx++) {
    cout << "In[" << idx << "]: ";
    cin >> numberlist[idx];
  }

  // Output the list in reverse order
  cout << endl << "Here was your list in reverse order:" << endl;
  for (int idx=(listsize-1); idx>=0; idx--)
    cout << "  " << numberlist[idx] << endl;

  // Show the hard way to reference items in the array ...
  if (listsize > 2)
    cout << "Second item was: " << *(numberlist + 1) << endl;

  // Now you had better deallocate the list ...
  delete [] numberlist;
  numberlist = NULL;

  cout << endl;

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
