#include<iostream>
#include<string>

#include "BankAccount.h"

int main() {
  string lastName;
  string firstName;
  string middleName;
  double initialBalance;

  cout << "Last Name: ";
  cin >> lastName;

  cout << "First Name: ";
  cin >> firstName;

  cout << "Middle Name: ";
  cin >> middleName;

  cout << "Initial Balance: ";
  cin >> initialBalance;

  BankAccount myaccount(lastName, firstName, middleName, initialBalance);

  bool done=false;

  do {
    string action;
    double amount;

    cout << "Deposit(d), Withdraw(w), or Quit(q): ";
    cin >> action;
    if (action[0] == 'd') {
      cout << "How much? ";
      cin >> amount;
      myaccount.Deposit(amount);
    }
    else if (action[0] == 'w') {
      cout << "How much? ";
      cin >> amount;
      myaccount.Withdraw(amount);      
    }
    else if (action[0] == 'q') {
      done = true;
    }
    else {
      cerr << "I don't understand the command '" << action << "'." << endl;
    }
    cout << "Account: " << myaccount.GetLastName() 
         << ", " << myaccount.GetFirstName() << " " 
         << myaccount.GetMiddleName() << endl;
    cout << "Balance: " << myaccount.GetBalance() << endl << endl;
  } while (!done);

  return 0; // Yay!  It worked!
}
