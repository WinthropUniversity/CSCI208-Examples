#ifndef CAT_H__
#define CAT_H__


#include<Animal.h>


class Cat : public Animal {
public:
    Cat(); // default constructor
    Cat(int inNumberOfLegs); // init constructor
    ~Cat();

    virtual string GetSpecies() const {return "Cat";}
    virtual string GetAnimalNoise() const;
};

#endif