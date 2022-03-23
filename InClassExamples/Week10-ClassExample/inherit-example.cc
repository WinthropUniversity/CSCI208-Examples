#include<iostream>
#include<string>

using namespace std;


class NameHolder {
public:
    NameHolder(string inName) : name_(inName) {}

    string GetName() {return name_;}

    virtual void Print() const {
        cout << "Inside original class print: " << name_ << endl;
    }

    virtual void PrintDivider() const = 0;

protected:
    string name_;
};


class PrintableNameHolder : public NameHolder {
public:
    PrintableNameHolder(string inName) : NameHolder(inName) {}

    virtual void Print() const {
        cout << "Inside PrintableNameHolder class print: " << name_ << endl;
    }

    virtual void PrintDivider() const {
        cout << "------------------------" << endl;
    }
};


class OtherNameHolder : public NameHolder {
public:
    OtherNameHolder(string inName) : NameHolder(inName) {}

    virtual void Print() const {
        cout << "Inside OtherNameHolder class print: " << name_ << endl;
    }

    virtual void PrintDivider() const {
        cout << "####################" << endl;
    }
};



void DoStuff(const NameHolder &x) {
    x.PrintDivider();
    x.Print();
    cout << endl;
}


int main() {
    //NameHolder myname("Paul");
    PrintableNameHolder prName("Rudolf");
    OtherNameHolder otName("Paul");

    //cout << myname.GetName() << endl;
    //cout << otherName.GetName() << endl;
    //otherName.Print();

    //myname.PrintDivider();
    //DoStuff(myname);

    
    DoStuff(prName);
    DoStuff(otName);

    return 0;
 }