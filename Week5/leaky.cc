// Simple example of how to leak memory
// can be sized dynamically
//
//   R. Paul Wiegand

#include<iostream>
#include<iomanip>

using namespace std;

// This is the number of integers needed to make 1 MB:
//   number of bytes in 1GB is 1024^3
//   number of integers in that is 1024^3 / # bytes in integer
#define ONE_GB_NUMINT 1024*1024*1024 / sizeof(int)


/**
 * This function will allocate an array that should consume
 * roughly the number of MB specified, then fail to free it.
 * You can use
 */
void leakSomeMemory(double numGB) {
   // Create our pointer ...
  int sizeOfArray = (int) (numGB * ONE_GB_NUMINT);
  int *arrayToCreateThenIgnore = new int [ sizeOfArray ]; 

  // Allocate numMB MB's worth of space
  cout << "  Allocated an int array of size " << sizeOfArray << endl;
  cout << "  This comes to about " << sizeOfArray*sizeof(int)/(1024*1024*1024) << "GBs" << endl;

  // Now leave the function, losing track of the arrayToCreateThenIgnore pointer ...
  // We cannot get it back, so we cannot free it ...
}


/**
 * This is the main of a program that just loops, allocating more and more
 * space until the user decides to stop.
 **/
int main() {
  double numGB = 1.0;

  cout << endl;
  cout << "If you are on hopper.winthrop.edu, try opening another window and doing the following:" << endl;
  cout << "   1. Run the program 'top'." << endl;
  cout << "   2. In top, press the 'o' character." << endl;
  cout << "   3. Type the following and hit return: COMMAND=leaky" << endl;
  cout << "   4. Pay attention to the value in the VIRT field." << endl;
  cout << endl;
  cout << "Let's leak some memory!" << endl;
  cout << endl;

  while (numGB > 0.0) {
    cout << "Enter the number of GBs you want to allocate (<=0 quits): ";
    cin >> numGB;

    leakSomeMemory(numGB);
    cout << "Now go check to see what the OS says ..." << endl << endl;
  }

  cout << "Everything should be returned after the program exists!" << endl;
  cout << endl;

  cout << "Obviously, the point of this is to show you what *not* to do.  "
       << "If you lose the value of a pointer before the pointer can be "
       << "deallocated, you will not be able to free its memory." << endl << endl;

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
