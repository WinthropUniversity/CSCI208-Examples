.PHONY: all clean
all: petexample

petexample: main.o Pet.o Snake.o Dog.o Cat.o
	g++ -o $@ *.o

main.o: main.cc Pet.h
	g++ -c $<

Pet.o:  Pet.cc Pet.h
	g++ -c $<

Dog.o:  Dog.cc Dog.h Pet.h
	g++ -c $<

Cat.o:  Cat.cc Cat.h Pet.h
	g++ -c $<

Snake.o:  Snake.cc Snake.h Pet.h
	g++ -c $<

clean:
	rm -f *.o petexample