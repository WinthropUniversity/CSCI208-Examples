#include<iostream>
#include<string>
#include<vector>

#include "Cat.h"
#include "Dog.h"
#include "Snake.h"
#include "Sheltie.h"


using namespace std;

// Notice that this doesn't have to know what pet it is printing ... pets know
// how to print themselves ... this is polymorphism!
void PrintAllPets(const vector<Pet *> &list) {
    cout << endl << "PET LIST: " << endl;
    for (int idx=0; idx<list.size(); idx++) {
        list[idx]->PrintInfo();  // This is a polymorphic call
    }
    cout << endl;
}


int main() {
    vector<Pet *> petList;

    // Create our pets, then push their pointers into the vector
    petList.push_back( new Cat("Miffy") );
    petList.push_back( new Sheltie("Nina") );
    petList.push_back( new Snake("Heather") );
    petList.push_back( new Cat("Venus") );
    petList.push_back( new Cat("Jessie") );

    // Call our print function to print all pet information
    PrintAllPets(petList);

    // De-allocate all the pets
    for (int idx=0; idx<petList.size(); idx++)
        delete petList[idx];

    // Everything went great!
    return 0;
}