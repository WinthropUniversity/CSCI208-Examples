#include "Assessment.h"


Assessment::Assessment() : name_("")  {
    cerr << "DBG: " << "Called the default constructor of Assessment" << endl;
}


Assessment::Assessment(string inName) : name_(inName) {
    cerr << "DBG: " << "Called the init constructor of Assessment" << endl;
}


Assessment::~Assessment() {
    cerr << "DBG: " << "Calld destructor of Assessment" << endl;
}

string Assessment::GetName() const {
    return name_;
}

void Assessment::SetName(string inName) {
    name_ = inName;
}

void Assessment::Print() const {
    cout << "Assessment: " << GetName() << endl;
}