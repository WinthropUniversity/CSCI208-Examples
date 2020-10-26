#include<Derived.h>
#include<iostream>

using namespace std;

void SimpleFunction() {
  Derived myderivedobject("Flibberty-Dee", 42);

  cout << "  I now have an object instance of the derived class!" << endl;
  cout << "    FancyName:   " << myderivedobject.GetFancyName() << endl;
  cout << "    GreatNumber: " << myderivedobject.GetGreatNumber() << endl;
}

int main() {
  cout << endl <<"Calling SimpleFunction() ..." << endl << endl;
  
  SimpleFunction();
  
  cout << endl << "Returned from SimpleFunction ..." << endl << endl;

  exit(0);
}
  
