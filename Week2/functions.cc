#include<iostream>
#include<string>

/**
  *  This function takes two names and an age and returns a plausible droid name.
  * @param firstName A person's first name
  * @param lastName A person's last name
  * @param age A person's age (as a string, not integer)
  * @return A string representing a plausible droid name based on the input
 **/
std::string GetStarWarsDroidName(std::string firstName, std::string lastName, std::string age) {
  std::string prefix = firstName.substr(0,1) + age.substr(0,1);
  std::string suffix = lastName.substr(0,1) + age.substr(1,1);

  return prefix + "-" + suffix;
}


/**
  *  This is the main function that lists some possible droid names.
 **/
int main() {
  std::cout << "Droids:" << std::endl;
  std::cout << "  " << GetStarWarsDroidName("Rudolf", "Wiegand", "49") << std::endl;
  std::cout << "  " << GetStarWarsDroidName("Kenny", "Baker", "43") << std::endl;
  std::cout << "  " << GetStarWarsDroidName("Aonthony", "Daniels", "32") << std::endl;
  std::cout << "  " << GetStarWarsDroidName("Paul", "Klein", "51") << std::endl;

  // Everything is a-okay!
  return 0;
}
