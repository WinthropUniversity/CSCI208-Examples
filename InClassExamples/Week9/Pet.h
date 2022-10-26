#ifndef PET_H__
#define PET_H__

#include<string>
using namespace std;

class Pet {
protected:
    int numberOfLegs_;
    string name_;

public:
    Pet(string inName);
    string GetName();
    int GetNumberOfLegs();
    virtual string Speak() = 0;   
    double EstimatePi(); 
};

#endif