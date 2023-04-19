#include<iostream>

using namespace std;

void otherfunction2() {
    cout << "Z";
}

void otherfunction() {
    cout << "B";
    otherfunction2();
    cout << "A";
}

void printthis(int n, string spaces) {
  cout << spaces << "---> Entering the frame where n = " << n << endl;
  if (n <= 0) cout << spaces << "X" << " :: frame n = " << n << endl;
  else {
    cout << spaces << "b" << " :: frame n = " << n << endl;
    printthis(n-1, spaces + "  ");
    cout << spaces << "-" << " :: frame n = " << n << endl;
    printthis(n-2, spaces + "  ");
    cout << spaces << "a" << " :: frame n = " << n << endl;
  }
  cout << spaces << "<--- Leaving the frame where n = " << n << endl;
}

int main() {
    printthis(3, "  ");
    cout << endl;

    return 0;
}