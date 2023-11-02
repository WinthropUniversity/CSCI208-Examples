#ifndef PLANE_H_
#define PLANE_H_

#include "Vehicle.h"
#include <iostream>

using namespace std;


class Plane : public Vehicle {
public:
    Plane();
    Plane(double inPosX, double inPosY, double inAlt);

    virtual void PrintPose() const;
private:
    double altitude_;
};

#endif