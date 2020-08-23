# A Simple Makefile for each of the targets in this week's set of examples

# Let's get used to using environmental variables for some things
# Here we'll use:
#   $CC for the compiler
#   $CFLAGS to set where the include directory is (here, ".")
CC=g++
CFLAGS=-I.

## First Example
simple-class:	simple-class.cc
	$(CC) $(CFLAGS) -o simple-class  simple-class.cc


## Second Example
circle.o:	circle.h circle.cc
	$(CC) $(CFLAGS) -c circle.cc

circle-main:	circle-main.cc circle.h circle.o
	$(CC) $(CFLAGS) -o circle-main  circle-main.cc  circle.o


## Third Example
bettercircle.o:	bettercircle.h bettercircle.cc
	$(CC) $(CFLAGS) -c bettercircle.cc

bettercircle-main:	bettercircle-main.cc bettercircle.h bettercircle.o
	$(CC) $(CFLAGS) -o bettercircle-main  bettercircle-main.cc  bettercircle.o


# Clean up things
clean:
	rm *.o
	rm bettercircle-main circle-main simple-class
