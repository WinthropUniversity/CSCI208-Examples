#ifndef SNAKE_H__
#define SNAKE_H__

#include "Pet.h"

class Snake : public Pet {
public:
    Snake(string inName, int inAge);
    virtual string Vocalize() const;
};

#endif