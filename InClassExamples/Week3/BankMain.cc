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

  string done="n";
  do {
    string action;
    cout << "Deposit(d), Withdraw(w), or Quit(q): "
    cin >> action;
    switch (action) {
        case "d"
    }
  } while (done != "y")

  return 0; // Yay!  It worked!
}
