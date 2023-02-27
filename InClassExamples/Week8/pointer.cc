#include<iostream>

using namespace std;

int main() {
    int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "The number you entered was " <<  number << "." << endl;
    cout << "The address of number is " << &number << "." << endl;

    double *numberptr = new double;
    *numberptr = 3.141592653589;
    cout << "The address of numberptr is " << numberptr << "." << endl;
    cout << "The value stored there is " << *numberptr << "." << endl;

    delete numberptr;
    /* Don't do this!!
    cout << "The address of numberptr is  still " << numberptr << "." << endl;
    cout << "The value stored there is now " << *numberptr << "." << endl;
    */

    numberptr = NULL;

    string *myNameArray = new string[number];
    for (int idx=0; idx < number; idx++) {
        cout << "Enter a name: ";
        cin >> myNameArray[idx];
    }

    for (int idx=0; idx < number; idx++) {
        cout <<  myNameArray[idx] << "  ";
    }
    cout << endl;

    delete [] myNameArray;
    myNameArray = nullptr;

    return 0;
}