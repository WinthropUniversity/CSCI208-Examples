.PHONY: all clean

all: FruitList

FruitList:  FruitList.o  FruitNode.h
	g++ -o $@  $*

FruitList.o:  FruitList.cpp FruitNode.h
	g++ -c $<

FruitNode.o:  FruitNode.cpp FruitNode.h
	g++ -c $<

clean:
	rm -f *.o FruitList

