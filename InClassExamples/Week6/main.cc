#include<iostream>
#include<string>

#include "Node.h"

using namespace std;

int main() {
  string input = "";

  do {
    cout << "Name a shape (or type 'DONE'): ";
    cin >> input;
  } while (input != "DONE");

  return 0;
}
