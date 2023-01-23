// Simple Circle class example
// R. Paul Wiegand

// We can use <> here instead of "" because of the "-I" arg in the Makefile
#include<bettercircle.h>
#include<iostream>

// Default Constructor
//Circle::Circle() : radius_(0.0) {}

// The above code basically does the same as this would:
Circle::Circle() {
  radius_ = 0.0;
}


// Initialization constructor
Circle::Circle(double inRadius) {
  this->SetRadius(inRadius);
}



// Set the radius of the circle.
// We call this an "accessor/mutator method" because we can use it
// to access internal member variables.
void Circle::SetRadius(double inRadius) {
  // Negative radiuses don't make sense, so ...

  // If it is positive, set it as given
  if (inRadius >= 0)  this->radius_ = inRadius;

  // Otherwise, set it as the positive magnitude
  else this->radius_ = -inRadius;
}


double Circle::GetRadius() const {
  return this->radius_;
}


// Return the area of the circle
double Circle::GetArea() {
  return (PI * this->radius_ * this->radius_);
}

// Return the circumference of the circle
double Circle::GetCircumference() {
  return (2* PI * this->radius_);
}

void Circle::PrintInfo() {
  std::cout << "Circle Radius:         " << this->radius_ << std::endl;
  std::cout << "Circle Area:           " << this->GetArea() << std::endl;
  std::cout << "Circle Circumference:  " << this->GetCircumference() << std::endl;
}
