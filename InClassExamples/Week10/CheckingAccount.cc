#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(string inName) {
  name_ = inName;
  amount_ = 0.0;
  insufficientFundsFee_ = 20.00;
  cout << "Building a checking account for " << GetName() << endl;
}

CheckingAccount::CheckingAccount(string inName, double inInitAmount) {
  name_ = inName;
  amount_ = inInitAmount;
  insufficientFundsFee_ = 20.00;
  cout << "Building a checking account for " << GetName() <<  " (" << GetBalance() << ")" << endl;
}


CheckingAccount::CheckingAccount(string inName, double inInitAmount, double inInsufficientFundsFee) {
  name_ = inName;
  amount_ = inInitAmount;
  insufficientFundsFee_ = inInsufficientFundsFee;
  cout << "Building a checking account for " << GetName() <<  " (" << GetBalance() << ")" << endl;
}


double CheckingAccount::GetInsufficientFundsFee() const {
  return insufficientFundsFee_;
}

void CheckingAccount::Withdraw(double inWithdrawalAmount) {
  if (amount_ - inWithdrawalAmount < 0) {
    amount_ -= insufficientFundsFee_;
  }
  else {
    amount_ -= inWithdrawalAmount;
  }
}