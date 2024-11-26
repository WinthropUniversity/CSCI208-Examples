#include<iostream>
#include<string>

using namespace std;

int factorial(int n) {
    if (n <= 0) throw string("Non-positive number given");

    int total = 1.0;
    while(n > 0) {
        total *= n;
        n--;
    }
    return total;
}

int main() {
    int n = 0;

    try {
      cout << "Factorial of what? ";
      cin >> n;
      cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    } catch (string &e) {
      cerr << "ERROR:  Could not compute!! Message='" << e << "'." << endl;
    }

    cout << "The program ended peacefully." << endl;

    return 0;
}