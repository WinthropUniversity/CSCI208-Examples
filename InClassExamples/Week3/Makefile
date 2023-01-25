EXECUTABLE=BankProgram

all: $(EXECUTABLE)

$(EXECUTABLE):  BankAccount.o BankMain.o
	g++ -o $@  BankAccount.o BankMain.o

BankAccount.o:  BankAccount.cc BankAccount.h
	g++ -c BankAccount.cc

BankMain.o:  BankMain.cc BankAccount.h
	g++ -c BankMain.cc

clean:
	rm -f *.o  $(EXECUTABLE)

cleanwin:
	del *.o
	del $(EXECUTABLE)

	
