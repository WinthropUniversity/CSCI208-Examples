all:  structexample.exe

structexample.exe: structexample.o
	g++ -o structexample.exe  structexample.o

structexample.o: structexample.cc
	g++ -c structexample.cc

cooltarget:
	@echo "Hi!  Isn't this a great target!!!"

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe

