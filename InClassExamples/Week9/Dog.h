#ifndef DOG_H__
#define DOG_H__

#include<string>
#include "Pet.h"

class Dog : public Pet {
public:
    Dog(string inName);
    virtual string Speak();    
};

#endif