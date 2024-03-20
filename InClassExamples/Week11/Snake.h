#ifndef Snake_H_
#define Snake_H_

#include<iostream>
#include<string>
#include "Pet.h"

using namespace std;

class Snake : public Pet {
public:
    Snake(string inName);
    virtual ~Snake();

    virtual string Vocalize() const;

//protected:
};

#endif