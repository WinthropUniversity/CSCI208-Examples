#ifndef TRIANGLE_
#define TRIANGLE_

#include<iostream>
#include<Shape.h>

using namespace std;

/**
 * This is an abstract base class for two dimensional
 * shapes.
 **/
class Triangle : public Shape  {
public:
  Triangle(double inbase, double inHeight);

  double GetArea() const;
  double GetPerimeter() const;

protected:
  double base_;
  double height_;

  void PrintParamLine() const;
};

#endif
