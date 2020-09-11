#include<iostream>
#include<vector>

using namespace std;

int main() {
  int input;
  vector<int> numberList;

  // Take input
  do {
    cout << "Input a number (-1 to quit): ";
    cin >> input;

    if (input >= 0) numberList.push_back(input);
  } while (input >= 0);

  cout << endl;
  cout << "You entered: " << endl;
  // Give Output
  vector<int>::iterator item;
  double total = 0.0;
  for (item=numberList.begin(); item!=numberList.end(); ++item) {
    cout << "  " << *item << endl;
    total += (*item);
  }
  cout << "The Average Is:  " << (double)total/(double)numberList.size() << endl;

  cerr << "This is outputted to the standard error stream, not standard output!" << endl;

  return 0;
}
