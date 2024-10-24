.PHONY: all clean

all: BankMain.exe

BankMain.exe: BankMain.o BankAccount.o CheckingAccount.o SavingsAccount.o
	g++  BankMain.o BankAccount.o CheckingAccount.o SavingsAccount.o -o $@

BankMain.o: BankMain.cc BankAccount.h
	g++ -c $<

BankAccount.o: BankAccount.cc BankAccount.h
	g++ -c $<

CheckingAccount.o: CheckingAccount.cc CheckingAccount.h BankAccount.h
	g++ -c $<

SavingsAccount.o: SavingsAccount.cc SavingsAccount.h BankAccount.h
	g++ -c $<

clean:
	rm -rf  *.o  *.exe