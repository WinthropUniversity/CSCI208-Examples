#include <iostream>
#include <string>
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

// This function doesn't need to know what kind of account it has
bool IsGreater(const BankAccount &account1, const BankAccount &account2) {
   return (account1.GetBalance() > account2.GetBalance());
}



int main() {
  CheckingAccount myCheckingAccount("Paul Wiegand", 1001.21);
  CheckingAccount mySavingsAccount("Paul Wiegand", 10002.66);

  myCheckingAccount.PrintAccountInfo();

  myCheckingAccount.Deposit(110.32);
  myCheckingAccount.PrintAccountInfo();

  myCheckingAccount.Withdraw(50.17);
  myCheckingAccount.PrintAccountInfo();

  myCheckingAccount.Withdraw(1062.00);
  myCheckingAccount.PrintAccountInfo();

  if (IsGreater(myCheckingAccount, mySavingsAccount)) {
    cout << "You have more money in your checking account.  Maybe move some to savings?";
  }
  else {
    cout << "Your savings is larger than your checking!  Great job!";
  }

  // Everything is okay
  return 0;
}