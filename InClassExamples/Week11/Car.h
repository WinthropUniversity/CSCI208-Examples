#ifndef CAR_H_
#define CAR_H_

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : public Vehicle {
public:
  Car();
  Car(double inPosX, double inPosY, string inColor);

  virtual void PrintPose() const;

protected:
  string color_;
};

#endif