#include<iostream>
#include<string>

using namespace std;

class Robot {
public:
	string name;

	void PrintBot() {
		cout << name << ":" 
		     << modelNumber << " ( "
			 << xPosition << ", "
			 << yPosition << ")" << endl;
	}

	void Move(double dx, double dy) {
		xPosition += dx;
		yPosition += dy;
	}

	void SetModelNumber(int inModelNumber) {
		if (inModelNumber < 0) modelNumber = -1;
		else modelNumber = inModelNumber;
	}

	void SetPosition(double x, double y) {
		xPosition = x;
		yPosition = y;
	}

private:
	int modelNumber;
	double xPosition;
	double yPosition;
};