#ifndef CAT_H__
#define CAT_H__

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(string inName, int inAge);
    virtual string Vocalize() const;
    virtual string GetOtherString() const;
//    string GetOtherString() const;
};

#endif