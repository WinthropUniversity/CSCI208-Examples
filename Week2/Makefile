# The target that Make will start at
all: file-streams.exe arraypassing.exe paulssillytarget functions.exe


# Compile the source file to an object file
simple-structsenums.o: simple-structsenums.cc
	g++ -c simple-structsenums.cc


file-streams.exe: file-streams.o
	g++ -o file-streams.exe  file-streams.o

functions.o: functions.cc
	g++ -c functions.cc

functions.exe: functions.o
	g++ functions.o   -o functions.exe
	
	
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
