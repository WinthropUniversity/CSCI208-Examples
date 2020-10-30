#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<iostream>

using namespace std;

class Complex {
public:
  Complex();
  Complex(double inReal, double inImaginary);

  friend Complex &operator+(const Complex &p1, const Complex &p2);
  friend Complex &operator-(const Complex &p1, const Complex &p2);
  friend ostream &operator<<(ostream &output, const Complex &p1);

private:
  double real_;
  double imaginary_;
};

#endif
