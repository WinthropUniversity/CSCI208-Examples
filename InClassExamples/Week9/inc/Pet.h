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
    string GetName() const;
    int GetNumberOfLegs() const;
    virtual string Speak() const  = 0;   
    double EstimatePi() const; 
};

#endif