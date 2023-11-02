#include "Vehicle.h"

Vehicle::Vehicle() : positionX_(0.0), positionY_(0.0) {
}

Vehicle::Vehicle(double inPosX, double inPosY) 
    : positionX_(inPosX), positionY_(inPosY) {
}

void Vehicle::Move(double delX, double delY) {
    positionX_ += delX;
    positionY_ += delY;
}

void Vehicle::PrintPose() const {
    cout << "Pose: " << positionX_ << ", " << positionY_ << endl;
}