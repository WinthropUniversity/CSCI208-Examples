#ifndef DFPOLYNOMIAL_H_
#define DFPOLYNOMIAL_H_

#include "polynomial.h"

class DifferentialPolynomial : public Polynomial {
public:
    DifferentialPolynomial();
    DifferentialPolynomial(int inInitDegree);

    ~DifferentialPolynomial();

    void PrintDerivative() const;
protected:
};

#endif