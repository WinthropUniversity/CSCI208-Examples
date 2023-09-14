#include<iostream>

#include "BankAccount.h"

using namespace std;

int main() {
    BankAccount myAccount(1, 1000.01, "R. Paul Wiegand");

    myAccount.Deposit(42.02);
    myAccount.Deposit(12.13);
    myAccount.Deposit(-142.33);

    myAccount.Print();

    myAccount.Withdraw(142.33, 20.00);

    myAccount.Print();

    return 0;
}