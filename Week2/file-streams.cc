// Simple string stream examples for Week 2 of CSCI 208
// R. Paul Wiegand

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>


int main() {
  std::string inputFilename;
  std::string outputFilename;
  std::ifstream inputFile;
  std::ofstream outputFile;

  // Get the input file name from the user
  std::cout << "What is the name of the input file?  ";
  std::cin >> inputFilename;

  // Open the input file
  inputFile.open(inputFilename);
  if (!inputFile.is_open()) {
    std::cout << "Could not open file " << inputFilename << std::endl;
    return 1; // Exit with error status 1, indicates error
  }

  // Tell the user what is happening
  std::cout << "  -> Read contents from the file " << inputFilename
	    << " and put strings each on their own line." << std::endl;

  // Read from the input file until you hit the
  // end of file marker, put it into a string stream buffer
  std::ostringstream readBuffer;
  while (!inputFile.eof()) {
    std::string token;
    inputFile >> token;
    readBuffer << token << std::endl;
  }

  // Close our input file
  inputFile.close();

  // Tell the user what is happening
  std::cout << "  -> " << inputFilename << " has been read" << std::endl;

  // --------------------------------------------------------------------------------
  
   // Get the output file name from the user
  std::cout << "What is the name of the output file?  ";
  std::cin >> outputFilename;

  // Open the output file
  outputFile.open(outputFilename);
  if (!outputFile.is_open()) {
    std::cout << "Could not open file " << outputFilename << std::endl;
    return 1; // Exit with error status 1, indicates error
  }

  // Put the read buffer into a write buffer, then write out
  // all numbers in that buffer
  std::istringstream writeBuffer(readBuffer.str());
  while (!writeBuffer.eof()) {
    int numericValue;

    // Grab a number from the input file
    writeBuffer >> numericValue;

    // If it is not a number, clear the buffer error
    // read it as a string, then proceed
    if (writeBuffer.fail()) {
      writeBuffer.clear();  // clear the error
      std::string junk;
      writeBuffer >> junk;  // read the non-number
      std::cerr << "BAD READ: " << junk << std::endl;
    }

    // If it is a number, then write it to the outputfile
    else outputFile << numericValue << std::endl;   
  }

  // Close our files
  outputFile.close();

  // Tell the user what is happening
  std::cout << "  -> " << outputFilename << " has been written" << std::endl;

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
