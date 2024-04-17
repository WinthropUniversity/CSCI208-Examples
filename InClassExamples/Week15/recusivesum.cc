#include<iostream>

using namespace std;


int RecursiveSum(int n) {
  if (n <= 0) return 0;
  cout << "  Returning " << n << " + RecursiveSum(" << n-1 << ")" << endl;
  return n + RecursiveSum(n-1);
}

int RecursiveFactorial(int n) {
  if (n <= 0) return 1;
  cout << "  Returning " << n << " * RecursiveFactorial(" << n-1 << ")" << endl;
  return n * RecursiveFactorial(n-1);
}


int main() {
    int n = 0;

    cout << "I will sum from 1 to this number: ";
    cin >> n;

    int result = RecursiveSum(n);
    cout << "The sum was: " << result << endl;

    result = RecursiveFactorial(n);
    cout << "The factorial was: " << result << endl;

}