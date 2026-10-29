#include "FrictionVehicle.h"

FrictionVehicle::FrictionVehicle() : Vehicle(), cof_(0.0) {
	cerr << "Default contructor for friction vehicle" << endl;
}


FrictionVehicle::FrictionVehicle(double inDx, double inDy, double inCof)
  : Vehicle(inDx, inDy), cof_(inCof) {
	cerr << "Init contructor for friction vehicle" << endl;
  }

FrictionVehicle::~FrictionVehicle() {
	cerr << "Destroying the friction vehicle" << endl;
}

double FrictionVehicle::GetCoF() const {
	return cof_;
}

void FrictionVehicle::SetCoF(double inCof) {
	if ( (inCof >= 0.0) && (inCof <= 1.0) )
	  cof_ = inCof;
}


void FrictionVehicle::ApplySpeed() {
	x_ += (1.0 - cof_) * dx_;
	y_ += (1.0 - cof_) * dy_;
}

void FrictionVehicle::Print() const {
	Vehicle::Print();
	cout << "   Friction: " << GetCoF() << endl;
}
