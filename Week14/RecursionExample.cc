#include<iostream>
#include<string>

using namespace std;


// Implement n!:  n*(n-1)*(n-2) ... 1
int factorial(int n) {
  int retVal = 1;

  cout << "factorial: " << n << "(";
  if (n > 1)
    retVal = n * factorial(n-1);
  cout << "::" << retVal << " ) ";

  return retVal;
}

string CoolPaddingFunction(string prefix, int depth) {
  string retString = to_string(depth);

  if (depth > 0)
    retString = "." + retString + CoolPaddingFunction(retString, depth-1) + "\n";

  return retString;
}


// Example of how you might recurse a linked list recursively
//bool found(Node *current, string key) {
//  bool result = false;
//
//  if ( (current != NULL) && (current->GetKey() == key) )
//    result = true;
//  else if (current != NULL)
//    result = found(current->GetNext(), key);
//
//  return result;
//}


int main() {
  int n;

  cout << "Give me a number: ";
  cin >> n;

  cout << "n! = " << factorial(n) << endl;

  cout << "Here's a weird prefix buffering function: " << endl;
  cout << CoolPaddingFunction("FOO:", 4);

  // Program completed successfully
  return 0;
}
