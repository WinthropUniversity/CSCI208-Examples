#include<iostream>
#include<string>

using namespace std;

class Robot {
public:
	Robot();

	void PrintBot() const;

	void Move(double dx, double dy);

	string GetName() const;

	void SetName(string inName);
	void SetModelNumber(int inModelNumber);
	void SetPosition(double x, double y);

private:
	string name;
	int modelNumber;
	double xPosition;
	double yPosition;
};