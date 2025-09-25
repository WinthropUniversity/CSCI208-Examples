#include<iostream>
#include<string>

using namespace std;


void ChangeVariable(string *nameptr) {
   cout << "Changing the string ..." << endl;
   *nameptr = "Blank";
}


int main() {
    double pi = 3.141592653589;
    cout << "Pi is approximately: " << pi << endl;
    cout << "That variable is here: " << &pi << endl;
    
    double *numberptr;
    cout << "Before allocation, numberptr has this address: " << numberptr << endl;

    numberptr = &pi;
    cout << "After ptr assignment, numberptr has this address: " << numberptr << endl;
    cout << "The double stored there is: " << *numberptr << endl;

    cout << endl;
    cout << "The numberptr variable is located here: " << &numberptr << endl;

    *numberptr = 7.1;
    cout << "What is pi again? " << pi << endl;

    cout << "Weirdness abounds... What is *&pi? " << *&pi << endl;

    string firstName = "Paul";
    ChangeVariable(&firstName);
    cout << "After my call to ChangeVariable, firstName=" << firstName << endl;



    numberptr = new double;
    cout << "I allocated more space, the new address for numberptr is: " << numberptr << endl;
    *numberptr = -1024.24;
    cout << "The value at numberptr is: " << *numberptr << endl;
    delete numberptr;
    cout << "Here's that address for numberptr after deallocation: " << numberptr << endl;
    numberptr = nullptr;
    cout << "Here's that address for numberptr after erasing it: " << numberptr << endl;
    cout << "Now the value at numberptr is: " << *numberptr << endl;

    return 0;
}