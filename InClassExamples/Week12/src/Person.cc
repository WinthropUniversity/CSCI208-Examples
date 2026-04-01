#include<Person.h>

Person::Person(string inName, int inAge) : name_(inName), age_(inAge) {
	cout << "--> Constructing a Person object (" << inName << ") " << endl;
}


Person::~Person() {
	cout << "<-- Destroying a Person object (" << GetName() << ") " << endl;
} 


// --- Accessor & Mutator Methods ---
string Person::GetName() const {
	return name_;
}

void Person::SetName(string inName) {
	name_ = inName;
}

int Person::GetAge() const {
	return age_;
}

void Person::SetAge(int inAge) {
	age_ = inAge;
}

// -- Utitlity Methods --

void Person::Print() const {
	cout << GetName() << ", " << GetAge();
	PrintSpecial();
	cout << endl;
}

void Person::PrintSpecial() const {}

