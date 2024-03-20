#include "Dog.h"


Dog::Dog(string inName) : Pet(inName, 4) {
    typeOfPet_ = "Dog";
    cout << "--> " << name_ << " Dog derived class just got constructed" << endl;
}

Dog::~Dog() {
    cout << "<-- Destroying dog " << name_ << endl;
}

string Dog::Vocalize() const {
    return "Bark";
}
