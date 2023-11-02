all: VehicleMain.exe

VehicleMain.exe: Vehicle.o Car.o VehicleMain.o Plane.o
	g++ Vehicle.o Car.o VehicleMain.o  Plane.o -o $@

Vehicle.o: Vehicle.cc Vehicle.h
	g++ -c Vehicle.cc

Car.o:	Car.cc Car.h Vehicle.h
	g++ -c Car.cc

Plane.o:	Plane.cc Plane.h Vehicle.h
	g++ -c Plane.cc

VehicleMain.o: VehicleMain.cc Vehicle.h Car.h
	g++ -c VehicleMain.cc

clean:
	rm -rf *.o *.exe