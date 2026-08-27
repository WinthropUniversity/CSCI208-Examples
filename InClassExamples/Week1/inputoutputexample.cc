#include<iostream>
#include<string>

int main() {
  std::string name = "NOTHING";
  int age = 0;

  // Get the age and name from the user
  std::cout << "What is your name? ";
  std::cin >> name;
  std::cout << "What is your age? ";
  std::cin >> age;
 
  // Add one and report the new age
  age++;
  std::cout << std::endl << "Hi " << name << "!! You will be " 
            <<  age << " years old next year." << std::endl; 

  return 0;
}
