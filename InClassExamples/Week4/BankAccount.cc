#include "BankAccount.h"

BankAccount::BankAccount(unsigned int inAccountNumber, string inAccountHolder){
    accountNumber_ = inAccountNumber;
    balance_ = 0.0;
    accountHolder_ = inAccountHolder;  
}


BankAccount::BankAccount(unsigned int inAccountNumber, double inInitialBalance, string inAccountHolder){
    accountNumber_ = inAccountNumber;
    balance_ = inInitialBalance;
    accountHolder_ = inAccountHolder;  
}


unsigned int BankAccount::GetAccountNumber() const {
    return accountNumber_;
}

string BankAccount::GetAccountHolder() const {
    return accountHolder_;
}

double BankAccount::GetBalance() const {
    return balance_;
}



void BankAccount::Deposit(double inAmount){
    if (inAmount >= 0)
        balance_ += inAmount;

    else
        cerr << "ERROR: Cannot deposit a negative amount!" << endl << endl;
}

void BankAccount::Withdraw(double inAmount, double inPotentialFineAmount){
    // Fines must be positive
    if (inPotentialFineAmount < 0) inPotentialFineAmount = -inPotentialFineAmount;

    if (inAmount >= 0)
        balance_ -= inAmount;

        if (balance_ < 0)
            balance_ -= inPotentialFineAmount;

    else
        cerr << "ERROR: Cannot withdraw a negative amount!" << endl << endl;

}


void BankAccount::Print() const {
    cout << "NAME: " << accountHolder_ << endl;
    cout << "  ACCOUNT #: " << accountNumber_ << endl;
    cout << "  BALANCE  : " << balance_ << endl << endl;
}
