#include<iostream>
#include<fstream>
#include<string>
#include<exception>

using namespace std;

int main() {
  string filename;
  ifstream file;
  int linecount = 0;

  cout << "Give me a filename: ";
  cin >> filename;

  // Enables exception throwing for failbit errors
  // in the file object
  file.exceptions(ios_base::failbit);

  try {
    file.open(filename);
    while (!file.eof()) {
        string word;
        file >> word;
        cout << linecount++ << ": " << word << endl;
    }
    file.close();  

    int *ptr = nullptr;
    *ptr = 4;
  }
  catch (ios_base::failure &e) {
    cerr << "There was the following file-related error: " << e.what() << endl;
    cerr << "I cannot continue." << endl;
  }
  catch (exception &e) {
    cerr << "There was the following generic error: " << e.what() << endl;
    cerr << "I cannot continue." << endl;
  }

  cout << "This is the end!! (Don't be so dramatic.)" << endl;

  return 0;
}