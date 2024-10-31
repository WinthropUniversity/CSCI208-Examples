#include "dfpolynomial.h"

DifferentialPolynomial::DifferentialPolynomial() : Polynomial() {
    cout << "NOTE:  Constructing DifferentialPolynomial base (default) " << endl;
}

DifferentialPolynomial::DifferentialPolynomial(int inInitDegree) : Polynomial(inInitDegree) {
    cout << "NOTE:  Constructing DifferentialPolynomial base (init) " << endl;
}


DifferentialPolynomial::~DifferentialPolynomial() {
    cout << "NOTE:  Destructing DifferentialPolynomial base" << endl;
}

void DifferentialPolynomial::PrintDerivative() const {
    cout << "df/dx = ";
    string sumSymb = "";
    for (int idx=degree_; idx>1; idx--) {
        if (coefficients_[idx] != 0) {
            sumSymb = (coefficients_[idx] < 0 ? " - " : " + ");
            cout << sumSymb << idx*abs(coefficients_[idx]) << "x^" << (idx-1);
        }
    }
    if (coefficients_[1] != 0) cout << " + " << coefficients_[1];
    cout << endl;
}
