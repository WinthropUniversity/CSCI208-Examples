#include<iostream>
#include<string>

using namespace std;

int main() {
  int *ptr;
  string input = "Yes";

  do {
    ptr = new int;
    cout << "Address: " << ptr << endl;
    cout << "Another (Y/n)? ";
    cin >> input;
    delete ptr;
  } while ( input[0] == 'y' || input[0] == 'Y');

  cout << endl;
  return 0;
}

