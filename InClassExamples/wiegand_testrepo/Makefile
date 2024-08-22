
all: average.exe

# Link everything to get an executable program
average.exe: average.o average_main.o
	g++ average.o average_main.o  -o average.exe


# Compile, but do not link
average_main.o: average_main.cc
	g++ -c average_main.cc  

# Compile, but do not link
average.o: average.cc
	g++ -c average.cc  

clean:
	rm -f average.exe *.o