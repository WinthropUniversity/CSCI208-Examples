#include<iostream>
#include<string>

using namespace std;

class SimpleBaseClass {
  protected:
    string name_;

  public:
    // Default and initialization constructors
    // Initialize the private name_ field using the ':' op.
    SimpleBaseClass() : name_("") {}
    SimpleBaseClass(string inName) : name_(inName) {}  

    void PrintSomethingSilly() const {
        cout << name_ << " :: This is a silly printout!" << endl;
    }
    virtual void PrintOtherSillyThing() const {
        cout << name_ << " :: This is ANOTHER silly printout!" << endl;
    }
};


class SimpleDerivedClass : public SimpleBaseClass {
  public:
    // Default and initialization constructors
    // Initialize the private name_ field using the ':' op.
    SimpleDerivedClass(string inName) 
        : SimpleBaseClass(inName) {}  

    void PrintSomethingSilly() const {
        cout << name_ << " :: This is the derived silly printout!" << endl;
    }
    virtual void PrintOtherSillyThing() const {
        cout << name_ << " :: This is ANOTHER derived silly printout!" << endl;
    }

};

class MyFavoriteClass : public SimpleDerivedClass {
  public:
    // Default and initialization constructors
    // Initialize the private name_ field using the ':' op.
    MyFavoriteClass(string inName) 
        : SimpleDerivedClass(inName) {}  

    virtual void PrintOtherSillyThing() const {
        cout << name_ << " :: PARTY!!!  YAY!!!" << endl;
    }

};



void GenericFunction(const SimpleBaseClass &foo) {
    foo.PrintSomethingSilly();
    foo.PrintOtherSillyThing();
}





int main() {
    SimpleBaseClass x("My-Base-Class-Name");
    GenericFunction(x);

    cout << endl;

    SimpleDerivedClass y("My-Derived-Class-Name");
    GenericFunction(y);

    cout << endl;

    MyFavoriteClass z("AWESOMEESS!!");
    GenericFunction(z);

    cout << endl;


    return 0;
}

