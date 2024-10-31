#include "polynomial.h"


Polynomial::Polynomial() {
    cout << "NOTE:  Constructing Polynomial base (default) " << endl;
    degree_ = 1;
    coefficients_ = new double [MAX_DEGREE];
    for (int idx=0; idx<MAX_DEGREE; idx++)
      coefficients_[idx] = 0.0;
}


Polynomial::Polynomial(int inInitDegree) {
    cout << "NOTE:  Constructing Polynomial base (init) " << endl;
    degree_ = inInitDegree;
    coefficients_ = new double [MAX_DEGREE];
    for (int idx=0; idx<MAX_DEGREE; idx++)
      coefficients_[idx] = 0.0;
}

Polynomial::~Polynomial() {
    cout << "NOTE:  Destructing Polynomial base" << endl;
    delete [] coefficients_;
}


double Polynomial::Evaluate(double x) const {
    double total=0.0;
    for (int idx=0; idx<=degree_; idx++) {
        total += coefficients_[idx] * pow(x, idx);
    }
    return total;
}

double Polynomial::GetCoefficient(unsigned int inWhichTerm) const {
    if (inWhichTerm < 100) return coefficients_[inWhichTerm];
    else return 0.0;
}

void Polynomial::SetCoefficient(double inCoefficient, unsigned int inWhichTerm) {
    if (inWhichTerm < 100) {
        coefficients_[inWhichTerm] = inCoefficient;
        if (degree_ < inWhichTerm) degree_ = inWhichTerm;
    }
}

void Polynomial::Print() const {
    cout << "f(x) = ";
    string sumSymb = "";
    for (int idx=degree_; idx>=1; idx--) {
        if (coefficients_[idx] != 0) {
            sumSymb = (coefficients_[idx] < 0 ? " - " : " + ");
            cout << sumSymb << abs(coefficients_[idx]) << "x^" << idx;
        }
    }
    if (coefficients_[0] != 0) cout << " " << coefficients_[0];
    cout << endl;
}



