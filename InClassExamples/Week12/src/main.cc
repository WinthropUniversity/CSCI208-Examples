#include<iostream>
#include<string>

#include<Person.h>
#include<Student.h>

using namespace std;

void WhoIsOlder(const Person &a, const Person &b){
	if (a.GetAge() > b.GetAge()) {
		cout << a.GetName() << " is older than " << b.GetName() << endl;		
	}
	else if (a.GetAge() < b.GetAge()) {
		cout << b.GetName() << " is older than " << a.GetName() << endl;		
	}
	else {
		cout << a.GetName() << " is the same age as " << b.GetName() << endl;
	}
}


int main() {
	ulong ids = 0;
	Person me("Paul Wiegand", 54);
	me.Print();

	cout << endl;

	Student student("Kevin Yanni", 20, ++ids);
	student.Print();

	WhoIsOlder(me, student);
	
	return 0;
}