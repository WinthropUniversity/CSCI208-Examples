#include<Triangle.h>
#include<cmath>


/**
 * Constructor for the Triangle shape.
 *  @param inRadius The radius with which to set the shape
 **/
Triangle::Triangle(double inBase, double inHeight)  {
  base_ = inBase;
  height_ = inHeight;
  shapeName_ = "Triangle";
}

/**
 * This is called from the external-facing Print()
 * method and simple outputs the parameters specific
 * to this shape.
 **/
void Triangle::PrintParamLine() const {
  cout << "    Base=" << base_ << ", Height=" << height_ << endl;
}


/**
 * Return the area of this Triangle shape.
 *  @return The area as a double
 **/
double Triangle::GetArea() const {
  return 0.5 * base_ * height_;
}

/**
 * Return the perimeter of this Triangle shape.
 * This is not really true ... only for Right Triangle.
 *  @return The perimeter as a double
 **/
double Triangle::GetPerimeter() const {
  double hypotenuese = sqrt(base_*base_ + height_*height_);
  return base_ + height_ + hypotenuese;
}
