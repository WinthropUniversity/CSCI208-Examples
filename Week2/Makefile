all: simple-structsenums

simple-structsenums: simple-structsenums.o
	g++ -o $@ simple-structsenums.o

simple-structsenums.o: simple-structsenums.cc
	g++ -c simple-structsenums.cc

clean:
	rm -f *.o
	rm -f simple-structsenums
