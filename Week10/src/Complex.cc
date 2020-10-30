#include<Complex.h>

Complex::Complex() : real_(0.0), imaginary_(0.0) {}

Complex::Complex(double inReal, double inImaginary) :
   real_(inReal), imaginary_(inImaginary) {}

Complex &operator+(const Complex &p1, const Complex &p2) {
  Complex result(p1.real_+p2.real_, p1.imaginary_+p2.imaginary_);
  return result;
}

Complex &operator-(const Complex &p1, const Complex &p2) {
  Complex result(p1.real_-p2.real_, p1.imaginary_-p2.imaginary_);
  return result;
}

ostream &operator<<(ostream &output, const Complex &p1) {
  output << p1.real_ << " + " << p1.imaginary_ << + "i";
  return output;
}
