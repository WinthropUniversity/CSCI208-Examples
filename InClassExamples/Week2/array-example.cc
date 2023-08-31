#include<iostream>

int populateList(std::string presidents[]) {
    std::string presidentName;
    int idx = 0;

    do {
        std::cout << "Name a President: ";
        std::getline(std::cin, presidentName);

        if (presidentName != "quit") {
            presidents[idx] = presidentName;
            idx++;
        }
    } while (presidentName != "quit" && idx<10) ;

    return idx;
}

void printList(std::string presidents[], int size){
    for (int i=0; i<size ; i++ ) {
        std::cout << "President: " << presidents[i] << std::endl;
    }
}

int main() {
    std::string myList[100];
    int myFavoriteInteger;

    std::cout << "My favorite integer is: " << myFavoriteInteger << std::endl;
    

    int size = populateList(myList);
    printList(myList, size);

    // Everything was okay!
    return 0;
}