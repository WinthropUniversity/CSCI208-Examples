#include<Animal.h>


Animal::Animal() : numberOfLegs_(0) {
    cerr << "MSG:  ---> Constructing Animal (default)" << endl;
}

Animal::Animal(int inNumberOfLegs) : numberOfLegs_(inNumberOfLegs) {
    cerr << "MSG:  ---> Constructing Animal (init)" << endl;
}

Animal::~Animal() {
    cerr << "MSG:  <--- Destroying Animal" << endl;
}

int Animal::GetNumberOfLegs() const {
    return numberOfLegs_;
}
