all: list-example.exe

# Link all object files
list-example.exe: list-example.o node.o
	g++ list-example.o node.o  -o $@

list-example.o: list-example.cc node.h
	g++ -c $<

node.o: node.cc node.h
	g++ -c $<

drwiegand: 
	@echo "Dr. Wiegand is super-fun!!"

	
clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe

