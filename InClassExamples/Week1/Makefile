all: name.exe

# Link the object files together to form the runnable executable program
name.exe: getname.o  name_main.o
	g++ getname.o  name_main.o   -o name.exe

# Compile the getname module into an object file
getname.o: getname.cc getname.h
	g++ -c getname.cc

# Compile the name_main module into an object file
name_main.o: name_main.cc getname.h
	g++ -c name_main.cc

clean:
	rm -f *.o *.exe

cleanwin: 
	del *.o
	del *.exe


