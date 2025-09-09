# A Simple Makefile for each of the targets in this week's set of examples

# Let's get used to using environmental variables for some things
# Here we'll use:
#   $CC for the compiler
#   $CFLAGS to set where the include directory is (here, ".")
CC=g++
CFLAGS=-I.


all:	simple-structsenums circle-main bettercircle-main

## First Example
simple-class:	simple-class.cc
	$(CC) $(CFLAGS) -o simple-class  simple-class.cc


## Second Example
circle.o:	circle.h circle.cc
	$(CC) $(CFLAGS) -c circle.cc

circle-main.o: circle-main.cc circle.h
	$(CC)  $(CFLAGS)  -c circle-main.cc

circle-main:	circle-main.o circle.o
	$(CC) $(CFLAGS) -o circle-main  circle-main.o  circle.o


## Third Example
bettercircle.o:	bettercircle.h bettercircle.cc
	$(CC) $(CFLAGS) -c bettercircle.cc

square.o:	square.h square.cc
	$(CC) $(CFLAGS) -c square.cc

bettercircle-main:	bettercircle-main.cc bettercircle.h bettercircle.o square.o
	$(CC) $(CFLAGS) -o bettercircle-main  bettercircle-main.cc  bettercircle.o square.o


# Link the object file to produce an executable
simple-structsenums: simple-structsenums.o
	g++ -o $@ simple-structsenums.o



# Clean up things
clean:
	rm -rf *.o
	rm -rf bettercircle-main circle-main simple-class
