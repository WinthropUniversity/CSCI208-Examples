all: arrayexample  structexample

arrayexample: arrayexample.o
	g++ arrayexample.o  -o arrayexample

structexample: structexample.o
	g++ structexample.o  -o structexample

arrayexample.o:  arrayexample.cc
	g++ -c arrayexample.cc

structexample.o:  structexample.cc
	g++ -c structexample.cc

clean:
	rm -f *.o structexample arrayexample

cleanwin:
	del *.o
	del structexample
	del arrayexample

