#include<iostream>
#include<string>

using namespace std;

void recurse(int n, string substr) {
	if (n > 0) {
		recurse(n-1, substr + "n");
		recurse(n-1, "l" + substr);
		cout << "Frame: " << n << " Substring: " << substr << endl;
	}
}

int main() {
	int n = 0;
	cout << "Give me a number: ";
	cin >> n;

	recurse(n, "M");

	return 0;
}