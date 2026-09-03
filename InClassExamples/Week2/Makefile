
all: arrayexample.exe


arrayexample.exe:  arrayexample.o
	g++ arrayexample.o  -o arrayexample.exe

arrayexample.o:  arrayexample.cc
	g++ -c arrayexample.cc


clean:
	rm -f arrayexample.o arrayexample.exe

cleanwin:
	del arrayexample.o
	del arrayexample.exe


