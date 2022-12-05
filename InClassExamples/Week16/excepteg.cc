#include<iostream>

using namespace std;

int main() {
    cout << "Line 1 of program, before try/catch" << endl;

    try{
        int foo = 4;
        cout << "Line 2 of program, inside try" << endl;
        cout << "Line 3 of program, inside try" << endl;
        throw 4;
        cout << "Line 4 of program, inside try but after error" << endl;
    }
    catch (int &e) {
        cout << "   --> Handled the error!" << endl;
    }

    cout << "Line 5 of program, after the try/catch, foo=" << foo << endl;


    return 0;
}