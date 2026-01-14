all: streamexample.exe

# Link the object file to form an executable
streamexample.exe: streamexample.o
	g++ streamexample.o  -o streamexample.exe

# Translate the CC source code into binary object machine code
streamexample.o: streamexample.cc
	g++ -c streamexample.cc

clean:
	rm -f streamexample.o streamexample.exe

cleanwin:
	del streamexample.o
	del streamexample.exe

