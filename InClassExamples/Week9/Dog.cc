#include "Dog.h"

Dog::Dog(string inName, int inAge) : Pet(inName, inAge, 4) {}

string Dog::Vocalize() const {
    return "Bark";
}

