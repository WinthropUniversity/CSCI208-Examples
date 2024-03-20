#ifndef CAT_H_
#define CAT_H_

#include<iostream>
#include<string>
#include "Pet.h"

using namespace std;

class Cat : public Pet {
public:
    Cat(string inName);
    virtual ~Cat();

    virtual string Vocalize() const;

//protected:
};

#endif