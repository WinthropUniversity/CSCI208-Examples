#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include <string>
#include <iostream>
#include "BankAccount.h"

using namespace std;

class CheckingAccount : public BankAccount {
public:
  CheckingAccount(string inName);
  CheckingAccount(string inName, double inInitAmount);
  CheckingAccount(string inName, double inInitAmount, double inInsufficientFundsFee);

  virtual double GetInsufficientFundsFee() const;
  virtual void Withdraw(double inWithdrawalAmount);

private:
  double insufficientFundsFee_;
};

#endif