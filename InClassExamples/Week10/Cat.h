#ifndef CAT_H_
#define CAT_H_

#include<iostream>
#include<string>


#include "Pet.h"

using namespace std;

class Cat : public Pet {
public:
    void Purr() const;
    virtual void Vocalize() const;
};




#endif