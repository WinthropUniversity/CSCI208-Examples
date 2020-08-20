// Simple string stream examples for Week 2 of CSCI 208
// R. Paul Wiegand

#include<iostream>
#include<sstream>
#include<string>


int main() {
  // Create the input string stream from a string
  std::string someInformation = "Paul Wiegand 49 7kyu";
  std::istringstream inputBuffer(someInformation);

  std::string firstName;
  std::string lastName;
  int age;
  int kyuRank;

  // Parse that string out into different varaibles
  inputBuffer >> firstName;
  inputBuffer >> lastName;
  inputBuffer >> age;
  inputBuffer >> kyuRank;
  
  // Write out the information in a readable format
  std::cout << firstName << " " << lastName << " is "
	    << age << " years old, but still only "
	    << kyuRank <<"k in Go." << std::endl;


  // Create an output string stream
  std::ostringstream outputBuffer;

  // Grab some information from the user
  std::cout << "Enter \"firstname lastname age\": ";
  std::cin >> firstName;
  std::cin >> lastName;
  std::cin >> age;
   
  // Put those variables into an output buffer
  outputBuffer << lastName << ", " << firstName << ", " << age;

  // Dump the contents of the buffer to the screen so we can see:
  std::cout << "Here's what you entered:  " << outputBuffer.str() << std::endl;
  
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
