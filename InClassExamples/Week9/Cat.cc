#include "Cat.h"

Cat::Cat(string inName, int inAge) : Pet(inName, inAge, 4) {}

string Cat::Vocalize() const {
    return "Meow";
}

