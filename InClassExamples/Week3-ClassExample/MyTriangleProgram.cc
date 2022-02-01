#include<iostream>
#include "RightTriangle.h"

using namespace std;

int main() {
    RightTriangle firstTriangle;
    RightTriangle secondTriangle(1.0, 2.2);

    firstTriangle.PrintInfo("First ");
    secondTriangle.PrintInfo("Second ");

    firstTriangle.SetBase(4.3);
    firstTriangle.SetHeight(-1);

    firstTriangle.PrintInfo("First(again) ");

    return 0;
}