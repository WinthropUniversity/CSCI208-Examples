# The target that Make will start at
all: simple-structsenums

# Link the object file to produce an executable
simple-structsenums: simple-structsenums.o
	g++ -o $@ simple-structsenums.o

# Compile the source file to an object file
simple-structsenums.o: simple-structsenums.cc
	g++ -c simple-structsenums.cc

# Remove any unnecessary temporary files resulting from builds
clean:
	rm -f *.o
	rm -f simple-structsenums

# The windows version of the above
cleanwin:
	del *.o
	del simple-structsenums
