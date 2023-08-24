all: hello.exe


hello.exe: hello.o
	g++ -o hello.exe  hello.o

hello.o: hello.cc
	g++ -c hello.cc


clean:
	rm -f *.exe *.o

cleanwin:
	del *.exe
	del *.o

