#include<iostream>
#include<string>

using namespace std;

void recurse(string mystr, int n) {
	cout << "Recursing Down:  mystr=" << mystr << ",   n=" << n << endl;
	if (n>1) {
		recurse("e"+mystr,     n-1);
		recurse(    mystr+"i", n-1);
	}
	cout << "Returning Back:  mystr=" << mystr << ",   n=" << n << endl;
}

int main() {
	recurse("W", 3);
	return 0;
}