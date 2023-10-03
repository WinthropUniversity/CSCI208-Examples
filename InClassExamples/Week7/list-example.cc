#include<iostream>
#include "node.h"

using namespace std;

int main() {
    // Build am empty node
    TriangleNode *headPtr = new TriangleNode();

    cout << "headPtr's address is:    " << headPtr << endl;
    cout << "headPtr triangle base:   " << headPtr->GetBase() << endl;
    cout << "headPtr triangle height: " << headPtr->GetHeight() << endl;
    cout << "headPtr triangle next:   " << headPtr->GetNext() << endl;


    // Everything is okay
    return 0;
}