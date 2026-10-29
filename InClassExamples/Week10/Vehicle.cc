#include "Vehicle.h"

Vehicle::Vehicle() : x_(0.0), y_(0.0), dx_(0.0), dy_(0.0) {
	/*x_ = 0.0;
	y_ = 0.0;
	dx_ = 0.0;
	dy_ = 0.0;*/

	cerr << "Created the base vehicle (default)" << endl;
}

Vehicle::Vehicle(double inDx, double inDy) : x_(0.0), y_(0.0), dx_(inDx), dy_(inDy) {
	/*x_ = 0.0;
	y_ = 0.0;
	SetDX(inDx);
	SetDY(inDy);*/

	cerr << "Created the base vehicle (init)" << endl;
}

Vehicle::~Vehicle() {
	cerr << "Destroyed the base vehicle" << endl;
}

double Vehicle::GetX() const {
	return x_;
}

double Vehicle::GetY() const {
	return y_;
}

double Vehicle::GetDX() const {
	return dx_;
}

double Vehicle::GetDY() const {
	return dy_;
}

void Vehicle::SetDX(double inVal) {
	dx_ = inVal;
}

void Vehicle::SetDY(double inVal) {
	dy_ = inVal;
}

void Vehicle::ApplySpeed() {
	x_ += dx_;
	y_ += dy_;
}

void Vehicle::Print() const {
	cout << "Object at (" << GetX() << "," << GetY() << ") "
	     << " going (" << GetDX() << "," << GetDY() << ")" << endl;
}
