#include<iostream>
#include<string>

using namespace std;

void PrintIndexes(int endval, double stopval) {
	string msg = "Howdy!!";

	cout << "Started the PrintIndexes() function call" << endl;

	for (int idx=0; idx<endval; idx++) {
		if (idx*idx > stopval) throw msg; //3.14;  //3;
		cout << "Line " << idx << endl;
	} 

	cout << "Finished the PrintIndexes() function call" << endl;
}


int main() {
	try {
		PrintIndexes(10, 4.0);
		cout << "I finished the loop!!" << endl;
	} 
	catch (string &e1) {
		cerr << "Got a string error!  Here was the value: " << e1 << endl;
	}
	catch (double &e2) {
		cerr << "Got a double error!  Here was the value: " << e2 << endl;
	} 

	cout << "I reached the bottom of my code." << endl;

	return 0;
}