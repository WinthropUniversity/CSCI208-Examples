#include<iostream>
#include<string>

#include "Vehicle.h"
#include "FrictionVehicle.h"

using namespace std;

void Drive(Vehicle &inVehicle, double inDx, double inDy) {
	inVehicle.SetDX(inDx);
	inVehicle.SetDY(inDy);
	inVehicle.ApplySpeed();
}


int main() {
	Vehicle car;
	FrictionVehicle othercar;

	Drive(car, 0.5, 0.75);
	car.Print();

	othercar.SetCoF(0.25);
	Drive(othercar, 0.5, 0.75);
	othercar.Print();


	return 0;
}