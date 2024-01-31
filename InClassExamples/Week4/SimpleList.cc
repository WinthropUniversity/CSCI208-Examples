#include "SimpleList.h"

using namespace std;

SimpleList::SimpleList() {
    size_ = 0;
    for (int idx=0; idx<MAX_LIST_SIZE; idx++)
      list_[idx] = 0.0;
}

unsigned int SimpleList::GetSize() const {
    return size_;
}


double SimpleList::GetListValue(unsigned int index) const {
    double returnValue = 0.0; // There's probably a better way to signal an invalid list item

    if (index < size_) returnValue =  list_[index];
    else cerr << "ERROR:  Index " << index 
              << " was requested, but there are only " 
              << size_ << " items in the list!!" << endl;

    return returnValue;
}



void SimpleList::AddValue(double inValue) {
  list_[size_] = inValue;
  size_++;
}


double SimpleList::EstimateMean() const {
    double total = 0.0;
    for (int idx=0; idx<size_;  idx++) {
        total += list_[idx];
    }
    return total/(double)size_;
}