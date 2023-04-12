#include<iostream>
#include<cmath>
#include<exception>

using namespace std;

#define MAX_SERIES_SUM_VALUE 1e+10

// An exception for series divergence
class SeriesDivergesException: public exception {
public:
  virtual const char* what() const throw()
  {
    return "ERROR: The geometric series diverges.  The sum will exceed what we can represent.  Use a different 'a' value.";
  }
};


// An exception for Invalid data entry
class InvalidUserInput: public exception {
public:
  virtual const char* what() const throw()
  {
    return "ERROR:  Not a valid user input option.  Please enter a number.";
  }
};


void SuperGreatFunction() {
  cout << "Line 1, completed!" << endl;
  throw 9.1;
  cout << "Line 2, completed!" << endl; 
}


// Get the denominator from the user.
double GetDenominator() throw(InvalidUserInput) {
  double a = 2.0;
  
  cout << "Series: 1 + 1/a + 1/a^2 + ..." << endl;
  cout << "  Enter a= ";
  cin >> a;

  if ( cin.fail() || cin.get() != '\n' ) {
    cin.clear();
    cin.ignore(5000,'\n');
    throw InvalidUserInput();
  } // end if

  // A posttest to make sure it is positive
  if (a < 0.0) a = -a;
  
  return a;
}


// Compute a series 1 + (1/a) + (1/a^2) + ...
double ComputeSeries(double a) throw(SeriesDivergesException) {
  // Pre-test to make sure it is positive
  if (a < 0.0) a = -a;
  
  double total = 0.0;
  
  for (int idx=0; idx<100; idx++) {
    total += 1.0/pow(a,idx);
    if (total > MAX_SERIES_SUM_VALUE)
      throw SeriesDivergesException();
  }

  return total;
}


int main() {
  // Get the values, compute the series
  try {
    double a= 2.0;
    a = GetDenominator();
    cout << "  a=" << a << endl;
    double seriesTotal = ComputeSeries(a);
    cout << "  Series value: " << seriesTotal << endl;
  }
  catch (InvalidUserInput &e1) {
    cerr << e1.what() << endl;
  }
  catch (SeriesDivergesException &e2) {
    cerr << e2.what() << endl;
  }

  // Yay!  We're done.
  cout << "Completed the work!" << endl;

  // Don't do this:
  /*try {
    cout << "Cool line" << endl;
    throw 2;
  }
  catch (int &e) {
    cerr << "Oh no!  An error!  Not 2!  It's the only even prime!  Ahhhhh!" << endl;
  }*/

  /*try {
    cout << endl << "Running SuperGreatFunction() now..." << endl;
    SuperGreatFunction();
    cout << "Wow, that was an awesome function!" << endl;
  } catch (string &e) {
    cout << "  ERROR:  Oh no!!  Our SuperGreatFunction() failed!" << endl;
  }*/

  cout << "Everything is okay.  Stopping my program now." << endl;

  return 0;
}
