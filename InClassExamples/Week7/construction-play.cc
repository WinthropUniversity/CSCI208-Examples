#include<iostream>
#include<string>

using namespace std;

class SillyClass {
public:
    SillyClass() { // Default Constructor
        name_ = "NO NAME";
        cout << "DBG:  Default constructor just happened!!" << endl;
    }              

    SillyClass(string inName) { // Init constructor
        name_ = inName;
        cout << "DBG:  Init constructor just happened!!" << endl;
    }              

    SillyClass(const SillyClass &sourceObj) { // Copy Constructor
        name_ = sourceObj.name_;
        cout << "DBG:  Copy constructor just happened!!" << endl;
    }

    string GetName() { return name_; }

private:
    string name_;
};


//void PointlessFunction(SillyClass *inObj) {
void PointlessFunction(SillyClass inObj) {
    cout << "I am in the pointless function now ..." << endl;
    cout << "The local parameter object name is" << inObj.GetName() /*inObj->GetName()*/ << endl;
}


int main() {
    SillyClass mySillyObject1;
    SillyClass mySillyObject2("Paul");
    
    cout << "Silly Object 1 Name: " << mySillyObject1.GetName() << endl;
    cout << "Silly Object 2 Name: " << mySillyObject2.GetName() << endl;

    cout << endl << "Let's test copy construction ..." << endl;
    PointlessFunction(mySillyObject2);
    //PointlessFunction(&mySillyObject2);

    // Everything is okay
    return 0;
}