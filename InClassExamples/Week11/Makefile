.PHONY: all clean

PROGRAM=assessment.exe

all: $(PROGRAM)

$(PROGRAM): main.o Assessment.o Homework.o
	g++ *.o  -o $@


main.o:  main.cc Assessment.h  Homework.h
	g++ -c $<

Homework.o:  Homework.cc Homework.h  Assessment.h
	g++ -c $<

Assessment.o: Assessment.cc Assessment.h
	g++ -c $<


clean:
	rm -f *.o *.exe


run:
	$(PROGRAM)

