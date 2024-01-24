all: rainbow.exe

rainbow.exe: rainbow.o
	g++ rainbow.o  -o rainbow.exe

rainbow.o: rainbow.cc
	g++ -c rainbow.cc

clean:
	rm -f *.o  *.exe

cleanwin:
	del *.o
	del *.exe
	