#ifndef SNAKE_H__
#define SNAKE_H__

#include "Pet.h"
#include <string>

using namespace std;


class Snake : public Pet {
public:
    Snake(string inName);
    virtual string Speak();
};

#endif