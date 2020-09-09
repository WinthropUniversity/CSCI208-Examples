// Simple example of how to leak memory
// can be sized dynamically
//
//   R. Paul Wiegand

#include<iostream>

using namespace std;

// This is the number of 4-byte integers needed to make 1 MB:
#define ONE_MB_NUMINT 262144


/**
 * This function will allocate an array that should consume 
 * roughly the number of MB specified, then fail to free it.
 * You can use 
 */
void leakSomeMemory(int numMB) {
   // Create our pointer ...
  int *arrayToCreateThenIgnore; 

  // Allocate numMB MB's worth of space
  cout << "  Allocating an int array of size " << numMB*ONE_MB_NUMINT << endl;
  arrayToCreateThenIgnore = new int [ numMB*ONE_MB_NUMINT ];

  // Now leave the function, losing track of the arrayToCreateThenIgnore pointer ...
  // We cannot get it back, so we cannot free it ...
}


/**
 * This is the main of a program that just loops, allocating more and more
 * space until the user decides to stop.
 **/
int main() {
  int numMB = 1;

  cout << endl;
  cout << "Let's leak some memory!" << endl;
  while (numMB > 0) {
    cout << "  Enter the number of MBs you want to allocate (<=0 quits): ";
    cin >> numMB;

    leakSomeMemory(numMB);
    cout << "  Now go check to see what the OS says ..." << endl << endl;
  }

  cout << "Everything should be returned after the program exists!" << endl;
  cout << endl;
  
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
