#include<iostream>
#include<string>

#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Snake.h"

using namespace std;

void ReportAboutPet(Pet &pet) {
    cout << "My pet, " << pet.GetName() << ", has " 
         << pet.GetNumberOfLegs() << " legs and goes `"
         << pet.Speak() << "'.  They think pi=" 
         << pet.EstimatePi() << endl;
  
}

int main() {
    Dog myDog("Nina");
    Cat myCat("Jessie");
    Snake mySnake("Heather");

    ReportAboutPet(myDog);
    ReportAboutPet(myCat);
    ReportAboutPet(mySnake);

    return 0;
}