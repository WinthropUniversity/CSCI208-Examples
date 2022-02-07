// Simple example of illustrating simple uses of the reference and
// dereference operators in C++.
//
//   R. Paul Wiegand

#include<iostream>

using namespace std;

int main() {
  // Declare an integer
  int mynumber = 4;
  cout << "This is mynumber: " << mynumber << std::endl;
  cout << "This is the ADDRESS pointing to the memory location where mynumber is stored: " << &mynumber << std::endl;

  cout << endl;

  // Declare a POINTER to an integer
  int *mynumberptr;

  // We better not do anything with that pointer until we tell
  // the OS we want to allocate space to store that data
  mynumberptr = new int;  // As for a valid address for space allocated for an integer

  cout << "The mynumberptr variable stores an ADDRESS pointing to a memory location where an integer is stored: " << mynumberptr << std::endl;

  // Don't overwrite mynumberptr or you'll lose track of *where* it was pointing to ...
  // If you want to assign a value to that spot, you'll have to REFERENCE the memory area
  *mynumberptr = 8;
  cout << "The actual value stored at mynumberptr is: " << (*mynumberptr) << std::endl;

  // We asked for the memory; we better give it up when we're done.
  // So, tell the OS to deallocate it:
  delete mynumberptr;
  mynumberptr = NULL;
  //*mynumberptr = 10;  // IF I DO THIS, SEGFAULT

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
