#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include<string>
#include<iostream>

using namespace std;


class BankAccount {
public:
  BankAccount();
  BankAccount(string inLastName, string inFirstName, string inMiddleName, double inBalance );
  BankAccount(string inLastName, string inFirstName, string inMiddleName);

  int Deposit(double inAmount);
  int Withdraw(double inAmount);

  // Accessor Methods
  double GetBalance() const;
  string GetFirstName();
  string GetLastName();
  string GetMiddleName();

  // Mutator method for the name
  void SetAccountName(string inLastName, string inFirstName, string inMiddleName);

private:
  double balance_;
  string lastName_;
  string firstName_;
  string middleName_;
};


#endif