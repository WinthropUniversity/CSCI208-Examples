#include "Bird.h"

Bird::Bird(string inName, int inAge) : Pet(inName, inAge, 2) {}

string Bird::Vocalize() const {
    return "Tweet";
}

