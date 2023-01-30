#include <BankAccount.h>


BankAccount::BankAccount() {
  balance_ = 0.0;
  lastName_ = "NONAME";
  firstName_ = "NONAME";
  middleName_ = "NONAME";
}

BankAccount::BankAccount(string inLastName, string inFirstName, string inMiddleName, double inBalance ){
  balance_ = inBalance;
  SetAccountName(inLastName, inFirstName, inMiddleName);
}


BankAccount::BankAccount(string inLastName, string inFirstName, string inMiddleName) {
  balance_ = 0.0;
  SetAccountName(inLastName, inFirstName, inMiddleName);
}


double BankAccount::GetBalance() const{
  return balance_;
}

int BankAccount::Deposit(double inAmount) {
  int status = 0; // Everything is okay

  if (inAmount < 0) {
    cerr << "WARNING:  Tried to deposit a negative amount into account: "
         << lastName_ << ", " << firstName_ << endl;
    status = 1; // There was a problem
  }
  else {
    balance_ += inAmount;
  }

  return status;
}

int BankAccount::Withdraw(double inAmount) {
  int status = 0; // Everything is okay

  if (inAmount < 0) {
    cerr << "WARNING:  Tried to withdraw a negative amount from account: "
         << lastName_ << ", " << firstName_ << endl;
    status = 1; // There was a problem
  }
  else {
    balance_ -= inAmount;
  }

  return status;
}

string BankAccount::GetFirstName() {
  return firstName_;
}

string BankAccount::GetLastName() {
    return lastName_;
}

string BankAccount::GetMiddleName() {
    return middleName_;
}

void BankAccount::SetAccountName(string inLastName, string inFirstName, string inMiddleName) {
  lastName_ = inLastName;
  firstName_ = inFirstName;
  middleName_ = inMiddleName;
}

