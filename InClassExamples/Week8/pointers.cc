#include <iostream>
#include <string>


using namespace std;

int main() {
    string *userNamePtr;   // Declaration
    
    userNamePtr = new string();   // Allocation

    cout << "I allocated space for the string.  Here's it's address: " 
         << userNamePtr << endl;
        
    cout << "Okay.  What is your name? ";
    cin >> *userNamePtr;  // De-reference;

    cout << "Well, I think '" << *userNamePtr << "' is a great name!" << endl;
    cout << "Your name has this many characters in it: " << userNamePtr->size() << endl;

    delete userNamePtr;  // Deallocation

    cout << "Okay, I deallocated.  Here's what the memory address is now: " << userNamePtr <<endl;

    userNamePtr = nullptr;  // Erasing the pointer

    cout << "After I erase it, here's what the memory address is now: " << userNamePtr <<endl;

    // Everything is is okay
    return 0;
}