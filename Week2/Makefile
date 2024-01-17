# The target that Make will start at
all: simple-structsenums file-streams.exe arraypassing.exe paulssillytarget

# Link the object file to produce an executable
simple-structsenums: simple-structsenums.o
	g++ -o $@ simple-structsenums.o

# Compile the source file to an object file
simple-structsenums.o: simple-structsenums.cc
	g++ -c simple-structsenums.cc


file-streams.exe: file-streams.o
	g++ -o file-streams.exe  file-streams.o
	
# Compile the source file for file-styreams to an object file
file-streams.o: file-streams.cc
	g++ -c file-streams.cc

arraypassing.exe:  arraypassing.cc
	g++ -o arraypassing.exe  arraypassing.cc

paulssillytarget:
	@echo "This was fun!!"

# Remove any unnecessary temporary files resulting from builds
clean:
	rm -f *.o
	rm -f simple-structsenums *.exe

# The windows version of the above
cleanwin:
	del *.o
	del simple-structsenums
	del *.exe
