#Example Makefile

all:	myprogram.exe

myprogram.exe: hello.o main.o
	g++ -o myprogram.exe  hello.o main.o

hello.o:  hello.cc hello.h
	g++ -c hello.cc

main.o:  main.cc hello.h
	g++ -c main.cc

clean:
	rm -f myprogram.exe
	rm -f *.o

cleanwin:
	del myprogram.exe
	del *.o
