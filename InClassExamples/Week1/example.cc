#include <iostream>

int main() {
    std::string name = "NO_NAME";

    // Prompt user for name
    std::cout << "What is your name? ";
    std::cin >> name;

    // Report to the user
    std::cout << "My name is " << name << std::endl;

    // Everything is okay
    return 0;
}