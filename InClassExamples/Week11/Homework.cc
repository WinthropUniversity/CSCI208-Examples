#include "Homework.h"

Homework::Homework() : Assessment(), maxPoints_(100.0) {
    cerr << "DBG: " << "Called the default constructor of Homework" << endl;
}

Homework::Homework(string inName, double inMaxPoints) 
  : Assessment(inName), maxPoints_(inMaxPoints) {
    cerr << "DBG: " << "Called the init constructor of Homework" << endl;
}

Homework::~Homework() {
    cerr << "DBG:  called the destructor for Homework" << endl;
}

double Homework::GetMaxPoints() const {
    return maxPoints_;
}

void Homework::SetMaxPoints(double inPoints) {
    maxPoints_ = inPoints;
}

void Homework::Print() const {
    cout << "Homework: " << GetName() << " (out of " << GetMaxPoints() << ") points" << endl;
}
