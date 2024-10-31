#include<iostream>
#include<string>
#include "polynomial.h"
#include "dfpolynomial.h"

using namespace std;

int main() {
    cout << "--------> First line of program!!!" << endl;
    DifferentialPolynomial fx(3);
    //DifferentialPolynomial *gx = new DifferentialPolynomial();

    fx.SetCoefficient(-3.1, 0);
    fx.SetCoefficient(2, 1);
    fx.SetCoefficient(1.6, 2);
    fx.SetCoefficient(-0.9, 3);

    fx.Print();
    fx.PrintDerivative();
    cout << "At x=1, f is " << fx.Evaluate(1) << endl;
    cout << endl;

    /*gx->SetCoefficient(6.0,5);
    gx->Print();
    gx->PrintDerivative();
    double result = gx->Evaluate(1);
    delete gx;
    cout << "At x=1, g is " << result << endl;*/

    cout << "<-------- Last line of program!!!" << endl;
    return 0;
}