#include "Cat.h"

Cat::Cat(string inName) : Pet(inName) {}

string Cat::Speak() const {
  return "Meow";
}
