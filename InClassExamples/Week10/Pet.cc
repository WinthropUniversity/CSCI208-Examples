#include "Pet.h"

Pet::Pet() {
    name_ = " ";
}


Pet::Pet(string inName) {
    name_ = inName;
}

void Pet::SetName(string inName) {
    name_ = inName;
}

string Pet::GetName() const {
    return name_;
}


void Pet::Print() const {
    cout << "Pet: " << GetName() << endl;
}
