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

    std::cout << std::endl;
}


int main() {
    std::string fruitNames[10];

    int count=0;
    //int x = count++;
    //int y = ++count;
    //std::cout << "x: " << x << "    y:" << y << std::endl;

    fruitNames[count++] = "Apple";
    fruitNames[count++] = "Banana";
    fruitNames[count++] = "Mango";
    fruitNames[count++] = "Kiwi";

    PrettyPrintList("Fruits", fruitNames, 0, count);
    
    fruitNames[count++] = "Apples";
    fruitNames[count++] = "Pineapple";

    PrettyPrintList("More Fruits", fruitNames, 4, count);

    // Everything worked!!
    return 0;
}