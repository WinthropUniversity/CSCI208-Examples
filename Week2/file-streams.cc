// Simple string stream examples for Week 2 of CSCI 208
// R. Paul Wiegand

#include <iostream>
#include <fstream>
#include <string>


int main() {
  std::string inputFilename;
  std::string outputFilename;
  std::ifstream inputFile;
  std::ofstream outputFile;

  // Get the input file name from the user
  std::cout << "What is the name of the input file?  ";
  std::cin >> inputFilename;


  // Get the output file name from the user
  std::cout << "What is the name of the output file?  ";
  std::cin >> outputFilename;

  // Open the input file
  inputFile.open(inputFilename);
  if (!inputFile.is_open()) {
    std::cout << "Could not open file " << inputFilename << std::endl;
    return 1; // Exit with error status 1, indicates error
   }

  // Open the output file
  outputFile.open(outputFilename);
  if (!outputFile.is_open()) {
    std::cout << "Could not open file " << inputFilename << std::endl;
    return 1; // Exit with error status 1, indicates error
   }

  // Tell the user what is happening
  std::cout << "Stripping all positive integers from the file " << inputFilename
	    << " and putting them each on their own line in " << outputFilename << std::endl;

  // Read from the input file until you hit the
  // end of file marker
  while (!inputFile.eof()) {
    int numericValue;
    std::string junk;

    // Grab a number from the input file
    inputFile >> numericValue;

    // If that number is bigger than zero, write it on its own
    // line in the output file
    if (!inputFile.fail())
      outputFile << numericValue << std::endl;
    else {
      inputFile >> junk;
      std::cout << "... ignoring: " << junk << std::endl;
    }
  }

  inputFile.close();
  outputFile.close();
  
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
