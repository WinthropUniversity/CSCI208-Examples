#ifndef ANIMAL_H__
#define ANIMAL_H__

#include<iostream>
#include<string>

using namespace std;

class Animal {
public:
    Animal(); // default constructor
    Animal(int inNumberOfLegs); // init constructor
    ~Animal();

    virtual string GetSpecies() const = 0;
    int GetNumberOfLegs() const;
    virtual string GetAnimalNoise() const = 0;

private:
    int numberOfLegs_;
};


#endif

