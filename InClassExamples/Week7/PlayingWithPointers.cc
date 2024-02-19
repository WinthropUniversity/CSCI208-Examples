#include<iostream>
#include<string>

using namespace std;

int main() {
    string name = "";

    cout << "What is your name? ";
    cin >> name;

    cout << endl;
    cout << "So your name was:    " << name  << endl;
    cout << "And it is stored at: " << &name << endl;

    string* crazyVariablePtr = new string;
    *crazyVariablePtr = "Rudolf";

    cout << "Crazy Variable's address is: " << crazyVariablePtr << endl;
    cout << "The address storing Crazy Variable's address is: " << &crazyVariablePtr << endl;
    cout << "Crazy Variable stores this:  " << *crazyVariablePtr << endl;
    cout << "Remember, your name was:     " << name  << endl;
    cout << "And remember, your name was: " << *&name  << endl;

    delete crazyVariablePtr;
    cout << "Crazy Variable's address is still: " << crazyVariablePtr << endl;
    crazyVariablePtr = nullptr;

    cout << endl << "Am I still here?" << endl;

    // Everything is super-awesome!
    return 0;
}