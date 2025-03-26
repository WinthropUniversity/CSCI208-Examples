all: book.exe

book.exe:  Book.o  main.o
	g++ -o $@  Book.o  main.o


Book.o: Book.cc Book.h
	g++ -c $<

main.o: main.cc  Book.h
	g++ -c $<

clean:
	rm -f *.o  *.exe