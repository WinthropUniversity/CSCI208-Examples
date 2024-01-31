#include "SimpleList.h"
#include<iostream>

using namespace std;

int main() {
    SimpleList x;
    SimpleList y;

    // Populate my lists with numbers
    x.AddValue(3.14);
    x.AddValue(2.71828);
    x.AddValue(-1.1);
    x.AddValue(42000.0);
    x.AddValue(7.0);
    x.AddValue(10.0);

    y.AddValue(-3.0);
    y.AddValue(2.2);

    // Print some information about the lists
    cout << endl;
    cout << "My list has " << x.GetSize() << " number of items." << endl;
    cout << "The average is: " << x.EstimateMean() << endl;
    cout << endl;
    cout << "The other list has " << y.GetSize() << " number of items." << endl;
    cout << "It's average is: " << y.EstimateMean() << endl;
    cout << endl;
    cout << "What if I try to get the 50th element from x?  It's " << x.GetListValue(50) << endl;

    // Everything is okay
    return 0;
}