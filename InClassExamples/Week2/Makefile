all: fruitlister.exe

# Link to form the executable
fruitlister.exe:  simplearray-eg.o
	g++ simplearray-eg.o   -o fruitlister.exe

# Compile to an object file
simplearray-eg.o: simplearray-eg.cc
	g++ -c simplearray-eg.cc

clean:
	rm -f simplearray-eg.o fruitlister.exe

cleanwin:
	del simplearray-eg.o
	del fruitlister.exe