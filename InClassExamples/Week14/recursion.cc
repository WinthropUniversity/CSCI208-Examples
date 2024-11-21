#include<iostream>
#include<string>

using namespace std;

void myfunc1(int n, string str) {
    if (n<=0) return;
    else {
        cout << str << endl;
        myfunc1(n-1, str+".");
    }
}


void myfunc2(int n, string str) {
    if (n<=0) return;
    else {
        myfunc2(n-1, str+".");
        cout << str << endl;
    }
}

void myfunc3(int n, string str) {
    if (n<=0) return;
    else {
        cout << str << endl;
        myfunc3(n-1, "."+str);
    }
}


void myfunc4(int n, string str) {
    if (n<=0) return;
    else {
        cout << str << endl;
        if (n%2==0) {
            myfunc4(n-1, "."+str);
        }
        else {
            myfunc4(n-1, str+"^");

        }
    }
}


void myfunc5(int n, string str) {
    if (n<=0) return;
    else {
        myfunc5(n-1, "."+str);
        cout << str << endl;
        myfunc5(n-1, str+"^");
    }
}

int main() {
    //myfunc1(4, "#");
    //myfunc2(4, "#");
    //myfunc3(4, "#");
    //myfunc4(4, "#");
    myfunc5(3, "#");
    return 0;
}