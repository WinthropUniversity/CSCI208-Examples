#ifndef BIRD_H__
#define BIRD_H__

#include "Pet.h"

class Bird : public Pet {
public:
    Bird(string inName, int inAge);
    virtual string Vocalize() const;
};

#endif