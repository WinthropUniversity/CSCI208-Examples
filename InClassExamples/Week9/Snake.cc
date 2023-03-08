#include "Snake.h"

Snake::Snake(string inName, int inAge) : Pet(inName, inAge, 0) {}

string Snake::Vocalize() const {
    return "Hiss";
}

