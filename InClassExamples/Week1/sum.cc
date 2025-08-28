#include<iostream>
#include<string>

int main() {
    double numberList[1000];
    double sumTotal;
    int size=0;
    std::string doneStr = "No";

    // Loops asking the user for numbers and populates an array
    while ( (doneStr[0] != 'Y') && (doneStr[0] != 'y') ) {
        // Get a number from the user
        double numInput;
        std::cout << "Number: ";
        std::cin >> numInput;
        numberList[size] = numInput;
        size++;

        // Prompt the user whether they want to keep going
        std::cout << "Are you done? ";
        std::cin >> doneStr;
    }

    // Add up all the numbers in the list that were stored
    sumTotal = 0.0;
    for (int idx=0; idx<size;  ++idx) {
        sumTotal += numberList[idx];
    }

    // Output that total to the user
    std::cout << "Total: " << sumTotal << std::endl;

    // Everything worked!!
    return 0;
}