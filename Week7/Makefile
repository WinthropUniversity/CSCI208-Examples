

# Let's get used to using environmental variables for some things
# Here we'll use:
#   $CC for the compiler
#   $CFLAGS to set where the include directory is (here, ".")
CC=g++
CFLAGS=-I. 

# Build all examples
all:	sortedlist


## First example.  The "$@" here is a shortcut in gmake and means "the target".  The
## "$<" means the first dependency.  It is customary for this to be the source file
## you are building.

# If we include a main() function in multiple C++ source files, we'll get
# an error.  But we can use the pre-processor to help us.  Here I go ahead
# and define UNITTEST while compiling, which should cause the pre-processor
# to include the main() that's in sortedlist.cc.
sortedlist:	sortedlist.cc sortedlist.h listnode.o
	$(CC) $(CFLAGS) -DUNITTEST  -o $@  $<  listnode.o

# Otherwise, if we're just going to link to the code from some other
# executable, we can build the object file without the main by leaving
# out the define for UNITTEST
sortedlist.o:	sortedlist.cc sortedlist.h listnode.h
	$(CC) $(CFLAGS) -c $<

listnode.o:	listnode.cc listnode.h
	$(CC) $(CFLAGS) -c $< 


# Clean up things
clean:
	rm -f *.o
	rm -f sortedlist
