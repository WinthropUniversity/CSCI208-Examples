#include<iostream>
#include<string>

struct Person {
    std::string firstName;
    std::string lastName;
    int favoriteInteger;
};


int main() {
    Person records[100];
    int count = 0;

    do {
        // Prompt user for info
        std::cout << std::endl;
        std::cout << "First Name: ";
        std::cin >> records[count].firstName;

        std::cout << "Last Name: ";
        std::cin >> records[count].lastName;

        std::cout << "Favorite Integer (-1 to quit): ";
        std::cin >> records[count].favoriteInteger;

        count++;
    } while (records[count-1].favoriteInteger >= 0);

    // Output that info:
    std::cout << std::endl;
    for (int idx=count-1; idx>=0 ; idx-- ) {
        std::cout << records[idx].lastName << ", " <<records[idx].firstName << " (" << records[idx].favoriteInteger << ")" << std::endl;
    }
    std::cout << std::endl;

    // Everything is okey dokey
    return 0;
}