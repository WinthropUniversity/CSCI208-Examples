#include<iostream>
#include<string>

#include<Person.h>
#include<Student.h>

using namespace std;

int main() {
	ulong ids = 0;
	Person me("Paul Wiegand", 54);
	me.Print();

	cout << endl;

	Student student("Kevin Yanni", 20, ++ids);
	student.Print();

	return 0;
}