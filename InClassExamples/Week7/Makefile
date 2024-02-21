CFLAGS=-I. -c

all: llmain.exe

llmain.exe: llmain.o node.o
	g++ $^  -o $@

llmain.o:  llmain.cc  node.h
	g++ $(CFLAGS)  $< 

node.o: node.cc node.h
	g++ $(CFLAGS)  $< 

clean:
	rm -f *.o  *.exe

cleanwin:
	del *.o
	del *.exe
	