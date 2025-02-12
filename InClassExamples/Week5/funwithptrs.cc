#include<iostream>

using namespace std;

int main() {
    double favoriteNumber;
    double *ptrToNumber = &favoriteNumber;

    cout << "What is your favorite number? ";
    cin >> favoriteNumber;
    cout << endl;

    cout << "Yea, the number " << favoriteNumber << " is really cool!" << endl;
    cout << "Hey, I went ahead and put that in memory here: " << &favoriteNumber << endl;
    cout << endl;

    *ptrToNumber = 7.0;
    cout << " ptrToNumber   = " <<  ptrToNumber << endl;
    cout << "*ptrToNumber   = " << *ptrToNumber << endl;
    cout << "favoriteNumber = " << favoriteNumber << endl;
    cout << "*&favoriteNumber = " << *&favoriteNumber << endl;


    // Everything is great!
    return 0;
}