#include<iostream>

using namespace std;

class A {
public:
    A() {
        cout << "     A is built." << endl;
    }

    ~A() {
        cout << "     A is destroyed." << endl;
    }
};

class B : public A {
public:
    B() : A() {
        cout << "       B is built." << endl;
    }

    ~B() {
        cout << "       B is destroyed." << endl;
    }
};


class C : public B {
public:
    C() : B() {

        cout << "         C is built." << endl;
    }

    ~C() {
        //cout << "Destroy!!!" << endl;
        //int *ptr = NULL;
        cout << "         C is destroyed." /*<< ptr[1]*/ << endl;
    }
};


int main() {
    //C myobject;
    //A *ptr;
    //B *ptr;
    C *ptr;

    cout << "START!" << endl;

    ptr = new C();

    cout << "MIDDLE!" << endl;

    delete ptr;
    ptr = NULL;

    cout << "END!" << endl;

    return 0;
}