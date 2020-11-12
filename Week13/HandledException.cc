#include<iostream>
#include<cmath>
#include<exception>

using namespace std;

#define MAX_SERIES_SUM_VALUE 1e+10

// Define a class and declare a variable
// for the exception at the same time:
class SeriesDivergesException: public exception
{
  virtual const char* what() const throw()
  {
    return "A series diverged.";
  }
};


// Compute a series 1 + (1/a) + (1/a^2) + ...
double ComputeSeries(double a) {
  double total = 0.0;
  
  for (int idx=0; idx<100; idx++) {
    total += 1.0/pow(a,idx);
    if (total > MAX_SERIES_SUM_VALUE)
      throw SeriesDivergesException();
  }

  return total;
}


int main() {
  double a= 2.0;

  // Get the denominator from the user
  cout << "Series: 1 + 1/a + 1/a^2 + ..." << endl;
  cout << "  Enter a= ";
  cin >> a;

  // Perform the computation!
  try {
    cout << "Series value: " << ComputeSeries(a) << endl;
  }
  catch (SeriesDivergesException &e) {
    cout << "ERROR:  Unfortunately, that series diverges." << endl;
  }

  // Yay!  We're done.
  cout << "Completed the work!" << endl;
  return 0;
}
