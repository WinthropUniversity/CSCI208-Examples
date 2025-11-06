#include<iostream>
#include<string>

#include "Assessment.h"
#include "Homework.h"


void myuselessfunction() {
    cerr << "DBG: ----> before the allocation" << endl;
    Assessment *myassessmentptr = new Homework("Homework 5", 10.0);
    cerr << "DBG: ----> after the allocation" << endl;

    myassessmentptr->Print();

    cerr << "DBG: ----> before the deallocation" << endl;
    delete myassessmentptr;
    cerr << "DBG: ----> after the deallocation" << endl;
}

void myotheruselessfunction() {
    cerr << "DBG: ----> before the allocation" << endl;
    Homework myassessment("Homework 5", 10.0);
    cerr << "DBG: ----> after the allocation" << endl;

    myassessment.Print();
    cerr << "DBG: ----> end of the function???" << endl;
}


void unnecessarypass(const Homework &inObj) {
    inObj.Print();
}

int main() {
    cerr << "DBG:   Started the main() " << endl;
    //myuselessfunction();
    //cerr << endl;
    //myotheruselessfunction();

    Homework foo("H5", 10.0);
    unnecessarypass(foo);

    cerr << "DBG:   Ended the main() " << endl;

    return 0;
}