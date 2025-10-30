#include<iostream>
#include<string>
#include<vector>

#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Snake.h"

using namespace std;

void ProcessPet(Pet *mypet) {
    string tmpName;

    cout << "What's the name of your pet? ";
    cin >> tmpName;

    mypet->SetName(tmpName);
    mypet->Print();
    mypet->Vocalize(); // Will run the correct vocalize even though ProcessPet doesn't know what it is

    cout << endl;
}


int main() {
    /*vector<Pet*> petlist;
    int petnum = 0;

    while (petnum >= 0) {
        cout << "New pet?  (1-Cat, 2-Dog, 3-Snake   -1 to quit)" << endl;
        cin >> petnum;

        if (petnum == 1) petlist.push_back(new Cat());
        else if (petnum == 2) petlist.push_back(new Dog());
        else if (petnum == 3) petlist.push_back(new Snake());
    }

    for (int idx=0; idx<petlist.size(); idx++)
      ProcessPet(petlist[idx]);
      */

    Cat mypet1;
    Dog mypet2;
    Snake mypet3;
    
    ProcessPet(&mypet1);
    ProcessPet(&mypet2);
    ProcessPet(&mypet3);

    cout << "Last pet? " << endl;
    mypet3.Vocalize();

    return 0;
}