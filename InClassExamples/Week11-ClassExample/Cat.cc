#include<Cat.h>

Cat::Cat() : Animal() {
    cerr << "MSG:  ---> Constructing Cat (default)" << endl;
}

Cat::Cat(int inNumberOfLegs)  
    : Animal(inNumberOfLegs) {
    cerr << "MSG:  ---> Constructing Cat (init)" << endl;
}

Cat::~Cat() {
    cerr << "MSG:  <--- Destroying Cat" << endl;
}


string Cat::GetAnimalNoise() const {
    return "Meow!!";
}