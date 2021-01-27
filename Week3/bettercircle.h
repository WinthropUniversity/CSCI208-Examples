// Simple Circle header file

// If we've never included this header before, then go ahead and include this source;
// however, set the CIRCLE_ flag so that we don't include it a second time

#ifndef CIRCLE_
#define CIRCLE_

#define PI 3.141592653589


// Define a Circle class type
class Circle {

// These members and methods can only be seen by objects of this class
private:
  double radius_;  // Radius of the circle ... use the '_' to make it clear it is internal

// These memebers and methods can be seen by anything
public:
  // Constructors
  Circle();  // default constructor
  Circle(double inRadius);  // initilizer constructor

  // Declare these methods here, but actuall *define* them in Circle.cc
  void SetRadius(double inRadius);
  double GetRadius() const;
  double GetArea();
  double GetCircumference();
  void PrintInfo();
};


// Close the #ifndef condition here
#endif
