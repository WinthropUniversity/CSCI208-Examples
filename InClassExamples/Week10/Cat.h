#ifndef CAT_H__
#define CAT_H__

#include "Pet.h"
#include<string>

using namespace std;

class Cat : public Pet {
public:
  Cat(string inName);

  virtual string Speak() const;
  
private:
  string name_;
};

#endif