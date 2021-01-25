// Simple Circle class example
// R. Paul Wiegand

#include<iostream>
#include<circle.h>

// Put ourselves in the standard namespace.
// Now I don't have to say "std::" before things.
using namespace std;

// The main body of the function
int main() {
  Circle bigCircle;
  Circle littleCircle;
  Circle funnyCircle;

  cout << endl;  // Output a blank line

  // Report on the big circle
  bigCircle.SetRadius(10.2);
  cout << "Big Circle: " << endl;
  bigCircle.PrintInfo();

  cout <<  endl;  // Output a blank line

  // Report on the little circle
  littleCircle.SetRadius(0.5);
  cout << "Little Circle: " << endl;
  littleCircle.PrintInfo();

  cout << endl;  // Output a blank line

  // Report on the funny circle
  funnyCircle.SetRadius(-2.0);
  cout << "Funny Circle: " << endl;
  funnyCircle.PrintInfo();

  cout << endl;  // Output a blank line

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
