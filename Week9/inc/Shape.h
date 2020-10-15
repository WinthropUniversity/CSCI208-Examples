#ifndef SHAPE_
#define SHAPE_

#include<iostream>

using namespace std;

/**
 * This is an abstract base class for two dimensional
 * shapes.
 **/
class Shape {
public:
  // Implemented in derived class
  virtual double GetArea() const = 0;
  virtual double GetPerimeter() const = 0;

  // Implemented in Shape
  string GetName() const;
  void Print() const;

protected:
  string shapeName_;

  // Implemented in derived class
  virtual void PrintParamLine() const = 0;
};

#endif
