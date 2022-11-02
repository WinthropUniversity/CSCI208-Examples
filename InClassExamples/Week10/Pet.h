#ifndef PET_H__
#define PET_H__

#include<string>

using namespace std;

class Pet {
public:
  Pet(string inName);

  string GetName() const;
  virtual string Speak() const = 0;

private:
  string name_;
};

#endif