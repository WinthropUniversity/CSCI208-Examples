#Example Makefile

all:	myprogram

myprogram: hello.o main.o
	g++ -o myprogram  hello.o main.o

hello.o:  hello.cc hello.h
	g++ -c hello.cc

main.o:  main.cc hello.h
	g++ -c main.cc

clean:
	rm -f myprogram
	rm -f *.o

cleanwin:
	del myprogram
	del *.o
