#include<iostream>

using namespace std;

int main() {
    double *array;

    array = new double[3];
    array[0] = 10;
    *(array + 1) = 20;
    array[2] = 30;

    for (int idx=0; idx<3; idx++) {
      cout << "array[" << idx << "] = " << array[idx] 
           << ", at address " << (array+idx) << endl;
    }

    return 0;
}