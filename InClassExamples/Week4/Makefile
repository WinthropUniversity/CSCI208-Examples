all: ListMainExample.exe

ListMainExample.exe: ListMainExample.o SimpleList.o
	g++ ListMainExample.o SimpleList.o  -o $@

ListMainExample.o: ListMainExample.cc SimpleList.h
	g++ -c ListMainExample.cc

SimpleList.o: SimpleList.cc SimpleList.h
	g++ -c SimpleList.cc

clean: 
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe
	