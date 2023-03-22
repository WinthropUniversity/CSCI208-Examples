#ifndef BASE_H_
#define BASE_H_

#include<string>
#include<iostream>

using namespace std;

class Base {
public:
  Base();
  Base(string inFancyName);
  ~Base();

  string GetFancyName() const;
  
protected:
  string fancyName_;
};

#endif
