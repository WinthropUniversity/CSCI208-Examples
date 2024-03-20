#ifndef DOG_H_
#define DOG_H_

#include<iostream>
#include<string>
#include "Pet.h"

using namespace std;

class Dog : public Pet {
public:
    Dog(string inName);
    virtual ~Dog();

    virtual string Vocalize() const;

//protected:
};

#endif