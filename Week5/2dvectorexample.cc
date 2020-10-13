#include <iostream>
#include <vector>

using namespace std;

int main() {
  int nrows=0;
  int ncols=0;

  cout << endl;

  cout << "Enter the number of rows:    ";
  cin >> nrows;

  cout << "Enter the number of columns: ";
  cin >> ncols;

  // Declare a vectors of vectors of int, and initialize
  // its sizes
  vector< vector<int> > matrix(nrows, vector<int>(ncols));

  // Mark the corners!
  matrix[0][0] = 1;
  matrix[nrows-1][ncols-1] = 1;

  cout << endl;

  // Displaying the integer matrix
  for (int idx = 0; idx < matrix.size(); idx++) {
    for (int jdx = 0; jdx < matrix[idx].size(); jdx++)
      cout << matrix[idx][jdx] << " ";
    cout << endl;
  }

  cout << endl;

  // Let the OS know everything is fine
  return 0;
}
