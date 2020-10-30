#include<iostream>
    
using namespace std;
    
long factorial(int n);
   

long factorial(int n) {
  long result = 1;

  while (n--)
    result *= n;
 
  return result;
}


int main() {
  int n = 0;
  cout << "Compute Factorial for: ";
  cin >> n;

  long val = factorial(n);
  cout << "Result: " << val << endl;
  cin.get();

  return 0;
}
    
