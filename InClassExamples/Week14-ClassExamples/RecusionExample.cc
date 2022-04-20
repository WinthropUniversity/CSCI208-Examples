#include<iostream>
#include<string>

#define MAXCOUNTER 5

using namespace std;




void SillyRecusiveFunctionAlt2(int counter, string buffer){
    cout << "RecursiveCall: " << buffer << counter << endl;

    if (counter >= MAXCOUNTER) return;

    SillyRecusiveFunctionAlt2(counter+1, buffer + "x");
    SillyRecusiveFunctionAlt2(counter+1, buffer + "o");

    //cout << "RecursiveCall: " << buffer << counter << endl;
}


void SillyRecusiveFunctionAlt(int counter, string buffer){
    cout << "RecursiveCall: " << buffer << counter << endl;

    if (counter >= MAXCOUNTER) return;
    else if (counter %2 == 0) SillyRecusiveFunctionAlt(counter+1, buffer + "(e)");
    else SillyRecusiveFunctionAlt(counter+1, buffer + "(o)");

    //cout << "RecursiveCall: " << buffer << counter << endl;
}


void SillyRecusiveFunction(int counter, string buffer){
    //cout << "RecursiveCall: " << buffer << counter << endl;

    if (counter >= MAXCOUNTER) return;
    else SillyRecusiveFunction(counter+1, buffer + " ");

    cout << "RecursiveCall: " << buffer << counter << endl;
}

int main(int argc, char *argv[]) {
    int startNum = 0;

    if (argc > 1) startNum = atoi(argv[1]);

    SillyRecusiveFunctionAlt(startNum, "::");

    // Everything is OK
    return 0;
}