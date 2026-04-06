#include<Student.h>

Student::Student(string inName, int inAge, ulong inID) : Person(inName, inAge), id_(inID) {
	//cout << "--> Constructing Student object (" << inName << ") " << endl;
}

Student::~Student() {
	//cout << "<-- Destroying Student object (" << GetName() << ") " << endl;
}

ulong Student::GetID() const {
	return id_;
}


void Student::Print() const {
	Person::Print();
	cout << "  ID=" << GetID() << endl;
}

/*void Student::PrintSpecial() const {
	cout << "  ID=" << GetID(); 
}*/