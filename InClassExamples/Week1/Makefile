
all: sum.exe

sum.exe:  sum.o
	g++ sum.o  -o sum.exe

sum.o: sum.cc
	g++ -c sum.cc

clean:
	rm -f sum.o sum.exe

cleanwin:
	del sum.o
	del sum.exe
	