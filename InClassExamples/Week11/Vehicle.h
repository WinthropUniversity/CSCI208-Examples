#ifndef VEHICLE_H_
#define VEHICLE_H_

#include<iostream>

using namespace std;

class Vehicle {
public:
  Vehicle();
  Vehicle(double inPosX, double inPosY);

  void Move(double delX, double delY);
  virtual void PrintPose() const;

protected:
  double positionX_;
  double positionY_;
};

#endif