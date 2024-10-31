#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

#include<iostream>
#include<string>

#define MAX_DEGREE 100

using namespace std;

class Polynomial {
public:
  Polynomial();
  Polynomial(int inInitDegree);

  ~Polynomial();

  double Evaluate(double x) const; 

  double GetCoefficient(unsigned int inWhichTerm) const;
  void SetCoefficient(double inCoefficient, unsigned int inWhichTerm);

  void Print() const;

protected:
  double *coefficients_;
  unsigned int degree_;
};


#endif