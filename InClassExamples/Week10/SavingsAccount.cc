#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(string inName)  {
  name_ = inName;
  amount_ = 0.0;
  monthlyInterestRate_ = 0.02;
  cout << "Building a savings account for " << GetName() << endl;
}

SavingsAccount::SavingsAccount(string inName, double inInitAmount) {
  name_ = inName;
  amount_ = inInitAmount;
  monthlyInterestRate_ = 0.02;
  cout << "Building a savings account for " << GetName() <<  " (" << GetBalance() << ")" << endl;
}


SavingsAccount::SavingsAccount(string inName, double inInitAmount, double inMonthlyInterest)  {
  name_ = inName;
  amount_ = inInitAmount;
  monthlyInterestRate_ = inMonthlyInterest;
  cout << "Building a savings account for " << GetName() <<  " (" << GetBalance() << ")" << endl;
}


double SavingsAccount::GetMonthlyInterestRate() const {
  return monthlyInterestRate_;
}


void SavingsAccount::Withdraw(double inWithdrawalAmount) {
  if (amount_ - inWithdrawalAmount > 0) {
    amount_ -= inWithdrawalAmount;
  }
}

void SavingsAccount::depositMonthlyInterest() {
    amount_ += amount_ * monthlyInterestRate_;
}

