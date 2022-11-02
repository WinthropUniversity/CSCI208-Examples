#include "MiniVect.h"
#include<iostream>
#include<cmath>


// Construct the mini vector, including allocating
// space and clearing the array.
MiniVect::MiniVect(unsigned int inCapacity) : capacity_(inCapacity) {
  petList_ = new  Pet * [capacity_];

  for (unsigned int idx=0; idx<capacity_; idx++)
    petList_[idx] = NULL;
}


// Deallocate the internal array and make the ptr safe
MiniVect::~MiniVect() {
  for (unsigned int idx=0; idx < capacity_; idx++)
    delete petList_[idx];

  delete [] petList_;
  petList_ = NULL;
  capacity_ = 0;
}


// Get the capacity of the list;
unsigned int MiniVect::GetCapacity() const {
  return capacity_;
}


// Return the value at the idx position of the internal array
Pet *MiniVect::GetValueAt(unsigned int idx) const {
  Pet *returnValue = NULL;

  if (idx < capacity_) returnValue = petList_[idx];

  return returnValue;
}



void MiniVect::SetValueAt(unsigned int idx, Pet *inValue) {
  if (idx < capacity_) petList_[idx ] = inValue;
}