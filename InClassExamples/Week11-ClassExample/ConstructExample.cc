#include<iostream>
#include<string>
#include<Animal.h>
#include<Boar.h>
#include<Cat.h>
#include<CheshireCat.h>

using namespace std;

void GeneralAnimalReport(const Animal &myanimal) {
    cout << "A " << myanimal.GetSpecies() << " has " << myanimal.GetNumberOfLegs() << " legs" << endl;
    cout << "A " << myanimal.GetSpecies() << " goes '" << myanimal.GetAnimalNoise() << "'" << endl;
}

int main() {
    //Boar myboar(4, 2);
    //Cat mycat(4);
    CheshireCat creepyCat;

    //GeneralAnimalReport(myboar);
    //GeneralAnimalReport(mycat);
    GeneralAnimalReport(creepyCat);

    // Everything is okay
    return 0;
}