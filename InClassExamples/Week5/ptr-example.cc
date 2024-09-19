#include<iostream>
#include<string>

using namespace std;

int main() {
    string *name;
    name = new string;
    
    *name = "Paul";

    cout << "Name is: " << (*name) << endl;

    double x = 100.001;
    cout << "x    = " << x  << endl;
    cout << "&x   = " << &x << endl;
    cout << "*&x  = " << *&x << endl;
    cout << "name = " << name << endl;
    cout << "name = " << &name << endl;

    delete name;
    name = NULL;

    int list[5];
    list[0] = 50;
    list[1] = 40;
    list[2] = 30;
    list[3] = 20;
    list[4] = 10;

    for (int idx=0; idx<5; idx++)
      cout << "List[" << idx << "] = " << list[idx] << endl;

    cout << "list = " << list << endl;
    cout << "List[2] = " << *(list+2) << endl;

    
    // Everything is awesome!!
    return 0;
}