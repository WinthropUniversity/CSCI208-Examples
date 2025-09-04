#include<iostream>
#include<string>


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


    std::cout << "Fruits: " << std::endl;
    for (int idx=0; idx<count; ++idx) {
        std::cout << "[" << (idx+1) << "] " << fruitNames[idx] << std::endl;
    }
    

    // Everything worked!!
    return 0;
}