#include<Derived.h>

// Constructor
Derived::Derived(string inFancyName, int inGreatNumber) :
  Base(inFancyName), greatNumber_(inGreatNumber) {
  numberlist_ = new double [inGreatNumber];

  for (int idx=0; idx<inGreatNumber; idx++)
    numberlist_[idx] = 0.0;

  cout << "NOTICE:  Initializer Constructor called in **Derived** class." << endl;
}

// Destructor
Derived::~Derived() {
  delete [] numberlist_;
  numberlist_ = NULL;
  cout << "NOTICE:  Destructor called in **Derived** class." << endl;
}

// Accessor
int Derived::GetGreatNumber() const {
  return greatNumber_;
}
