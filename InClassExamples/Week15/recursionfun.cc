#include<iostream>
#include<string>

using namespace std;

void fun1(string substr, int n) {
	cout << "(1) In-Coming Frame: substr='" << substr << "'  n=" << n << endl;

	if (substr.size() > n) return;
	else fun1(substr+"-", n);

	cout << "(1) Out-Going Frame: substr='" << substr << "'  n=" << n << endl;
}


void fun2(string substr, int n) {
	cout << "(2) In-Coming Frame: substr='" << substr << "'  n=" << n << endl;

	if (substr.size() > n) return;
	else {
		fun2(substr+"-", n);
		cout << "(2)    inside" << endl;
		fun2("+"+substr, n);
	}

	cout << "(2) Out-Going Frame: substr='" << substr << "'  n=" << n << endl;
}



int main() {
	cout << endl << "Pattern 1: " << endl;
	fun1("@", 4);

	cout << endl << "Pattern 2: " << endl;
	fun2("!", 2);
	return 0;
}