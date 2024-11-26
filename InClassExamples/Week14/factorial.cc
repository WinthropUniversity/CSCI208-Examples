#include<iostream>
#include<string>

using namespace std;

unsigned int factorial(unsigned int n) {
  if (n <= 0) return 1;
  else return n * factorial(n-1); 
}

unsigned int fibonacci(unsigned int n) {
  if (n <= 1) return 1;
  else return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    unsigned int n = 0;

    cout << "Factorial of what? ";
    cin >> n;
    cout << "Factorial(" << n << ") = " << factorial(n) << endl;

    cout << "Which Fibonacci number do you want? ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;


    return 0;
}