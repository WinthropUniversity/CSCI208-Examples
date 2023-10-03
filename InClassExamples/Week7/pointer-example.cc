#include<iostream>
#include<string>

using namespace std;

void changeName(string *inTextPtr) {
    *inTextPtr = "Paul Wiegand";
}

int main() {
    int favoriteInteger = 7;
    int *favoriteIntegerPtr;

    // Assign to the ptr the memory address where favioriteInteger is stored
    favoriteIntegerPtr = &favoriteInteger;  // Referencing

    // Go to the memory location at the ptr and assign value 12 to the integer there
    *favoriteIntegerPtr = 12;  // Dereferencing

    cout << "Our favorite number is: " << favoriteInteger << endl;
    cout << "The memory address where favoriteInteger is:    " << &favoriteInteger << endl;
    cout << "The value of favoriteIntegerPtr is:             " << favoriteIntegerPtr << endl;
    cout << "The memory address where favoriteIntegerPtr is: " << &favoriteIntegerPtr << endl;

    cout << endl << "MyList:" << endl;
    double mylist[] = {3.14, 6.28, 1.712, 2.71828};
    for (int idx=0; idx<4; idx++) {
        cout << "  mylist[" << idx << "] = " << mylist[idx] << endl;
    }
    cout << "The *value* of mylist is:       " << mylist << endl;
    cout << "The second value in the list is: " << *(mylist+1) << endl;

    cout << endl << "More goofiness: " << endl;
    string name = "NO NAME";
    changeName(&name);
    cout << "  My name is: " << name << endl;
    cout << "  That is stored here in memory: " << &name << endl;

    // Everything is okay
    return 0;
}