#include<iostream>
#include<Complex.h>

using namespace std;

int main() {
  Complex p1;
  Complex p2;

  cout << "Enter the real and imaginary coefficients of the first complex number:" << endl;
  cin >> p1;

  cout << endl;

  cout << "Enter the real and imaginary coefficients of the second complex number:" << endl;
  cin >> p2;

  cout << endl;
  
  cout << p1 << "  +  " << p2 << "  =  " << (p1+p2) << endl;
  cout << p1 << "  -  " << p2 << "  =  " << (p1-p2) << endl;
  cout << p1 << "  *  " << p2 << "  =  " << (p1*p2) << endl;
  cout << p1 << "  /  " << p2 << "  =  " << (p1/p2) << endl;

  return 1;
}
