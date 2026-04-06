#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
#include<string>

using namespace std;

class Person {
public:
	Person(string inName, int inAge);
	virtual ~Person();

	string GetName() const;
	void SetName(string inName);

	int GetAge() const;
	void SetAge(int inAge);

	virtual void Print() const;

protected:
	//virtual void PrintSpecial() const;
	
	string name_;
	int age_;
};

#endif