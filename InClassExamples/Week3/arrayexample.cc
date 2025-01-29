#include<iostream>
#include<string>

int main() {
    std::string firstName[100];
    std::string lastName[100];
    int favoriteInteger[100];
    int count = 0;

    do {
        // Prompt user for info
        std::cout << std::endl;
        std::cout << "First Name: ";
        std::cin >> firstName[count];

        std::cout << "Last Name: ";
        std::cin >> lastName[count];

        std::cout << "Favorite Integer (-1 to quit): ";
        std::cin >> favoriteInteger[count];

        count++;
    } while (favoriteInteger[count-1] >= 0);

    // Output that info:
    std::cout << std::endl;
    for (int idx=count-1; idx>=0 ; idx-- ) {
        std::cout << lastName[idx] << ", " << firstName[idx] << " (" << favoriteInteger[idx] << ")" << std::endl;
    }
    std::cout << std::endl;
    
    // Everything is okey dokey
    return 0;
}