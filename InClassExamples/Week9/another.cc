#include<iostream>

using namespace std;

class MyBaseClass {
public:
    void NotVirtual() const {
        cout << "I am running the NotVirtual() method from MyBaseClass" << endl;
    }
    virtual void IsVirtual() const {
        cout << "I am running the IsVirtual() method from MyBaseClass" << endl;
    }
};

class MyDerivedClass : public MyBaseClass {
    public:
        void NotVirtual() const {
            cout << "I am running the NotVirtual() method from MyDerivedClass" << endl;
        }
        virtual void IsVirtual() const {
            cout << "I am running the IsVirtual() method from MyDerivedClass" << endl;
        }
    };

void CallTheMethod(const MyBaseClass &foo) {
    foo.NotVirtual();
    foo.IsVirtual();
}

int main() {
    MyDerivedClass y;
    CallTheMethod(y);

    return 0;
}