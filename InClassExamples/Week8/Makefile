PROGRAM=listtester.exe

all: $(PROGRAM)

$(PROGRAM): Node.o listtester.o
	g++ Node.o	listtester.o   -o $@

Node.o:  Node.cc Node.h
	g++ -c $<

listtester.o: 	listtester.cc Node.h
	g++ -c $<

clean:
	rm -f *.o *.exe
