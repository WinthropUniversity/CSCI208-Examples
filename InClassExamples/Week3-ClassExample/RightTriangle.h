#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include<iostream>
#include<string>

class RightTriangle {
public:
  // Constructors
  RightTriangle();
  RightTriangle(double inBase, double inHeight);

  // Accessors & Mutators
  double GetBase();
  double GetHeight();
  void SetBase(double inBase);
  void SetHeight(double inHeight);

  // General methods
  double GetArea();
  void PrintInfo(std::string inPrefix);

private:
  double base_;
  double height_;
};




#endif