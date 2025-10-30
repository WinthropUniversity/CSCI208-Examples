#ifndef PET_H_
#define PET_H_

#include<iostream>
#include<string>

using namespace std;

class Pet {
public:
    Pet();
    Pet(string inName);

    void SetName(string inName);
    string GetName() const;

    virtual void Vocalize() const  = 0;
    // void Vocalize() const  {cout << "NOPE, Not done!" << endl;}

    void Print() const;

protected:
    string name_;
};

#endif
