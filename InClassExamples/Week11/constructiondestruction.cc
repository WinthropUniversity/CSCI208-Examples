#include<iostream>
#include<string>

using namespace std;

class User {
public:
    User(); 
    User(string inLastName, string inFirstName,
         string inUserName, int inNumDaysSinceLastLogin);
    ~User();

    virtual void Print() const;

protected:
    string lastName_;
    string firstName_;
    string userName_;
    string password_;
    int numDaysSinceLastLogin_;
};


User::User() : lastName_("NONAME"), 
               firstName_("NONAME"),
               userName_("noname"),
               numDaysSinceLastLogin_(0) {
    cout << "Constructing an object of typer User (default)" << endl;
}

User::User(string inLastName, string inFirstName,
           string inUserName, int inNumDaysSinceLastLogin) :
               lastName_(inLastName), 
               firstName_(inFirstName),
               userName_(inUserName),
               numDaysSinceLastLogin_(inNumDaysSinceLastLogin) {
    cout << "Constructing an object of typer User (initialization)" << endl;
}           

User::~User() {
    cout << "User object was destroyed" << endl;
}

void User::Print() const {
    cout << "USER: " << this->firstName_ << " " 
                     << this->lastName_ << " " 
                     << this->userName_ << "  " 
                     << this->numDaysSinceLastLogin_ << endl;
}


class SuperUser : public User {
public:
   SuperUser();
   SuperUser(int inNumDays);
   ~SuperUser();
   virtual void Print() const;
   void Silly() const;
};


SuperUser::SuperUser() : User("Root", "Root", "root", 0) {
    cout << "Constructing an object of typer SuperUser (default)" << endl;
}

SuperUser::SuperUser(int inNumDays) : User("Root", "Root", "root", inNumDays) {
    cout << "Constructing an object of typer SuperUser (default)" << endl;
}

SuperUser::~SuperUser() {
    cout << "SuperUser object was destroyed" << endl;
}

void SuperUser::Print() const {
    cout << "SUPER";
    User::Print();
}

void SuperUser::Silly() const {
    cout << "Yay!!!" << endl;
}

class OtherClass {
public:
   void Print() const;
};

void OtherClass::Print() const {
    cout << "Meaningless printing ..." << endl;
}


int main() {
    cout << "-->Before I declared my objects" << endl;
    //User x;
    //User y("Wiegand", "Paul", "wiegandrp", 0);
    //User z("Tran", "Nick", "trann2", 10);
    User *bob = new SuperUser(); //(13);
    cout << "<--After I declared my objects" << endl;   

    //x.Print();
    //y.Print();
    //z.Print();
    //(*bob).Print();
    bob->Print();
    //bob->Silly();  // This wont work

    cout << "===I'm done with my code in the main function now." << endl;

    delete bob;
    bob = nullptr;

    return 0;
}