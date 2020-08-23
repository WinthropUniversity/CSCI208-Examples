// Simple Circle class example
// R. Paul Wiegand

#include<iostream>
#include<bettercircle.h>

// Put ourselves in the standard namespace.
// Now I don't have to say "std::" before things.
using namespace std;

// The main body of the function
int main() {
  Circle bigCircle;         // Default constructor
  Circle littleCircle(0.5); // Set in construction
  Circle funnyCircle;       // Default constructor

  cout << endl;  // Output a blank line

  // Report on the big circle
  bigCircle.SetRadius(10.2);
  cout << "Big Circle: " << endl;
  bigCircle.PrintInfo();

  cout <<  endl;  // Output a blank line

  // Report on the little circle
  // Don't need to set it now because I did it in construction
  cout << "Little Circle: " << endl;
  littleCircle.PrintInfo();
  
  cout << endl;  // Output a blank line

  // Report on the funny circle
  // I wont set radius at all .. what will happen?
  cout << "Funny Circle: " << endl;
  funnyCircle.PrintInfo();

  cout << endl;  // Output a blank line

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
