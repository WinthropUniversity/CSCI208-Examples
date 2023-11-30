#include<iostream>
#include<string>

using namespace std;

void myOtherFunction(string substr, int frameCounter) {
    cout << "OtherFunction:: Frame[" << frameCounter << "]  " << substr << endl;
    return;
}


void myRecursiveFunction(string substr, int frameCounter) {
    // As long as framecounter is bigger than 0, keep on recursing
    if (frameCounter > 0) {
        cout << "-->Calling myRecursiveFunction(\"" 
             << ("o"+substr) << "\""
             <<", " << (frameCounter-1) << ")" << endl;
        myRecursiveFunction("o"+substr,  frameCounter-1);
        //myRecursiveFunction(substr+"O",  frameCounter-1);
        //myOtherFunction("o"+substr, frameCounter-1);
        cout << "<-- Returned from myRecursiveFunction(\"" 
             << ("o"+substr) << "\""
             <<", " << (frameCounter-1) << ")" << endl;
    }

    return;
}

int foreverFunction(int total) {
    return foreverFunction(total + 1.0);
}


int main() {
    //myRecursiveFunction("#", 3);
    cout << "Forever function returned: " << foreverFunction(10) << endl;

    // This program rocks!
    return 0;
}