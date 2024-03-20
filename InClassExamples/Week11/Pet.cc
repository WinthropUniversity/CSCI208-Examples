#include "Pet.h"


// Constructors 
Pet::Pet() : name_("NONAME"), numOfLegs_(0), typeOfPet_("") {}

Pet::Pet(string inName, int inNumLegs) : name_(inName), numOfLegs_(inNumLegs), typeOfPet_("") {
    cout << "-> Pet base class just got constructed" << endl;
}

Pet::~Pet() {
    cout << "<- Destroying pet" << endl;
}

// Accessors and Mutators
string Pet::GetName() const {
    return name_;
}


void Pet::SetName(string inName) {
    name_ = inName;
}

int Pet::GetNumLegs() const {
    return numOfLegs_;
}  


// Other methods
void Pet::PrintInfo() const {
    cout << "Pet (" << typeOfPet_ <<"):" << endl;
    cout << "  Name=" << GetName() << endl;
    cout << "  NumOfLegs=" << GetNumLegs() << endl;
    cout << "  This pet goes `" << Vocalize() << "'!" << endl;
    cout << endl;
}