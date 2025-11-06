#ifndef HOMEWORK_H_
#define HOMEWORK_H_

#include<iostream>
#include<string>

#include "Assessment.h"


class Homework : public Assessment {
public:
    Homework();
    Homework(string inName, double inMaxPoints);
    virtual ~Homework();

    double GetMaxPoints() const;
    void SetMaxPoints(double inPoints);

    virtual void Print() const;

private:
    double maxPoints_;
};


#endif