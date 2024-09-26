all: ListTester.exe

ListTester.exe: ListTester.o List.o Node.o
	g++ *.o  -o $@

Node.o: Node.cc  Node.h
	g++ -c $<

List.o: List.cc List.h Node.h
	g++ -c $<

ListTester.o: ListTester.cc List.h
	g++ -c $<

clean:
	rm -f *.o *.exe