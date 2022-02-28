#include<iostream>
#include<string>

using namespace std;
    
long factorial(int n);
   

void otherfunction() {
  cout << "Inside another function" << endl;
}

long factorial(int n) {
  long result = 1;

  otherfunction();
  
  while (n--)
    result *= n;
 
  return result;
}


int main() {
  int reallycoolvariable;
  int n = 0;
  cout << "Compute Factorial for: ";
  //cin >> n;
  n = 6;

  long val = factorial(n);
  cout << "Result: " << val << endl;
  cin.get();

  return 0;
}
    
