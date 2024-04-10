#include<iostream>
#include<string>

using namespace std;

int nonsensefunction2() {
    string x ="howdy doody";
    //throw x;
    //throw 3.1415;
    cout << "  About to leave nonsensefunction2()" << endl;
    return 6;
}

int nonsensefunction1() {
    int otherdata = nonsensefunction2();
    cout << "  About to leave nonsensefunction1()" << endl;
    return otherdata + 4;
}

int main() {
    try {
        cout << "This is line 1." << endl;
        cout << "The nonsense functions returned: " << nonsensefunction1() << endl;
    }
    catch (string &e) {
        cerr << "ERROR: One of the nonsense functions didn't work! Error=" << e << endl;
    }

    cout << "This is another line." << endl;
    return 0;
}