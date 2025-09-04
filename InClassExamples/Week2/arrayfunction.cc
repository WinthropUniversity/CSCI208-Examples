#include<iostream>
#include<string>


void PrettyPrintList(std::string header, std::string list[], int start, int end) {
    // Print header
    std::cout << std::endl << header << ": " << std::endl;
    std::cout << "-------" << std::endl;

    // Print each fruit on its own line
    for (int idx=start; idx<end; ++idx) {
        std::cout << "[" << (idx+1) << "] " << list[idx] << std::endl;
    }
    
    // Print a footer
    std::cout << std::endl;
}


int main() {
    std::string fruitNames[10];
    int count=0;

    // Add some fruit to the list and print them
    fruitNames[count++] = "Apple";
    fruitNames[count++] = "Banana";
    fruitNames[count++] = "Mango";
    fruitNames[count++] = "Kiwi";
    PrettyPrintList("Fruits", fruitNames, 0, count);
    
    // Now add more fruit and print just those
    fruitNames[count++] = "Apples";
    fruitNames[count++] = "Pineapple";
    PrettyPrintList("More Fruits", fruitNames, 4, count);

    // Everything worked!!
    return 0;
}