#ifndef SQUARE_
#define SQUARE_

#include<iostream>
#include<Shape.h>

using namespace std;

/**
 * This is an abstract base class for two dimensional
 * shapes.
 **/
class Square : public Shape  {
public:
  Square(double length);

  double GetArea() const;
  double GetPerimeter() const;

protected:
  double length_;

  void PrintParamLine() const;
};

#endif
