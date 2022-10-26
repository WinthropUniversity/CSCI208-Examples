CFLAGS=-c -I./inc/

.PHONY: all clean
all: petexample

petexample: main.o Pet.o Snake.o Dog.o Cat.o
	g++ -o $@ *.o

main.o: main.cc inc/Pet.h
	g++ $(CFLAGS) $<

Pet.o:  Pet.cc inc/Pet.h
	g++ $(CFLAGS) $<

Dog.o:  Dog.cc inc/Dog.h inc/Pet.h
	g++ $(CFLAGS) $<

Cat.o:  Cat.cc inc/Cat.h inc/Pet.h
	g++ $(CFLAGS) $<

Snake.o:  Snake.cc inc/Snake.h inc/Pet.h
	g++ $(CFLAGS) $<

clean:
	rm -f *.o petexample