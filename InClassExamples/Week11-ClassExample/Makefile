CFLAGS=-c -I.
OBJECTS=ConstructExample.o Animal.o Boar.o Cat.o

all: example

example: $(OBJECTS)
	g++ -o $@  $(OBJECTS)

ConstructExample.o: ConstructExample.cc Animal.h
	g++ $(CFLAGS) $<

Animal.o: Animal.cc Animal.h
	g++ $(CFLAGS) $<

Boar.o: Boar.cc Boar.h
	g++ $(CFLAGS) $<

Cat.o: Cat.cc Cat.h
	g++ $(CFLAGS) $<

clean:
	rm -f *.o example

