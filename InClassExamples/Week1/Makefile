all: ioexample.exe


ioexample.exe:  inputoutputexample.o
	g++ inputoutputexample.o   -o ioexample.exe

inputoutputexample.o:  inputoutputexample.cc
	g++ -c inputoutputexample.cc

clean:
	rm -f inputoutputexample.o  ioexample.exe

cleanwin:
	del inputoutputexample.o
	del ioexample.exe




