.PHONY: all clean cleanwin

all: PetMain.exe

PetMain.exe:  PetMain.o Pet.o Cat.o Dog.o Snake.o Sheltie.o	
	g++ -o $@  *.o

PetMain.o:  PetMain.cc  Pet.h  Cat.h
	g++ -c $<

Pet.o:  Pet.cc  Pet.h 
	g++ -c $<
	
Cat.o:  Cat.cc  Cat.h  Pet.h 
	g++ -c $<

Dog.o:  Dog.cc  Dog.h  Pet.h 
	g++ -c $<

Sheltie.o:  Sheltie.cc  Sheltie.h  Dog.h Pet.h 
	g++ -c $<

Snake.o:  Snake.cc  Snake.h  Pet.h 
	g++ -c $<


clean:
	rm -f *.exe *.o

cleanwin:
	del *.exe
	del *.o

