#include "Cat.h"


void Cat::Purr() const {
    cout << name_ << " goes 'prrrr'!" << endl;
}

void Cat::Vocalize() const {
    cout << name_ << " goes MEOW!!" << endl;
}