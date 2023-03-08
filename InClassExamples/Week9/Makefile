all: PetMain.exe

PetMain.exe: PetMain.o Pet.o Cat.o Dog.o Bird.o Snake.o
	g++ -o $@ *.o

PetMain.o: PetMain.cc Pet.h
	g++ -c $<

Pet.o: Pet.cc Pet.h
	g++ -c $<

Cat.o: Cat.cc Cat.h
	g++ -c $<

Bird.o: Bird.cc Bird.h
	g++ -c $<

Snake.o: Snake.cc Snake.h
	g++ -c $<

Dog.o: Dog.cc Dog.h
	g++ -c $<

clean:
	rm -f *.o *.exe

