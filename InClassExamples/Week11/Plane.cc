#include "Plane.h"

Plane::Plane() : Vehicle(), altitude_(0.0) {}
Plane::Plane(double inPosX, double inPosY, double inAlt) 
   : Vehicle(inPosX, inPosY), altitude_(inAlt) {}

void Plane::PrintPose() const {
    cout << "Plane (alt=" << altitude_ << ") ";
    Vehicle::PrintPose();
}
