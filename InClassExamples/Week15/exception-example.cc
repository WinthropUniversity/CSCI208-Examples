#include<iostream>
#include<string>

using namespace std;


int seriesSum(int a, int b) {
  string errorMsg = "paramError";
  if ( (a<0) || (b<0) ) throw errorMsg;

  int total = 0.0;
  for (int idx=a; idx<=b; idx++)
    total += idx;
  return total;
}


int main() {
    try{
      //throw "Error!";
      cout << "First line of my program" << endl;
      cout << "Adding from -2 to 7: " << seriesSum(-2,7) << endl;
      throw 10;
      cout << "Second line of my program" << endl;
    }
    catch (int &errorNumber) {
      cerr << "Error!! The integer I caught was " << errorNumber << endl;
    }
    catch (string &errorMsg) {
      cerr << "Error!! " << errorMsg << endl;
    }

    cout << "Yay!! I made it to the end!" << endl;

    // This program rocks!
    return 0;
}