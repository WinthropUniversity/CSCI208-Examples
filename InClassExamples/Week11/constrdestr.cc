#include<iostream>

using namespace std;

class MyBaseClass {
public:
  MyBaseClass(string inStr) {
    name = inStr;
    cout << "Creating base class w/ string " << name << endl;
  }

  string GetName() const { return name; }

  ~MyBaseClass() {
    cout << "Destroying base class w/ string " << name << endl;
  }

private:
  string name;
};


class MyDerivedClass : public MyBaseClass {
public:
  MyDerivedClass(string inStr) : MyBaseClass(inStr) {
    cout << "Creating derived class w/ string " << GetName() << endl;
  }

  ~MyDerivedClass() {
    cout << "Destroying derived class w/ string " << GetName() << endl;
  }
};



int main() {
    cout << "-----> First line of program!!" << endl;

    MyDerivedClass myobject("Happy Halloween!");
    //MyBaseClass *myobject = new MyBaseClass("Best Object Ever!!");
    //delete myobject;

    cout << "<----- Last line of program!!" << endl;

    return 0;
}