#include<iostream>
#include<string>

using namespace std;

class NameStorer {
public:
    // The constructor is overloaded!! 

    NameStorer() : name_("NONAME"){
        cout << "CONSTRUCTION(default):  NameStorer has begun!!  :: " << name_ << endl;
    }

    NameStorer(string inName) : name_(inName){
        cout << "CONSTRUCTION(init):  NameStorer has begin!!  :: " << name_ << endl;
    }

    ~NameStorer() {
        cout << "DESTRUCTION:  NameStorer has ended!!  :: " << name_ << endl;
    }

    string GetName() { return name_; }
    void SetName(string inName) { name_ = inName; }

protected:
    string name_;
};


class NameAndAgeStorer : public NameStorer {
public:
    NameAndAgeStorer(string inName, int inAge) : NameStorer(inName), age_(inAge) {
        cout << "CONSTRUCTION(init):  NameAndAgeStorer has begin!!  :: " << name_ << " " << age_ << endl;
    }

    ~NameAndAgeStorer() {
        cout << "DESTRUCTION:  NameAndAgeStorer has ended!!  :: " << name_ << endl;
    }

    int GetAge() {return age_;}
    void SetAge(int inAge) {age_ = inAge;}

private:
    int age_;
};


int main() {
    NameStorer *x;
    NameAndAgeStorer y("Fred", 22);

    x = new NameStorer;
    x->SetName("Susan");

    cout << "The name stored in x is: " << x->GetName() << endl;
    cout << "The name stored in y is: " << y.GetName() << endl;

    delete x;
    
    // Everything is okay
    return 0;
}// y got destroyed