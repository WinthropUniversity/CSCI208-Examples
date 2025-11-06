#ifndef ASSESSMENT_H_
#define ASSESSMENT_H_

#include<string>
#include<iostream>

using namespace std;

class Assessment {
public:
    Assessment();
    Assessment(string inName);
    virtual ~Assessment();

    string GetName() const;
    void SetName(string inName);

    virtual void Print() const;

private:
    string name_;
};


#endif