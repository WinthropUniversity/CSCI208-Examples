#include<iostream>

using namespace std;

int main() {
  int  count = 10;
  int* countptr = NULL;

  cout << "1 count  = " << count << endl;
  cout << "2 &count = " << &count << endl;
  cout << "3 countptr = " << countptr << endl;
  cout << "4 &countptr = " << &countptr << endl;

  countptr = &count;
  cout << "5 countptr = " << countptr << endl;

  delete countptr;
  cout << "6 countptr = " << countptr << endl;
  
  (*countptr) = 100;
  cout << "7 count  = " << count << endl;

  return 0;
}
