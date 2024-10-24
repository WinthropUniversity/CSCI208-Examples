#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

#include<string>

using namespace std;

class BankAccount {
public:
  BankAccount();
  BankAccount(string inName);
  BankAccount(string inName, double inInitAmount);

  virtual void Deposit(double inDepositAmount);
  virtual void Withdraw(double inWithdrawalAmount) = 0;

  virtual double GetBalance() const;
  virtual string GetName() const;

  virtual void PrintAccountInfo() const;

protected:
  string name_;
  double amount_;
};

#endif