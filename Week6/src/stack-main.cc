#include<iostream>
#include<stack>  // for STL Stack
#include<string>
#include<simplestack.h> // For our Stack

using namespace std;

int main() {
  stack<string> stlstack;
  SimpleStack ourstack;
  string input;

  do {
    cin.clear();
    cout << endl << "Issue a command (push, pop, clear, showours, or quit): ";
    getline(cin, input);

    // Push data
    if (input == "push") {
      cout << "Type the string you want to push: " << endl;
      getline(cin,input);
      
      stlstack.push(input);
      ourstack.Push(input);
    }
    
    // Pop data
    else if (input == "pop") {
      string ourpop = ourstack.Pop();
      cout << "Popped Content(ours): " << ourpop << endl;
      
      string stlpop = stlstack.top();  // Seeing the top of the stack and popping
      stlstack.pop();                  // are different ops for the STL stack
      cout << "Popped Content(stl):  " << stlpop << endl;
    }

    // Display our stack
    else if (input == "showours")
      ourstack.PrintStack();
      
  } while (input != "quit");

  cout << endl;
      
  // Everything is okay
  return 0;
}
  
