all:  RobotLister.exe

# Link the machine files to form an executable
RobotLister.exe:  Robot.o  main.o
	g++ Robot.o main.o   -o $@

# Translate the Robot.cc  source code into machine code
Robot.o:  Robot.cc Robot.h
	g++ -c Robot.cc

# Translate the main.cc source code into machine code
main.o:  main.cc Robot.h
	g++ -c main.cc

run:
	./RobotLister.exe

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe


