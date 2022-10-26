#include "Snake.h"

Snake::Snake(string inName) : Pet(inName) {
}

string Snake::Speak() {
    return "Hiss";
}