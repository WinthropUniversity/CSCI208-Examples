#include "Pet.h"

Pet::Pet(string inName) : name_(inName) {}

string Pet::GetName() const {
  return name_;
}
