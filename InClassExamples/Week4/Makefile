all: BankMain.exe

BankMain.exe: BankMain.o BankAccount.o
	g++ BankMain.o BankAccount.o  -o $@

BankMain.o: BankMain.cc BankAccount.h
	g++ -c BankMain.cc

BankAccount.o: BankAccount.cc BankAccount.h
	g++ -c BankAccount.cc

clean:
	rm -f *.o

cleanwin:
	del *.o

