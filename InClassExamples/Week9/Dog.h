#ifndef DOG_H__
#define DOG_H__

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(string inName, int inAge);
    virtual string Vocalize() const;
};

#endif