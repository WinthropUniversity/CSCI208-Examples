#include "Snake.h"

Snake::Snake(string inName) : Pet(inName) {
}

string Snake::Speak() const {
    return "Hiss";
}