#include "Cat.h"

Cat::Cat(string inName, int inAge) : Pet(inName, inAge, 4) {}

string Cat::Vocalize() const {
    return "Meow";
}

string Cat::GetOtherString() const {
    return "Other this cat-specific string ...";
}
