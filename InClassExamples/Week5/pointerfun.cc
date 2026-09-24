#include<iostream>
#include<string>

using namespace std;


void changestuff(string *otherptr) {
	*otherptr = "Murple";
}


int main() {
	string name = "";
	string *instrumentptr;
	instrumentptr = new string;

	cout << "Name: ";
	cin >> name;
	cout << "Instrument: ";
	cin >> *instrumentptr;

	cout << "Hello " << name << "!!" << endl;
	cout << "You like to play the " << *instrumentptr << endl;
	cout << "The variable 'name' is stored at: " << &name << endl;
	cout << "The variable instrumentptr is: " << instrumentptr << endl;
	cout << "The address where that variable instrumentptr is: " << &instrumentptr << endl;

	string *nonsenseptr = &name;
	*nonsenseptr = "Bono";
	cout << "The string at nonsenptr is: " << *nonsenseptr << endl;
	cout << "What was 'name' again: " << name << endl;
	cout << "What is that address again: " << &name << endl;
	cout << "What is at that address? " << *&name << endl;

	changestuff(&name);
	cout << "Last name call: " << name << endl;

	return 0;
}