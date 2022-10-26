#include "Pet.h"

Pet::Pet(string inName) : name_(inName), numberOfLegs_(0) {
}


string Pet::GetName() {
    return name_;
}

int Pet::GetNumberOfLegs() {
    return numberOfLegs_;
}

double Pet::EstimatePi() {
    return 3.141592653589;
}