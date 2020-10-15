#include<Shape.h>

/**
 * Return the name of the shape as a string.
 *  @return String storing the shape name
 **/
string Shape::GetName() const {
  return shapeName_;
}


/**
 * Print information about the shape.
 **/
void Shape::Print() const {
  cout << GetName() << ":" << endl;
  PrintParamLine();  // Call this from the derived class
  cout << "    Area=" << GetArea() << endl;
  cout << "    Perimeter=" << GetPerimeter() << endl;
  cout << endl;
}
