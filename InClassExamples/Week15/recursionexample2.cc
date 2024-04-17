#include<iostream>
#include<string>

using namespace std;


void MoreInterestingRecursionExample(string buffer, int depth) {
  if (depth <= 0) {
    cout << buffer << endl;
    //cout << "Hit the bottom of the recursion stack!" << endl;
    return;
  }

//  cout << "String: " << buffer << endl;
  MoreInterestingRecursionExample(buffer+"X", depth-1);
  //cout << "String: " << buffer << endl;
  MoreInterestingRecursionExample("Y"+buffer, depth-1);
  //cout << "String: " << buffer << endl;
}


int main() {
    int depth=0;
    string buffer = "~";

    cout << "How far shall I recurse? ";
    cin >> depth;

    MoreInterestingRecursionExample(buffer, depth);

    return 0;
}