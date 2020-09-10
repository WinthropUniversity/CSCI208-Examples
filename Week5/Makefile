# A Simple Makefile for each of the targets in this week's set of examples

# Let's get used to using environmental variables for some things
# Here we'll use:
#   $CC for the compiler
#   $CFLAGS to set where the include directory is (here, ".")
CC=g++
CFLAGS=-I. 

# Build all examples
all:	simple-indirection ref-deref dynarray dynobj vectorexample leaky 2dvectorexample


## First example.  The "$@" here is a shortcut in gmake and means "the target".  The
## "$<" means the first dependency.  It is customary for this to be the source file
## you are building.
simple-indirection:	simple-indirection.cc
	$(CC) $(CFLAGS) -o $@  $<


# Second example:
ref-deref:	ref-deref.cc
	$(CC) $(CFLAGS) -o $@  $<


# Third example:
dynarray:	dynarray.cc
	$(CC) $(CFLAGS) -o $@  $<

# Fourth example:
dynobj:	dynobj.cc
	$(CC) $(CFLAGS) -o $@ $<

# Fifth example:
vectorexample:	vectorexample.cc
	$(CC) $(CFLAGS) -o $@ $<

# Sixth example:
2dvectorexample:  2dvectorexample.cc
	$(CC) $(CFLAGS) -o $@ $<

# Crazy example:
leaky:	leaky.cc
	$(CC) $(CFLAGS) -o $@ $<


# Clean up things
clean:
	rm -f *.o
	rm -f simple-indirection ref-deref dynarray dynobj vectorexample 2dvectorexample leaky
