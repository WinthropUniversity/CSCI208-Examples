#include<iostream>
#include<cmath>

using namespace std;

#define MAX_SERIES_SUM_VALUE 1e+10

// Define a class and declare a variable
// for the exception at the same time:
class MyException {
} myexp;


int main() {
  double total = 0.0;
  double a= 2.0;

  // Get the denominator from the user
  cout << "Series: 1 + 1/a + 1/a^2 + ..." << endl;
  cout << "  Enter a= ";
  cin >> a;

  // Perform the computation!
  for (int idx=0; idx<100; idx++) {
    total += 1.0/pow(a,idx);
    if (total > MAX_SERIES_SUM_VALUE)
      throw myexp;        // <--- Exception!!
  }

  // Yay!  We're done.
  cout << "Series value: " << total << endl;

  return 0;
}
