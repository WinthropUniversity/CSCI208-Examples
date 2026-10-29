#ifndef VEHICLE_H_
#define VEHICLE_H_

#include<iostream>

using namespace std;

class Vehicle {
public:
	Vehicle();
	Vehicle(double inDx, double inDy);
	~Vehicle();

	double GetX() const;
	double GetY() const;

	double GetDX() const;
	double GetDY() const;
	void SetDX(double inVal);
	void SetDY(double inVal);

	void ApplySpeed();

protected:
	double x_;
    double y_;
	double dx_;
	double dy_;
};

#endif