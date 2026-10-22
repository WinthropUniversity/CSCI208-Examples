.PHONY:  all clean cleanwin

PROGRAM=game.exe

CC=g++
LD=g++
CFLAGS=-c
LDFLAGS=-ggdb

all: $(PROGRAM)

$(PROGRAM): main.o  Game.o  VideoGame.o
	$(LD) $^  -o $@  $(LDFLAGS)

main.o: main.cc  Game.h VideoGame.h
	$(CC) $(CFLAGS) $<

Game.o: Game.cc Game.h
	$(CC) $(CFLAGS)  $<

VideoGame.o: VideoGame.cc  Game.h VideoGame.h
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o $(PROGRAM)

cleanwin:
	del $(PROGRAM)
	del *.o

