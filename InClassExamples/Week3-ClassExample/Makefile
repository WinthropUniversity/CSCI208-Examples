
PROGRAM=gotime.exe

all: $(PROGRAM)

$(PROGRAM): RightTriangle.o  MyTriangleProgram.o
	g++ -o $(PROGRAM)  RightTriangle.o  MyTriangleProgram.o

RightTriangle.o:  RightTriangle.cc RightTriangle.h
	g++ -c RightTriangle.cc

MyTriangleProgram.o:  MyTriangleProgram.cc RightTriangle.h
	g++ -c MyTriangleProgram.cc

clean:
	rm -f *.o $(PROGRAM)

cleanwin:
	del *.o
	del $(PROGRAM)