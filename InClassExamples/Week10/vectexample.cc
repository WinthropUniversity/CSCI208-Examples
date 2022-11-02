#include "MiniVect.h"
#include "Cat.h"

#include<iostream>

using namespace std;

int main() {
  MiniVect mylist(2);

  for (int idx=0; idx<mylist.GetCapacity(); idx++) {
    string input;
    cout << "Enter a Cat's Name: ";
    cin >> input;

    mylist.SetValueAt(idx, new Cat(input));
  }

  for (int idx=0; idx<mylist.GetCapacity(); idx++)
    cout << "list[" << idx << "] = " << mylist.GetValueAt(idx)->Speak() << endl;    

  return 0;
}