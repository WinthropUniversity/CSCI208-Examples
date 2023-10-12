CC=g++
CFLAGS=-I. -c
LDFLAGS=

all: StringListTester.exe

StringListTester.exe: StringListTester.o StringList.o
	$(CC) $(LDFLAGS) StringListTester.o StringList.o  -o $@

StringList.o: StringList.cc StringList.h
	$(CC) $(CFLAGS) $<

StringListTester.o: StringListTester.cc StringList.h
	$(CC) $(CFLAGS) $<


clean:
	rm -f *.exe *.o

cleanwin:
	del *.exe
	del *.o


