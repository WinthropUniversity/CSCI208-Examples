// Simple Circle class example
// R. Paul Wiegand

#include<iostream>

#define PI 3.141592653589

// Define a Circle class type
class Circle {
public:  // Ignore this for now ... I'll come back to it
  
  // --- Internal member variables ---
  double radius;  // Radius of the circle

  
  // --- Methods ---
  // Return the area of this circle
  double GetArea() {
    return (PI * radius * radius);
  }
  
  // Return the circumference of this circle
  double GetCircumference() {
    return (2* PI * radius);
  }

  // Print all the information we have about the circle
  void PrintInfo() {
    std::cout << "Circle Radius:         " << radius << std::endl;
    std::cout << "Circle Area:           " << GetArea() << std::endl;
    std::cout << "Circle Circumference:  " << GetCircumference() << std::endl;
  }
};


// The main body of the function
int main() {
  Circle bigCircle;
  Circle littleCircle;
  Circle funnyCircle;

  std::cout << std::endl;  // Output a blank line

  // Report on the big circle
  bigCircle.radius = 10.2;
  std::cout << "Big Circle: " << std::endl;
  bigCircle.PrintInfo();

  std::cout << std::endl;  // Output a blank line

  // Report on the little circle
  littleCircle.radius = 0.5;
  std::cout << "Little Circle: " << std::endl;
  littleCircle.PrintInfo();
  
  std::cout << std::endl;  // Output a blank line

  // Report on the funny circle
  funnyCircle.radius = -2.0;
  std::cout << "Funny Circle: " << std::endl;
  funnyCircle.PrintInfo();

  std::cout << std::endl;  // Output a blank line

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
