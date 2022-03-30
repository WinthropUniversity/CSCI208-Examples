#include<Boar.h>

Boar::Boar() : Animal(), numberOfTusks_(0) {
    cerr << "MSG:  ---> Constructing Boar (default)" << endl;
}

Boar::Boar(int inNumberOfLegs, int inNumberOfTusks)  
    : Animal(inNumberOfLegs), numberOfTusks_(inNumberOfTusks) {
    cerr << "MSG:  ---> Constructing Boar (init)" << endl;
}

Boar::~Boar() {
    cerr << "MSG:  <--- Destroying Boar" << endl;
}

int Boar::GetNumberOfTusks() {
    return numberOfTusks_;
}


string Boar::GetAnimalNoise() const {
    return "Angry Oink!";
}