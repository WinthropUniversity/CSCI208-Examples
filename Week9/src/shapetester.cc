#include<iostream>
#include<vector>

#include<Shape.h>
#include<Circle.h>
#include<Square.h>
#include<Triangle.h>

using namespace std;

/**
 *  This doesn't know anything about circles or squares ...
 *   @param a First shape to compare
 *   @param b Second shape to compare
 **/
void CompareShapeArea(const Shape &a, const Shape &b) {
  if (a.GetArea() > b.GetArea()) {
    cout << "The " << a.GetName() << " with area " << a.GetArea()
         << " is bigger than the " << b.GetName() << " with area " << b.GetArea()
         << endl << endl;
  }

  else if (b.GetArea() > a.GetArea()) {
    cout << "The " << b.GetName() << " with area " << b.GetArea()
         << " is bigger than the " << a.GetName() << " with area " << a.GetArea()
         << endl << endl;
  }

  else {
    cout << "The " << a.GetName() << " with area " << a.GetArea()
         << " has the same area as the " << b.GetName()
         << endl << endl;
  }
}

/**
 * Main function of the shape tester.
 **/
int main() {
  // First test the polymorphic compare function
  Circle myCircle(3.5);
  Square mySquare(3.1);
  Triangle myTriangle(8.3, 12.5);

  cout << endl;  // Leading blank line
  CompareShapeArea(myCircle, mySquare);
  CompareShapeArea(myCircle, myTriangle);


  // Now test the polymorphic vector of shapes
  vector<Shape*> shapelist; // A generic vector of shapes ...

  cout << endl << "Shape List:" << endl << "-----------" << endl;
  shapelist.push_back(new Circle(1.2));
  shapelist.push_back(new Square(2.6));
  shapelist.push_back(new Circle(3.2));
  shapelist.push_back(new Triangle(1.3, 2.5));
  shapelist.push_back(new Square(10.2));

  for (int idx=0; idx<shapelist.size(); idx++)
    shapelist[idx]->Print();

  return 1;
}
