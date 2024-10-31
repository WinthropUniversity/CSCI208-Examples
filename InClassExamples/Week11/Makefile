.PHONY: all clean
all: poly.exe

poly.exe: polynomial.o  dfpolynomial.o polymain.o
	g++ *.o  -o $@

polynomial.o: polynomial.cc polynomial.h
	g++ -c $<

dfpolynomial.o: dfpolynomial.cc dfpolynomial.h polynomial.h
	g++ -c $<

polymain.o: polymain.cc dfpolynomial.h polynomial.h
	g++ -c $<

clean:
	rm -f *.o *.exe