#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
#include<string>

#include<Person.h>

using namespace std;

typedef unsigned long int  ulong;

class Student : public Person {
public:
	Student(string inName, int inAge, ulong inID);
	~Student();

	ulong GetID() const;
	virtual void Print() const;

protected:
	//virtual void PrintSpecial() const;

	ulong id_;
};



#endif