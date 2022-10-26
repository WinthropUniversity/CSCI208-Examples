#include "Pet.h"

Pet::Pet(string inName) : name_(inName), numberOfLegs_(0) {
}


string Pet::GetName() const {
    return name_;
}

int Pet::GetNumberOfLegs() const {
    return numberOfLegs_;
}

double Pet::EstimatePi() const {
    return 3.141592653589;
}