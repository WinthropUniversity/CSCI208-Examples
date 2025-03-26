CFLAGS=-c -I.

all: book.exe

book.exe:  Book.o  main.o Textbook.o
	g++ -o $@  Book.o  main.o Textbook.o


Textbook.o: Textbook.cc Textbook.h
	g++ $(CFLAGS) $<

Book.o: Book.cc Book.h
	g++ $(CFLAGS) $<

main.o: main.cc  Book.h
	g++ $(CFLAGS) $<

clean:
	rm -f *.o  *.exe