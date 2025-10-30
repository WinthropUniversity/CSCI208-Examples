EXECNAME=animalmain.exe

.PHONY: all clean run

all: $(EXECNAME)

run:
	./$(EXECNAME)

$(EXECNAME): animalmain.o  Cat.o  Pet.o  Dog.o  Snake.o
	g++ *.o   -o $@


animalmain.o: animalmain.cc Cat.h Pet.h Dog.h Snake.h
	g++ -c $<

Pet.o: Pet.cc Pet.h 
	g++ -c $<

Cat.o: Cat.cc Cat.h Pet.h
	g++ -c $<

Dog.o: Dog.cc Dog.h Pet.h
	g++ -c $<

Snake.o: Snake.cc Snake.h Pet.h 
	g++ -c $<

clean:
	rm *.o *.exe

cleanwin:
	del *.o
	del *.exe
