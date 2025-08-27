#include<iostream>
#include<sstream>
#include<string>

int main() {
    std::string textLine;
    double numbersList[5];
    int size = 0;

    // Get some text from the user, the buffer it into a string stream
    std::cout << "Write some text with some numbers in it: " << std::endl;
    std::getline(std::cin, textLine);
    std::stringstream bufferedString(textLine);

    while (!bufferedString.eof()) {
        // Try to get an number out of the string
        double val;
        bufferedString >> val;

        // If it fails, deal with the error and move on
        if (bufferedString.fail()) {
            bufferedString.clear();  // Clear the fail bit
            std::string junk;
            bufferedString >> junk;  // Move the readhead along
        }

        // If it read correctly, put it in the list
        else {
            numbersList[size] = val;
            size++;
        }
    }

    // Print out the list of numbers
    std::cout << std::endl << "Numbers in the string:" << std::endl;
    for (int idx=0; idx<size; idx++) {
        std::cout << numbersList[idx] << std::endl;
    }
    std::cout << std::endl;

    // Everything is okay
    return 0;
}