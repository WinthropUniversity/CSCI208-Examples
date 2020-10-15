#ifndef CIRCLE_
#define CIRCLE_

#include<iostream>
#include<Shape.h>

using namespace std;

/**
 * This is an abstract base class for two dimensional
 * shapes.
 **/
class Circle : public Shape  {
public:
  Circle(double inRadius);

  double GetArea() const;
  double GetPerimeter() const;

protected:
  double radius_;

  void PrintParamLine() const;
};

#endif
