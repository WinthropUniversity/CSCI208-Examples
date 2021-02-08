// Simple example of how to use pointers object instances of a class
//
//   R. Paul Wiegand

#include<iostream>

using namespace std;


class CuberClass {
public:
  CuberClass(double inOffset) { offset_ = inOffset; }
  double CubePlusOffset(int x) {return x*x*x + offset_;}

private:
  double offset_;
};


void changeNothing(int x) {
  x = x*x;
}


void changeIt(int &x) {
  x = x*x;
}

/**
 * This is the main of a program that...
 **/
int main() {
  CuberClass *cuberptr;  // a POINTER, not an object

  cout << endl;
  cuberptr = new CuberClass(3.0);
  cout << "3 + 6^3 = " << cuberptr->CubePlusOffset(6) << endl;
  //cout << "3 + 6^3 = " << (*cuberptr).CubePlusOffset(6) << endl;

  cout << endl;

  // By value pass
  int x = 2;
  changeNothing(x);
  cout << "The value of x after running changeNothing(x) = " << x << endl;

  // By reference pass
  changeIt(x);
  cout << "The value of x after running changeIt(x) = " << x << endl;

  cout << endl;

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
