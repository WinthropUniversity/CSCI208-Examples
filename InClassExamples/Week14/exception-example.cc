#include<iostream>
#include<string>

using namespace std;

double PromptUser(string promptText) {
	double returnVal = 0.0;
	cout << promptText << ": ";
	cin >> returnVal;

	if (returnVal == 3.14) {
		cerr << "Hey, that's not quite PI!"  << endl;
		throw 42;
	}

	cout << "I got the user's input!! About to retur it." << endl;
	return returnVal;
}


int main() {
	cout << "Program just started" << endl;

	try {
    	double myval = PromptUser("Give me a cool number");
		cout << "The user likes the number: " << myval << endl;
	} catch (int &e) {
		cerr << "Encountered an error, but moving on" << endl;
	}

	cout << "Program is about it end" << endl;
	return 0;
}