#include<iostream>
#include<string>

using namespace std;


void OldWayToDoSomethingToName(string* namePtr) {
    *namePtr = "Something New!";
}


void DoSomethingToName(string &name) {
    name = "Something New!";
}

int main() {
    string name = "Nothing";

    cout << "What is your name? ";
    cin >> name;

    cout << "Your name was: " << name << endl;
    //DoSomethingToName(name);
    OldWayToDoSomethingToName( &name );
    cout << "Your name is: " << name << endl;

    // Awesome ending!
    return 0;
}