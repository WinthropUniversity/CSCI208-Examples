#include<iostream>
#include<string>

using namespace std;

class Robot {
public:
	Robot() {
		name = "UNKNOWN";
		modelNumber = 0;
		xPosition = 0.0;
		yPosition = 0.0;
		//cout << "Init'd a robot" << endl;
	}

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

	string GetName() const {
		return name;
	}

	void SetName(string inName) {
		name = inName;
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
	string name;
	int modelNumber;
	double xPosition;
	double yPosition;
};