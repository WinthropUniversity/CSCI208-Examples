#include<iostream>
#include<string>
#include<exception>

using namespace std;

class MyException : public exception {
public:
  virtual const char* what() const throw()
  {
    return "ERROR:  Do not start names with the letter 'P'!!";
  }    
};


string GetName() {
    string name;
    cout << "What is your name? ";
    cin >> name;

    if (name[0] == 'P') {
      throw MyException();
    }

    return name;
}

int main() {
    try {
      cout << "Getting name ... " << endl << GetName() << endl;
    } catch (MyException &e) {
      cerr << e.what() << endl;
    }
    return 0;
}