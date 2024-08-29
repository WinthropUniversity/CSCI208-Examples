all: arrayexample.exe

arrayexample.exe: arrayexample.o
	g++ -o $@  arrayexample.o

arrayexample.o: arrayexample.cc
	g++ -c arrayexample.cc

clean:
	rm -f arrayexample.o arrayexample.exe

cleanwin:
	del arrayexample.o
	del arrayexample.exe