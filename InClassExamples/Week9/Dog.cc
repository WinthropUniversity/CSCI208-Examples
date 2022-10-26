#include "Dog.h"

Dog::Dog(string inName) : Pet(inName) {
    numberOfLegs_ = 4;
}

string Dog::Speak() const {
    return "Bark";
}
