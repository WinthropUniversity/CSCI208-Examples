#include <iostream>

using namespace std;

unsigned int CalcBinomCoef(unsigned int n, unsigned int k) {
	if (n == k)      return 1;
	else if (k == 0) return 1;
	else return CalcBinomCoef(n-1, k-1) + CalcBinomCoef(n-1, k);
}


int main() {
	unsigned int n, k;

	cout << "What is n? ";
	cin >> n;

	cout << "What is k? ";
	cin >> k;

	cout << "B(" << n << "," << k << ") = " << CalcBinomCoef(n,k) << endl;

	return 0;
}