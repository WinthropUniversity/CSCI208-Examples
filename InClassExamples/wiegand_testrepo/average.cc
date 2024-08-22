#include<iostream>
#include "average.h"

// Estimate the average of the numbers in the list.  The parameter
// list is an array of doubles containing values we want to average,
// and the parameter size is the number of items stored in the list.
double computeAverage(double list[], int size) {
    double total = 0.0;
    for (int idx=0; idx<size; ++idx)
        total += list[idx];
    return (total/size);
} 

