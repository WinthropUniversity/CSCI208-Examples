#include<Circle.h>

#define PI 3.141592653589

/**
 * Constructor for the circle shape.
 *  @param inRadius The radius with which to set the shape
 **/
Circle::Circle(double inRadius)  {
  radius_ = inRadius;
  shapeName_ = "Circle";
}

/**
 * This is called from the external-facing Print()
 * method and simple outputs the parameters specific
 * to this shape.
 **/
void Circle::PrintParamLine() const {
  cout << "    Radius=" << radius_ << endl;
}


/**
 * Return the area of this circle shape.
 *  @return The area as a double
 **/
double Circle::GetArea() const {
  return radius_ * radius_ * PI;
}

/**
 * Return the perimeter of this circle shape.
 *  @return The perimeter as a double
 **/
double Circle::GetPerimeter() const {
  return 2.0 * radius_ * PI;
}
