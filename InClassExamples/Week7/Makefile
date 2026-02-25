all: people.exe

people.exe: main.o Node.o
	g++ main.o Node.o  -o $@

main.o: main.cc Node.h
	g++ -c main.cc

Node.o: Node.cc Node.h
	g++ -c Node.cc

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe

	