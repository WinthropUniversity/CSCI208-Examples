#include "Cat.h"

Cat::Cat(string inName) : Pet(inName) {
    numberOfLegs_ = 4;
}

string Cat::Speak() const {
    return "Meow";
}
