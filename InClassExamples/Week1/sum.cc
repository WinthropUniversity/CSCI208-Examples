#include<iostream>
#include<string>

int main() {
    double numberList[1000];
    double sumTotal;
    int size=0;
    std::string doneStr = "No";

    while ( (doneStr[0] != 'Y') && (doneStr[0] != 'y') ) {
        double numInput;
        std::cout << "Number: ";
        std::cin >> numInput;
        numberList[size] = numInput;
        size++;

        std::cout << "Are you done? ";
        std::cin >> doneStr;
    }

    sumTotal = 0.0;
    for (int idx=0; idx<size;  ++idx) {
        sumTotal += numberList[idx];
    }

    std::cout << "Total: " << sumTotal << std::endl;
    
    // Everything worked!!
    return 0;
}