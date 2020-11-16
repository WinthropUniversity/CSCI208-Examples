#include<Complex.h>


// ------- Member Function Definitions --------

/**
 *  Default constructor initializes real and imaginary parts to zero
 **/
Complex::Complex() : real_(0.0), imaginary_(0.0) {}


/**
 *  Init constructor allows us to set the read and imaginary parts.
 *   @param inReal The real coeficient of the complex number
 *   @param inImaginary The imaginary coefficient of the complex number
 **/
Complex::Complex(double inReal, double inImaginary) :
   real_(inReal), imaginary_(inImaginary) {}


/**
 *  Copy constructor, allows complex numbers to be copied
 *  during by-value passes.
 *   @param source The in-coming complex number from which to copy.
 **/
Complex::Complex(const Complex &source) {
  this->real_ = source.real_;
  this->imaginary_ = source.imaginary_;
}


/**
 * Return the value of the real coefficient of this complex numbers
 *  @return The real coefficient value
 **/
double Complex::GetRealCoefficient() const {
  return real_;
}


/**
 * Return the value of the imaginary coefficient of this complex numbers
 *  @return The imaginary coefficient value
 **/
double Complex::GetImaginaryCoefficient() const {
  return imaginary_;
}



// ------- External Friend Function Definitions --------

/**
 *  This function computes the sum of two complex numbers
 *  and returns a complex number.
 *    @param p1 The left-side parameter of the operation
 *    @param p2 The right-side parameter of the operation
 *    @return The result of the addition.
 **/
Complex operator+(const Complex &p1, const Complex &p2) {
  Complex result(p1.real_+p2.real_, p1.imaginary_+p2.imaginary_);
  return result;
}


/**
 *  This function computes the difference of two complex numbers
 *  and returns a complex number.
 *    @param p1 The left-side parameter of the operation
 *    @param p2 The right-side parameter of the operation
 *    @return The result of the subtraction.
 **/
Complex operator-(const Complex &p1, const Complex &p2) {
  Complex result(p1.real_-p2.real_, p1.imaginary_-p2.imaginary_);
  return result;
}


/**
 *  This function computes the product of two complex numbers
 *  and returns a complex number.
 *    @param p1 The left-side parameter of the operation
 *    @param p2 The right-side parameter of the operation
 *    @return The result of the multiplication.
 **/
Complex operator*(const Complex &p1, const Complex &p2) {
  double S1 = p1.real_ * p2.real_;
  double S2 = p1.imaginary_ * p2.imaginary_;
  double S3 = (p1.real_ + p1.imaginary_) * (p2.real_ + p2.imaginary_);

  //              real    imaginary
  Complex result(S1-S2, S3-S1-S2);
  return result;
}


/**
 *  This function computes the division of two complex numbers
 *  and returns a complex number.
 *    @param p1 The left-side parameter of the operation
 *    @param p2 The right-side parameter of the operation
 *    @return The result of the division.
 **/
Complex operator/(const Complex &p1, const Complex &p2) {
  // Just to make things a bit easier to read below, let's shorten names
  double a = p1.real_;
  double b = p1.imaginary_;
  double c = p2.real_;
  double d = p2.imaginary_;

  double denom = c*c + d*d;

  //                 real             imaginary
  Complex result( (a*c + b*d)/denom, (b*c - a*d)/denom );
  return result;
}



/**
 *  This function allows complex numbers to be outputted on
 *  an output stream without a special print function
 *    @param output The stream object being used for outputting
 *    @param p1 The complex number to be outputted
 *    @return The output stream object so it can be chained.
 **/
ostream &operator<<(ostream &output, const Complex &p1) {
  // Positive imaginary coefficient
  if (p1.imaginary_ >= 0)
    output << "(" << p1.real_ << " + " << p1.imaginary_ << + "i)";

  // Negative imaginary coefficient
  else // if (p1.imaginary_ < 0) 
    output << "(" << p1.real_ << " - " << -p1.imaginary_ << + "i)";

  return output;
}

/**
 *  This function allows complex numbers to be inputted in
 *  an input stream without a special set functions.  It assumes
 *  the real coefficient comes first, then the imaginary coefficient.
 *    @param input The stream object being used for inputting
 *    @param p1 The complex number to be inputted
 *    @return The input stream object so it can be chained.
 **/
istream &operator>>(istream  &input, Complex &p1 ) {
    input >> p1.real_ >> p1.imaginary_;
    return input;
 }
