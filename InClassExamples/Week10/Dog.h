#ifndef DOG_H_
#define DOG_H_

#include<iostream>
#include<string>

#include "Pet.h"

using namespace std;

class Dog : public Pet {
public:
    virtual void Vocalize() const;
};


#endif