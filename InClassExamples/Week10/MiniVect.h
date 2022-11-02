#ifndef MINIVECT_H__
#define MINIVECT_H__

#include "Pet.h"

class MiniVect {
public:
  MiniVect(unsigned int inCapacity);
  ~MiniVect();

  unsigned int GetCapacity() const;

  Pet *GetValueAt(unsigned int idx) const;
  void SetValueAt(unsigned int idx, Pet *inValue);

private:
  Pet **petList_;
  unsigned int capacity_;
};

#endif