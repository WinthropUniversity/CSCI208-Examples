#include "Pet.h"

Pet::Pet(string inName, int inAge, int inNumLegs) 
    : name_(inName), age_(inAge), numLegs_(inNumLegs) {}

string Pet::GetName() const {
  return name_;
}

int Pet::GetAge() const {
  return age_;
}

int Pet::GetLegCount() const {
  return numLegs_;
}


void Pet::IncrementAge() {
    age_++;
}
