#include<Base.h>

// Default Constructor
Base::Base() : fancyName_("NONAME") {}
//Base::Base() {
//  fancyName_ = "NONAME";
//}

// Initialization Constructor
Base::Base(string inFancyName) : fancyName_(inFancyName) {
  cout << "NOTICE:  Initializing constructor of **Base** class called. " << endl;
}


// Destructor
Base::~Base() {
  cout << "NOTICE:  Destructor of **Base** class called." << endl;
}


//Accessor
string Base::GetFancyName() const {
  return fancyName_;
}
