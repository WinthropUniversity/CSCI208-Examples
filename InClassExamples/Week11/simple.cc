#include<iostream>

using namespace std;

// Base class (most general class type)
class A {
public:
    A() {
        cout << "A is constructed" << endl;
    }

    virtual ~A() {
        cout << "A is destroyed" << endl;
    }
};

// Derived class (most specific class type)
class B : public A {
public:
    B() : A() {
        cout << "B is constructed" << endl;
    }

    virtual ~B() {
        cout << "B is destroyed" << endl;
    }
};


int main() {
    B myobject;
    //B *myobjectptr = new B;

    cout << "   This program does really interesting things here ..." << endl;

    //delete myobjectptr;

    cout << "   This program is now ending ... we are sad " << endl;
    return 0;
}