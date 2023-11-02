#include "Car.h"

Car::Car() : Vehicle(1.0, 1.0), color_("Red") {}

Car::Car(double inPosX, double inPosY, string inColor) 
   : Vehicle(inPosX, inPosY), color_(inColor) {}

void Car::PrintPose() const {
    cout << "Car Color: " << color_ << ", ";
    Vehicle::PrintPose();
}
