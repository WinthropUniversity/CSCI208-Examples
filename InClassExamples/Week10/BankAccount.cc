#include "BankAccount.h"
#include <iostream>
#include <iomanip>


BankAccount::BankAccount() {
    name_ = "NO NAME";
    amount_ = 0.0;
}

BankAccount::BankAccount(string inName) {
  name_ = inName;
  amount_ = 0.0;
  cout << "Building a bank account for " << GetName() << endl;
}


BankAccount::BankAccount(string inName, double inInitAmount) {
  name_ = inName;
  amount_ = inInitAmount;
  cout << "Building a bank account for " << GetName() <<  " (" << GetBalance() << ")" << endl;
}

void BankAccount::Deposit(double inDepositAmount) {
  amount_ += inDepositAmount;
}

double BankAccount::GetBalance() const {
  return amount_;
}

string BankAccount::GetName() const {
  return name_;
}


void BankAccount::PrintAccountInfo() const {
  cout << GetName() << " :: " << fixed << setprecision(2) << GetBalance() << endl;
}
