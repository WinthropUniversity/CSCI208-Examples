all: listtester.exe

listtester.exe: Node.o listtester.o
	g++ Node.o listtester.o   -o $@

Node.o: Node.cc Node.h
	g++ -c Node.cc

listtester.o: listtester.cc Node.h
	g++ -c listtester.cc

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe
