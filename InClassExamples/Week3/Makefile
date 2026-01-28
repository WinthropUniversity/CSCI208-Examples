all: structex.exe

# Linking
structex.exe: structex.o
	g++ structex.o  -o structex.exe

# Compiling
structex.o: structex.cc
	g++ -c  structex.cc

clean:
	rm -rf structex.o structex.exe

cleanwin:
	del structex.o
	del structex.exe