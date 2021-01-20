// Simple structure and enum example for Week 2 of CSCI 208
// R. Paul Wiegand

#include<iostream>
#include<fstream>
#include<iomanip>

// Use the pre-processor to define this global constant
// mainly to demonstrate #define.  A local-scope constant
// would be a better programming choice, though.
#define MAX_ARRAY_SIZE 100


/**
 * This function reads doubles from a file called "grades.txt",
 * puts them in a pre-allocated array, then returns the number
 * of grades that were read by that file.  It demonstrates the
 * "side effect" of being able to change array values in the
 * function because an array in C++ is really just a pointer
 * to an area in memory.
 *
 * @param gradesArray  A pre-allocated double array in which to store grades
 * @return  The total number of grades found in the file.
 */
int readGradefile(double gradesArray[]) {
  std::string gradeFilename = "grades.txt";
  std::ifstream gradeFile;
  int gradeCounter = 0;

  // Open the input file
  gradeFile.open(gradeFilename);
  if (!gradeFile.is_open()) {
    std::cout << "Could not open file " << gradeFilename << std::endl;
    return 0; // Exit with error status 1, indicates error
  }

  // Read from the input file until you hit the
  // end of file marker, put it into the grades array
  while (!gradeFile.eof()) {
    double numericValue;
    gradeFile >> numericValue;

    // If it is not a number, clear the buffer error
    // read it as a string, then proceed
    if (gradeFile.fail()) {
      gradeFile.clear();  // clear the error
      std::string junk;
      gradeFile >> junk;  // read the non-number
    }

    // Otherwise, we read successfully!  So put it in the array
    else {
      gradesArray[gradeCounter] = numericValue; // Store the value
      gradeCounter++;                           // Increment the counter
    }
  } // end of while

  // Always close your files!
  gradeFile.close();

  // We don't need to return the array because the values were placed
  // in there as a result of the "side effect" that the array is just
  // a pointer.  We *do* need to return how many grades we found.
  return (gradeCounter);
}


/**
 * This spins through an array and computes the average (mean)
 * of those values.  I've kept the parameter names general because
 * it could be used for lots of things.
 *
 * @param array  An array of double values for which to compute the mean
 * @param size   The size of the values in the array over which to compute
 * @return  The average of the values in the array
 */
double mean(double array[], int size) {
  double total = 0.0;

  // Sum up all the values in the array
  for (int idx=0; idx<size; idx++)
    total += array[idx];

  // Return the total / size
  return ( total / (double)size );
}


void sillyByValueTest(int x) {
  x = 0;
}


// The main program
int main() {
  double grades[MAX_ARRAY_SIZE];  // Allocate an array of length MAX_ARRAY_SIZE
  int numGrades = 0;              // But there's 0 grades entered at first
  double average = 0.0;

  // Perform the work
  numGrades = readGradefile(grades);
  average = mean(grades, numGrades);

  // Report the result
  std::cout << "Number of values found: " << numGrades << std::endl;
  std::cout << "Average of the values:  " << std::setprecision(4) << average << std::endl;

  int x = 3;
  std::cout << "Before pass, x=" << x << std::endl;
  sillyByValueTest(x);
  std::cout << "After pass, x=" << x << std::endl;
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
