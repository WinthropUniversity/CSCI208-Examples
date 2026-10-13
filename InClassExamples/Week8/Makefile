.PHONY: all clean cleanwin run

PROGRAM=listexample.exe

CC=g++
LD=g++
CFLAGS=-c -I.
LDFLAGS=-ggdb


all: $(PROGRAM)

$(PROGRAM): Node.o main.o
	$(LD) $^  -o $@   $(LDFLAGS)

Node.o: Node.cc Node.h
	$(CC) $(CFLAGS) $< 

main.o: main.cc Node.h
	$(CC) $(CFLAGS) $<

run:
	$(PROGRAM)  < input.txt

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe