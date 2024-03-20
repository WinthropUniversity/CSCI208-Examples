#include "Sheltie.h"


Sheltie::Sheltie(string inName) : Dog(inName) {
    cout << "--> " << name_ << " Sheltie derived class just got constructed" << endl;
}
Sheltie::~Sheltie() {
    cout << "<-- Destroying Sheltie " << name_ << endl;
}

string Sheltie::Vocalize() const {
    return "Bark, Bark, Bark, Bark, Bark";
}
