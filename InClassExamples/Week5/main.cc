#include<iostream>
#include<string>

#include "Robot.h"

using namespace std;



int main() {
	Robot robotList[100];
	int listSize=0;

	cout << "How many robots are there? ";
	cin >> listSize;

	for (int idx=0; idx<listSize; idx++) {
		int modelNumber; 

		cout << "What is the robot's name? ";
		cin >>  robotList[idx].name;
		cout << "What is the robot's model number? ";
		cin >> modelNumber;

		robotList[idx].SetModelNumber(modelNumber);
		robotList[idx].SetPosition(0.0, 0.0);

		cout << endl;
		cin.ignore();
	}

	robotList[0].Move(0.25, -1.6);

	cout << endl << "List: " << endl;
	for (int idx=listSize-1; idx>=0; idx--) {
		robotList[idx].PrintBot();
	}

	return 0;
}