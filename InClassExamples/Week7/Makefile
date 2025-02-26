all: listmain.exe

# Link the object files to get an executable
listmain.exe: listmain.o node.o
	g++ listmain.o node.o   -o $@

# Compile listmain into an object file
listmain.o:  listmain.cc  node.h
	g++ -c $<

# Compile node into an object file
node.o: node.cc node.h
	g++ -c $<

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe