#include<iostream>
#include<string>

typedef unsigned /*char*/ int  usint_t;

enum Color_t {RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET};

struct Person_t {
  std::string name;
  Color_t favoriteColor;
};


/**
 * Convert an integer into a Color type.
*/
Color_t convertColor(usint_t colorIndex) {
  Color_t color = RED;
  switch (colorIndex)
  {
    case 0: color = RED; break;
    case 1: color = ORANGE; break;
    case 2: color = YELLOW; break;
    case 3: color = GREEN; break;
    case 4: color = BLUE; break;
    case 5: color = INDIGO; break;
    case 6: color = VIOLET; break;
    default: color = INDIGO; break;
  }

  return color;
}


/**
 * Go ask the user about their information, then return a person record.
*/
Person_t GetPerson() {
    Person_t returnPerson;
    usint_t colorIndex = 0;

    // Get the the person's name, store in record
    std::cout << "What is your name? ";
    std::getline(std::cin, returnPerson.name);

    //std::cin.ignore();

    // Prompt & get a color from the user
    std::cout << "What is your favorite color from the rainbow?  " << std::endl
              << "  0 - Red" << std::endl
              << "  1 - Orange" << std::endl
              << "  2 - Yellow" << std::endl
              << "  3 - Green" << std::endl
              << "  4 - Blue" << std::endl
              << "  5 - Indigo" << std::endl
              << "  6 - Violet" << std::endl
              << " Enter index: ";
    std::cin >> colorIndex;
    std::cout << std::endl;
    returnPerson.favoriteColor = convertColor(colorIndex);

    std::cin.ignore();

    return returnPerson;
}


/**
 * Print information about the person
*/
void PrintPerson(Person_t  inPerson) {
  std::string returnString = "";

  std::cout << inPerson.name << " likes ";

  switch (inPerson.favoriteColor)
  {
    case RED: returnString = "Red";  break;
    case ORANGE: returnString = "Orange";  break;
    case YELLOW: returnString = "Yellow";  break;
    case GREEN: returnString = "Green";  break;
    case BLUE: returnString = "Blue";  break;
    case INDIGO: returnString = "Indigo";  break;
    case VIOLET: returnString = "Violet";  break;
    default: returnString = "[Illegal Color]"; break;
  }

  std::cout << returnString << std::endl;
}



int main() {
    Person_t person1 = GetPerson();
    Person_t person2 = GetPerson();

    // Output user & Dr. Wiegand's favorite colors
    PrintPerson(person1);
    PrintPerson(person2);
    std::cout << std::endl;

    // Everything is great!!
    return 0;
}