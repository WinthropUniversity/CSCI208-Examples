

# Let's get used to using environmental variables for some things
# Here we'll use:
#   $CC for the compiler
#   $CFLAGS to set where the include directory is (here, ".")
CC=g++
CFLAGS=-I. 

# Build all examples
all:	stack-main simplestack-test


## First example.  The "$@" here is a shortcut in gmake and means "the target".  The
## "$<" means the first dependency.  It is customary for this to be the source file
## you are building.
stack-main:	stack-main.cc simplestack.o node.o
	$(CC) $(CFLAGS) -o $@  $< *.o


# If we include a main() function in multiple C++ source files, we'll get
# an error.  But we can use the pre-processor to help us.  Here I go ahead
# and define UNITTEST while compiling, which should cause the pre-processor
# to include the main() that's in stack.cc.
simplestack-test:	simplestack.cc simplestack.h node.o
	$(CC) $(CFLAGS) -DUNITTEST  -o $@  $<  node.o

# Otherwise, if we're just going to link to the code from some other
# executable, we can build the object file without the main by leaving
# out the define for UNITTEST
simplestack.o:	simplestack.cc simplestack.h node.h
	$(CC) $(CFLAGS) -c $<

node.o:	node.cc node.h
	$(CC) $(CFLAGS) -c $< 


# Clean up things
clean:
	rm -f *.o
	rm -f stack-main simplestack-test
