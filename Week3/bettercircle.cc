// Simple Circle class example
// R. Paul Wiegand

// We can use <> here instead of "" because of the "-I" arg in the Makefile
#include "bettercircle.h"
#include<iostream>

// Default Constructor
//Circle::Circle() : radius_(0.0) {}

// The above code basically does the same as this would:
Circle::Circle() {
  radius_ = 0.0;
}


// Initialization constructor
Circle::Circle(double inRadius) {
  SetRadius(inRadius);
}



// Set the radius of the circle.
// We call this an "accessor/mutator method" because we can use it
// to access internal member variables.
void Circle::SetRadius(double inRadius) {
  // Negative radiuses don't make sense, so ...

  // If it is positive, set it as given
  if (inRadius >= 0)  radius_ = inRadius;

  // Otherwise, set it as the positive magnitude
  else radius_ = -inRadius;
}


double Circle::GetRadius() const {
  return radius_;
}


// Return the area of the circle
double Circle::GetArea() {
  return (PI * radius_ * radius_);
}

// Return the circumference of the circle
double Circle::GetCircumference() {
  return (2* PI * radius_);
}

void Circle::PrintInfo() {
  std::cout << "Circle Radius:         " << radius_ << std::endl;
  std::cout << "Circle Area:           " << GetArea() << std::endl;
  std::cout << "Circle Circumference:  " << GetCircumference() << std::endl;
}
