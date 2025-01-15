#include <iostream>
#include <string>

#include "getname.h"

int main() {
    std::string name = getName();
    std::cout << "Your name is " << name << std::endl;

    // Everything is okay
    return 0;
}