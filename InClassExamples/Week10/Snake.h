#ifndef SNAKE_H_
#define SNAKE_H_

#include<iostream>
#include<string>

#include "Pet.h"

using namespace std;

class Snake : public Pet {
public:
    virtual void Vocalize() const;
};


#endif