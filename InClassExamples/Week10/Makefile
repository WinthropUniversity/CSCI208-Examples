.PHONY: all clean cleanwin

PROGRAM=car.exe
CC=g++
LD=g++
CFLAGS=-c -I.
LDFLAGS=-ggdb

all: $(PROGRAM)

$(PROGRAM): main.o Vehicle.o FrictionVehicle.o
	$(LD)  $^  -o $@  $(LDFLAGS)

main.o:  main.cc Vehicle.h FrictionVehicle.h
	$(CC) $(CFLAGS) $<

Vehicle.o: Vehicle.cc Vehicle.h
	$(CC) $(CFLAGS) $<

FrictionVehicle.o: FrictionVehicle.cc FrictionVehicle.h Vehicle.h
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe

	
