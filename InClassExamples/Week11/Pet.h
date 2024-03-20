#ifndef PET_H_
#define PET_H_

#include<iostream>
#include<string>

using namespace std;

class Pet {
public:
    Pet();
    Pet(string inName, int inNumLegs);
    virtual ~Pet();

    string GetName() const;
    void SetName(string inName);

    int GetNumLegs() const;    

    virtual string Vocalize() const = 0;
    void PrintInfo() const;

protected:
    string name_;
    string typeOfPet_;
    int numOfLegs_;
};

#endif
