#include "Cat.h"


Cat::Cat(string inName) : Pet(inName, 4) {
    typeOfPet_ = "Cat";
    cout << "--> " << name_ << " Cat derived class just got constructed" << endl;
}

Cat::~Cat() {
    cout << "<-- Destroying cat " << name_ << endl;
}


string Cat::Vocalize() const {
    return "Meow";
}
