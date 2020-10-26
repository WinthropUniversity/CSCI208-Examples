#ifndef DERIVED_H_
#define DERIVED_H_

#include<string>
#include<iostream>
#include<Base.h>

using namespace std;

class Derived : public Base {
public:
  Derived(string inFancyName, int inGreatNumber);
  ~Derived();

  int GetGreatNumber() const;

protected:
  int greatNumber_;
  double *numberlist_;
};

#endif
