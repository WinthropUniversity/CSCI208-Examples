#include "Snake.h"


Snake::Snake(string inName) : Pet(inName, 0) {
    typeOfPet_ = "Snake";
    cout << "--> " << name_ << " Snake derived class just got constructed" << endl;
}

Snake::~Snake() {
    cout << "<-- Destroying snake " << name_ << endl;
}


string Snake::Vocalize() const {
    return "Quiet Hiss";
}
