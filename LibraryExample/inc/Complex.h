#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<iostream>

using namespace std;

/**
 * Class implementing a complex number
 **/
class Complex {
public:
  // Constructors
  Complex();
  Complex(double inReal, double inImaginary);
  Complex(const Complex &source);

  // Accessor methods
  double GetRealCoefficient() const;
  double GetImaginaryCoefficient() const;

  // Math operations supported for complex numbers
  friend Complex operator+(const Complex &p1, const Complex &p2);
  friend Complex operator-(const Complex &p1, const Complex &p2);
  friend Complex operator*(const Complex &p1, const Complex &p2);
  friend Complex operator/(const Complex &p1, const Complex &p2);

  // I/O operations on complex numbers
  friend ostream& operator<<(ostream &output, const Complex &p1);
  friend istream& operator>>(istream &input, Complex &p1);

private:
  double real_;
  double imaginary_;
};

#endif
