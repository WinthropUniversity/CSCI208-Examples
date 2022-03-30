#ifndef BOAR_H__
#define BOAR_H__


#include<Animal.h>


class Boar : public Animal {
public:
    Boar(); // default constructor
    Boar(int inNumberOfLegs, int inNumberOfTusks); // init constructor
    ~Boar();

    virtual string GetSpecies() const {return "Boar";}
    virtual string GetAnimalNoise() const;
    int GetNumberOfTusks();

private:
    int numberOfTusks_;
};

#endif