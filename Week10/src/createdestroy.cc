#include<Derived.h>
#include<iostream>

using namespace std;

void SimpleFunction() {
  Derived myderivedobject("Flibberty-Dee", 42); // Direct instance

  cout << "  I now have an object instance of the derived class!" << endl;
  cout << "    FancyName:   " << myderivedobject.GetFancyName() << endl;
  cout << "    GreatNumber: " << myderivedobject.GetGreatNumber() << endl;
}



void AlternateFunction() {
  Derived *myderivedobject;  // Referemce (ptr) to instance
  cout  << "RPW:  I created the pointer" << endl;
  myderivedobject = new Derived("Flibberty-Dee", 42);

  cout << "  I now have an object instance of the derived class!" << endl;
  cout << "    FancyName:   " << myderivedobject->GetFancyName() << endl;
  cout << "    GreatNumber: " << myderivedobject->GetGreatNumber() << endl;

  delete myderivedobject;

  cout << "RPW:  Now the object was explicitly destroyed" << endl;
}



int main() {
  cout << endl <<"Calling SimpleFunction() ..." << endl << endl;
  SimpleFunction();
  cout << endl << "Returned from SimpleFunction ..." << endl << endl;

  cout << "-----------------" << endl;

  cout << endl <<"Calling AlternateFunction() ..." << endl << endl;
  AlternateFunction();
  cout << endl << "Returned from AlternateFunction ..." << endl << endl;


  exit(0);
}
