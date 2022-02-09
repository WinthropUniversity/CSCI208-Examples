#include<iostream>

using namespace std;

int main() {
    int myfavoritenumber = 5;

    cout << "My favorite number is " << myfavoritenumber << endl;

    cout << "What's yours? ";
    cin >> myfavoritenumber;

    cout << "Your favorite number is " << myfavoritenumber << endl;
    cout << "That variable is stored here: " << &myfavoritenumber << endl;

    int* myptr = new int;
    cout << "My new pointer is: " << myptr << endl;
    *myptr = 9;
    cout << "The memory there holds: " << *myptr << endl;

    delete myptr; 
    //myptr = NULL;

    cout << "I deallocated, the pointer now is: " << myptr << endl;
    //cout << "The value there is: " << *myptr << endl;

    // Leak!
    int size = 0;
    double* mylist;
    for (int idx=0; idx<10; idx++) {
        cout << "How big? ";
        cin >> size;
        mylist = new double[size];
    }




    return 0;
}