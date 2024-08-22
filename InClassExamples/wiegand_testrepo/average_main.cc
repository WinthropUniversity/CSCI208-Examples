#include<iostream>
#include "average.h"

#define ARRAY_MAX 100 

int main() {
    double list[ARRAY_MAX];
    int count = 0;
    char answer;

    do {
        std::cout << "Enter a number: ";
        std::cin >> list[count];
        count++;

        std::cout << "Are you done? (y/n) ";
        std::cin >> answer;

        std::cout << std::endl;
    } while (answer != 'y');

    std::cout << "The average was " << computeAverage(list, count) << std::endl;

    // Everything is okay
    return 0;
}