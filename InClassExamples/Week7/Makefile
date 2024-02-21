CFLAGS=-I. -c

.PHONY: all clean otherstuff

all: llmain.exe otherstuff

llmain.exe: llmain.o node.o
	g++ $^  -o $@

llmain.o:  llmain.cc  node.h
	g++ $(CFLAGS)  $< 

node.o: node.cc node.h
	g++ $(CFLAGS)  $< 


otherstuff: OldStyleByRefPass.cc PlayingWithPointers.cc
	g++ -o PlayingWithPointers.exe  PlayingWithPointers.cc
	g++ -o OldStyleByRefPass.exe  OldStyleByRefPass.cc

clean:
	rm -f *.o  *.exe

cleanwin:
	del *.o
	del *.exe
