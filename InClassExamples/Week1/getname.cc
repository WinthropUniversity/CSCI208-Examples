#include <iostream>
#include <string>

#include "getname.h"

std::string getName() {
    std::string name = "NO_NAME!!!";

    // Prompt user for name
    std::cout << "What is your name? ";
    std::cin >> name;

    return name;
}