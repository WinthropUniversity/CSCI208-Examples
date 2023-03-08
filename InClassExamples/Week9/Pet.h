#ifndef PET_H__
#define PET_H__

#include<string>

using namespace std;

class Pet {
public:
  Pet(string inName, int inAge, int inNumLegs);

  string GetName() const;
  int GetAge() const;
  int GetLegCount() const;

  void IncrementAge();

  virtual string Vocalize() const = 0;
  
protected:
  string name_;
  int age_;
  int numLegs_;
};

#endif