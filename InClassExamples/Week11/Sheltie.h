#ifndef SHELTIE_H_
#define SHELTIE_H_

#include<string>
#include<iostream>
#include "Dog.h"

using namespace std;

class Sheltie : public Dog {
public:
    Sheltie(string inName);
    virtual ~Sheltie();

    virtual string Vocalize() const;
};

#endif