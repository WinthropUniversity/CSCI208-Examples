// Simple I/O stream examples for Week 2 of CSCI 208
// R. Paul Wiegand

#include<iostream>
#include<string>

int main() {
  std::string instructorName = "Paul Wiegand";
  int instructorAge = 49;
  std::string yourName;
  int yourAge;

  // Let's show an example of getline:
  std::string line;
  std::cout << "Type a line of text:" << std::endl;
  std::getline(std::cin, line);
  std::cout << "The line was '" << line << "'" << std::endl;

  // Blank line
  std::cout << std::endl;
  
  // Standard output example
  std::cout << instructorName << " is " << instructorAge << " years old" << std::endl;

  // Standard input example
  std::cout << "What is your name? ";
  std::cin >> yourName;

  std::cout << "What is your age? ";
  std::cin >> yourAge;

  // Standard output example
  std::cout << yourName << " is " << yourAge << " years old" << std::endl;
  
  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
