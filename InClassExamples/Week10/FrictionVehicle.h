#ifndef FRICTIONVEHICLE_H_
#define FRICTIONVEHICLE_H_

#include<iostream>

#include "Vehicle.h"

using namespace std;


class FrictionVehicle : public Vehicle {
public:
	FrictionVehicle();
	FrictionVehicle(double inDx, double inDy, double inCof);
	~FrictionVehicle();

	double GetCoF() const;
	void SetCoF(double inCof);

	virtual void ApplySpeed();
	virtual void Print() const;

protected:
	double cof_;
};

#endif