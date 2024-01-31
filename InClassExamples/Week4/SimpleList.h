#ifndef SIMPLELIST_H_
#define SIMPLELIST_H_

#include<iostream>

#define MAX_LIST_SIZE 1000


class SimpleList {
public:
  SimpleList();  // default constructor

  // Accessor methods for object state information
  unsigned int GetSize() const;
  double GetListValue(unsigned int index) const;

  // Interface for using the list object
  void AddValue(double inValue);
  double EstimateMean() const;

// Internal member variables (fields) for my objects
private:
  double list_[MAX_LIST_SIZE];
  unsigned int size_;
};


#endif