#include<Derived.h>

// Constructor
Derived::Derived(string inFancyName, int inGreatNumber) :
  Base(inFancyName), greatNumber_(inGreatNumber) {
  cout << "NOTICE:  Initializer Constructor called in Derived class." << endl;
}

// Destructor
Derived::~Derived() {
  cout << "NOTICE:  Destructor called in Derived class." << endl;
}

// Accessor
int Derived::GetGreatNumber() const {
  return greatNumber_;
}
