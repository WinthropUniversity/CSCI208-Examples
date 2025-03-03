all: song-main.exe

song-main.exe: song.o  song-main.o
	g++ song.o song-main.o  -o $@

song.o: song.cc song.h
	g++ -c $<

song-main.o: song-main.cc  song.h
	g++ -c $<

clean:
	rm -f *.o *.exe
