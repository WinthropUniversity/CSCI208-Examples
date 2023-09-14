#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include<string>
#include<iostream>

using namespace std;

class BankAccount {
public:
    //BankAccount();
    BankAccount(unsigned int inAccountNumber, string inAccountHolder);
    BankAccount(unsigned int inAccountNumber, double inInitialBalance, string inAccountHolder);

    unsigned int GetAccountNumber() const;
    string GetAccountHolder() const;
    double GetBalance() const;

    void Deposit(double inAmount);
    void Withdraw(double inAmount, double inPotentialFineAmount);

    void Print() const;

private:
    unsigned int accountNumber_;
    double balance_;
    string accountHolder_;
};



#endif