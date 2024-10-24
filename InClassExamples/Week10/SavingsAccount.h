#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include <string>
#include <iostream>
#include "BankAccount.h"

using namespace std;

class SavingsAccount : public BankAccount {
public:
  SavingsAccount(string inName);
  SavingsAccount(string inName, double inInitAmount);
  SavingsAccount(string inName, double inInitAmount, double inMonthlyInterest);

  virtual double GetMonthlyInterestRate() const;
  virtual void Withdraw(double inWithdrawalAmount);
  virtual void depositMonthlyInterest();

protected:
  double monthlyInterestRate_;
};



#endif