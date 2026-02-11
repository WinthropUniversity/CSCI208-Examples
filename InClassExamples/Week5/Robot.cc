#include "Robot.h"


Robot::Robot() {
		name = "UNKNOWN";
		modelNumber = 0;
		xPosition = 0.0;
		yPosition = 0.0;
		//cout << "Init'd a robot" << endl;
	}

void Robot::PrintBot() const {
	cout << name << ":" 
		 << modelNumber << " ( "
		 << xPosition << ", "
		 << yPosition << ")" << endl;
}

void Robot::Move(double dx, double dy) {
	xPosition += dx;
	yPosition += dy;
}

string Robot::GetName() const {
	return name;
}

void Robot::SetName(string inName) {
	name = inName;
}

void Robot::SetModelNumber(int inModelNumber) {
	if (inModelNumber < 0) modelNumber = -1;
	else modelNumber = inModelNumber;
}

void Robot::SetPosition(double x, double y) {
	xPosition = x;
	yPosition = y;
}