all: listexample.exe

listexample.exe: main.o Node.o
	g++ main.o Node.o   -o $@

main.o: main.cc Node.h
	g++ -c $<

Node.o: Node.cc Node.h
	g++ -c $<

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe


