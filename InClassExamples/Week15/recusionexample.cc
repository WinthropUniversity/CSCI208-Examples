#include<iostream>
#include<string>

using namespace std;

/*void PrintOtherInterestingThings(int depth) {
  cout << "Other Depth = " << depth << endl;
} */


void PrintInterestingThings(int depth) {
  cout << "Entered PrintInterestingThings ... Frame where depth=" << depth << endl;
  if (depth <= 0) {
    cout << "Hit the return where depth=0" << endl;
    return;
  }

  cout << "  Yay!  I'm inside the function!!  " << depth << endl;
  PrintInterestingThings(depth-1);

  cout << "Leaving PrintInterestingThings ... Frame where depth=" << depth << endl;
} 


int main() {
    int depth=0;

    cout << "How far shall I recurse? ";
    cin >> depth;

    PrintInterestingThings(depth); 


    return 0;
}