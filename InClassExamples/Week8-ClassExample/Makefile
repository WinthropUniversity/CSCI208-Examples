
all: main

main: main.o node.o
	g++ -o $@ *.o

main.o: main.cc node.h
	g++ -c $<

node.o: node.cc node.h
	g++ -c $<

clean:
	rm -f *.o main

cleanwin:
	del *.o
	del main