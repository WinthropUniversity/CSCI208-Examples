all: fruitlister1.exe fruitlister2.exe

# Link to form the executable
fruitlister2.exe:  arrayfunction.o
	g++ arrayfunction.o   -o $@

# Compile to an object file
arrayfunction.o: arrayfunction.cc
	g++ -c arrayfunction.cc


# Link to form the executable
fruitlister1.exe:  simplearray-eg.o
	g++ simplearray-eg.o   -o fruitlister1.exe

# Compile to an object file
simplearray-eg.o: simplearray-eg.cc
	g++ -c simplearray-eg.cc

clean:
	rm -f *.o fruitlister*.exe

cleanwin:
	del *.o
	del fruitlister*.exe