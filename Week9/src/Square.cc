#include<Square.h>


/**
 * Constructor for the Square shape.
 *  @param inRadius The radius with which to set the shape
 **/
Square::Square(double length)  {
  length_ = length;
  shapeName_ = "Square";
}

/**
 * This is called from the external-facing Print()
 * method and simple outputs the parameters specific
 * to this shape.
 **/
void Square::PrintParamLine() const {
  cout << "    Length=" << length_ << endl;
}


/**
 * Return the area of this Square shape.
 *  @return The area as a double
 **/
double Square::GetArea() const {
  return length_ * length_;
}

/**
 * Return the perimeter of this Square shape.
 *  @return The perimeter as a double
 **/
double Square::GetPerimeter() const {
  return 4.0 * length_;
}
