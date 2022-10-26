#ifndef CAT_H__
#define CAT_H__

#include<string>
#include "Pet.h"

class Cat : public Pet {
public:
    Cat(string inName);
    virtual string Speak();    
};

#endif