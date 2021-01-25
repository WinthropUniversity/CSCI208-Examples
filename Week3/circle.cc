// Simple Circle class example
// R. Paul Wiegand

// We can use <> here instead of "" because of the "-I" arg in the Makefile
#include<circle.h>
#include<iostream>



// Set the radius of the circle.
// We call this an "accessor/mutator method" because we can use it
// to access internal member variables.
void   Circle::SetRadius(double inRadius) {
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
double Circle::GetArea() const {
  return (PI * radius_ * radius_);
}

// Return the circumference of the circle
double Circle::GetCircumference() const {
  return (2* PI * radius_);
}

void Circle::PrintInfo() const {
  std::cout << "Circle Radius:         " << radius_ << std::endl;
  std::cout << "Circle Area:           " << GetArea() << std::endl;
  std::cout << "Circle Circumference:  " << GetCircumference() << std::endl;
}
